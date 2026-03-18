/*
 * XREFs of ?Add@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@@@Z @ 0x180005244
 * Callers:
 *     ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z @ 0x180005470 (-SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180143E50 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x180005050 (-InternalSetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAE.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x180027708 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::Add(
        __int64 a1,
        unsigned int *a2,
        const struct TargetingInfo *a3)
{
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rax
  int v9; // edx

  v6 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = ReallocHeap(v7, 16LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v8 )
    return 0LL;
  v9 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::InternalSetAtIndex(
    (TargetingInfo **)a1,
    v9,
    a2,
    a3);
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
