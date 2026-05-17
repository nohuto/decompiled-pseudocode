/*
 * XREFs of RtlpHpMetadataHeapInit @ 0x1800036D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlpMoveHeapBetweenLists @ 0x180005FE4 (RtlpMoveHeapBetweenLists.c)
 */

__int64 RtlpHpMetadataHeapInit()
{
  __int64 v0; // rax
  unsigned int v1; // ebx

  v0 = RtlpHpSegHeapCreate(0LL, 0LL, 0LL);
  RtlpHpMetadataHeap = v0;
  if ( !v0 )
    return 0;
  v1 = 1;
  RtlpMoveHeapBetweenLists(v0, 0LL, 1LL);
  if ( !RtlpHpMetadataHeap )
    return 0;
  return v1;
}
