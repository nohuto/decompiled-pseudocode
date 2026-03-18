/*
 * XREFs of MiFreeReadListPages @ 0x14047B620
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  int *v1; // rsi
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
