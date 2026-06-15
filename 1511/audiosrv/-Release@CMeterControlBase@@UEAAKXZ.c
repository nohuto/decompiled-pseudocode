/*
 * XREFs of ?Release@CMeterControlBase@@UEAAKXZ @ 0x180042A60
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x180042CD0 (--_GCMeterHardware@@EEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterControlBase::Release(CMeterControlBase *this)
{
  unsigned __int32 v1; // edi
  void *(__fastcall *v2)(CMeterHardware *__hidden, unsigned int); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v2 = *(void *(__fastcall **)(CMeterHardware *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v2 == CMeterHardware::`scalar deleting destructor' )
      CMeterHardware::`scalar deleting destructor'(this, 1u);
    else
      v2(this, 1u);
  }
  return v1;
}
