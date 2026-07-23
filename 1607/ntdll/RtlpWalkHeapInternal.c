/*
 * XREFs of RtlpWalkHeapInternal @ 0x18004D354
 * Callers:
 *     RtlWalkHeap @ 0x1800011F0 (RtlWalkHeap.c)
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180095010 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpWalkHeap @ 0x18004D474 (RtlpWalkHeap.c)
 *     RtlpHpSegWalkHeap @ 0x18004DEEC (RtlpHpSegWalkHeap.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F94C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeAllocReport @ 0x1800FBE44 (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpWalkHeapInternal(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  char v3; // bp
  unsigned int v6; // edi
  unsigned __int64 v8; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 *Metadata; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  int v17; // eax

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)RtlpWalkHeap();
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v11 = *a2;
    if ( !*a2 )
      goto LABEL_9;
    if ( (*((_BYTE *)a2 + 18) & 1) != 0 )
    {
      if ( (_WORD)v11 )
        v13 = 0;
      else
        v13 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v11 >> 16, 1LL);
      if ( !v13 )
        v11 -= 16LL;
      *a2 = v11;
    }
  }
  v8 = *a2;
  if ( *a2 )
  {
    if ( (_WORD)v8 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v8 >> 16, 1LL) )
    {
LABEL_16:
      if ( *a2 )
      {
        Metadata = (__int64 *)RtlpHpLargeAllocGetMetadata(a1);
        v10 = 0LL;
        if ( Metadata )
        {
          v10 = *Metadata;
          if ( !*Metadata )
          {
            v10 = Metadata[1];
            if ( !v10 )
            {
              while ( Metadata != *(__int64 **)(a1 + 56) )
              {
                v15 = Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL;
                if ( Metadata != *(__int64 **)(v15 + 8) && *(_QWORD *)(v15 + 8) )
                {
                  v10 = *(_QWORD *)(v15 + 8);
                  goto LABEL_38;
                }
                Metadata = (__int64 *)(Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL);
              }
              goto LABEL_18;
            }
          }
        }
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 56);
        if ( !v10 )
        {
LABEL_18:
          v6 = -2147483622;
          goto LABEL_10;
        }
      }
LABEL_38:
      RtlpHpLargeAllocReport(a1, v10, a2);
      v6 = 0;
      goto LABEL_10;
    }
  }
LABEL_9:
  LOBYTE(a3) = v3;
  v6 = RtlpHpSegWalkHeap(a1, a2, a3);
  if ( v6 == -2147483622 )
  {
    *a2 = 0LL;
    goto LABEL_16;
  }
LABEL_10:
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 != -2147483622 && (*((_BYTE *)a2 + 18) & 1) != 0 )
  {
    v16 = *a2;
    if ( (unsigned __int16)*a2 )
      v17 = 0;
    else
      v17 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v16 >> 16, 1LL);
    if ( !v17 )
      v16 += 16LL;
    v12 = a2[1];
    *a2 = v16;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v12 -= 16LL;
    a2[1] = v12;
  }
  return v6;
}
