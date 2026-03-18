/*
 * XREFs of IoGetConfigurationInformation @ 0x14058ED30
 * Callers:
 *     VerifierIoGetConfigurationInformation @ 0x140741F48 (VerifierIoGetConfigurationInformation.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407B6124 (IopCreateArcNamesDisk.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_14077E7D0;
}
