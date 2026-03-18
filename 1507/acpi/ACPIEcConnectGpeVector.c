/*
 * XREFs of ACPIEcConnectGpeVector @ 0x1C0079DC0
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0006480 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1C0079EA8 (ACPIEcConnectInterrupt.c)
 * Callees:
 *     ACPIVectorConnect @ 0x1C00414C0 (ACPIVectorConnect.c)
 */

__int64 __fastcall ACPIEcConnectGpeVector(__int64 a1)
{
  return ACPIVectorConnect(0LL, *(_DWORD *)(a1 + 48), 1, 0, (__int64)ACPIEcGpeServiceRoutine, a1, (_QWORD *)(a1 + 72));
}
