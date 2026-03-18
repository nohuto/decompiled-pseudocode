/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x140653CA4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 (__fastcall *__fastcall CmpSystemHiveHysteresisWorker(void *a1))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  ExFreePoolWithTag(a1, 0);
  result = CmpSystemHiveHysteresisCallback;
  if ( CmpSystemHiveHysteresisCallback )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))CmpSystemHiveHysteresisCallback(
                                                     CmpSystemHiveHysteresisContext,
                                                     (unsigned int)CmpSystemHiveHysteresisHitRatio);
  return result;
}
