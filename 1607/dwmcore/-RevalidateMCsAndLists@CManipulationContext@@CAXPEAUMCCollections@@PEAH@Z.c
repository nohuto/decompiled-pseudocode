/*
 * XREFs of ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x180172224
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801714FC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180171590 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 */

void __fastcall CManipulationContext::RevalidateMCsAndLists(struct MCCollections *a1, int *a2)
{
  int v2; // eax
  int v3; // edi
  __int64 v6; // rsi
  CManipulationContext *v7; // rbx
  GUID v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 8);
  v3 = 0;
  v8.Data1 = -1;
  *a2 = v2;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      *(_QWORD *)v8.Data4 = *(_QWORD *)(v6 + *((_QWORD *)a1 + 3));
      v7 = *(CManipulationContext **)v8.Data4;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v8.Data4);
      if ( (*((_BYTE *)v7 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMC(v7, a1, &v8, (const GUID *)(unsigned int)v3, *a2);
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)v8.Data4);
      ++v3;
      v6 += 8LL;
    }
    while ( v3 < *a2 );
  }
}
