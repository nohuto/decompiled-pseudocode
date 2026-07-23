/*
 * XREFs of RtlSetBitsEx @ 0x14001757C
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x1400171EC (RtlFindClearBitsAndSetEx.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiCheckPoolForContiguousPages @ 0x14009C0C8 (MiCheckPoolForContiguousPages.c)
 *     MiObtainDynamicVa @ 0x1400A19B0 (MiObtainDynamicVa.c)
 *     MiMirrorNodeLargePages @ 0x1401129DC (MiMirrorNodeLargePages.c)
 *     IopAddPageRangeToPageMaps @ 0x1401C6BDC (IopAddPageRangeToPageMaps.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0BB8 (MiAddRangeToPartitionTree.c)
 *     IopLiveDumpFilterAndMarkPage @ 0x1403DAF74 (IopLiveDumpFilterAndMarkPage.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403DB694 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiActOnMirrorBitmap @ 0x14052F710 (MiActOnMirrorBitmap.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
      v7 = byte_14026F6B8[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14026F6C8[v4];
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
      v7 = byte_14026F6B8[v6];
      goto LABEL_4;
    }
  }
}
