/*
 * XREFs of ?RemoveKey@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBI@Z @ 0x180006318
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000691C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180171590 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180006254 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18009ED18 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::RemoveKey(
        __int64 a1,
        int *a2)
{
  int Key; // eax
  __int64 v4; // rbp
  int v5; // edx
  unsigned int v6; // esi
  void *v7; // rax
  void *v8; // rax

  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1,
          a2);
  v4 = Key;
  if ( Key == -1 )
    return 0LL;
  if ( Key < 0 )
    return 0;
  v5 = *(_DWORD *)(a1 + 16);
  if ( Key + 1 > v5 )
  {
    return 0;
  }
  else
  {
    v6 = 1;
    if ( Key + 1 != v5 )
    {
      memmove((void *)(*(_QWORD *)a1 + 4LL * Key), (const void *)(*(_QWORD *)a1 + 4LL * Key + 4), 4LL * (v5 - Key - 1));
      memmove(
        (void *)(*(_QWORD *)(a1 + 8) + 4 * v4),
        (const void *)(*(_QWORD *)(a1 + 8) + 4 * v4 + 4),
        4LL * (*(_DWORD *)(a1 + 16) - (int)v4 - 1));
    }
    v7 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) - 1));
    if ( v7 )
      *(_QWORD *)a1 = v7;
    v8 = ReallocHeap(*(void **)(a1 + 8), 4LL * (*(_DWORD *)(a1 + 16) - 1));
    if ( v8 )
      *(_QWORD *)(a1 + 8) = v8;
    --*(_DWORD *)(a1 + 16);
  }
  return v6;
}
