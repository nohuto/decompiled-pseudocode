/*
 * XREFs of PoSetHiberRange @ 0x1401188B0
 * Callers:
 *     RtlMarkHiberPhase @ 0x1401187AC (RtlMarkHiberPhase.c)
 *     IoGetDumpHiberRanges @ 0x1401187F8 (IoGetDumpHiberRanges.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401B25C0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401B261C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401B2D20 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401B2DB4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     MiGatherHiberRange @ 0x14039E054 (MiGatherHiberRange.c)
 *     BgkResumePrepare @ 0x14039ED54 (BgkResumePrepare.c)
 *     MmMarkHiberPhase @ 0x14039EE0C (MmMarkHiberPhase.c)
 *     PopMarkComponentsBootPhase @ 0x14039F020 (PopMarkComponentsBootPhase.c)
 *     PopBuildMemoryImageHeader @ 0x14039F1FC (PopBuildMemoryImageHeader.c)
 *     PopMarkHiberPhase @ 0x14039F3F4 (PopMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x14039F518 (KeMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPages @ 0x14039F7E0 (MiMarkHiberNotCachedPages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14039F8D8 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkKernelPageTablesHelper @ 0x14039F9D0 (MiMarkKernelPageTablesHelper.c)
 *     PopHiberInitializeResources @ 0x1404F61A4 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1404F6464 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     BgpFwMarkHiberPhase @ 0x1406D9578 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x140118AC4 (PopSetRange.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401E66D8 (PopInternalAddToDumpFile.c)
 *     PopSetBootPhaseRange @ 0x14039FA80 (PopSetBootPhaseRange.c)
 *     PopCloneRange @ 0x14039FAC4 (PopCloneRange.c)
 *     MmGetSectionRange @ 0x140621B80 (MmGetSectionRange.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  ULONG_PTR v5; // r10
  ULONG v6; // ebx
  _BYTE *v7; // rdi
  ULONG_PTR v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  PHYSICAL_ADDRESS v13; // r13
  __int64 v14; // rbp
  unsigned __int64 v15; // r13
  unsigned int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = (unsigned __int64)Address;
  v5 = Length;
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
  v7 = (_BYTE *)qword_1402DE0C0;
  if ( !qword_1402DE0C0 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
  v8 = *(unsigned int *)(qword_1402DE0C0 + 184);
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
          PopDiscardRange(v7, v17, (PVOID)v5, Length, Tag);
        }
        else if ( (v9 & 2) != 0 )
        {
          PopCloneRange(v7, v17, v5, Tag);
        }
        else
        {
          if ( (v9 & 0x10000) == 0 )
          {
            PopInternalAddToDumpFile(v7, 464LL, 0LL);
            KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, (ULONG_PTR)v7, 0LL);
          }
          PopSetBootPhaseRange(v7, v17, v5);
        }
      }
      else
      {
        v10 = v17 >> 12;
        v11 = (v5 + v17 + 4095) >> 12;
        if ( v17 >> 12 < v11 )
        {
          do
          {
            v12 = v10 + 1;
            v13.QuadPart = MmGetPhysicalAddress((PVOID)(v10 << 12)).QuadPart >> 12;
            v14 = 1LL;
            if ( v10 + 1 < v11 )
            {
              v15 = v13.QuadPart - v10;
              do
              {
                if ( v12 + v15 != MmGetPhysicalAddress((PVOID)((v10 << 12) + (v14 << 12))).QuadPart >> 12 )
                  break;
                ++v14;
                ++v12;
              }
              while ( v12 < v11 );
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
      KeBugCheckEx(0xA0u, 2uLL, 0xA117AuLL, 0LL, 0LL);
    v5 = v16;
    goto LABEL_7;
  }
  if ( (_DWORD)v8 != 9 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v8, 0LL);
}
