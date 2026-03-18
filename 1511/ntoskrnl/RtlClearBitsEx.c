/*
 * XREFs of RtlClearBitsEx @ 0x1400A6650
 * Callers:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     MiScanLeafNonPagedPool @ 0x1400B3980 (MiScanLeafNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     RtlFindSetBitsAndClearEx @ 0x1400E4E74 (RtlFindSetBitsAndClearEx.c)
 *     MiMirrorNodeLargePages @ 0x140117EE4 (MiMirrorNodeLargePages.c)
 *     ExpSaPageGroupFreeMemory @ 0x14012E86C (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1401405C0 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1401B8F50 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1401B9AAC (IopRemovePageFromPageMap.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 *     MiActOnMirrorBitmap @ 0x1404F60B4 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1405FD2D4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // rbx
  char v7; // al

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    if ( v5 + a3 <= 8 )
    {
      v7 = ~(byte_140247340[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_140247340[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset(v6, 0, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_1402453A0[v3];
      goto LABEL_4;
    }
  }
}
