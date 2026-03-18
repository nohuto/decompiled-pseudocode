/*
 * XREFs of KiExitThreadWait @ 0x1400A23E0
 * Callers:
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14010BF10 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x14011ECE8 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall KiExitThreadWait(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v3; // bl
  char v5; // al
  unsigned int v6; // esi
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a2 + 390);
  v5 = *(_BYTE *)(a2 + 112);
  if ( (v5 & 0x38) != 0 )
  {
    if ( (v5 & 0x18) != 0 )
    {
      if ( (v5 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      v6 = 0;
      v7 = 0LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        KiSelectNextThread(a1, &v7);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiProcessDeferredReadyList(a1, &v7, v3);
    }
    else
    {
      KiCheckForThreadDispatch(a1, 1u);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(0LL);
    }
  }
  else if ( a3 )
  {
    KiCheckForThreadDispatch(a1, v3);
  }
  else
  {
    __writecr8(v3);
  }
}
