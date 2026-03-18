/*
 * XREFs of ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x180113808
 * Callers:
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800A9F1C (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x180113760 (--_GCConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CKernelTransport *__fastcall CKernelTransport::`scalar deleting destructor'(CKernelTransport *this)
{
  void *v2; // rcx

  if ( *(_QWORD *)this )
  {
    NtDCompositionDestroyConnection();
    *(_QWORD *)this = 0LL;
  }
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CKernelTransport *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
