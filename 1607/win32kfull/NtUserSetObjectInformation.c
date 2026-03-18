/*
 * XREFs of NtUserSetObjectInformation @ 0x1C021A180
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _SetUserObjectInformation @ 0x1C01CBD2C (_SetUserObjectInformation.c)
 */

__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+48h] [rbp-20h] BYREF

  v4 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  if ( a2 == 7 )
  {
    v9 = 0;
  }
  else
  {
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
        UserSetLastError(8LL);
      }
    }
    else
    {
      v9 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v9;
}
