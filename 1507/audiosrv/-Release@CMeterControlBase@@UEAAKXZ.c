/*
 * XREFs of ?Release@CMeterControlBase@@UEAAKXZ @ 0x18003F550
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x18003DCB0 (--_GCMeterHardware@@EEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterControlBase::Release(CMeterControlBase *this)
{
  unsigned __int32 v1; // edi
  CMeterHardware *(__fastcall *v2)(CMeterHardware *, char); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v2 = *(CMeterHardware *(__fastcall **)(CMeterHardware *, char))(*(_QWORD *)this + 24LL);
    if ( v2 == CMeterHardware::`scalar deleting destructor' )
      CMeterHardware::`scalar deleting destructor'(this, 1);
    else
      v2(this, 1);
  }
  return v1;
}
