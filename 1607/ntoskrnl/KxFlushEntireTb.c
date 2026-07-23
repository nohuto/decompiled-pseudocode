/*
 * XREFs of KxFlushEntireTb @ 0x14013D56C
 * Callers:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeFlushEntireTb @ 0x14013D530 (KeFlushEntireTb.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140030940 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KxSetTimeStampBusy @ 0x14009CEA8 (KxSetTimeStampBusy.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  bool v1; // al
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int16 v7[88]; // [rsp+40h] [rbp-C8h] BYREF

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
  if ( v1 )
  {
    if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx(
        (__int64)KeGetCurrentPrcb(),
        1,
        0LL,
        0,
        0LL,
        v2,
        (__int64 (__fastcall *)(__int64))KiFlushCurrentTbWorker,
        0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v6, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx((__int64)v7, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      0,
      (__int64)v7,
      0,
      0LL,
      v2,
      (__int64 (__fastcall *)(__int64))KiFlushCurrentTbWorker,
      0LL);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
