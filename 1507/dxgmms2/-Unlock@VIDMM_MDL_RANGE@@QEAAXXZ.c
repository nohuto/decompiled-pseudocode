/*
 * XREFs of ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C006A608
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0066818 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C006A838 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MDL_RANGE::Unlock(PMDL *this)
{
  MmUnlockPages(*this);
  IoFreeMdl(*this);
  *this = 0LL;
}
