/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x1400BF094
 * Callers:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140124C40 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1401269D4 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopPluginDevicePower @ 0x1400BFF6C (PopPluginDevicePower.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400C0D98 (PopDiagTraceFxDevicePowered.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
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
