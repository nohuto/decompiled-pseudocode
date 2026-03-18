/*
 * XREFs of ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18012A7BC
 * Callers:
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x18010908C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180037D5C (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18014262C (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
        CCompositionSurfaceManager *this,
        struct CComposition *a2,
        void *a3,
        struct CCompositionSurfaceBitmap **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  CMILCOMBase *v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  v6 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(this, a3, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2Au);
  }
  else
  {
    v8 = CCompositionSurfaceBitmap::Create(a2, v10, a4);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2Eu);
  }
  if ( v10 )
    CMILCOMBase::InternalRelease(v10);
  return v7;
}
