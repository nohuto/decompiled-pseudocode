/*
 * XREFs of ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18000E394
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C908 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D3B8 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x18000E588 (-Initialize@CDrawTileImageInstruction@@AEAAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Create(
        struct CResource *a1,
        const struct tagRECT *a2,
        const struct tagPOINT *a3,
        float a4,
        struct CDrawTileImageInstruction **a5)
{
  void *(*v8)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  struct CDrawTileImageInstruction *v9; // rax
  struct CDrawTileImageInstruction *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  v8 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v8 == WPF::ProcessHeapImpl::AllocClear )
    v9 = (struct CDrawTileImageInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x38uLL);
  else
    v9 = (struct CDrawTileImageInstruction *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v8)(
                                               WPF::g_pProcessHeap,
                                               56LL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 1;
    *(_QWORD *)v9 = &CDrawTileImageInstruction::`vftable';
    v11 = CDrawTileImageInstruction::Initialize(v9, a1, a2, a3, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x34u);
    }
    else
    {
      *a5 = v10;
      v10 = 0LL;
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x32u);
  }
  return v12;
}
