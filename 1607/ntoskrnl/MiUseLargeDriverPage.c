/*
 * XREFs of MiUseLargeDriverPage @ 0x1404CFA5C
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     MiMapWithLargePages @ 0x14012E7FC (MiMapWithLargePages.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1401EC518 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x1401F75C8 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     MiChargeSystemImageCommitment @ 0x140483538 (MiChargeSystemImageCommitment.c)
 *     LdrRelocateImage @ 0x1405545D4 (LdrRelocateImage.c)
 *     MiUnmapLargeDriver @ 0x140663010 (MiUnmapLargeDriver.c)
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
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v28; // r8
  unsigned int inited; // eax
  ULONG Invalid; // [rsp+20h] [rbp-88h]
  unsigned __int64 v31; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v32[5]; // [rsp+58h] [rbp-50h] BYREF

  memset(v32, 0, 32);
  result = 0LL;
  v7 = a2;
  if ( (MiFlags & 0x4000) == 0 )
  {
    if ( !byte_140326851 )
    {
      for ( i = qword_140326860; (__int64 *)i != &qword_140326860; i = *(_QWORD *)i )
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
      for ( j = v10 + 128; j; j = *(_QWORD *)(j + 16) )
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
                (__int64)MiSystemPartition,
                0x200uLL,
                qword_140326AD0,
                v14,
                v14,
                1u,
                0x80000000,
                0x80000000,
                0x100000,
                (__int64 *)&v31) < 0 )
      return 0LL;
    v15 = v31;
    if ( v14 > v13 )
      MiFreeContiguousPages((__int64)MiSystemPartition, v31 + v13, v14 - v13);
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
      MiGetPteAddress((unsigned __int64)a3);
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v10, v28, v12, 1, v32);
      MiChargeSystemImageCommitment(a1);
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
