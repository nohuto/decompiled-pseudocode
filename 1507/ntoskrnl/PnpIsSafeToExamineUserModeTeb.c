/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x140026CF4
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x1401F2680 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 __fastcall PnpIsSafeToExamineUserModeTeb(__int64 a1)
{
  char v1; // r9
  unsigned __int8 v2; // dl
  __int64 v4; // r8

  v1 = 0;
  if ( KeGetCurrentThread()->PreviousMode != 1
    || KeGetCurrentThread()->SpecialApcDisable
    || !(unsigned __int8)KeAreInterruptsEnabled(a1, 1LL)
    || KeGetCurrentIrql() >= v2
    || *(_BYTE *)(v4 + 1738) > v2 )
  {
    return v1;
  }
  return v2;
}
