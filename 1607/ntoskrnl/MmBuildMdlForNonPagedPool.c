/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1400FA930
 * Callers:
 *     MiCreateMdl @ 0x1400FA8C0 (MiCreateMdl.c)
 *     HvlGetCoverageData @ 0x1401BA780 (HvlGetCoverageData.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     SmKmIssueVolumeIo @ 0x140220978 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1406A9D20 (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  _QWORD *v1; // rbp
  unsigned __int64 StartVa; // r11
  PMDL v3; // rdi
  char *v4; // rax
  unsigned __int64 v6; // rdx
  int v7; // r9d
  unsigned __int64 v8; // r11
  volatile signed __int64 *v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // r9d
  char v13; // al
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rax
  int v20; // r9d
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  unsigned __int64 v23; // r10
  __int16 v24; // ax
  __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  CSHORT MdlFlags; // r8
  __int64 v29; // [rsp+40h] [rbp+0h] BYREF

  v1 = (_QWORD *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL);
  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v3 = MemoryDescriptorList + 1;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v6 = -1LL;
  v7 = 0;
  v8 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (volatile signed __int64 *)(v8
                                 + 8
                                 * ((MemoryDescriptorList->ByteCount
                                   + 4095LL
                                   + (unsigned __int64)((__int64)MemoryDescriptorList->MappedSystemVa & 0xFFF)) >> 12));
  if ( v8 < (unsigned __int64)v9 )
  {
    while ( v7 )
    {
      if ( v7 < 2 )
        goto LABEL_25;
      if ( v7 == 3 )
        goto LABEL_21;
LABEL_24:
      *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = MI_READ_PTE_LOCK_FREE(v8);
      v6 = MI_GET_PAGE_FRAME_FROM_PTE(v1 + 1);
LABEL_25:
      v3->Next = (struct _MDL *)v6;
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0
        && (v6 > qword_140326AD0
         || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0) )
      {
        MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
      }
      v3 = (PMDL)((char *)v3 + 8);
      v8 += 8LL;
      if ( (v8 & 0xFFF) != 0 )
      {
        if ( v7 == 1 )
          ++v6;
      }
      else
      {
        v7 = 0;
      }
      if ( v8 >= (unsigned __int64)v9 )
        goto LABEL_35;
    }
    v10 = (((unsigned __int64)((__int64)(v8 << 25) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v10;
    v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v11;
    v12 = 3;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = ((v11 >> 9) & 0x7FFFFFFFF8LL)
                                                                         - 0x98000000000LL;
    do
    {
      v13 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                            + 0x10
                                            + 8LL * (unsigned int)(v12 - 1)));
      if ( (v13 & 1) == 0 )
        break;
      if ( v13 < 0 )
      {
        if ( v12 != -1 )
        {
          v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v15;
          v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v16;
          v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v17;
          v18 = 4;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((v17 >> 9) & 0x7FFFFFFFF8LL)
                                                                               - 0x98000000000LL;
          do
          {
            v19 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 0x28
                                                  + 8LL * (unsigned int)(v18 - 1)));
            *v1 = v19;
          }
          while ( v18 && (v19 & 0x80u) == 0LL );
          v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) >> 12) & 0xFFFFFFFFFLL;
          if ( v20 )
          {
            v22 = 1LL;
            v23 = v21 >> 12;
            do
            {
              v24 = v23;
              v23 >>= 9;
              v25 = v22 * (v24 & 0x1FF);
              v22 <<= 9;
              v6 += v25;
              --v20;
            }
            while ( v20 );
          }
          v7 = 1;
          goto LABEL_25;
        }
        break;
      }
    }
    while ( v12 );
    if ( v14 < qword_140327F60[0] || v14 >= qword_140327F60[0] + 0x100000000000LL )
      goto LABEL_24;
LABEL_21:
    v26 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v26 & 0x200) == 0 )
    {
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v26 | 0x220, v26);
      }
      while ( v27 != v26 && (v26 & 0x200) == 0 );
    }
    goto LABEL_24;
  }
LABEL_35:
  MemoryDescriptorList->MdlFlags |= 4u;
}
