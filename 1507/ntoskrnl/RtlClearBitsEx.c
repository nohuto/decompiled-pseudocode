/*
 * XREFs of RtlClearBitsEx @ 0x14003ED80
 * Callers:
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiScanLeafNonPagedPool @ 0x140063F60 (MiScanLeafNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     RtlFindSetBitsAndClearEx @ 0x1400FC974 (RtlFindSetBitsAndClearEx.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiExpandPagedPool @ 0x140128FF4 (MiExpandPagedPool.c)
 *     MiMirrorNodeLargePages @ 0x14014CB90 (MiMirrorNodeLargePages.c)
 *     MiExtendDynamicBitMap @ 0x14016E40C (MiExtendDynamicBitMap.c)
 *     IopRemovePageFromPageMap @ 0x1401F4D24 (IopRemovePageFromPageMap.c)
 *     ExpSaPageGroupFreeMemory @ 0x1402663F8 (ExpSaPageGroupFreeMemory.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140677C2C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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
      v7 = ~(byte_140297800[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140297800[v4];
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
      v7 = byte_140295400[v6];
      goto LABEL_4;
    }
  }
}
