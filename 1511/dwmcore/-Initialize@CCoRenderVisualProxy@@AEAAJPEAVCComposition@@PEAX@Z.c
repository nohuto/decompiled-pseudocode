/*
 * XREFs of ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x18010F318
 * Callers:
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x18010F1CC (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004CD30 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::Initialize(CCoRenderVisualProxy *this, struct CComposition *a2, void *a3)
{
  CVisual *v6; // rax
  CVisual *v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax

  v6 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    744LL);
  if ( v6 )
    v7 = CVisual::CVisual(v6, a2);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_DWORD *)(v9 + 32) = 0;
      *(_QWORD *)v9 = &CCoRenderContent::`vftable'{for `CContent'};
      *(_QWORD *)(v9 + 40) = &CCoRenderContent::`vftable'{for `ID2D1PrivateCompositorRenderer'};
      *(_QWORD *)(v9 + 48) = a3;
      *(_DWORD *)(v9 + 56) = 0;
      *(_DWORD *)(v9 + 60) = 0;
      *(_DWORD *)(v9 + 64) = 0;
      *(_DWORD *)(v9 + 68) = 0;
      *(_QWORD *)(v9 + 72) = (char *)this + 32;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v7 + 224LL))(v7, v10);
      v8 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)this + 3) = v7;
        v7 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8Eu);
      }
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Bu);
    }
    if ( v7 )
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x87u);
  }
  return v8;
}
