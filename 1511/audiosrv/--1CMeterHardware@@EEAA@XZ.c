/*
 * XREFs of ??1CMeterHardware@@EEAA@XZ @ 0x180043090
 * Callers:
 *     ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x180042CD0 (--_GCMeterHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CMeterHardware::~CMeterHardware(CMeterHardware *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi

  *(_QWORD *)this = &CMeterHardware::`vftable';
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 6));
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 5));
  CMeterControlBase::~CMeterControlBase(this);
}
