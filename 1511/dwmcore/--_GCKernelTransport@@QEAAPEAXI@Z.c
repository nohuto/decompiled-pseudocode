/*
 * XREFs of ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1800FF5A8
 * Callers:
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800B489C (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1800FF4C4 (--1CConnection@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
