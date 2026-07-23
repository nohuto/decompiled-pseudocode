/*
 * XREFs of PopNetIsDisconnectStandbyActive @ 0x1406737E4
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407BD360 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopNetIsDisconnectStandbyActive(_DWORD *a1)
{
  if ( a1 )
  {
    switch ( PopNetStandbyReason )
    {
      case 0:
        goto LABEL_14;
      case 1:
        *a1 = 2;
        return PopNetStandbyState == 2;
      case 2:
        *a1 = 3;
        return PopNetStandbyState == 2;
      case 3:
        *a1 = 4;
        return PopNetStandbyState == 2;
      case 4:
        *a1 = 5;
        return PopNetStandbyState == 2;
      case 5:
LABEL_14:
        *a1 = 0;
        return PopNetStandbyState == 2;
      case 6:
        *a1 = 1;
        break;
    }
  }
  return PopNetStandbyState == 2;
}
