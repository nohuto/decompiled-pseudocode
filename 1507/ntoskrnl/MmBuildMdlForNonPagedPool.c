/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1400DFCC0
 * Callers:
 *     MiCreateMdl @ 0x1400DFC50 (MiCreateMdl.c)
 *     HvlGetCoverageData @ 0x1401E4A7C (HvlGetCoverageData.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     SmKmIssueVolumeIo @ 0x1402579C0 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140753668 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MiSetNonPagedPoolNoSteal @ 0x1400E01E0 (MiSetNonPagedPoolNoSteal.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // r9
  PMDL v2; // r14
  char *v4; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  BOOL v7; // ebx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 MdlFlags; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+50h] [rbp+8h] BYREF

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v5 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((StartVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v7 = 0;
  PteShadow = *(_QWORD *)v6;
  v9 = v5
     + 8
     * ((MemoryDescriptorList->ByteCount
       + 4095LL
       + (unsigned __int64)((__int64)MemoryDescriptorList->MappedSystemVa & 0xFFF)) >> 12);
  if ( v6 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(((StartVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *(_QWORD *)v6);
  v28 = PteShadow;
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v11 = *(_QWORD *)v5;
    if ( v5 + 0x90482413000LL <= 0x7F8 )
      v11 = MiReadPteShadow(v5, v11);
    v28 = v11;
    if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8 )
      v11 = MiReadPteShadow(&v28, v11);
    v10 = (v11 >> 12) & 0xFFFFFFFFFLL;
    if ( StartVa + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
      v7 = 1;
  }
  else
  {
    if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v28, PteShadow);
    v10 = ((PteShadow >> 12) & 0xFFFFFFFFFLL) + ((StartVa >> 12) & 0x1FF);
  }
  while ( 1 )
  {
    if ( v7 )
    {
      MiSetNonPagedPoolNoSteal(v5);
      v13 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v13)
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v14 = *(_QWORD *)&Process[2].ProcessLock;
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v15 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
      }
      v28 = v13;
      if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v13)
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v16 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)&v28 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v17 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
      }
      v10 = (v13 >> 12) & 0xFFFFFFFFFLL;
    }
    v2->Next = (struct _MDL *)v10;
    MdlFlags = (unsigned __int16)MemoryDescriptorList->MdlFlags;
    if ( (MdlFlags & 0x800) == 0
      && (v10 > qword_14034EC10
       || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0) )
    {
      LOWORD(MdlFlags) = MdlFlags | 0x800;
      MemoryDescriptorList->MdlFlags = MdlFlags;
    }
    v2 = (PMDL)((char *)v2 + 8);
    v5 += 8LL;
    if ( v5 >= v9 )
      break;
    if ( (v5 & 0xFFF) == 0 )
    {
      v19 = *(_QWORD *)(v6 + 8);
      v6 += 8LL;
      v7 = 0;
      if ( (v19 & 0x80u) == 0LL )
      {
        MdlFlags = 0xFFFFFFFFFFFLL;
        v7 = (unsigned __int64)(((__int64)(v6 << 25) >> 16 << 25 >> 16) + 0x200000000000LL) <= 0xFFFFFFFFFFFLL;
      }
      else
      {
        if ( v6 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(MdlFlags, v10)
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          MdlFlags = (__int64)KeGetCurrentThread()->ApcState.Process;
          v10 = *(_QWORD *)(MdlFlags + 1520);
          if ( v10 )
          {
            v20 = *(_QWORD *)(v10 + 8 * ((v6 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v19 |= 0x20uLL;
            if ( (v20 & 0x42) != 0 )
              v19 |= 0x42uLL;
          }
        }
        v28 = v19;
        if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
          && (unsigned int)MiPteHasShadow(MdlFlags, v10)
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          MdlFlags = (__int64)KeGetCurrentThread()->ApcState.Process;
          v21 = *(_QWORD *)(MdlFlags + 1520);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v28 >> 3) & 0x1FF));
            if ( (v22 & 0x20) != 0 )
              v19 |= 0x20uLL;
            if ( (v22 & 0x42) != 0 )
              v19 |= 0x42uLL;
          }
        }
        v10 = (((unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12) & 0x1FF) + ((v19 >> 12) & 0xFFFFFFFFFLL) - 1;
      }
    }
    if ( *(char *)v6 >= 0 )
    {
      v23 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(MdlFlags, v23)
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        MdlFlags = (__int64)KeGetCurrentThread()->ApcState.Process;
        v24 = *(_QWORD *)(MdlFlags + 1520);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v25 & 0x20) != 0 )
            v23 |= 0x20uLL;
          if ( (v25 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
      }
      v28 = v23;
      if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
        && (unsigned int)MiPteHasShadow(MdlFlags, v23)
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        v26 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 8 * (((unsigned __int64)&v28 >> 3) & 0x1FF));
          if ( (v27 & 0x20) != 0 )
            v23 |= 0x20uLL;
          if ( (v27 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
      }
      v10 = (v23 >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      ++v10;
    }
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
