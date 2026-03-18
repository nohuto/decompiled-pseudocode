/*
 * XREFs of AlpcpGetMessageAttributeSize32 @ 0x1404BA248
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 *     AlpcpProbeMessageAttributes @ 0x140480C64 (AlpcpProbeMessageAttributes.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeSize32(int a1)
{
  unsigned int v1; // edx

  v1 = 8;
  if ( a1 < 0 )
    v1 = 20;
  if ( (a1 & 0x40000000) != 0 )
    v1 += 16;
  if ( (a1 & 0x20000000) != 0 )
    v1 += 20;
  if ( (a1 & 0x10000000) != 0 )
    v1 += 16;
  if ( (a1 & 0x8000000) != 0 )
    v1 += 24;
  return v1;
}
