/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x14025C260
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, __int64 a2, volatile void *a3)
{
  void *v6; // r14
  int v7; // edi
  __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int ULongFromUser; // eax
  unsigned int v11; // r12d
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v15[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  __int64 v17; // [rsp+A0h] [rbp+8h] BYREF
  volatile void *Address; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v19; // [rsp+B8h] [rbp+20h] BYREF

  Address = a3;
  v6 = 0LL;
  v17 = 0LL;
  v7 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v19, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  if ( !a1 || !a2 )
  {
    v7 = 0;
    UserSetLastError(87);
    goto LABEL_24;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v17, 0LL) )
  {
    v7 = 0;
    UserSetLastError(6);
    goto LABEL_21;
  }
  v9 = *(_DWORD *)(v17 + 392);
  if ( !a3 )
  {
    RtlWriteULongToUser(a2, v9);
    goto LABEL_21;
  }
  ULongFromUser = RtlReadULongFromUser(a2);
  if ( ULongFromUser < v9 )
  {
    RtlWriteULongToUser(a2, v9);
    v7 = 0;
    UserSetLastError(122);
    goto LABEL_21;
  }
  v11 = ULongFromUser - *(_DWORD *)(v17 + 1052);
  v12 = 28LL * ULongFromUser;
  v19 = v12;
  if ( v12 <= 0xFFFFFFFF && v11 )
  {
    if ( (unsigned int)v12 >= 0x2710000 )
    {
LABEL_12:
      v7 = 0;
      UserSetLastError(8);
      goto LABEL_21;
    }
    ProbeForWrite(Address, 28 * v9, 8u);
    if ( 28 * v9 - 1 > 0x270FFFF )
    {
      v7 = 0;
      UserSetLastError(1359);
      goto LABEL_21;
    }
    v13 = Win32AllocPoolZInit(28 * v9, 1668313941LL);
    v6 = (void *)v13;
    if ( !v13 )
      goto LABEL_12;
    v7 = RIMGetPointerDeviceProperties(v17, v9, v13, v11);
    if ( v7 )
    {
      RtlCopyVolatileMemory((void *)Address, v6, 28 * v9);
      RtlWriteULongToUser(a2, v9);
      goto LABEL_21;
    }
  }
  v7 = 0;
  UserSetLastError(87);
LABEL_21:
  if ( v6 )
    Win32FreePool(v6);
LABEL_24:
  if ( v15[0] )
    --*(_DWORD *)(v16 + 28);
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
