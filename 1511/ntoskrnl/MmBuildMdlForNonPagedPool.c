/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1400C8770
 * Callers:
 *     MiCreateMdl @ 0x1400C86FC (MiCreateMdl.c)
 *     HvlGetCoverageData @ 0x1401AE12C (HvlGetCoverageData.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     SmKmIssueVolumeIo @ 0x14020872C (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1406CFB9C (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // r14
  PMDL v2; // r15
  char *v4; // rax
  volatile signed __int64 *v5; // rbx
  BOOL v6; // esi
  unsigned __int64 v7; // rdi
  volatile signed __int64 *v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  CSHORT MdlFlags; // cx
  char v14; // al
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v5 = (volatile signed __int64 *)(((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = 0;
  v7 = ((StartVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v8 = &v5[(MemoryDescriptorList->ByteCount
          + 4095LL
          + (unsigned __int64)((__int64)MemoryDescriptorList->MappedSystemVa & 0xFFF)) >> 12];
  v15 = MI_READ_PTE_LOCK_FREE(v7);
  if ( (v15 & 0x80u) == 0LL )
  {
    v15 = MI_READ_PTE_LOCK_FREE(((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
    v6 = StartVa + 0x200000000000LL <= 0xFFFFFFFFFFFLL;
  }
  else
  {
    v9 = ((StartVa >> 12) & 0x1FF) + (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v15) >> 12) & 0xFFFFFFFFFLL);
  }
  v10 = (__int64)&v2[0x32AAAAAAAALL].StartVa - ((StartVa >> 9) & 0x7FFFFFFFF8LL);
  while ( 1 )
  {
    if ( v6 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v11 & 0x200) == 0 )
      {
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v5, v11 | 0x220, v11);
        }
        while ( v12 != v11 && (v11 & 0x200) == 0 );
      }
      v15 = MI_READ_PTE_LOCK_FREE(v5);
      v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
    }
    *(volatile signed __int64 *)((char *)v5 + v10) = v9;
    MdlFlags = MemoryDescriptorList->MdlFlags;
    if ( (MdlFlags & 0x800) == 0
      && (v9 > qword_1402FE758
       || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0) )
    {
      MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
    }
    if ( ++v5 >= v8 )
      break;
    if ( ((unsigned __int16)v5 & 0xFFF) == 0 )
    {
      v14 = *(_BYTE *)(v7 + 8);
      v7 += 8LL;
      v6 = 0;
      if ( v14 >= 0 )
      {
        v6 = (unsigned __int64)(((__int64)(v7 << 25) >> 16 << 25 >> 16) + 0x200000000000LL) <= 0xFFFFFFFFFFFLL;
      }
      else
      {
        v15 = MI_READ_PTE_LOCK_FREE(v7);
        v9 = (((unsigned __int64)((__int64)((_QWORD)v5 << 25) >> 16) >> 12) & 0x1FF)
           + MI_GET_PAGE_FRAME_FROM_PTE(&v15)
           - 1;
      }
    }
    if ( *(char *)v7 >= 0 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v5);
      v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
    }
    else
    {
      ++v9;
    }
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
