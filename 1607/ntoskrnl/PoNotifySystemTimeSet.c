/*
 * XREFs of PoNotifySystemTimeSet @ 0x140132370
 * Callers:
 *     ExpSetSystemTime @ 0x1403D230C (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14055E7F0 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1400097C4 (PopCheckForWork.c)
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 *     EtwTraceSystemTimeChange @ 0x1403D23AC (EtwTraceSystemTimeChange.c)
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
