/*
 * XREFs of AudioVolumeGetVolumeRange @ 0x180073300
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioVolumeGetVolumeRange(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, a2, a3, a4);
}
