/*
 * XREFs of MiPfCoalesceAndIssueIOs @ 0x14012471C
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x140086168 (MiPfCompletePrefetchIos.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140085C00 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalesceCandidates @ 0x1402190FC (MiPfIssueCoalesceCandidates.c)
 */

__int64 __fastcall MiPfCoalesceAndIssueIOs(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // edi
  __int64 *v11; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 **v24; // rax
  _QWORD *v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-8h]

  v3 = 0;
  v26 = (__int64 *)&v25;
  v4 = 0LL;
  v25 = &v25;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *a1;
    if ( (__int64 *)*a1 == a1 )
      break;
    v13 = *(_DWORD *)(v9 + 180);
    if ( v13 < 0x100000 )
    {
      if ( v25 == &v25 )
      {
        if ( a3 && *a3 < 0x100000uLL )
          goto LABEL_4;
        v4 = *(_QWORD *)(v9 + 96);
        v8 = *(_QWORD *)(v9 + 192);
      }
LABEL_20:
      v17 = *(_QWORD *)(v9 + 96);
      if ( v4 <= v17
        && v8 == *(_QWORD *)(v9 + 192)
        && (v18 = v17 - v4, v19 = v13 + v18, v18 <= 0x20000)
        && v19 + v3 <= 0x100000 )
      {
        v20 = *(_QWORD *)v9;
        v21 = *(_QWORD **)(v9 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v21 != v9 )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        v22 = v26;
        *(_QWORD *)v9 = &v25;
        *(_QWORD *)(v9 + 8) = v22;
        if ( (_QWORD **)*v22 != &v25 )
          __fastfail(3u);
        v3 += v19;
        *v22 = v9;
        v4 += v19;
        v26 = (__int64 *)v9;
        if ( a3 )
          *a3 -= *(unsigned int *)(v9 + 180);
      }
      else
      {
        v10 = MiPfIssueCoalesceCandidates(&v25, v3, a2);
        if ( v10 < 0 )
          goto LABEL_5;
        v3 = 0;
      }
    }
    else
    {
      if ( v25 != &v25 )
        goto LABEL_20;
      v14 = *(_QWORD *)v9;
      v15 = *(_QWORD **)(v9 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v15 != v9 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      if ( a3 )
        *a3 -= *(unsigned int *)(v9 + 180);
      MiIssueHardFaultIo(v9, 0, 0LL);
      v16 = *(__int64 **)(a2 + 8);
      *(_QWORD *)v9 = a2;
      *(_QWORD *)(v9 + 8) = v16;
      if ( *v16 != a2 )
        __fastfail(3u);
      *v16 = v9;
      *(_QWORD *)(a2 + 8) = v9;
    }
  }
  if ( v25 == &v25 || (v10 = MiPfIssueCoalesceCandidates(&v25, v3, a2), v10 >= 0) )
LABEL_4:
    v10 = 0;
LABEL_5:
  if ( !a3 )
  {
    while ( 1 )
    {
      v11 = (__int64 *)*a1;
      if ( (__int64 *)*a1 == a1 )
        break;
      v23 = *v11;
      if ( (__int64 *)v11[1] != a1 || *(__int64 **)(v23 + 8) != v11 )
        __fastfail(3u);
      *a1 = v23;
      *(_QWORD *)(v23 + 8) = a1;
      MiIssueHardFaultIo((__int64)v11, 0, 0LL);
      v24 = *(__int64 ***)(a2 + 8);
      *v11 = a2;
      v11[1] = (__int64)v24;
      if ( *v24 != (__int64 *)a2 )
        __fastfail(3u);
      *v24 = v11;
      *(_QWORD *)(a2 + 8) = v11;
    }
  }
  return (unsigned int)v10;
}
