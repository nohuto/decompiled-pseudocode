/*
 * XREFs of AudioVolumeGetStepInfo @ 0x180059F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeGetStepInfo(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 160LL))(*a1);
}
