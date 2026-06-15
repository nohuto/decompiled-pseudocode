/*
 * XREFs of ??1CMeterSoftware@@EEAA@XZ @ 0x1800593C8
 * Callers:
 *     ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x1800596D0 (--_GCMeterSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMeterSoftware::~CMeterSoftware(CMeterSoftware *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CMeterSoftware::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CMeterControlBase::~CMeterControlBase(this);
}
