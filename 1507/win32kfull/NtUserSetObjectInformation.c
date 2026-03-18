/*
 * XREFs of NtUserSetObjectInformation @ 0x1C0220590
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetUserObjectInformation @ 0x1C01D2024 (_SetUserObjectInformation.c)
 */

__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+48h] [rbp-20h] BYREF

  v4 = a4;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  if ( (_DWORD)v4 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v8) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a3 + v4 > W32UserProbeAddress || a3 + v4 < a3 )
      *W32UserProbeAddress = 0;
  }
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
    {
      v9 = SetUserObjectInformation(Handle, a2, (_DWORD *)a3, v4);
      SetHandleFlag(Handle, 2LL, 0LL);
    }
    else
    {
      v9 = 0;
      UserSetLastError(8);
    }
  }
  else
  {
    v9 = 0;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v9;
}
