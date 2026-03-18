/*
 * XREFs of NtUserCallOneParam @ 0x1C00C5A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v3 = a2;
  if ( a2 != 65 )
  {
    EnterCrit(0LL, 1LL);
    if ( (unsigned int)(v3 - 39) <= 0x2A )
    {
      _mm_lfence();
      v6 = (_QWORD *)((__int64 (__fastcall *)(__int64))apfnSimpleCall[v3])(a1);
      v7 = v6;
      if ( (unsigned int)v3 >= 0x2A )
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
  EnterSharedCrit(0LL, 1LL);
  _mm_lfence();
  v9 = ReleaseDC_0(a1);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v9;
}
