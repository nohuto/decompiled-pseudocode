/*
 * XREFs of ACPIGpeValidIndex @ 0x1C00087C8
 * Callers:
 *     ACPIGpeIndexToByteIndex @ 0x1C00081C4 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00086B4 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008794 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000D540 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIVectorConnect @ 0x1C0041000 (ACPIVectorConnect.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIGpeValidIndex(unsigned int a1)
{
  bool result; // al
  unsigned int v2; // r8d

  result = 1;
  if ( a1 >= 8 * (unsigned int)*((unsigned __int16 *)AcpiInformation + 43) )
  {
    v2 = *((unsigned __int16 *)AcpiInformation + 50);
    if ( a1 < v2 || a1 >= v2 + 8 * *((unsigned __int16 *)AcpiInformation + 49) )
      return 0;
  }
  return result;
}
