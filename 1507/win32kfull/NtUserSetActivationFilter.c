/*
 * XREFs of NtUserSetActivationFilter @ 0x1C0009000
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C00090B4 (_SetActivationFilter.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v9 = 5LL;
    goto LABEL_8;
  }
  v5 = ValidateHwnd(a1);
  if ( !v5 || *(_QWORD *)(v5 + 16) != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 280LL) )
  {
    v9 = 87LL;
LABEL_8:
    UserSetLastError(v9);
    goto LABEL_5;
  }
  v4 = SetActivationFilter(v5, a2);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
