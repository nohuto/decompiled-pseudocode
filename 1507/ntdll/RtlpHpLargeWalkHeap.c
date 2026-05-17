/*
 * XREFs of RtlpHpLargeWalkHeap @ 0x1800F05CC
 * Callers:
 *     RtlpWalkHeapInternal @ 0x1800DB648 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpHpLargeAllocGetMetadata @ 0x1800588CC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeAllocReport @ 0x1800F03D0 (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpHpLargeWalkHeap(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // r11d
  __int64 *Metadata; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rdx

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    Metadata = RtlpHpLargeAllocGetMetadata(a1, *a2);
    v4 = v7;
    if ( Metadata )
    {
      v4 = *Metadata;
      if ( !*Metadata )
      {
        v4 = Metadata[1];
        if ( !v4 )
        {
          while ( Metadata != *(__int64 **)(v3 + 56) )
          {
            v8 = Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL;
            if ( Metadata != *(__int64 **)(v8 + 8) && *(_QWORD *)(v8 + 8) != v7 )
            {
              v4 = *(_QWORD *)(v8 + 8);
              goto LABEL_12;
            }
            Metadata = (__int64 *)(Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL);
          }
          return (unsigned int)-2147483622;
        }
      }
    }
LABEL_12:
    RtlpHpLargeAllocReport(v3, v4, v2);
    return v5;
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    goto LABEL_12;
  return (unsigned int)-2147483622;
}
