/*
 * XREFs of ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x1800FC61C
 * Callers:
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x1800FC6C0 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
