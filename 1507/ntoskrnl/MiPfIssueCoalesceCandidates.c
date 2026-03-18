/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x1402190FC
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x14012471C (MiPfCoalesceAndIssueIOs.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140085C00 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1402191FC (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rax
  __int64 **v7; // rax
  _QWORD *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 **v11; // rax
  _QWORD *v13; // rcx

  v3 = *a1;
  if ( (__int64 **)**a1 == a1 )
  {
    v6 = *v3;
    if ( (__int64 **)v3[1] != a1 || *(__int64 **)(v6 + 8) != v3 )
      __fastfail(3u);
    *a1 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = a1;
    MiIssueHardFaultIo((__int64)v3, 0, 0LL);
    v7 = *(__int64 ***)(a3 + 8);
    *v3 = a3;
    v3[1] = (__int64)v7;
    if ( *v7 != (__int64 *)a3 )
      __fastfail(3u);
    *v7 = v3;
    *(_QWORD *)(a3 + 8) = v3;
    return 0LL;
  }
  v8 = (_QWORD *)MiPfIssueCoalescedSupport();
  if ( v8 )
  {
    v13 = *(_QWORD **)(a3 + 8);
    *v8 = a3;
    v8[1] = v13;
    if ( *v13 != a3 )
      __fastfail(3u);
    *v13 = v8;
    *(_QWORD *)(a3 + 8) = v8;
    return 0LL;
  }
  while ( 1 )
  {
    v9 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v10 = *v9;
    if ( (__int64 **)v9[1] != a1 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *a1 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = a1;
    MiIssueHardFaultIo((__int64)v9, 0, 0LL);
    v11 = *(__int64 ***)(a3 + 8);
    *v9 = a3;
    v9[1] = (__int64)v11;
    if ( *v11 != (__int64 *)a3 )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(a3 + 8) = v9;
  }
  return 3221225626LL;
}
