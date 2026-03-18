/*
 * XREFs of ACPIVectorDisable @ 0x1C0041620
 * Callers:
 *     ACPIEcMaskInterrupt @ 0x1C0039AC0 (ACPIEcMaskInterrupt.c)
 *     ACPIVectorDisable2 @ 0x1C00416A0 (ACPIVectorDisable2.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x1C00075D4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008154 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorDisable(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rdx
  void *v7; // rdx

  v3 = 1 << (*a2 & 7);
  v4 = (unsigned int)ACPIGpeIndexToGpeRegister((unsigned int)*a2, (__int64)a2, a3);
  v5 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v6);
  LOBYTE(v3) = ~(_BYTE)v3;
  *((_BYTE *)GpeEnable + v4) &= v3;
  v7 = GpeCurEnable;
  *((_BYTE *)GpeCurEnable + v4) &= v3;
  ACPIGpeEnableDisableEvents(1, (__int64)v7);
  KeReleaseSpinLock(&GpeTableLock, v5);
  return 0LL;
}
