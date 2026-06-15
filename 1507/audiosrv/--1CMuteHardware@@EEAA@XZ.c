/*
 * XREFs of ??1CMuteHardware@@EEAA@XZ @ 0x18006D2F4
 * Callers:
 *     ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x18006D3B0 (--_GCMuteHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CMuteHardware::~CMuteHardware(CMuteHardware *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi

  *(_QWORD *)this = &CMuteHardware::`vftable';
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 6));
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 5));
  CMuteControlBase::~CMuteControlBase(this);
}
