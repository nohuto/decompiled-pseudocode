/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x1400A50A8
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140098C78 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140098EDC (KiResortScbQueue.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A53EC (KiCheckForEffectivePriorityChange.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400D19F0 (KiMoveScbThreadsToNewReadylist.c)
 */

__int64 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  char v10; // cl
  int v11; // eax
  unsigned int v13; // eax
  char v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r9
  int v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v19 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v8 = KiProcessorBlock[v7];
      v9 = 424LL * (unsigned int)v7 + a1 + 128;
      if ( v8 )
      {
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v18);
          while ( *(_QWORD *)(v8 + 48) );
        }
      }
      if ( a2 )
        break;
      v13 = *(unsigned __int8 *)(v9 + 112);
      *(_BYTE *)(v9 + 112) = v13 & 0xF7;
      *(_DWORD *)(v9 + 116) -= (v13 >> 3) & 1;
      if ( *(_DWORD *)(v9 + 116) )
      {
        if ( (v13 & 1) != 0 )
        {
          v14 = 0;
          goto LABEL_20;
        }
LABEL_7:
        if ( v8 )
        {
          KiCheckForEffectivePriorityChange(v8, v9);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
        }
        goto LABEL_9;
      }
      if ( v8 )
      {
        if ( (v13 & 1) != 0 )
        {
          v15 = 424LL * (unsigned int)v7 + a1 + 128;
          do
          {
            v16 = *(_QWORD *)(v15 + 408);
            if ( !v16 )
              break;
            v15 = *(_QWORD *)(v15 + 408);
          }
          while ( !*(_DWORD *)(v16 + 116) );
          if ( *(_DWORD *)(v15 + 116) )
          {
            v17 = 0LL;
          }
          else
          {
            v17 = &v19;
            v15 = 0LL;
          }
          KiMoveScbThreadsToNewReadylist(v9, v15, 0LL, v17);
          if ( !*(_QWORD *)(v9 + 392) )
            KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)v8, v9, 1);
        }
        *(_BYTE *)(v9 + 112) &= ~4u;
        goto LABEL_7;
      }
LABEL_9:
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= KeMaximumProcessors )
        goto LABEL_10;
    }
    v10 = *(_BYTE *)(v9 + 112) | 0xC;
    v11 = ((unsigned __int8)(*(_BYTE *)(v9 + 112) | 8) >> 3) & 1;
    *(_BYTE *)(v9 + 112) = v10;
    *(_DWORD *)(v9 + 116) += v11;
    if ( (v10 & 1) != 0 )
    {
      v14 = 1;
LABEL_20:
      KiResortScbQueue((_RTL_RB_TREE *)v8, v9, v14);
    }
    goto LABEL_7;
  }
LABEL_10:
  LOBYTE(a3) = CurrentIrql;
  return KiProcessDeferredReadyList(CurrentPrcb, &v19, a3);
}
