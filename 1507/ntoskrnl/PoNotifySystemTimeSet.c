/*
 * XREFs of PoNotifySystemTimeSet @ 0x14015A6C4
 * Callers:
 *     ExpSetSystemTime @ 0x1403EFEF4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1406EDD3C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     PopCheckForWork @ 0x1400D01A4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 *     ExNotifyWithProcessing @ 0x1400EDED8 (ExNotifyWithProcessing.c)
 *     EtwTraceSystemTimeChange @ 0x1403EFDA8 (EtwTraceSystemTimeChange.c)
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
