/*
 * XREFs of PoNotifySystemTimeSet @ 0x140126FB0
 * Callers:
 *     ExpSetSystemTime @ 0x14039D9C4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14051ECD8 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14066A764 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14009200C (ExNotifyWithProcessing.c)
 *     PopGetPolicyWorker @ 0x1400975A0 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1400FF0E8 (PopCheckForWork.c)
 *     EtwTraceSystemTimeChange @ 0x14039DA64 (EtwTraceSystemTimeChange.c)
 */

__int64 PoNotifySystemTimeSet()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  if ( PsWin32CalloutsEstablished )
  {
    EtwTraceSystemTimeChange();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
