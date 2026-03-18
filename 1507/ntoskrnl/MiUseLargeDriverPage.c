/*
 * XREFs of MiUseLargeDriverPage @ 0x140573B54
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiMapWithLargePages @ 0x140158140 (MiMapWithLargePages.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140220484 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x14022F058 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     MiChargeSystemImageCommitment @ 0x140576D98 (MiChargeSystemImageCommitment.c)
 *     LdrRelocateImage @ 0x1405977B4 (LdrRelocateImage.c)
 *     MiUnmapLargeDriver @ 0x1406A1198 (MiUnmapLargeDriver.c)
 */

void *__fastcall MiUseLargeDriverPage(__int64 a1, unsigned int a2, unsigned __int64 a3, const UNICODE_STRING *a4)
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
  unsigned int inited; // eax
  ULONG Invalid; // [rsp+20h] [rbp-88h]
  unsigned __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v30[5]; // [rsp+58h] [rbp-50h] BYREF

  memset(v30, 0, 32);
  result = 0LL;
  v7 = a2;
  if ( (MiFlags & 0x30000) == 0 )
  {
    if ( !byte_14034EA11 )
    {
      for ( i = qword_14034EA20; (__int64 *)i != &qword_14034EA20; i = *(_QWORD *)i )
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
                MiSystemPartition,
                512LL,
                qword_14034EC10,
                v14,
                v14,
                1u,
                0x80000000,
                0x80000000,
                0x200000u,
                &v29) < 0 )
      return 0LL;
    v15 = v29;
    if ( v14 > v13 )
      MiFreeContiguousPages((__int64)MiSystemPartition, v29 + v13, v14 - v13);
    v16 = (void *)MiMapWithLargePages(v15, (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL, 6LL, 1LL, 12);
    v17 = v16;
    if ( !v16 )
    {
      MiFreeContiguousPages((__int64)MiSystemPartition, v15, (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL);
      return 0LL;
    }
    v18 = (unsigned int)((_DWORD)v7 << 12);
    memmove(v16, (const void *)a3, v18);
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
      MiDeleteSystemPagableVm(
        (__int64)dword_14034FF40,
        v10,
        (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        v12,
        1,
        v30);
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
