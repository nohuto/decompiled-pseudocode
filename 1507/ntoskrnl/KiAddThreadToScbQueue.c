/*
 * XREFs of KiAddThreadToScbQueue @ 0x1400EDC94
 * Callers:
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiAddThreadToReadyQueue @ 0x1400ED780 (KiAddThreadToReadyQueue.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400ED9BC (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 */

char __fastcall KiAddThreadToScbQueue(_RTL_RB_TREE *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rbx
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 i; // rax
  __int64 **v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 j; // rcx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rax
  _RTL_RB_TREE *v20; // rax

  v4 = *(char *)(a3 + 195);
  v5 = a2;
  if ( !*(_DWORD *)(a2 + 116) )
  {
    do
    {
      v12 = *(_QWORD *)(v5 + 392);
      if ( !v12 )
        break;
      v5 = *(_QWORD *)(v5 + 392);
    }
    while ( !*(_DWORD *)(v12 + 116) );
  }
  v7 = (__int64 *)(a3 + 216);
  v8 = (__int64 *)(v5 + 16LL * v4 + 120);
  if ( a4 )
  {
    v9 = *v8;
    *v7 = *v8;
    *(_QWORD *)(a3 + 224) = v8;
    if ( *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v7;
    *v8 = (__int64)v7;
  }
  else
  {
    v11 = (__int64 **)v8[1];
    *v7 = (__int64)v8;
    *(_QWORD *)(a3 + 224) = v11;
    if ( *v11 != v8 )
      __fastfail(3u);
    *v11 = v7;
    v8[1] = (__int64)v7;
  }
  *(_DWORD *)(a3 + 116) |= 0x2000u;
  *(_QWORD *)(a3 + 1488) = v5;
  *(_WORD *)(v5 + 114) |= 1 << v4;
  do
  {
    LOBYTE(i) = *(_BYTE *)(v5 + 112);
    if ( (i & 2) != 0 )
      break;
    if ( (i & 1) != 0 )
    {
      i = v5 + 88;
      v13 = *(_QWORD *)(v5 + 88);
      if ( v13 )
      {
        for ( i = *(_QWORD *)(v13 + 8); i; i = *(_QWORD *)(i + 8) )
          v13 = i;
      }
      else
      {
        for ( j = *(_QWORD *)(v5 + 104); ; j = *(_QWORD *)(v13 + 16) )
        {
          v13 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v13 || *(_QWORD *)(v13 + 8) == i )
            break;
          i = v13;
        }
      }
      if ( !v13 )
        goto LABEL_10;
      LODWORD(i) = *(_DWORD *)(v5 + 116) - *(_DWORD *)(v13 + 28);
      if ( (_DWORD)i )
        goto LABEL_39;
      v15 = *(_WORD *)(v5 + 114);
      if ( v15 )
      {
        v16 = *(_WORD *)(v13 + 26);
        _BitScanReverse((unsigned int *)&a3, v15);
        LODWORD(i) = 0;
        if ( v16 )
          _BitScanReverse((unsigned int *)&i, v16);
        LODWORD(i) = i - a3;
        goto LABEL_39;
      }
      if ( *(_DWORD *)(v5 + 116) )
      {
        LODWORD(i) = 1;
LABEL_39:
        if ( (i & 0x80000000) == 0LL )
          goto LABEL_10;
      }
      else
      {
        i = *(_QWORD *)(v13 - 88);
        if ( *(_QWORD *)v5 > i )
          goto LABEL_10;
      }
      v17 = v5;
      do
      {
        v18 = (__int64 *)(v17 + 392);
        v19 = *(_QWORD *)(v17 + 392);
        if ( v19 )
          v20 = (_RTL_RB_TREE *)(v19 + 376);
        else
          v20 = a1 + 1423;
        *(_BYTE *)(v17 + 112) &= ~1u;
        RtlRbRemoveNode(v20, (PRTL_BALANCED_NODE)(v17 + 88));
        v17 = *v18;
      }
      while ( *v18 && (*(_BYTE *)(v17 + 112) & 1) != 0 && !*(_QWORD *)(v17 + 376) && !*(_WORD *)(v17 + 114) );
      a3 = 0LL;
      goto LABEL_9;
    }
    LOBYTE(a3) = 1;
LABEL_9:
    LOBYTE(i) = KiInsertSchedulingGroupQueue(a1, v5, a3);
LABEL_10:
    v5 = *(_QWORD *)(v5 + 392);
  }
  while ( v5 );
  return i;
}
