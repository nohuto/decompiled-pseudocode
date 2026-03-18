/*
 * XREFs of ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800437C0
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ @ 0x1800371D4 (-ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x1800520F4 (--_GCVisualTreeIterator@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800A0BEC (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ?CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z @ 0x1800AC38C (-CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800ACB9C (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::Initialize(struct CLegacyMilBrushRealizer **this)
{
  _QWORD *v1; // r15
  int NullBrush; // eax
  int v4; // esi
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  _QWORD *v6; // rax
  struct CLegacyMilBrushRealizer **v7; // rbx
  int v8; // eax
  struct CLegacyMilBrushRealizer *v9; // rax
  unsigned int v10; // edx
  struct CLegacyMilBrushRealizer *v12; // r14
  struct CLegacyMilBrushRealizer *v13; // r14
  CVisualTreeIterator *v14; // rcx
  CContentBounder *v15; // rcx

  v1 = this + 327;
  NullBrush = CLegacyMilBrushRealizer::CreateNullBrush(this + 327);
  v4 = NullBrush;
  if ( NullBrush < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NullBrush, 0x8Eu);
    goto LABEL_9;
  }
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
  else
    v6 = (_QWORD *)v5(WPF::g_pProcessHeap, 80uLL);
  if ( v6 )
  {
    v6[4] = 0LL;
    v6[6] = 0LL;
    *((_DWORD *)v6 + 10) = 0;
    *((_DWORD *)v6 + 14) = 0;
    *(_QWORD *)((char *)v6 + 28) = 1LL;
    *((_DWORD *)v6 + 1) = 0;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  this[328] = (struct CLegacyMilBrushRealizer *)v6;
  if ( v6 )
  {
    v7 = this + 417;
    v8 = CContentBounder::Create(this[2], this + 417);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x96u);
    }
    else
    {
      v9 = *v7;
      this[375] = *v7;
      this[408] = v9;
      CDrawingContext::ResetDbgRedrawRects((CDrawingContext *)(this - 1));
    }
LABEL_9:
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_17;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x93u);
LABEL_17:
  if ( *v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
    *v1 = 0LL;
  }
  v12 = this[43];
  if ( v12 )
  {
    (*(void (__fastcall **)(struct CLegacyMilBrushRealizer *))(*(_QWORD *)v12 + 16LL))(this[43]);
    this[43] = 0LL;
  }
  v13 = this[44];
  if ( v13 )
  {
    (*(void (__fastcall **)(struct CLegacyMilBrushRealizer *))(*(_QWORD *)v13 + 16LL))(this[44]);
    this[44] = 0LL;
  }
  v14 = this[328];
  if ( v14 )
    CVisualTreeIterator::`scalar deleting destructor'(v14, v10);
  v15 = this[417];
  this[328] = 0LL;
  if ( v15 )
    CContentBounder::`scalar deleting destructor'(v15, v10);
  this[417] = 0LL;
  this[375] = 0LL;
  this[408] = 0LL;
  return (unsigned int)v4;
}
