/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x14063D46C
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140105218 (PpmMediaBufferingWorker.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1402DE020;
  if ( qword_1402DE020 )
    return (__int64 (*)(void))qword_1402DE020();
  return result;
}
