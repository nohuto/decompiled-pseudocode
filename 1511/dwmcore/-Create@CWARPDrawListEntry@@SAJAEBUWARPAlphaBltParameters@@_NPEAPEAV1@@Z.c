/*
 * XREFs of ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@_NPEAPEAV1@@Z @ 0x180117F08
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWARPDrawListEntry@@AEAA@XZ @ 0x180117DC0 (--0CWARPDrawListEntry@@AEAA@XZ.c)
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z @ 0x180118018 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Create(
        const struct WARPAlphaBltParameters *a1,
        bool a2,
        struct CWARPDrawListEntry **a3)
{
  CWARPDrawListEntry *v6; // rax
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (CWARPDrawListEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               360LL);
  if ( v6 )
    v7 = (volatile signed __int32 *)CWARPDrawListEntry::CWARPDrawListEntry(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v9 = CWARPDrawListEntry::Initialize((CWARPDrawListEntry *)v7, a1, a2);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a3 = (struct CWARPDrawListEntry *)v7;
      v7 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x15u);
    }
    if ( v7 )
      CMILRefCountBase::Release((CMILRefCountBase *)v7);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v8;
}
