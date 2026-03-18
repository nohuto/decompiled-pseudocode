/*
 * XREFs of ViSettingsIoCheckForChanges @ 0x1406C7EEC
 * Callers:
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1406C7D8C (VfSettingsCheckForChanges.c)
 * Callees:
 *     IoVerifierCheckForSettingsChange @ 0x1406B4744 (IoVerifierCheckForSettingsChange.c)
 */

__int64 __fastcall ViSettingsIoCheckForChanges(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx

  v1 = a1;
  if ( !VfIrpDatabaseInitialized )
    v1 = a1 & 0xFFFFFFEF;
  if ( (v1 & 0x10) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !VfIoDisabled )
      _InterlockedExchange(&VfIoSwitchedOffNoReboot, 1);
  }
  VfIoDisabled = v2;
  IoVerifierCheckForSettingsChange(v1);
  return VfWdCheckForSettingsChange(v1);
}
