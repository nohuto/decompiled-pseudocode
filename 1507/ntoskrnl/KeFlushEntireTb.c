/*
 * XREFs of KeFlushEntireTb @ 0x140203DB8
 * Callers:
 *     <none>
 * Callees:
 *     KxFlushEntireTb @ 0x14003F924 (KxFlushEntireTb.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushEntireTb(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // ebx
  char v5; // cl
  int v6; // edi
  __int64 result; // rax
  unsigned __int8 v8; // bl

  if ( (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || (unsigned int)KeNumberProcessors_0 > 1) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    v4 = 0;
    _m_prefetchw(&KiTbFlushTimeStamp);
    v5 = KiTbFlushTimeStamp;
    v6 = KiTbFlushTimeStamp;
    while ( (v5 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
      v5 = KiTbFlushTimeStamp;
      if ( KiTbFlushTimeStamp - v6 >= 3 || KiTbFlushTimeStamp - v6 >= 2 && (v6 & 1) == 0 )
        goto LABEL_16;
    }
    LOBYTE(a3) = 1;
    HvlFlushAddressSpaceTb(0LL, 0LL, a3, 0);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
LABEL_16:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    result = KxFlushEntireTb(2);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL);
  if ( ExTbFlushActive )
  {
    v8 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, 0LL);
    result = v8;
    __writecr8(v8);
  }
  return result;
}
