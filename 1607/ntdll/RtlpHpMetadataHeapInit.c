/*
 * XREFs of RtlpHpMetadataHeapInit @ 0x18007F410
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMoveHeapBetweenLists @ 0x18002D944 (RtlpMoveHeapBetweenLists.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
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
  RtlpMoveHeapBetweenLists((__int64)v3, 0, 1, 0);
  if ( !RtlpHpMetadataHeap )
    return 0;
  return v4;
}
