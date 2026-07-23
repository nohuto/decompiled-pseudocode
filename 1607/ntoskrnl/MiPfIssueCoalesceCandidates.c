/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x140125734
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x1400A8D54 (MiPfCoalesceAndIssueIOs.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140023324 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140125790 (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v9; // rax
  __int64 **v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 **v13; // rax

  v3 = *a1;
  if ( (__int64 **)**a1 == a1 )
  {
    v9 = *v3;
    if ( (__int64 **)v3[1] != a1 || *(__int64 **)(v9 + 8) != v3 )
      __fastfail(3u);
    *a1 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = a1;
    MiIssueHardFaultIo((__int64)v3, 0, 0LL);
    v10 = *(__int64 ***)(a3 + 8);
    if ( *v10 != (__int64 *)a3 )
      __fastfail(3u);
    *v3 = a3;
    v3[1] = (__int64)v10;
    *v10 = v3;
    *(_QWORD *)(a3 + 8) = v3;
    return 0LL;
  }
  v6 = (_QWORD *)MiPfIssueCoalescedSupport();
  if ( v6 )
  {
    v7 = *(_QWORD **)(a3 + 8);
    if ( *v7 != a3 )
      __fastfail(3u);
    *v6 = a3;
    v6[1] = v7;
    *v7 = v6;
    *(_QWORD *)(a3 + 8) = v6;
    return 0LL;
  }
  while ( 1 )
  {
    v11 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v12 = *v11;
    if ( (__int64 **)v11[1] != a1 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *a1 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = a1;
    MiIssueHardFaultIo((__int64)v11, 0, 0LL);
    v13 = *(__int64 ***)(a3 + 8);
    if ( *v13 != (__int64 *)a3 )
      __fastfail(3u);
    *v11 = a3;
    v11[1] = (__int64)v13;
    *v13 = v11;
    *(_QWORD *)(a3 + 8) = v11;
  }
  return 3221225626LL;
}
