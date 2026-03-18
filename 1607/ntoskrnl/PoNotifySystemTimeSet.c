/*
 * XREFs of PoNotifySystemTimeSet @ 0x140131E00
 * Callers:
 *     ExpSetSystemTime @ 0x1403D230C (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14055E2B0 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1406AD104 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140008B0C (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x140009C44 (PopCheckForWork.c)
 *     ExNotifyWithProcessing @ 0x140009D60 (ExNotifyWithProcessing.c)
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
