/*
 * XREFs of ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x1801318EC
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x18013101C (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801310B0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 */

void __fastcall CManipulationContext::RevalidateMCsAndLists(struct MCCollections *a1, int *a2)
{
  int v2; // eax
  int v3; // edi
  __int64 v6; // rsi
  CManipulationContext *v7; // rbx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  CManipulationContext *v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 8);
  v3 = 0;
  v8 = -1;
  *a2 = v2;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      v9 = *(CManipulationContext **)(v6 + *((_QWORD *)a1 + 3));
      v7 = v9;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v9);
      if ( (*((_BYTE *)v7 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMC(v7, (char **)a1, &v8, v3, *a2);
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v9);
      ++v3;
      v6 += 8LL;
    }
    while ( v3 < *a2 );
  }
}
