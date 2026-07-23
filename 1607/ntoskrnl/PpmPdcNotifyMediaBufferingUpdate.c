/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x140675CE4
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14010DD50 (PpmMediaBufferingWorker.c)
 * Callees:
 *     <none>
 */

__int64 PpmPdcNotifyMediaBufferingUpdate()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_140329030 + 1);
  if ( *(&xmmword_140329030 + 1) )
    return (*(&xmmword_140329030 + 1))();
  return result;
}
