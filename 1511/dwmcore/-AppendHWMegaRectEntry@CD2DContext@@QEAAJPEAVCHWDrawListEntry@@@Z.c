/*
 * XREFs of ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA6CC
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800FA918 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@Mil.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180020670 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800209A0 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800F9FBC (-AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendMegaRectEntry@CMegaRectCollection@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FC2BC (-AppendMegaRectEntry@CMegaRectCollection@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 */

__int64 __fastcall CD2DContext::AppendHWMegaRectEntry(
        struct ID2D1PrivateCompositorRenderer **this,
        struct CHWDrawListEntry *a2)
{
  int v4; // eax
  int v5; // ebx
  struct ID2D1PrivateCompositorRenderer *v6; // rdi
  int appended; // eax
  int v8; // eax

  if ( this[42] )
    CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v4 = CD2DContext::EnsureHwCallbackRenderer((CD2DContext *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = this[37];
    appended = CHWCallbackRenderer::AppendDrawListPrimitive(v6, a2);
    v5 = appended;
    if ( appended >= 0 )
    {
      if ( CCommonRegistryData::m_fEnableMegaRects )
      {
        if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((struct CHWDrawListEntry *)((char *)a2 + 76)) )
        {
          v8 = CMegaRectCollection::AppendMegaRectEntry((struct ID2D1PrivateCompositorRenderer *)((char *)v6 + 120), a2);
          v5 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7Du);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x78u);
    }
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1EBu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1E7u);
  }
  return (unsigned int)v5;
}
