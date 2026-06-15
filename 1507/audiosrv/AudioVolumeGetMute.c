/*
 * XREFs of AudioVolumeGetMute @ 0x180032550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x18001CF80 (-GetMute@CVolumeStrip@@UEAAJPEAH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioVolumeGetMute(CVolumeStrip **a1, int *a2)
{
  __int64 (__fastcall *v2)(CVolumeStrip *, int *); // rdi

  v2 = *(__int64 (__fastcall **)(CVolumeStrip *, int *))(*(_QWORD *)*a1 + 192LL);
  if ( v2 == CVolumeStrip::GetMute )
    return CVolumeStrip::GetMute(*a1, a2);
  else
    return v2(*a1, a2);
}
