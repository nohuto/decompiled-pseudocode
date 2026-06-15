/*
 * XREFs of ??1CVolumeSoftware@@EEAA@XZ @ 0x1800594B8
 * Callers:
 *     ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x180059750 (--_ECVolumeSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CVolumeSoftware::~CVolumeSoftware(CVolumeSoftware *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  if ( *((_QWORD *)this + 32) )
  {
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool);
    *((_QWORD *)this + 32) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  v2 = *((_QWORD *)this + 25);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CVolumeControlBase::~CVolumeControlBase(this);
}
