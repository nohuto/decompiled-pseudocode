/*
 * XREFs of PoSetHiberRange @ 0x1401133D0
 * Callers:
 *     RtlMarkHiberPhase @ 0x1401132CC (RtlMarkHiberPhase.c)
 *     IoGetDumpHiberRanges @ 0x140113318 (IoGetDumpHiberRanges.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401BEDF0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401BEE4C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401BF590 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401BF624 (HvlpMarkHypervisorPagesForHibernation.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x1403C973C (PopBootLoaderTraceCopyPfnList.c)
 *     MiGatherHiberRange @ 0x1403C97D4 (MiGatherHiberRange.c)
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 *     PopBuildMemoryImageHeader @ 0x1403CAA04 (PopBuildMemoryImageHeader.c)
 *     KdMarkHiberPhase @ 0x1403CABD4 (KdMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x1403CAC58 (PopMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x1403CAD7C (MmMarkHiberPhase.c)
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 *     KeMarkHiberPhase @ 0x1403CB1C8 (KeMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPages @ 0x1403CB4A0 (MiMarkHiberNotCachedPages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1403CB5A8 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkKernelPageTablesHelper @ 0x1403CB6B0 (MiMarkKernelPageTablesHelper.c)
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x14052FAC4 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     BgpFwMarkHiberPhase @ 0x1407253AC (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x1401135F8 (PopSetRange.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     PopSetBootPhaseRange @ 0x1403CB780 (PopSetBootPhaseRange.c)
 *     PopCloneRange @ 0x1403CB7FC (PopCloneRange.c)
 *     MmGetSectionRange @ 0x14052FFB0 (MmGetSectionRange.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  ULONG_PTR LowPart; // r10
  ULONG v6; // ebx
  _BYTE *v7; // rdi
  ULONG_PTR v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  PHYSICAL_ADDRESS v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  PHYSICAL_ADDRESS v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = (unsigned __int64)Address;
  LowPart = Length;
  v6 = Flags;
  v7 = MemoryMap;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    if ( (Flags & 0x10000) != 0 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    if ( Length )
      goto LABEL_7;
    goto LABEL_29;
  }
  v7 = (_BYTE *)qword_1403033E0;
  if ( !qword_1403033E0 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
  v8 = *(unsigned int *)(qword_1403033E0 + 184);
  if ( (_DWORD)v8 == 8 )
  {
    if ( (Flags & 0xFFFFBFFF) != 0x10000 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    if ( Length )
    {
LABEL_7:
      if ( (v6 & 4) != 0 )
        v6 = v6 & 0xFFFFFFF9 | 2;
      if ( (v6 & 0x4000) != 0 )
      {
        v9 = v6 & 0xFFFFBFFF;
        if ( v7[28] )
        {
          PopInternalAddToDumpFile(v7, 464LL, 0LL);
          KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, (ULONG_PTR)v7, 0LL);
        }
        if ( (v9 & 0x8000) != 0 )
        {
          PopDiscardRange(v7, v17, (PVOID)LowPart, Length, Tag);
        }
        else if ( (v9 & 2) != 0 )
        {
          PopCloneRange(v7, v17, LowPart, Tag);
        }
        else
        {
          if ( (v9 & 0x10000) == 0 )
          {
            PopInternalAddToDumpFile(v7, 464LL, 0LL);
            KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, (ULONG_PTR)v7, 0LL);
          }
          PopSetBootPhaseRange(v7, v17, LowPart);
        }
      }
      else
      {
        v10 = v17 >> 12;
        v11 = (LowPart + v17 + 4095) >> 12;
        if ( v17 >> 12 < v11 )
        {
          do
          {
            v12.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v10 << 12)).QuadPart >> 12;
            v13 = v10 + 1;
            v16 = v12;
            v14 = 1LL;
            if ( v10 + 1 < v11 )
            {
              v15 = v12.QuadPart - v10;
              do
              {
                if ( v15 + v13 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v10 << 12) + (v14 << 12))).QuadPart >> 12 )
                  break;
                ++v14;
                ++v13;
              }
              while ( v13 < v11 );
            }
            PopSetRange((ULONG_PTR)v7, v6);
            v10 += v14;
          }
          while ( v10 < v11 );
        }
      }
      return;
    }
    if ( (Flags & 0x4000) != 0 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
LABEL_29:
    if ( (Flags & 0x10000) != 0 )
    {
      MmMarkImageForHiberPhase((PVOID)v17, Flags, Address, 0LL, Tag);
      return;
    }
    if ( (int)MmGetSectionRange(v17, &v17, &v16) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA10DFuLL, 0LL, 0LL);
    LowPart = v16.LowPart;
    goto LABEL_7;
  }
  if ( (_DWORD)v8 != 9 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v8, 0LL);
}
