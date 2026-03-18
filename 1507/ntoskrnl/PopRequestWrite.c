/*
 * XREFs of PopRequestWrite @ 0x1403F4B2C
 * Callers:
 *     PopWriteHiberImage @ 0x1403F3A20 (PopWriteHiberImage.c)
 *     PopCompressCallback @ 0x1403F4B18 (PopCompressCallback.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400757B0 (MmGetNumberOfPhysicalPages.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     ConsumerGetBuffer @ 0x1403F4E98 (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403F5AE8 (ProducerConsumerBufferComplete.c)
 *     PopGetIoLocation @ 0x1403F5FA8 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x1403F6024 (PopHiberChecksumHiberFileData.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140403634 (PopGetRemainingHibernateRangeDataSize.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  ULONG_PTR RemainingHibernateRangeDataSize; // rdi
  __int64 v5; // rbp
  ULONG_PTR v6; // rbx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  ULONG_PTR v10; // r13
  __int64 v11; // rcx
  __int64 IoLocation; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r15
  __int64 Buffer; // rax
  int v16; // edx
  __int64 v17; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // r12d
  unsigned __int64 v26; // rcx
  __int64 v27; // r13
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 v29; // rsi
  ULONG_PTR v30; // rbp
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  ULONG_PTR v34; // rbp
  unsigned __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v37; // [rsp+30h] [rbp-68h] BYREF
  ULONG_PTR v38; // [rsp+38h] [rbp-60h]
  __int64 NumberOfPhysicalPages; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter3 + 328);
  RemainingHibernateRangeDataSize = 0LL;
  v5 = a2;
  v6 = BugCheckParameter3;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v6 + 336);
    if ( !v7 )
      break;
    v19 = __rdtsc();
    v20 = v19;
    if ( v7 == 1 )
    {
      BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(v6 + 168) + 128LL))(
                             2LL,
                             v6 + 376,
                             v3);
      v22 = __rdtsc();
      qword_14032EBE8 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v20;
      if ( (BugCheckParameter4 & 0x80000000) != 0LL )
      {
        PopInternalAddToDumpFile(v6, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v6 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v6, BugCheckParameter4);
      }
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return RemainingHibernateRangeDataSize;
      *(_DWORD *)(v6 + 336) = 2;
LABEL_26:
      v5 = a2;
    }
    else
    {
      qword_14032EBE0 += v19 - *(_QWORD *)(v6 + 344);
      ProducerConsumerBufferComplete(v5, v5 + 48, *(_QWORD *)(v6 + 392), *(unsigned int *)(v6 + 368));
      v32 = __rdtsc();
      qword_14032EC08 += (((unsigned __int64)HIDWORD(v32) << 32) | (unsigned int)v32) - v20;
      qword_14032ED98 += *(_QWORD *)(v6 + 368);
      dword_14032EDA0 += (unsigned __int64)(*(_QWORD *)(v6 + 360) + 4095LL) >> 12;
      v33 = *(_QWORD *)(v6 + 360);
      *(_QWORD *)(v6 + 384) += v33;
      *(_QWORD *)(v6 + 352) += v33;
      *(_QWORD *)(v6 + 360) = 0LL;
      *(_DWORD *)(v6 + 336) = 0;
    }
  }
  v8 = PopWatchdogTimerCount;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
  {
    off_140321A80();
    v8 = PopWatchdogTimerCount;
  }
  v9 = *(_QWORD *)(v6 + 384);
  v10 = v6 + 376;
  v11 = *(_QWORD *)(v6 + 160);
  v38 = v6 + 376;
  PopWatchdogTimerCount = v8 + 1;
  IoLocation = PopGetIoLocation(v11, v9, &v37);
  v13 = (unsigned int)(*(_DWORD *)(v6 + 416) << 12);
  *(_QWORD *)(v6 + 376) = IoLocation;
  v14 = v13 - *(_QWORD *)(v6 + 352) % v13;
  if ( v14 >= v37 )
    v14 = v37;
  v43 = v14;
  Buffer = ConsumerGetBuffer(v5, &v43, a3);
  v17 = Buffer;
  if ( Buffer )
  {
    v23 = *(_QWORD *)(v6 + 384);
    v24 = v43;
    *(_QWORD *)(v6 + 392) = Buffer;
    *(_QWORD *)(v6 + 368) = v24;
    if ( v23 + v14 > qword_14032E8B0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v6 + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(v6);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v36 + 8);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_14032E8B0, *(unsigned int *)(v6 + 184), RemainingHibernateRangeDataSize);
    }
    LOBYTE(v16) = 1;
    PopHiberChecksumHiberFileData(v6, v16, v23, Buffer, v24);
    *(_WORD *)(v3 + 10) = 1;
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 40) = v14;
    *(_QWORD *)(v3 + 24) = v17;
    v25 = 0;
    v26 = ((v17 & 0xFFF) + v14 + 4095) >> 12;
    v43 = v26;
    *(_WORD *)(v3 + 8) = 8 * (v26 + 6);
    *(_QWORD *)(v3 + 32) = v17 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v3 + 44) = v17 & 0xFFF;
    if ( v26 )
    {
      v27 = 0LL;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress((PVOID)(v17 + (v25++ << 12)));
        *(_QWORD *)(v3 + 8 * v27 + 48) = PhysicalAddress.QuadPart >> 12;
        v27 = v25;
      }
      while ( v25 < ((v17 & 0xFFF) + v14 + 4095) >> 12 );
      v6 = BugCheckParameter3;
      v10 = v38;
    }
    *(_QWORD *)(v6 + 360) = v14;
    if ( !*(_BYTE *)(v6 + 400) )
      goto LABEL_29;
    v29 = __rdtsc();
    v30 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(v6 + 168) + 128LL))(
            1LL,
            v10,
            v3,
            0LL);
    v31 = __rdtsc();
    qword_14032EBE8 += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v29;
    if ( (_DWORD)v30 == -1073741637 )
    {
      *(_BYTE *)(v6 + 400) = 0;
    }
    else
    {
      if ( (v30 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopInternalAddToDumpFile(v6, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v6 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v6, v30);
      }
      *(_DWORD *)(v6 + 336) = ((_DWORD)v30 != 259) + 1;
    }
    if ( !*(_BYTE *)(v6 + 400) )
    {
LABEL_29:
      v29 = __rdtsc();
      v34 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(v6 + 168) + 64LL))(v10, v3);
      v35 = __rdtsc();
      qword_14032EBE8 += (((unsigned __int64)HIDWORD(v35) << 32) | (unsigned int)v35) - v29;
      if ( (v34 & 0x80000000) != 0LL )
      {
        PopInternalAddToDumpFile(v6, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v6 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v6, v34);
      }
      *(_DWORD *)(v6 + 336) = 2;
    }
    *(_QWORD *)(v6 + 344) = v29;
    goto LABEL_26;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v43 == 0;
  return RemainingHibernateRangeDataSize;
}
