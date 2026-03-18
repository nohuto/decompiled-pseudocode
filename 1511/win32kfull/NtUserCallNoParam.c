/*
 * XREFs of NtUserCallNoParam @ 0x1C00C59A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall NtUserCallNoParam(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi

  v1 = a1;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)v1 >= 0x27 )
    goto LABEL_6;
  _mm_lfence();
  v4 = (_QWORD *)apfnSimpleCall[v1]();
  v5 = v4;
  if ( (unsigned int)v1 < 2 )
  {
    if ( v4 )
    {
      v5 = (_QWORD *)*v4;
      goto LABEL_3;
    }
LABEL_6:
    v5 = 0LL;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v3, v2);
  return v5;
}
