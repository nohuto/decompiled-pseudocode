/*
 * XREFs of KxFlushNonGlobalTb @ 0x140030810
 * Callers:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140030940 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiSetTbFlushTimeStampBusy @ 0x1401D60B4 (KiSetTbFlushTimeStampBusy.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _BYTE *v3; // rbp
  int v4; // edx
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v7[176]; // [rsp+40h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !(_DWORD)a1 )
  {
    _InterlockedOr(v6, 0);
    KeCopyAffinityEx(v7, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v3 = v7;
    KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
    v4 = 0;
LABEL_3:
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, v4, (_DWORD)v3, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
    goto LABEL_4;
  }
  LODWORD(v3) = 0;
  v4 = 1;
  if ( !KiKvaShadow )
    goto LABEL_3;
  if ( (unsigned __int8)KiSetTbFlushTimeStampBusy(a1, 1LL) )
  {
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, 1, 0, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
LABEL_4:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
