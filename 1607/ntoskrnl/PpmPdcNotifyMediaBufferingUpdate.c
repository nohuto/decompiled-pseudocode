/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x140675C00
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14010D7EC (PpmMediaBufferingWorker.c)
 * Callees:
 *     <none>
 */

__int64 PpmPdcNotifyMediaBufferingUpdate()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_140328FF0 + 1);
  if ( *(&xmmword_140328FF0 + 1) )
    return (*(&xmmword_140328FF0 + 1))();
  return result;
}
