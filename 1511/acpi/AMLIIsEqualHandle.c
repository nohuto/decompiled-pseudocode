/*
 * XREFs of AMLIIsEqualHandle @ 0x1C00097AC
 * Callers:
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021828 (ACPIBuildDevicePowerNodes.c)
 *     CacheBBNResult @ 0x1C00237A0 (CacheBBNResult.c)
 *     ACPIEcStartDevice @ 0x1C003A890 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( a2 )
      return *a1 == *a2;
  }
  else if ( !a2 )
  {
    return 1;
  }
  return result;
}
