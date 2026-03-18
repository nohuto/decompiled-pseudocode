/*
 * XREFs of MiUseLargeDriverPage @ 0x1403CC26C
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     MiMapWithLargePages @ 0x140124B88 (MiMapWithLargePages.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1401DB928 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x1401E1D94 (MiRoundUpToPowerOf2SizeT.c)
 *     MiChargeSystemImageCommitment @ 0x1403CC2F8 (MiChargeSystemImageCommitment.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     LdrRelocateImage @ 0x14052097C (LdrRelocateImage.c)
 *     MiUnmapLargeDriver @ 0x140621B08 (MiUnmapLargeDriver.c)
 */

void *__fastcall MiUseLargeDriverPage(__int64 a1, unsigned int a2, const void *a3, const UNICODE_STRING *a4)
{
  void *result; // rax
  __int64 v7; // rbp
  __int64 i; // rbx
  __int64 v10; // r13
  __int64 j; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r14
  void *v16; // rax
  void *v17; // rbx
  size_t v18; // r14
  PIMAGE_NT_HEADERS v19; // rax
  const CHAR *v20; // rdx
  ULONG v21; // r8d
  ULONG v22; // r9d
  PIMAGE_NT_HEADERS v23; // rbp
  unsigned int VirtualAddress; // ecx
  bool v25; // cc
  void *v26; // rcx
  ULONG_PTR PteAddress; // rax
  unsigned int inited; // eax
  ULONG Invalid; // [rsp+20h] [rbp-88h]
  unsigned __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v31[5]; // [rsp+58h] [rbp-50h] BYREF

  memset(v31, 0, 32);
  result = 0LL;
  v7 = a2;
  if ( (MiFlags & 0x10000) == 0 )
  {
    if ( !byte_1402FE551 )
    {
      for ( i = qword_1402FE560; (__int64 *)i != &qword_1402FE560; i = *(_QWORD *)i )
      {
        if ( RtlEqualUnicodeString(a4, (PCUNICODE_STRING)(i + 16), 1u) )
          goto LABEL_9;
      }
      return 0LL;
    }
LABEL_9:
    if ( a1 )
    {
      v10 = MiSectionControlArea(a1);
      for ( j = v10 + 120; j; j = *(_QWORD *)(j + 16) )
      {
        if ( (*(_BYTE *)(j + 32) & 0x3E) == 0 )
          return 0LL;
      }
    }
    else
    {
      v10 = 0LL;
    }
    v12 = v7;
    v13 = (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v14 = MiRoundUpToPowerOf2SizeT(v13);
    if ( (int)MiFindContiguousPages(
                (unsigned __int64)MiSystemPartition,
                512LL,
                qword_1402FE758,
                v14,
                v14,
                1u,
                0x80000000,
                0x80000000,
                0x200000u,
                &v30) < 0 )
      return 0LL;
    v15 = v30;
    if ( v14 > v13 )
      MiFreeContiguousPages((__int64)MiSystemPartition, v30 + v13, v14 - v13);
    v16 = (void *)MiMapWithLargePages(v15, (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL, 6, 1, 0xCu);
    v17 = v16;
    if ( !v16 )
    {
      MiFreeContiguousPages((__int64)MiSystemPartition, v15, (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL);
      return 0LL;
    }
    v18 = (unsigned int)((_DWORD)v7 << 12);
    memmove(v16, a3, v18);
    v19 = RtlImageNtHeader(v17);
    v23 = v19;
    if ( v19->OptionalHeader.NumberOfRvaAndSizes <= 5 )
      goto LABEL_25;
    VirtualAddress = v19->OptionalHeader.DataDirectory[5].VirtualAddress;
    if ( VirtualAddress )
    {
      v25 = v19->OptionalHeader.DataDirectory[5].Size + VirtualAddress <= (unsigned int)v18;
      v26 = v17;
      if ( !v25 )
      {
LABEL_26:
        MiUnmapLargeDriver(v26, v12);
        return 0LL;
      }
      if ( (LdrRelocateImage(v17, v20, v21, v22, Invalid) & 0x80000000) != 0 )
      {
LABEL_25:
        v26 = v17;
        goto LABEL_26;
      }
    }
    v23->OptionalHeader.ImageBase = (unsigned __int64)v17;
    if ( a1 )
    {
      PteAddress = MiGetPteAddress((unsigned __int64)a3);
      MiDeleteSystemPagableVm(&dword_1402FFA80, v10, PteAddress, v12, 1, v31);
      MiChargeSystemImageCommitment(a1, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      inited = MiInitPerfMemoryFlags(1, 6);
      MiLogPerfMemoryRangeEvent((__int64)v17, 0LL, inited, v13);
    }
    return v17;
  }
  return result;
}
