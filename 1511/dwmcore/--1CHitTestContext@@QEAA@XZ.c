/*
 * XREFs of ??1CHitTestContext@@QEAA@XZ @ 0x18013EFE0
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x18013F07C (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHitTestContext::~CHitTestContext(CHitTestContext *this)
{
  WPF::ProcessHeapImpl *v1; // rdi

  v1 = WPF::g_pProcessHeap;
  *(_QWORD *)this = &CHitTestContext::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v1 + 32LL))(v1, *((_QWORD *)this + 21));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 17));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 8));
}
