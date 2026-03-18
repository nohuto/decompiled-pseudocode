/*
 * XREFs of NtUserCallHwndOpt @ 0x1C0142C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwndOpt(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v4 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_5;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (unsigned int)(v3 - 89) <= 1 )
    v4 = ((__int64 (__fastcall *)(__int64))apfnSimpleCall[v3])(v5);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
