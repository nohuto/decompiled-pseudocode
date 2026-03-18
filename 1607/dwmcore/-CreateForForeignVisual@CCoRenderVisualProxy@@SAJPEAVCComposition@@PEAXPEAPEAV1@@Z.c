/*
 * XREFs of ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x180125780
 * Callers:
 *     ?CreateCoRenderVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180119F80 (-CreateCoRenderVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1801258A8 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::CreateForForeignVisual(
        struct CComposition *a1,
        void *a2,
        struct CCoRenderVisualProxy **a3)
{
  __int64 v6; // rax
  CCoRenderVisualProxy *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  v7 = (CCoRenderVisualProxy *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)v6 = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
    *(_QWORD *)(v6 + 8) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_DWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 52) = 0;
    *(_DWORD *)(v6 + 56) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(CCoRenderVisualProxy *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = CCoRenderVisualProxy::Initialize(v7, a1, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x27u);
      (*(void (__fastcall **)(CCoRenderVisualProxy *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x24u);
  }
  return v8;
}
