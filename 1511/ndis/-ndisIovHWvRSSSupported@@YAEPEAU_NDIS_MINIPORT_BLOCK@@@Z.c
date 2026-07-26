/*
 * XREFs of ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D282C
 * Callers:
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AB088 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00D39F0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00D4250 (ndisOidPreIovNicSwitchParameters.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIovHWvRSSSupported(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 MajorNdisVersion; // al
  char v2; // dl
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax

  MajorNdisVersion = a1->MajorNdisVersion;
  v2 = 0;
  if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x3Cu )
  {
    NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
    if ( NicSwitchCurrentCapabilities && (NicSwitchCurrentCapabilities->NicSwitchCapabilities & 0x80u) != 0 )
      return 1;
  }
  return v2;
}
