/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x1800A48C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x1800A5074 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800A5590 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  struct IInteractionContextWrapper *v3; // rbx
  CInteractionContextWrapper *v4; // rax

  v2 = (CInteractionContextWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       576LL);
  if ( v2 )
    v3 = CInteractionContextWrapper::CInteractionContextWrapper(v2);
  else
    v3 = 0LL;
  if ( !v3 )
    return 2147942414LL;
  v4 = (CInteractionContextWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       576LL);
  if ( v4 )
    v4 = CInteractionContextWrapper::CInteractionContextWrapper(v4);
  if ( v4 )
    return CInteractionProcessor::Initialize((CInteraction *)((char *)this + 400), v3, v4);
  else
    return 2147942414LL;
}
