/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x14013027C
 * Callers:
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140136498 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14013A1B4 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopPluginDevicePower @ 0x140027AFC (PopPluginDevicePower.c)
 *     PopDiagTraceFxDevicePowered @ 0x1401302C4 (PopDiagTraceFxDevicePowered.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx

  result = 0LL;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( !v5 )
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    return PopPluginDevicePower(BugCheckParameter2, 1, a2);
  }
  return result;
}
