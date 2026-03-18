/*
 * XREFs of PoSetHiberRange @ 0x14014D3AC
 * Callers:
 *     RtlMarkHiberPhase @ 0x14014D2A8 (RtlMarkHiberPhase.c)
 *     IoGetDumpHiberRanges @ 0x14014D2F4 (IoGetDumpHiberRanges.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401ECA70 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401ECACC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401EDA0C (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EDAB8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     MiGatherHiberRange @ 0x1403F042C (MiGatherHiberRange.c)
 *     BgkResumePrepare @ 0x1403F1608 (BgkResumePrepare.c)
 *     MmMarkHiberPhase @ 0x1403F16C0 (MmMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPages @ 0x1403F18E8 (MiMarkHiberNotCachedPages.c)
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 *     PopBuildMemoryImageHeader @ 0x1403F1BF0 (PopBuildMemoryImageHeader.c)
 *     PopMarkHiberPhase @ 0x1403F1E98 (PopMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x1403F1FBC (KeMarkHiberPhase.c)
 *     MiMarkKernelPageTablesHelper @ 0x1403F238C (MiMarkKernelPageTablesHelper.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1403F2448 (MiMarkNonPagedHiberPhasePages.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x1403F27A4 (PopBootLoaderTraceCopyPfnList.c)
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x14056A138 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     BgpFwMarkHiberPhase @ 0x14075C564 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopSetRange @ 0x14014D568 (PopSetRange.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmMarkImageForHiberPhase @ 0x1403F2770 (MmMarkImageForHiberPhase.c)
 *     MmGetSectionRange @ 0x1406A1240 (MmGetSectionRange.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  PVOID v5; // rbp
  __int16 v6; // bx
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  PHYSICAL_ADDRESS v11; // r12
  __int64 v12; // r14
  PVOID v13; // [rsp+30h] [rbp-48h]
  unsigned int v14; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = (unsigned __int64)Address;
  v5 = MemoryMap;
  v6 = Flags;
  v13 = MemoryMap;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    if ( (Flags & 0x10000) != 0 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    if ( Length )
      goto LABEL_7;
    goto LABEL_25;
  }
  v5 = (PVOID)qword_14032E680;
  v13 = (PVOID)qword_14032E680;
  if ( !qword_14032E680 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
  v7 = *(unsigned int *)(qword_14032E680 + 184);
  if ( (_DWORD)v7 == 8 )
  {
    if ( (Flags & 0xFFFFBFFF) != 0x10000 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    if ( Length )
    {
LABEL_7:
      if ( (v6 & 4) != 0 )
        v6 = v6 & 0xFFF9 | 2;
      if ( (v6 & 0x4000) != 0 )
      {
        PopSetRange((ULONG_PTR)v5, Tag);
      }
      else
      {
        v8 = v15 >> 12;
        v9 = (Length + v15 + 4095) >> 12;
        while ( v8 < v9 )
        {
          v10 = v8 + 1;
          v11.QuadPart = MmGetPhysicalAddress((PVOID)(v8 << 12)).QuadPart >> 12;
          v12 = 1LL;
          if ( v8 + 1 < v9 )
          {
            do
            {
              if ( v10 + v11.QuadPart - v8 != MmGetPhysicalAddress((PVOID)((v8 << 12) + (v12 << 12))).QuadPart >> 12 )
                break;
              ++v12;
              ++v10;
            }
            while ( v10 < v9 );
            v5 = v13;
          }
          PopSetRange((ULONG_PTR)v5, Tag);
          v8 += v12;
        }
      }
      return;
    }
    if ( (Flags & 0x4000) != 0 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
LABEL_25:
    if ( (Flags & 0x10000) != 0 )
    {
      MmMarkImageForHiberPhase(v15);
      return;
    }
    if ( (int)MmGetSectionRange(v15, &v15, &v14) < 0 )
    {
      if ( (PoDebug & 0x80u) != 0 )
        DbgPrint("PoSetHiberRange: Section for %p not found - skipped\n", (const void *)v15);
      KeBugCheckEx(0xA0u, 2uLL, 0xA10D7uLL, 0LL, 0LL);
    }
    Length = v14;
    goto LABEL_7;
  }
  if ( (_DWORD)v7 != 9 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
}
