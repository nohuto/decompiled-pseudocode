/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x1400C4120
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400C3838 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400C3AB8 (KiResortScbQueue.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400C44B0 (KiCheckForEffectivePriorityChange.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1401432F4 (KiMoveScbThreadsToNewReadylist.c)
 */

__int64 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r15
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
  v3 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v8 = KiProcessorBlock[v7];
      v9 = 408LL * (unsigned int)v7 + a1 + 128;
      if ( v8 )
      {
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v18, a2, a3);
          while ( *(_QWORD *)(v8 + 48) );
        }
      }
      if ( v3 )
        break;
      v13 = *(unsigned __int8 *)(v9 + 112);
      *(_BYTE *)(v9 + 112) = v13 & 0xF7;
      *(_DWORD *)(v9 + 116) -= (v13 >> 3) & 1;
      if ( *(_DWORD *)(v9 + 116) )
      {
        if ( (v13 & 1) != 0 )
        {
          v14 = 0;
          goto LABEL_17;
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
          v15 = 408LL * (unsigned int)v7 + a1 + 128;
          do
          {
            v16 = *(_QWORD *)(v15 + 392);
            if ( !v16 )
              break;
            v15 = *(_QWORD *)(v15 + 392);
          }
          while ( !*(_DWORD *)(v16 + 116) );
          if ( *(_QWORD *)(v15 + 392) )
          {
            v17 = 0LL;
          }
          else
          {
            v17 = &v19;
            v15 = 0LL;
          }
          KiMoveScbThreadsToNewReadylist(v9, v15, 0LL, v17);
          if ( !*(_QWORD *)(v9 + 376) )
            KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)v8, v9, 1);
        }
        *(_BYTE *)(v9 + 112) &= ~4u;
        goto LABEL_7;
      }
LABEL_9:
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= KeMaximumProcessors )
        return KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v19, CurrentIrql);
    }
    v10 = *(_BYTE *)(v9 + 112) | 0xC;
    v11 = ((unsigned __int8)(*(_BYTE *)(v9 + 112) | 8) >> 3) & 1;
    *(_BYTE *)(v9 + 112) = v10;
    *(_DWORD *)(v9 + 116) += v11;
    if ( (v10 & 1) != 0 )
    {
      v14 = 1;
LABEL_17:
      KiResortScbQueue((_RTL_RB_TREE *)v8, v9, v14);
    }
    goto LABEL_7;
  }
  return KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v19, CurrentIrql);
}
