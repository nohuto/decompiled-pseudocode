/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x18000F150
 * Callers:
 *     AudioVolumeGetMasterVolumeLevelScalar @ 0x180039DD0 (AudioVolumeGetMasterVolumeLevelScalar.c)
 * Callees:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18003A6D0 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetMasterVolumeLevelScalar(CVolumeStrip *this, float *a2)
{
  __int64 (__fastcall *v2)(CVolumeControlBase *__hidden, float *); // rdi

  v2 = *(__int64 (__fastcall **)(CVolumeControlBase *__hidden, float *))(**((_QWORD **)this + 30) + 112LL);
  if ( v2 == CVolumeControlBase::GetMasterVolumeLevelScalar )
    return CVolumeControlBase::GetMasterVolumeLevelScalar(*((CVolumeControlBase **)this + 30), a2);
  else
    return v2(*((CVolumeControlBase **)this + 30), a2);
}
