/*
 * XREFs of ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18002E2E0
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800569F8 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ @ 0x180022E80 (-ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ.c)
 *     ??_GCGraphIterator@@QEAAPEAXI@Z @ 0x180031464 (--_GCGraphIterator@@QEAAPEAXI@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18005050C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005E378 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?CreateNullBrush@CBrushRealizer@@SAJPEAPEAV1@@Z @ 0x18005E9CC (-CreateNullBrush@CBrushRealizer@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::Initialize(struct CBrushRealizer **this)
{
  _QWORD *v1; // r15
  int NullBrush; // eax
  int v4; // edi
  __int64 v5; // rax
  struct CBrushRealizer **v6; // rbx
  int v7; // eax
  struct CBrushRealizer *v8; // rax
  unsigned int v9; // edx
  struct CBrushRealizer *v11; // r14
  struct CBrushRealizer *v12; // r14
  CGraphIterator *v13; // rcx
  CContentBounder *v14; // rcx

  v1 = this + 327;
  NullBrush = CBrushRealizer::CreateNullBrush(this + 327);
  v4 = NullBrush;
  if ( NullBrush < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NullBrush, 0x8Cu);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 56) = 0;
    *(_QWORD *)(v5 + 28) = 1LL;
    *(_DWORD *)(v5 + 4) = 0;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  this[328] = (struct CBrushRealizer *)v5;
  if ( v5 )
  {
    v6 = this + 413;
    v7 = CContentBounder::Create(this[2], this + 413);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x94u);
    }
    else
    {
      v8 = *v6;
      this[371] = *v6;
      this[404] = v8;
      CDrawingContext::ResetDbgRedrawRects((CDrawingContext *)(this - 1));
    }
LABEL_7:
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_14;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x91u);
LABEL_14:
  if ( *v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
    *v1 = 0LL;
  }
  v11 = this[43];
  if ( v11 )
  {
    (*(void (__fastcall **)(struct CBrushRealizer *))(*(_QWORD *)v11 + 16LL))(this[43]);
    this[43] = 0LL;
  }
  v12 = this[44];
  if ( v12 )
  {
    (*(void (__fastcall **)(struct CBrushRealizer *))(*(_QWORD *)v12 + 16LL))(this[44]);
    this[44] = 0LL;
  }
  v13 = this[328];
  if ( v13 )
    CGraphIterator::`scalar deleting destructor'(v13, v9);
  v14 = this[413];
  this[328] = 0LL;
  if ( v14 )
    CContentBounder::`scalar deleting destructor'(v14, v9);
  this[413] = 0LL;
  this[371] = 0LL;
  this[404] = 0LL;
  return (unsigned int)v4;
}
