/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x18001A268
 * Callers:
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800036C8 (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001B3E4 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData *this)
{
  char *v1; // rdx
  void *v3; // rdx
  void *v4; // rdx
  void (*v5)(void); // rax
  void (*v6)(void); // rax
  void (*v7)(void); // rax

  v1 = (char *)*((_QWORD *)this + 2);
  if ( v1 != (char *)this + 1174 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v6 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
    else
      v6();
  }
  v3 = (void *)*((_QWORD *)this + 67);
  if ( v3 != *((void **)this + 68) )
  {
    v5 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v5 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
    else
      v5();
    *((_QWORD *)this + 67) = 0LL;
  }
  if ( *((_QWORD *)this + 62) != *((_QWORD *)this + 63) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 62) = 0LL;
  }
  if ( *((_QWORD *)this + 58) != *((_QWORD *)this + 59) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 58) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 53);
  if ( v4 != *((void **)this + 54) )
  {
    v7 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v7 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
    else
      v7();
    *((_QWORD *)this + 53) = 0LL;
  }
}
