/*
 * XREFs of KiRemoveBoostThread @ 0x1400CD250
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeWakeWaitChain @ 0x1400A4264 (KeWakeWaitChain.c)
 *     KeGenericProcessorCallback @ 0x1400C85B4 (KeGenericProcessorCallback.c)
 *     KiCompleteDirectSwitchThread @ 0x1400CD1D4 (KiCompleteDirectSwitchThread.c)
 *     KeRemovePriorityBoost @ 0x1401D2B3C (KeRemovePriorityBoost.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  unsigned __int64 *v5; // r8
  char v6; // bp
  char v7; // cl
  char v8; // al
  char EffectivePriorityThread; // si
  unsigned int v10; // eax
  char v11; // r14
  unsigned __int64 *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char result; // al
  struct _SINGLE_LIST_ENTRY *v15; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  int v17; // edx
  int v18; // [rsp+58h] [rbp+10h] BYREF
  int v19; // [rsp+60h] [rbp+18h] BYREF
  int v20; // [rsp+68h] [rbp+20h]

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( *(_QWORD *)(a2 + 64) );
  }
  v4 = *(_BYTE *)(a2 + 564);
  v5 = (unsigned __int64 *)*(unsigned __int8 *)(a2 + 195);
  v6 = *(_BYTE *)(a2 + 195);
  v7 = v4 & 0xF;
  if ( (v4 & 0xF) != 0 )
    v6 -= v7;
  v8 = v4 >> 4;
  if ( v8 )
  {
    *(_BYTE *)(a2 + 564) = v7;
    EffectivePriorityThread = (_BYTE)v5 - v8;
    v10 = *(_DWORD *)(a2 + 1408);
    if ( v10 )
    {
      _BitScanReverse((unsigned int *)&v17, v10);
      if ( EffectivePriorityThread < v17 )
        EffectivePriorityThread = v17;
      v20 = v17;
    }
    if ( EffectivePriorityThread != (_BYTE)v5 )
    {
      v11 = 0;
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v5) = 1;
        v12 = KiSelectReadyThreadEx((struct _KPRCB *)a1, (_KTHREAD *)a2, v5);
        if ( v12 )
          KiUpdateThreadState(a1, (__int64)v12, 3, 1);
        else
          v11 = 1;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( EffectivePriorityThread > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v15 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
          if ( *(_QWORD *)(a2 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-25784LL )
            {
              v15->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v15;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
              KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = EffectivePriorityThread;
      if ( v11 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
          EffectivePriorityThread = KiQueryEffectivePriorityThread(a2, a1);
        **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    }
  }
  else
  {
    ++v6;
  }
  result = v6;
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
