/*
 * XREFs of RtlSetBitsEx @ 0x1400653BC
 * Callers:
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     RtlFindClearBitsAndSetEx @ 0x140064FF8 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x140066E20 (MiObtainDynamicVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     MiMirrorNodeLargePages @ 0x14014CB90 (MiMirrorNodeLargePages.c)
 *     MiCheckPoolForContiguousPages @ 0x1401672C4 (MiCheckPoolForContiguousPages.c)
 *     IopAddPageToPageMap @ 0x1401F4364 (IopAddPageToPageMap.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403FF9B0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403FFB28 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiMarkLargePageRange @ 0x1407D4CB4 (MiMarkLargePageRange.c)
 *     MiMarkLargeNonPagedPool @ 0x1407D4E88 (MiMarkLargeNonPagedPool.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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
      v7 = byte_140297800[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_140295400[v4];
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
      v7 = byte_140297800[v6];
      goto LABEL_4;
    }
  }
}
