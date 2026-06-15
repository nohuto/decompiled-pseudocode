/*
 * XREFs of AudioVolumeGetVolumeRange @ 0x180039BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x18000F1A0 (-GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioVolumeGetVolumeRange(CVolumeStrip **a1, unsigned int a2, float *a3, float *a4, float *a5)
{
  __int64 (__fastcall *v5)(CVolumeStrip *, unsigned int, float *, float *, float *); // rdi

  v5 = *(__int64 (__fastcall **)(CVolumeStrip *, unsigned int, float *, float *, float *))(*(_QWORD *)*a1 + 64LL);
  if ( v5 == CVolumeStrip::GetVolumeRange )
    return CVolumeStrip::GetVolumeRange(*a1, a2, a3, a4, a5);
  else
    return v5(*a1, a2, a3, a4, a5);
}
