/*
 * XREFs of ?CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z @ 0x1801256A8
 * Callers:
 *     ?AttachToVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180119CF0 (-AttachToVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::CreateForControlledVisual(void *a1, struct CCoRenderVisualProxy **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  struct CCoRenderVisualProxy *v6; // rbx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  v6 = (struct CCoRenderVisualProxy *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)v5 = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
    *(_QWORD *)(v5 + 8) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 56) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CCoRenderVisualProxy *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_QWORD *)v6 + 3) = a1;
    if ( a1 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x47u);
  }
  return v4;
}
