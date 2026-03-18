/*
 * XREFs of ??_GCConnection@@UEAAPEAXI@Z @ 0x180113760
 * Callers:
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1800A9FBC (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x180113808 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x180113AE4 (--1CChannelTable@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CConnection::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  HANDLE LockSemaphore; // rcx
  HANDLE v5; // rcx
  CKernelTransport *v6; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CConnection::`vftable';
  LockSemaphore = this[4].LockSemaphore;
  if ( LockSemaphore )
  {
    SetEvent(LockSemaphore);
    v5 = this[4].LockSemaphore;
    if ( v5 )
    {
      CloseHandle(v5);
      this[4].LockSemaphore = 0LL;
    }
  }
  v6 = (CKernelTransport *)this[2].LockSemaphore;
  if ( v6 )
  {
    CKernelTransport::`scalar deleting destructor'(v6, a2);
    this[2].LockSemaphore = 0LL;
  }
  CCriticalSection::DeInit(this + 3);
  CChannelTable::~CChannelTable((CChannelTable *)&this->OwningThread);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
