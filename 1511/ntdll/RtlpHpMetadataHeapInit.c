/*
 * XREFs of RtlpHpMetadataHeapInit @ 0x18005ABC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMoveHeapBetweenLists @ 0x180055FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 */

__int64 RtlpHpMetadataHeapInit()
{
  __int64 v0; // rax
  unsigned int v1; // ebx

  v0 = RtlpHpSegHeapCreate(0, 0LL, 0LL);
  RtlpHpMetadataHeap = v0;
  if ( !v0 )
    return 0;
  v1 = 1;
  RtlpMoveHeapBetweenLists(v0, 0, 1, 0);
  if ( !RtlpHpMetadataHeap )
    return 0;
  return v1;
}
