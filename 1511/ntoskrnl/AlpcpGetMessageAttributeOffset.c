/*
 * XREFs of AlpcpGetMessageAttributeOffset @ 0x14042C940
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 *     AlpcpExposeAttributes @ 0x14042C820 (AlpcpExposeAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeOffset(int a1, int a2)
{
  __int64 v2; // r8
  int v3; // ecx

  v2 = 8LL;
  v3 = ~(2 * a2 - 1) & a1;
  if ( v3 < 0 )
    v2 = 32LL;
  if ( (v3 & 0x40000000) != 0 )
    v2 += 32LL;
  if ( (v3 & 0x20000000) != 0 )
    v2 += 32LL;
  if ( (v3 & 0x10000000) != 0 )
    v2 += 24LL;
  if ( (v3 & 0x8000000) != 0 )
    return v2 + 24;
  else
    return v2;
}
