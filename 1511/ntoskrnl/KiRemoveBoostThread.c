/*
 * XREFs of KiRemoveBoostThread @ 0x14007CF40
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x1400CFA54 (KeWakeWaitChain.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 *     KiCompleteDirectSwitchThread @ 0x1401C9674 (KiCompleteDirectSwitchThread.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 v5; // al
  __int64 v6; // r8
  char v7; // bp
  char v8; // cl
  char v9; // al
  char EffectivePriorityThread; // si
  unsigned int v11; // eax
  char v12; // r14
  _BYTE *ready; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v15; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char result; // al
  int v18; // [rsp+58h] [rbp+10h] BYREF
  int v19; // [rsp+60h] [rbp+18h] BYREF
  int v20; // [rsp+68h] [rbp+20h]

  v3 = a2;
  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v18, a2, a3);
    while ( *(_QWORD *)(v3 + 64) );
  }
  v5 = *(_BYTE *)(v3 + 564);
  v6 = *(unsigned __int8 *)(v3 + 195);
  v7 = *(_BYTE *)(v3 + 195);
  v8 = v5 & 0xF;
  if ( (v5 & 0xF) != 0 )
    v7 -= v8;
  v9 = v5 >> 4;
  if ( v9 )
  {
    *(_BYTE *)(v3 + 564) = v8;
    EffectivePriorityThread = v6 - v9;
    v11 = *(_DWORD *)(v3 + 1408);
    if ( v11 )
    {
      _BitScanReverse((unsigned int *)&a2, v11);
      if ( EffectivePriorityThread < (int)a2 )
        EffectivePriorityThread = a2;
      v20 = a2;
    }
    if ( EffectivePriorityThread != (_BYTE)v6 )
    {
      v12 = 0;
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v19, a2, v6);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        ready = (_BYTE *)KiSelectReadyThreadEx((struct _KPRCB *)a1, v3, 1);
        if ( ready )
          KiUpdateThreadState(a1, ready, 3, 1);
        else
          v12 = 1;
      }
      if ( KiAbEnabled )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( EffectivePriorityThread > *(char *)(v3 + 195) )
        {
          if ( *(_BYTE *)(v3 + 793) )
          {
            v15 = (struct _SINGLE_LIST_ENTRY *)(v3 + 1376);
            if ( *(_QWORD *)(v3 + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
              if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
              {
                v15->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = v15;
                _InterlockedIncrement16((volatile signed __int16 *)(v3 + 1416));
                KiAbQueueAutoBoostDpc(CurrentPrcb);
              }
            }
          }
        }
      }
      *(_BYTE *)(v3 + 195) = EffectivePriorityThread;
      if ( v12 )
      {
        if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
          EffectivePriorityThread = KiQueryEffectivePriorityThread(v3, a1);
        **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    }
  }
  else
  {
    ++v7;
  }
  result = v7;
  *(_QWORD *)(v3 + 64) = 0LL;
  return result;
}
