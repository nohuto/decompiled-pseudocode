/*
 * XREFs of ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDF38
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DD4A0 (-AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800DDA8C (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?AppendMegaRectEntry@CMegaRectCollection@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DEE40 (-AppendMegaRectEntry@CMegaRectCollection@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 */

__int64 __fastcall CD2DContext::AppendHWMegaRectEntry(CD2DContext *this, struct CHWDrawListEntry *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdi
  int appended; // eax
  int v8; // eax

  if ( *((_QWORD *)this + 44) )
    CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  v4 = CD2DContext::EnsureHwCallbackRenderer(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)this + 39);
    appended = CHWCallbackRenderer::AppendDrawListPrimitive((CHWCallbackRenderer *)v6, a2);
    v5 = appended;
    if ( appended >= 0 )
    {
      if ( CCommonRegistryData::m_fEnableMegaRects )
      {
        if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((struct CHWDrawListEntry *)((char *)a2 + 76)) )
        {
          v8 = CMegaRectCollection::AppendMegaRectEntry((CMegaRectCollection *)(v6 + 120), a2);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1DAu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1D6u);
  }
  return (unsigned int)v5;
}
