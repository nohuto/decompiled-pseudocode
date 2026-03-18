/*
 * XREFs of ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1800F5698
 * Callers:
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x1800F554C (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800343F0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CVisual@@IEAAJPEAVCContent@@@Z @ 0x180034514 (-SetContent@CVisual@@IEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCoRenderVisualProxy::Initialize(CCoRenderVisualProxy *this, struct CComposition *a2, void *a3)
{
  CVisual *v6; // rax
  struct CResource **v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  struct CContent *v10; // rdi
  int v11; // eax

  v6 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    792LL);
  if ( v6 )
    v7 = (struct CResource **)CVisual::CVisual(v6, a2);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (*((void (__fastcall **)(struct CResource **))*v7 + 1))(v7);
    v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    v10 = (struct CContent *)v9;
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
      (*(void (__fastcall **)(struct CContent *))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = CVisual::SetContent(v7, v10);
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
      (*((void (__fastcall **)(struct CResource **))*v7 + 2))(v7);
    if ( v10 )
      (*(void (__fastcall **)(struct CContent *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x87u);
  }
  return v8;
}
