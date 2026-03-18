/*
 * XREFs of ??_GCD2DFactory@@EEAAPEAXI@Z @ 0x180163DF8
 * Callers:
 *     ??_ECD2DFactory@@G7EAAPEAXI@Z @ 0x1800C0DB0 (--_ECD2DFactory@@G7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD2DFactory *__fastcall CD2DFactory::`scalar deleting destructor'(CD2DFactory *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CD2DFactory::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &CD2DFactory::`vftable'{for `CMILRefCountBase'};
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DFactory *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
