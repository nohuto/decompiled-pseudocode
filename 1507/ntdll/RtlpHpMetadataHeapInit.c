/*
 * XREFs of RtlpHpMetadataHeapInit @ 0x1800036D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlpMoveHeapBetweenLists @ 0x180005FE4 (RtlpMoveHeapBetweenLists.c)
 */

__int64 __fastcall RtlpHpMetadataHeapInit(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  void *v3; // rax
  unsigned int v4; // ebx

  v3 = (void *)RtlpHpSegHeapCreate(0LL, 0LL, 0LL);
  RtlpHpMetadataHeap = v3;
  if ( !v3 )
    return 0;
  v4 = 1;
  RtlpMoveHeapBetweenLists(v3, 0LL, 1LL);
  if ( !RtlpHpMetadataHeap )
    return 0;
  return v4;
}
