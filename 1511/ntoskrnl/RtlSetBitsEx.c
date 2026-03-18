/*
 * XREFs of RtlSetBitsEx @ 0x1400B4BC4
 * Callers:
 *     MiObtainDynamicVa @ 0x140018AD0 (MiObtainDynamicVa.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400B480C (RtlFindClearBitsAndSetEx.c)
 *     MiMirrorNodeLargePages @ 0x140117EE4 (MiMirrorNodeLargePages.c)
 *     MiCheckPoolForContiguousPages @ 0x140137FA4 (MiCheckPoolForContiguousPages.c)
 *     IopAddPageRangeToPageMaps @ 0x1401B8F50 (IopAddPageRangeToPageMaps.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403AF490 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403AF608 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiActOnMirrorBitmap @ 0x1404F60B4 (MiActOnMirrorBitmap.c)
 *     MiMarkLargePageRanges @ 0x140749388 (MiMarkLargePageRanges.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = byte_140247340[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_1402453A0[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 255, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_140247340[v6];
      goto LABEL_4;
    }
  }
}
