/*
 * XREFs of CiSystemTerminate @ 0x1C000C30C
 * Callers:
 *     CsTerminate @ 0x1C000BF94 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000DC20 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C00042BC (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
  if ( CiNdisDeviceHandle )
    ZwClose(CiNdisDeviceHandle);
}
