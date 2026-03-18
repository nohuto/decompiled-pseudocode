/*
 * XREFs of KxFlushMultipleTb @ 0x140102D90
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14007C440 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushMultipleTb(unsigned int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v8; // ebx
  unsigned __int16 *v9; // rdi
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-138h] BYREF
  __int128 v12; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int16 v13[88]; // [rsp+50h] [rbp-E8h] BYREF

  v4 = a1;
  v5 = 4;
  *(_QWORD *)&v12 = a2;
  DWORD2(v12) = a1;
  if ( a4 == 1 )
    v5 = -2147483644;
  HIDWORD(v12) = a3;
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
    KeCopyAffinityEx((__int64)v13, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    v9 = v13;
    KeRemoveProcessorAffinityEx(v13, CurrentPrcb->Number);
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v8,
    v9,
    &v12,
    v4,
    v5,
    (__int64 (__fastcall *)(__int64))KiFlushRangeWorker,
    (__int64)&v12);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
