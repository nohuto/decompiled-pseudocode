/*
 * XREFs of KiResortScbQueue @ 0x1400C3AB8
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400C3468 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400C37A4 (KiRemoveThreadFromScbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1400C398C (KiInsertNonMaxOverQuotaScb.c)
 *     KiComputeGroupSchedulingRank @ 0x1400C3C94 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400C4120 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x1400C3838 (KiRemoveSchedulingGroupQueue.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400C39E4 (KiInsertSchedulingGroupQueue.c)
 */

char __fastcall KiResortScbQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  unsigned __int64 *i; // rax
  unsigned __int64 v6; // rcx
  __int64 j; // rcx
  unsigned __int64 v8; // r8
  __int64 k; // r8
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  int v12; // edx
  int v13; // edx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  int v16; // r8d

  i = (unsigned __int64 *)(a2 + 88);
  if ( !a3 )
  {
    v6 = *i;
    if ( *i )
    {
      for ( i = *(unsigned __int64 **)(v6 + 8); i; i = (unsigned __int64 *)i[1] )
        v6 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)(v6 + 8) == i )
          break;
        i = (unsigned __int64 *)v6;
      }
    }
    if ( !v6 )
      return (char)i;
    v13 = *(_DWORD *)(a2 + 116);
    LODWORD(i) = v13 - *(_DWORD *)(v6 + 28);
    if ( v13 != *(_DWORD *)(v6 + 28) )
      goto LABEL_27;
    v14 = *(_WORD *)(a2 + 114);
    if ( v14 )
    {
      v15 = *(_WORD *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v16, v14);
      LODWORD(i) = 0;
      if ( v15 )
        _BitScanReverse((unsigned int *)&i, v15);
      LODWORD(i) = (_DWORD)i - v16;
LABEL_27:
      if ( (int)i >= 0 )
        return (char)i;
      goto LABEL_28;
    }
    if ( v13 )
    {
      LODWORD(i) = 1;
      goto LABEL_27;
    }
    i = *(unsigned __int64 **)(v6 - 88);
    if ( *(_QWORD *)a2 > (unsigned __int64)i )
      return (char)i;
LABEL_28:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    LOBYTE(i) = KiInsertSchedulingGroupQueue(a1, a2, 0);
    return (char)i;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    for ( i = *(unsigned __int64 **)v8; i; i = (unsigned __int64 *)*i )
      v8 = (unsigned __int64)i;
  }
  else
  {
    for ( k = *(_QWORD *)(a2 + 104); ; k = *(_QWORD *)(v8 + 16) )
    {
      v8 = k & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(unsigned __int64 **)v8 == i )
        break;
      i = (unsigned __int64 *)v8;
    }
  }
  if ( v8 )
  {
    LODWORD(i) = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28);
    if ( !(_DWORD)i )
    {
      v10 = *(_WORD *)(a2 + 114);
      if ( v10 )
      {
        v11 = *(_WORD *)(v8 + 26);
        _BitScanReverse((unsigned int *)&v12, v10);
        LODWORD(i) = 0;
        if ( v11 )
          _BitScanReverse((unsigned int *)&i, v11);
        LODWORD(i) = (_DWORD)i - v12;
      }
      else
      {
        if ( !*(_DWORD *)(a2 + 116) )
        {
          i = *(unsigned __int64 **)(v8 - 88);
          if ( *(_QWORD *)a2 <= (unsigned __int64)i )
            return (char)i;
          goto LABEL_28;
        }
        LODWORD(i) = 1;
      }
    }
    if ( (int)i <= 0 )
      return (char)i;
    goto LABEL_28;
  }
  return (char)i;
}
