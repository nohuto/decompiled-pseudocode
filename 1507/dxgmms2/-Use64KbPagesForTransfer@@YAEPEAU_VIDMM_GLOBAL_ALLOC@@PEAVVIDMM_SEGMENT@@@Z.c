/*
 * XREFs of ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C006F868
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Use64KbPagesForTransfer(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_SEGMENT *a2)
{
  char v2; // r9

  v2 = 0;
  if ( !(unsigned __int16)*((_DWORD *)a1 + 8) && !(unsigned __int16)*((_DWORD *)a1 + 4) )
    return *((_DWORD *)a2 + 92) == 0x10000;
  return v2;
}
