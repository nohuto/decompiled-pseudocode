/*
 * XREFs of ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00A1D0C
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00A1510 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01C1394 (--1HTSEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall HTSEMOBJ::vRelease(HTSEMOBJ *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
    GreReleaseSemaphoreInternal(ghsemHT);
  }
}
