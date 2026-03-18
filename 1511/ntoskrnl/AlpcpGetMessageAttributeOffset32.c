/*
 * XREFs of AlpcpGetMessageAttributeOffset32 @ 0x140423FF4
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 *     AlpcpExposeAttributes @ 0x14042C820 (AlpcpExposeAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeOffset32(int a1, int a2)
{
  __int64 v2; // r8
  int v3; // ecx

  v2 = 8LL;
  v3 = ~(2 * a2 - 1) & a1;
  if ( v3 < 0 )
    v2 = 20LL;
  if ( (v3 & 0x40000000) != 0 )
    v2 += 16LL;
  if ( (v3 & 0x20000000) != 0 )
    v2 += 20LL;
  if ( (v3 & 0x10000000) != 0 )
    v2 += 16LL;
  if ( (v3 & 0x8000000) != 0 )
    v2 += 24LL;
  return v2;
}
