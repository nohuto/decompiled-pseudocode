/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x18001CFD0
 * Callers:
 *     AudioVolumeGetMasterVolumeLevelScalar @ 0x1800325A0 (AudioVolumeGetMasterVolumeLevelScalar.c)
 * Callees:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180031B60 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
