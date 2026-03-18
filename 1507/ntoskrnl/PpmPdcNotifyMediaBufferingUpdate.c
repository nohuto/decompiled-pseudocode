/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1406BDBA4
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14013258C (PpmMediaBufferingWorker.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14032E5E0;
  if ( qword_14032E5E0 )
    return (__int64 (*)(void))qword_14032E5E0();
  return result;
}
