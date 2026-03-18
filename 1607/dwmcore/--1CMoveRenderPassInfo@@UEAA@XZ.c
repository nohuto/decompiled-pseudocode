/*
 * XREFs of ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x18013005C
 * Callers:
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x1801300E0 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMoveRenderPassInfo::~CMoveRenderPassInfo(CMoveRenderPassInfo *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CMoveRenderPassInfo::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 5));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 6));
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    DeleteObject(v3);
    *((_QWORD *)this + 2) = 0LL;
  }
}
