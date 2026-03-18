/*
 * XREFs of ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C00318DC
 * Callers:
 *     ??1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ @ 0x1C00318D4 (--1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0037B84 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeStorage(PMDL *this)
{
  PMDL v2; // rcx
  PMDL v3; // rcx
  PMDL v4; // rcx

  if ( *((_BYTE *)this + 96) )
  {
    MmUnlockPages(this[11]);
    *((_BYTE *)this + 96) = 0;
  }
  v2 = this[11];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    this[11] = 0LL;
  }
  v3 = this[10];
  if ( v3 )
  {
    MmUnmapViewInSystemSpace(v3);
    this[10] = 0LL;
  }
  v4 = this[9];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    this[9] = 0LL;
  }
}
