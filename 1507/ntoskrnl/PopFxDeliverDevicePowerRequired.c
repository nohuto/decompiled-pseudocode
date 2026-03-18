/*
 * XREFs of PopFxDeliverDevicePowerRequired @ 0x14013A1B4
 * Callers:
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140139F50 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeviceWork @ 0x140237E18 (PopFxDeviceWork.c)
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140028CEC (PopDiagTraceFxDevicePowerRequirement.c)
 */

__int64 __fastcall PopFxDeliverDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void (__fastcall *v4)(_QWORD); // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(BugCheckParameter2 + 48), 0, 1u);
    v4 = *(void (__fastcall **)(_QWORD))(BugCheckParameter2 + 136);
    if ( v4 )
      v4(*(_QWORD *)(BugCheckParameter2 + 168));
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return PopFxCompleteDevicePowerRequired(BugCheckParameter2, a2);
}
