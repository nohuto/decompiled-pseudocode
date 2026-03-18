/*
 * XREFs of KxFlushSingleTb @ 0x1400077D0
 * Callers:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14007C440 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v4; // edx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _BYTE *v7; // rbx
  __int64 result; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v10; // [rsp+40h] [rbp-E8h] BYREF
  int v11; // [rsp+48h] [rbp-E0h]
  _BYTE v12[176]; // [rsp+50h] [rbp-D8h] BYREF

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
    LODWORD(v7) = 0;
  }
  else
  {
    _InterlockedOr(v9, 0);
    KeCopyAffinityEx(v12, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v7 = v12;
    KeRemoveProcessorAffinityEx(v12, CurrentPrcb->Number);
    v4 = 0;
  }
  KiIpiSendRequestEx(
    (_DWORD)CurrentPrcb,
    v4,
    (_DWORD)v7,
    (unsigned int)&v10,
    0LL,
    v3,
    (__int64)KiFlushSingleTbWorker,
    (__int64)&v10);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
