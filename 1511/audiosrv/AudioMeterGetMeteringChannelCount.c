/*
 * XREFs of AudioMeterGetMeteringChannelCount @ 0x180070FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioMeterGetMeteringChannelCount(_QWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 208LL))(*a1, a2);
}
