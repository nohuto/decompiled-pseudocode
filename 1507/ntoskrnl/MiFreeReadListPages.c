/*
 * XREFs of MiFreeReadListPages @ 0x14049D6C4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int16 *v1; // rsi
  unsigned __int64 v2; // rbx
  _QWORD *v4; // r9

  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 40) )
  {
    do
    {
      v4 = *(_QWORD **)(a1 + 40);
      *(_QWORD *)(a1 + 40) = *v4;
      if ( !v1 )
        v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(v4[5]) >> 8) & 0x3FF);
      MiReleaseFreshPage((__int64)v4);
      ++v2;
    }
    while ( *(_QWORD *)(a1 + 40) );
    if ( v2 )
      MiReturnFaultCharges((__int64)v1, v2, 1);
  }
}
