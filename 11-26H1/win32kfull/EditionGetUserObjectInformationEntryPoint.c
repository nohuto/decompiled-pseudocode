/*
 * XREFs of EditionGetUserObjectInformationEntryPoint @ 0x14005A550
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetUserObjectInformation @ 0x14005A700 (_GetUserObjectInformation.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall EditionGetUserObjectInformationEntryPoint(
        HANDLE Handle,
        int a2,
        volatile void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  ULONG v9; // r8d
  unsigned int ULongFromUser; // eax
  unsigned int UserObjectInformation; // ebx
  PVOID v12; // rcx
  __int64 v14[5]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  _BYTE v16[8]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp-10h]

  LODWORD(v14[0]) = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  v9 = 4;
  if ( a2 != 1 )
    v9 = 2;
  ProbeForWrite(a3, a4, v9);
  if ( a5 )
  {
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v14);
    SetHandleFlag(Handle, 2LL);
    if ( a5 )
      *a5 = v14[0];
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8);
  }
  v12 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v16[0] )
    --*(_DWORD *)(v17 + 28);
  UserSessionSwitchLeaveCrit(v12);
  return UserObjectInformation;
}
