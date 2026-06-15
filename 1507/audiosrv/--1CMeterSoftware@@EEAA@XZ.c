/*
 * XREFs of ??1CMeterSoftware@@EEAA@XZ @ 0x18007154C
 * Callers:
 *     ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x1800718F0 (--_GCMeterSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CMeterSoftware::~CMeterSoftware(CMeterSoftware *this)
{
  __int64 v2; // rsi

  *(_QWORD *)this = &CMeterSoftware::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 5));
  CMeterControlBase::~CMeterControlBase(this);
}
