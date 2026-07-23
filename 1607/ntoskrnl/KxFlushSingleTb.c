/*
 * XREFs of KxFlushSingleTb @ 0x1401084A0
 * Callers:
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140030940 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v4; // edx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 *v7; // rbx
  __int64 result; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v10; // [rsp+40h] [rbp-E8h] BYREF
  int v11; // [rsp+48h] [rbp-E0h]
  unsigned __int16 v12[88]; // [rsp+50h] [rbp-D8h] BYREF

  v3 = 2LL;
  v11 = a2;
  v10 = a1;
  v4 = 1;
  if ( a3 == 1 )
    v3 = 2147483650LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    v7 = 0LL;
  }
  else
  {
    _InterlockedOr(v9, 0);
    KeCopyAffinityEx((__int64)v12, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    v7 = v12;
    KeRemoveProcessorAffinityEx(v12, CurrentPrcb->Number);
    v4 = 0;
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v4,
    (__int64)v7,
    (int)&v10,
    0LL,
    v3,
    (__int64 (__fastcall *)(__int64))KiFlushSingleTbWorker,
    (__int64)&v10);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
