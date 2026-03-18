/*
 * XREFs of PoFxActivateComponent @ 0x1400DADFC
 * Callers:
 *     PopFxActivateDevice @ 0x14001AA18 (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x14013D034 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x14063517C (PopFxUnregisterDevice.c)
 *     VerifierPoFxActivateComponent @ 0x1406C0B38 (VerifierPoFxActivateComponent.c)
 *     PoFxRegisterDebugger @ 0x140766334 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 620) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(
           BugCheckParameter2,
           *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8LL * (unsigned int)BugCheckParameter3),
           a3,
           0LL);
}
