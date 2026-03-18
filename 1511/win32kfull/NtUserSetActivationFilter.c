/*
 * XREFs of NtUserSetActivationFilter @ 0x1C000BC60
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C000BD04 (_SetActivationFilter.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     IsIAMThread @ 0x1C00D5B48 (IsIAMThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v10 = 5LL;
    goto LABEL_8;
  }
  v5 = ValidateHwnd(a1);
  if ( !v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16)) )
  {
    v10 = 87LL;
LABEL_8:
    UserSetLastError(v10);
    goto LABEL_5;
  }
  v4 = SetActivationFilter(v6, a2);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}
