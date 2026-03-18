/*
 * XREFs of PiInitReleaseCachedGroupInformation @ 0x14053D614
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14013C87C (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x14013C920 (PnpFreeUnicodeStringList.c)
 */

void PiInitReleaseCachedGroupInformation()
{
  if ( PiInitGroupOrderTable )
  {
    PnpFreeUnicodeStringList((PVOID *)PiInitGroupOrderTable, (unsigned __int16)PiInitGroupOrderTableCount);
    PiInitGroupOrderTable = 0LL;
    PiInitGroupOrderTableCount = 0;
  }
}
