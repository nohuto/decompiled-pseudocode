/*
 * XREFs of ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x180023030
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x1800230C8 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18002314C (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008DCA4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTransformGroup::UnRegisterNotifiers(CTransformGroup *this)
{
  struct CResource **v1; // rdx
  void *v3; // rdx
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  v1 = (struct CResource **)*((_QWORD *)this + 31);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 60));
    v3 = (void *)*((_QWORD *)this + 31);
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v4)(WPF::g_pProcessHeap, v3);
    *((_QWORD *)this + 31) = 0LL;
  }
  *((_DWORD *)this + 60) = 0;
}
