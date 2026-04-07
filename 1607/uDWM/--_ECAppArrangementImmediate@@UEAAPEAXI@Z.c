/*
 * XREFs of ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x180002B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800019A4 (--1CAppArrangementBase@@UEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CAppArrangementImmediate *__fastcall CAppArrangementImmediate::`vector deleting destructor'(
        CAppArrangementImmediate *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  v4 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v4 )
    CBaseObject::Release(v4);
  CAppArrangementBase::~CAppArrangementBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAppArrangementImmediate *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
