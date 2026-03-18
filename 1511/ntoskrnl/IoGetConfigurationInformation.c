/*
 * XREFs of IoGetConfigurationInformation @ 0x140521C00
 * Callers:
 *     VerifierIoGetConfigurationInformation @ 0x1406C0754 (VerifierIoGetConfigurationInformation.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140750D8C (IopCreateArcNamesDisk.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140786954 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_1406FB7A0;
}
