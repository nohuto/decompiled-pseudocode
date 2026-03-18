/*
 * XREFs of CiSystemTerminate @ 0x1C000C2FC
 * Callers:
 *     CsTerminate @ 0x1C000BF84 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000DC20 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C00043AC (CiFreeMemory.c)
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
