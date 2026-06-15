/*
 * XREFs of ??1CVolumeHardware@@EEAA@XZ @ 0x18006CE04
 * Callers:
 *     ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x18006CEC0 (--_ECVolumeHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CVolumeHardware::~CVolumeHardware(CVolumeHardware *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi

  *(_QWORD *)this = &CVolumeHardware::`vftable';
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 12));
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 11));
  CVolumeControlBase::~CVolumeControlBase(this);
}
