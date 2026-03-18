/*
 * XREFs of ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1800E0E88
 * Callers:
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800943D8 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1800E0DA4 (--1CConnection@@UEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
