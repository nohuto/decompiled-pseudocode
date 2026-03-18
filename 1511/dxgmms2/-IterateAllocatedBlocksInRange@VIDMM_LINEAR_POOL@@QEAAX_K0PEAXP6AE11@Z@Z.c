/*
 * XREFs of ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C008A094
 * Callers:
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00848F8 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 * Callees:
 *     ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C0084810 (-EvictAllocationCallback@@YAEPEAX0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  v4 = *((_QWORD *)this + 8);
  v5 = (char *)this + 56;
  while ( (char *)v4 != v5 )
  {
    v9 = v4 - 32;
    v4 = *(_QWORD *)(v4 + 8);
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 < a3
      && *(_QWORD *)(v9 + 16) + v10 > a2
      && *(_DWORD *)v9 == 3
      && !EvictAllocationCallback(a4, *(char **)(v9 + 24)) )
    {
      break;
    }
  }
}
