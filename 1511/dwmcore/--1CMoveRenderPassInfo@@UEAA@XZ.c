/*
 * XREFs of ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x180115D9C
 * Callers:
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x180115E40 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CMoveRenderPassInfo::~CMoveRenderPassInfo(CMoveRenderPassInfo *this)
{
  WPF::ProcessHeapImpl *v1; // rdi
  void *v3; // rcx
  void *v4; // rcx

  v1 = WPF::g_pProcessHeap;
  *(_QWORD *)this = &CMoveRenderPassInfo::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v1 + 32LL))(v1, *((_QWORD *)this + 5));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 6));
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    DeleteObject(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    DeleteObject(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
}
