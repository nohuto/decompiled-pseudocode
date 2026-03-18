/*
 * XREFs of MiFreeReadListPages @ 0x14042C7D4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x14042C750 (MiReleaseReadListResources.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400AC5F4 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x1400B2F88 (MiReturnFaultCharges.c)
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
