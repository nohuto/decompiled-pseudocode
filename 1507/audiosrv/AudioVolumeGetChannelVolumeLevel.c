/*
 * XREFs of AudioVolumeGetChannelVolumeLevel @ 0x180073190
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioVolumeGetChannelVolumeLevel(_QWORD *a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 144LL))(*a1, a2, a3);
}
