/*
 * XREFs of ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x18013101C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801315A0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x1801318EC (-RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z.c)
 */

__int64 __fastcall CManipulationContext::Revalidate(struct MCCollections *a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // r14
  CManipulationContext *v6; // rbx
  CManipulationContext *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    v5 = 0LL;
    do
    {
      v8 = *(CManipulationContext **)(v5 + *((_QWORD *)a1 + 3));
      v6 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v8);
      if ( (*((_BYTE *)v6 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMCTree(v6, a1);
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v8);
      ++v2;
      v5 += 8LL;
    }
    while ( v2 < *((_DWORD *)a1 + 8) );
  }
  CManipulationContext::RevalidateMCsAndLists(a1, (int *)&v8);
  return CManipulationContext::RevalidationCleanup((unsigned int)v8, a1, a2);
}
