/*
 * XREFs of RtlClearBitsEx @ 0x1400137E8
 * Callers:
 *     NtResetWriteWatch @ 0x140013270 (NtResetWriteWatch.c)
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     MiMirrorNodeLargePages @ 0x1401129DC (MiMirrorNodeLargePages.c)
 *     ExpSaPageGroupFreeMemory @ 0x140135324 (ExpSaPageGroupFreeMemory.c)
 *     RtlFindSetBitsAndClearEx @ 0x14013FF30 (RtlFindSetBitsAndClearEx.c)
 *     MiExtendDynamicBitMap @ 0x140149FCC (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1401C6BDC (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1401C7778 (IopRemovePageFromPageMap.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiDeleteTebRange @ 0x1404B2EE8 (MiDeleteTebRange.c)
 *     MiActOnMirrorBitmap @ 0x14052F710 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140626FFC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C3F0 (MiCleanPhysicalProcessPages.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
      v7 = ~(byte_14026F6B8[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14026F6B8[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 0, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_14026F6C8[v6];
      goto LABEL_4;
    }
  }
}
