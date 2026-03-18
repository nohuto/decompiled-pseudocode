/*
 * XREFs of NtUserCallOneParam @ 0x1C0101740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = a2;
  if ( a2 != 65 )
  {
    EnterCrit(1LL);
    if ( (unsigned int)(v2 - 39) <= 0x2A )
    {
      _mm_lfence();
      v6 = (_QWORD *)((__int64 (__fastcall *)(__int64))apfnSimpleCall[v2])(a1);
      v7 = v6;
      if ( (unsigned int)v2 >= 0x2A )
      {
LABEL_4:
        UserSessionSwitchLeaveCrit(v5, v4);
        return (__int64)v7;
      }
      if ( v6 )
      {
        v7 = (_QWORD *)*v6;
        goto LABEL_4;
      }
    }
    v7 = 0LL;
    goto LABEL_4;
  }
  EnterSharedCrit(1LL);
  _mm_lfence();
  v9 = ReleaseDC_0(a1);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v9;
}
