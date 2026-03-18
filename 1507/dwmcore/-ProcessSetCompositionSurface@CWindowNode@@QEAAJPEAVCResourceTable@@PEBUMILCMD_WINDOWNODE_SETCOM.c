/*
 * XREFs of ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x180105E14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1800F8164 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801067A4 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA33u);
  }
  else
  {
    v7 = CWindowNode::SetFlipExBitmap((CWindowNode *)this, 0LL);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA36u);
  }
  return v6;
}
