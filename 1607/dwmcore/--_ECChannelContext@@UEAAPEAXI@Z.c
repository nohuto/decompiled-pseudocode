/*
 * XREFs of ??_ECChannelContext@@UEAAPEAXI@Z @ 0x180039470
 * Callers:
 *     ?Create@CChannelContext@@SAJIKPEAVCConnection@@PEAPEAV1@@Z @ 0x1800B45E4 (-Create@CChannelContext@@SAJIKPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CChannelContext *__fastcall CChannelContext::`vector deleting destructor'(CChannelContext *this, char a2)
{
  __int64 v4; // rcx
  CMILRefCountBase *v5; // rcx

  *(_QWORD *)this = &CChannelContext::`vftable';
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    CMILRefCountBase::Release(v5);
    *((_QWORD *)this + 4) = 0LL;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 5));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CChannelContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
