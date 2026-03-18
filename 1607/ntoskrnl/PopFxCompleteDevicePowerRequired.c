/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x1400C1204
 * Callers:
 *     PopFxProcessWork @ 0x1400C124C (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x1401246D0 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140126464 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopPluginDevicePower @ 0x1400C20DC (PopPluginDevicePower.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400C2F08 (PopDiagTraceFxDevicePowered.c)
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // rdx

  result = 0LL;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( !v5 )
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    LOBYTE(v6) = 1;
    return PopPluginDevicePower(BugCheckParameter2, v6, a2);
  }
  return result;
}
