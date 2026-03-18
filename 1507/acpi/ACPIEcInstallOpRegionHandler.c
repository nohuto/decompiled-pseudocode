/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C007A0C4
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0039DB0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C0065B00 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(
           *(_QWORD *)(a1 + 56),
           2,
           3u,
           (__int64)ACPIEcOpRegionHandler,
           a1,
           (unsigned int **)(a1 + 80));
}
