/*
 * XREFs of RtlpWalkHeapInternal @ 0x18004FCE4
 * Callers:
 *     RtlWalkHeap @ 0x18004E8B0 (RtlWalkHeap.c)
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180093700 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpSegWalkHeap @ 0x18004FE60 (RtlpHpSegWalkHeap.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18005A7FC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpWalkHeap @ 0x1800916EC (RtlpWalkHeap.c)
 *     RtlpHpLargeAllocReport @ 0x1800F2320 (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpWalkHeapInternal(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  char v3; // bp
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 *Metadata; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rax

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)RtlpWalkHeap(a1, a2, a3);
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v6 = *a2;
    if ( !*a2 )
      goto LABEL_16;
    if ( (*((_BYTE *)a2 + 18) & 1) != 0 )
    {
      if ( (_WORD)v6 )
        v7 = 0;
      else
        v7 = RtlSparseBitmapCtxCheckBitsInternal(a1, v6 >> 16);
      if ( !v7 )
        v6 -= 16LL;
      *a2 = v6;
    }
  }
  v8 = *a2;
  if ( *a2 )
  {
    if ( (_WORD)v8 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(a1, v8 >> 16) )
    {
LABEL_18:
      if ( *a2 )
      {
        Metadata = (__int64 *)RtlpHpLargeAllocGetMetadata(a1, *a2);
        v11 = 0LL;
        if ( Metadata )
        {
          v11 = *Metadata;
          if ( !*Metadata )
          {
            v11 = Metadata[1];
            if ( !v11 )
            {
              while ( Metadata != *(__int64 **)(a1 + 56) )
              {
                v13 = Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL;
                if ( Metadata != *(__int64 **)(v13 + 8) && *(_QWORD *)(v13 + 8) )
                {
                  v11 = *(_QWORD *)(v13 + 8);
                  goto LABEL_29;
                }
                Metadata = (__int64 *)(Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL);
              }
              goto LABEL_20;
            }
          }
        }
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 56);
        if ( !v11 )
        {
LABEL_20:
          v10 = -2147483622;
          goto LABEL_30;
        }
      }
LABEL_29:
      RtlpHpLargeAllocReport(a1, v11, a2);
      v10 = 0;
      goto LABEL_30;
    }
  }
LABEL_16:
  LOBYTE(a3) = v3;
  v10 = RtlpHpSegWalkHeap(a1, a2, a3);
  if ( v10 == -2147483622 )
  {
    *a2 = 0LL;
    goto LABEL_18;
  }
LABEL_30:
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v10 != -2147483622 && (*((_BYTE *)a2 + 18) & 1) != 0 )
  {
    v14 = *a2;
    if ( (unsigned __int16)*a2 )
      v15 = 0;
    else
      v15 = RtlSparseBitmapCtxCheckBitsInternal(a1, v14 >> 16);
    if ( !v15 )
      v14 += 16LL;
    v16 = a2[1];
    *a2 = v14;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v16 -= 16LL;
    a2[1] = v16;
  }
  return v10;
}
