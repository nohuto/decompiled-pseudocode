/*
 * XREFs of RtlSetBitsEx @ 0x1400179FC
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x14001766C (RtlFindClearBitsAndSetEx.c)
 *     MiUpdateLargePageBitMap @ 0x140022BE0 (MiUpdateLargePageBitMap.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     MiCheckPoolForContiguousPages @ 0x14009C8C8 (MiCheckPoolForContiguousPages.c)
 *     MiObtainDynamicVa @ 0x1400A3088 (MiObtainDynamicVa.c)
 *     MiMirrorNodeLargePages @ 0x14011246C (MiMirrorNodeLargePages.c)
 *     IopAddPageRangeToPageMaps @ 0x1401C6D3C (IopAddPageRangeToPageMaps.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0D8C (MiAddRangeToPartitionTree.c)
 *     IopLiveDumpFilterAndMarkPage @ 0x1403DAF74 (IopLiveDumpFilterAndMarkPage.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403DB694 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiActOnMirrorBitmap @ 0x14052F1D0 (MiActOnMirrorBitmap.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
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
      v7 = byte_14026F698[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14026F6A8[v4];
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
      v7 = byte_14026F698[v6];
      goto LABEL_4;
    }
  }
}
