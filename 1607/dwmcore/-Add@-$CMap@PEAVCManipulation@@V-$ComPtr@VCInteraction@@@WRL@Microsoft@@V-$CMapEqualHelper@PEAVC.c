/*
 * XREFs of ?Add@?$CMap@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBQEAVCManipulation@@AEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180149C84
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18010B540 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18009ED18 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMap<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v8; // rcx
  void *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 (__fastcall ****v12)(_QWORD); // rcx

  v6 = ReallocHeap(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v12 )
  {
    *v12 = (__int64 (__fastcall ***)(_QWORD))*a3;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v12);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
