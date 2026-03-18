/*
 * XREFs of ACPIVectorEnable @ 0x1C00047C0
 * Callers:
 *     ACPIEcUnmaskInterrupt @ 0x1C003A704 (ACPIEcUnmaskInterrupt.c)
 *     ACPIVectorEnable2 @ 0x1C0041240 (ACPIVectorEnable2.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x1C00080FC (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008794 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorEnable(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 v5; // rcx

  v2 = 1 << (*a2 & 7);
  v3 = (unsigned int)ACPIGpeIndexToGpeRegister((unsigned int)*a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  LOBYTE(v5) = 1;
  *((_BYTE *)GpeEnable + v3) |= v2;
  *((_BYTE *)GpeCurEnable + v3) |= v2;
  ACPIGpeEnableDisableEvents(v5);
  KeReleaseSpinLock(&GpeTableLock, v4);
  return 0LL;
}
