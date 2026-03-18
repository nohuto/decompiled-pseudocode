/*
 * XREFs of DrvStopPresenterView @ 0x1C0085C10
 * Callers:
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *DrvStopPresenterView())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C01043B8;
  if ( qword_1C01043B8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01043B8(0LL, 0LL);
  return result;
}
