/*
 * XREFs of KxFlushMultipleTb @ 0x1400B3BF0
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140030940 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushMultipleTb(unsigned int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  int v8; // ebx
  unsigned __int16 *v9; // rdi
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v12; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-F0h]
  int v14; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 v15[88]; // [rsp+50h] [rbp-E8h] BYREF

  v4 = a1;
  v5 = 4;
  v12 = a2;
  v13 = a1;
  if ( a4 == 1 )
    v5 = -2147483644;
  v14 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  if ( a4 )
  {
    v9 = 0LL;
    v8 = 1;
  }
  else
  {
    _InterlockedOr(v11, 0);
    KeCopyAffinityEx((__int64)v15, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    v9 = v15;
    KeRemoveProcessorAffinityEx(v15, CurrentPrcb->Number);
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v8,
    (__int64)v9,
    (int)&v12,
    v4,
    v5,
    (__int64 (__fastcall *)(__int64))KiFlushRangeWorker,
    (__int64)&v12);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
