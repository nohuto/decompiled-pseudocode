/*
 * XREFs of RtlClearBitsEx @ 0x140013C68
 * Callers:
 *     NtResetWriteWatch @ 0x1400136F0 (NtResetWriteWatch.c)
 *     MiScanLeafNonPagedPool @ 0x14001ADE0 (MiScanLeafNonPagedPool.c)
 *     MiUpdateLargePageBitMap @ 0x140022BE0 (MiUpdateLargePageBitMap.c)
 *     MiExpandPagedPool @ 0x1400A296C (MiExpandPagedPool.c)
 *     MiReturnSystemVa @ 0x1400C08D0 (MiReturnSystemVa.c)
 *     MiExpandNonPagedPool @ 0x140101824 (MiExpandNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 *     MiMirrorNodeLargePages @ 0x14011246C (MiMirrorNodeLargePages.c)
 *     ExpSaPageGroupFreeMemory @ 0x140134DB4 (ExpSaPageGroupFreeMemory.c)
 *     RtlFindSetBitsAndClearEx @ 0x14013F9C0 (RtlFindSetBitsAndClearEx.c)
 *     MiExtendDynamicBitMap @ 0x140149A5C (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1401C6D3C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1401C78D8 (IopRemovePageFromPageMap.c)
 *     MiActOnPartitionNodePages @ 0x1401F07A4 (MiActOnPartitionNodePages.c)
 *     MiDeleteTebRange @ 0x1404CD4BC (MiDeleteTebRange.c)
 *     MiActOnMirrorBitmap @ 0x14052F1D0 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140626F48 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
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
      v7 = ~(byte_14026F698[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_14026F698[v4];
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
      v7 = byte_14026F6A8[v6];
      goto LABEL_4;
    }
  }
}
