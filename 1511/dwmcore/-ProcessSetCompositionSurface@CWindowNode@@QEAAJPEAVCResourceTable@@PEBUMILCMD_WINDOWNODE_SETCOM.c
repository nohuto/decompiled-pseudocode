/*
 * XREFs of ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1800F6E6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801124E4 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180124324 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetCompositionSurface(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE *a3)
{
  void *v3; // r8
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  CMILCOMBase *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  if ( v3
    && (v5 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
               (CCompositionSurfaceManager *)(*((_QWORD *)this[2] + 5) + 16LL),
               this[2],
               v3,
               &v9),
        v6 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA34u);
  }
  else
  {
    v7 = CWindowNode::SetFlipExBitmap((CWindowNode *)this, 0LL);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA37u);
  }
  return v6;
}
