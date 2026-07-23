/*
 * XREFs of AlpcpGetMessageAttributeSize32 @ 0x1405298AC
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 *     AlpcpProbeMessageAttributes @ 0x14049D120 (AlpcpProbeMessageAttributes.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeSize32(int a1)
{
  __int64 result; // rax

  result = 8LL;
  if ( a1 < 0 )
    result = 20LL;
  if ( (a1 & 0x40000000) != 0 )
    result = (unsigned int)(result + 16);
  if ( (a1 & 0x20000000) != 0 )
    result = (unsigned int)(result + 20);
  if ( (a1 & 0x10000000) != 0 )
    result = (unsigned int)(result + 16);
  if ( (a1 & 0x8000000) != 0 )
    result = (unsigned int)(result + 24);
  if ( (a1 & 0x2000000) != 0 )
    return (unsigned int)(result + 8);
  return result;
}
