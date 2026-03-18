/*
 * XREFs of KiInSwapSingleProcess @ 0x14010C694
 * Callers:
 *     KeReadyThread @ 0x14000FB8C (KeReadyThread.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x14010C4D0 (KiAttachProcess.c)
 * Callees:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiRequestProcessInSwap @ 0x14010C75C (KiRequestProcessInSwap.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiInSwapSingleProcess(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebp
  char v7; // si
  struct _KPRCB *CurrentPrcb; // rdx

  v3 = 0;
  v7 = 1;
  if ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( (*(_DWORD *)a2 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a2, 7u) );
  }
  if ( (*(_DWORD *)(a2 + 572) & 7) == 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v7 = 0;
    goto LABEL_12;
  }
  KiRequestProcessInSwap(a1, a2);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_KTHREAD *)a1 != CurrentPrcb->CurrentThread )
  {
LABEL_12:
    __writecr8(a3);
    return v7;
  }
  *(_BYTE *)(a1 + 643) = 23;
  *(_BYTE *)(a1 + 390) = a3;
  KiSwapThread(a1, (__int64)CurrentPrcb);
  return v7;
}
