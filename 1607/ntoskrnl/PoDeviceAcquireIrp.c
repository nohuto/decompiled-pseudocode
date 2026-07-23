/*
 * XREFs of PoDeviceAcquireIrp @ 0x14012C65C
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 *     PoHandleIrp @ 0x14012C4A4 (PoHandleIrp.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x14012C694 (PopDiagTraceDeviceAcquireIrp.c)
 */

__int64 __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272) + 40LL) = a3;
      return PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
  return result;
}
