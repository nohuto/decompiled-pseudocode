/*
 * XREFs of AudioVolumeGetMasterVolumeLevelScalar @ 0x1800325A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x18001CFD0 (-GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioVolumeGetMasterVolumeLevelScalar(CVolumeStrip **a1, float *a2)
{
  __int64 (__fastcall *v2)(CVolumeStrip *, float *); // rdi

  v2 = *(__int64 (__fastcall **)(CVolumeStrip *, float *))(*(_QWORD *)*a1 + 120LL);
  if ( v2 == CVolumeStrip::GetMasterVolumeLevelScalar )
    return CVolumeStrip::GetMasterVolumeLevelScalar(*a1, a2);
  else
    return v2(*a1, a2);
}
