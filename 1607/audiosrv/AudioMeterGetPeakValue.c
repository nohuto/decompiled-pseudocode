/*
 * XREFs of AudioMeterGetPeakValue @ 0x180059EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioMeterGetPeakValue(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 200LL))(*a1);
}
