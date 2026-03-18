/*
 * XREFs of ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18006BE80
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18004AED0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x18005FBE4 (--_GCVisualTreeIterator@@QEAAPEAXI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z @ 0x1800AF89C (-CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B05A8 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::Initialize(struct CLegacyMilBrushRealizer **this)
{
  _QWORD *v1; // r14
  int NullBrush; // eax
  int v4; // edi
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v6; // rax
  struct CLegacyMilBrushRealizer **v7; // rsi
  int v8; // eax
  struct CLegacyMilBrushRealizer *v9; // rax
  struct CLegacyMilBrushRealizer *v11; // rcx
  struct CLegacyMilBrushRealizer *v12; // rcx
  CVisualTreeIterator *v13; // rcx
  CContentBounder *v14; // rcx

  v1 = this + 381;
  NullBrush = CLegacyMilBrushRealizer::CreateNullBrush(this + 381);
  v4 = NullBrush;
  if ( NullBrush < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NullBrush, 0x89u);
    goto LABEL_9;
  }
  v5 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
  else
    v6 = (_QWORD *)v5(WPF::g_pProcessHeap, 80LL);
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
  this[382] = (struct CLegacyMilBrushRealizer *)v6;
  if ( v6 )
  {
    v7 = this + 475;
    v8 = CContentBounder::Create(this[2], this + 475);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x91u);
    }
    else
    {
      v9 = *v7;
      this[432] = *v7;
      this[466] = v9;
    }
LABEL_9:
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_14;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Eu);
LABEL_14:
  if ( *v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
    *v1 = 0LL;
  }
  v11 = this[53];
  if ( v11 )
  {
    (*(void (__fastcall **)(struct CLegacyMilBrushRealizer *))(*(_QWORD *)v11 + 16LL))(v11);
    this[53] = 0LL;
  }
  v12 = this[54];
  if ( v12 )
  {
    (*(void (__fastcall **)(struct CLegacyMilBrushRealizer *))(*(_QWORD *)v12 + 16LL))(v12);
    this[54] = 0LL;
  }
  v13 = this[382];
  if ( v13 )
    CVisualTreeIterator::`scalar deleting destructor'(v13);
  v14 = this[475];
  this[382] = 0LL;
  if ( v14 )
    CContentBounder::`scalar deleting destructor'(v14);
  this[475] = 0LL;
  this[432] = 0LL;
  this[466] = 0LL;
  return (unsigned int)v4;
}
