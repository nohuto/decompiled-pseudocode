/*
 * XREFs of CiSystemTerminate @ 0x1C000C34C
 * Callers:
 *     CsTerminate @ 0x1C000BFD4 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000DC20 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004714 (CiFreeMemory.c)
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
