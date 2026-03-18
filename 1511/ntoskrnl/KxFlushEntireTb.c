/*
 * XREFs of KxFlushEntireTb @ 0x140007A1C
 * Callers:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     KiFlushTb @ 0x140007998 (KiFlushTb.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     KeFlushEntireTb @ 0x1401C7064 (KeFlushEntireTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14007C440 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1400E2F30 (KxSetTimeStampBusy.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  bool v1; // al
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int CurrentPrcb; // esi
  __int64 result; // rax

  v1 = 1;
  v2 = 3LL;
  if ( a1 == 1 )
  {
    v2 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v1 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = (unsigned int)KeGetCurrentPrcb();
  if ( v1 )
  {
    if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx(CurrentPrcb, 1, 0, 0, 0LL, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    KiIpiSendRequestEx((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, 0LL, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
