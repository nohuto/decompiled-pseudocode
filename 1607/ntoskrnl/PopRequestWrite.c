/*
 * XREFs of PopRequestWrite @ 0x1403CD62C
 * Callers:
 *     PopWriteHiberImage @ 0x1403CCFC4 (PopWriteHiberImage.c)
 *     PopCompressCallback @ 0x1403CD618 (PopCompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     ConsumerGetBuffer @ 0x1403CD99C (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403CE50C (ProducerConsumerBufferComplete.c)
 *     PopGetIoLocation @ 0x1403CE9D4 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x1403CEA54 (PopHiberChecksumHiberFileData.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1403DF0DC (PopGetRemainingHibernateRangeDataSize.c)
 *     MmGetNumberOfPhysicalPages @ 0x140413488 (MmGetNumberOfPhysicalPages.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  ULONG_PTR RemainingHibernateRangeDataSize; // rdi
  __int64 v5; // r15
  ULONG_PTR i; // rbx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  ULONG_PTR v10; // r12
  __int64 v11; // rcx
  __int64 IoLocation; // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  __int64 Buffer; // rax
  int v16; // edx
  __int64 v17; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // r13
  __int64 v26; // r12
  unsigned int j; // ebx
  unsigned __int64 v28; // rsi
  ULONG_PTR v29; // rbp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  ULONG_PTR v33; // rbp
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  ULONG_PTR v36; // [rsp+38h] [rbp-60h]
  __int64 NumberOfPhysicalPages; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter3 + 328);
  RemainingHibernateRangeDataSize = 0LL;
  v5 = a2;
  for ( i = BugCheckParameter3; ; *(_QWORD *)(i + 344) = v28 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(i + 336);
      if ( !v7 )
        break;
      v19 = __rdtsc();
      v20 = v19;
      if ( v7 == 1 )
      {
        BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 128LL))(
                               2LL,
                               i + 376,
                               v3);
        v22 = __rdtsc();
        qword_140303800 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v20;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21LL);
          PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return RemainingHibernateRangeDataSize;
        *(_DWORD *)(i + 336) = 2;
      }
      else
      {
        qword_1403037F8 += v19 - *(_QWORD *)(i + 344);
        ProducerConsumerBufferComplete(v5, v5 + 48, *(_QWORD *)(i + 392), *(unsigned int *)(i + 368));
        v31 = __rdtsc();
        qword_140303820 += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v20;
        qword_1403039B8 += *(_QWORD *)(i + 368);
        dword_1403039C0 += (unsigned __int64)(*(_QWORD *)(i + 360) + 4095LL) >> 12;
        v32 = *(_QWORD *)(i + 360);
        *(_QWORD *)(i + 384) += v32;
        *(_QWORD *)(i + 352) += v32;
        *(_QWORD *)(i + 360) = 0LL;
        *(_DWORD *)(i + 336) = 0;
      }
    }
    v8 = PopWatchdogTimerCount;
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    {
      off_1402F25D0();
      v8 = PopWatchdogTimerCount;
    }
    v9 = *(_QWORD *)(i + 384);
    v10 = i + 376;
    v11 = *(_QWORD *)(i + 160);
    v36 = i + 376;
    PopWatchdogTimerCount = v8 + 1;
    IoLocation = PopGetIoLocation(v11, v9, &v35);
    v13 = *(unsigned int *)(i + 416);
    *(_QWORD *)(i + 376) = IoLocation;
    v14 = (v13 << 12) - *(_QWORD *)(i + 352) % (unsigned __int64)(v13 << 12);
    if ( v14 >= v35 )
      v14 = v35;
    v41 = v14;
    Buffer = ConsumerGetBuffer(v5, &v41, a3);
    v17 = Buffer;
    if ( !Buffer )
      break;
    v23 = *(_QWORD *)(i + 384);
    v24 = v41;
    *(_QWORD *)(i + 392) = Buffer;
    *(_QWORD *)(i + 368) = v24;
    if ( v23 + v14 > qword_1403034D0 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(i + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(i);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages();
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, 8);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_1403034D0, *(unsigned int *)(i + 184), RemainingHibernateRangeDataSize);
    }
    LOBYTE(v16) = 1;
    PopHiberChecksumHiberFileData(i, v16, v23, Buffer, v24);
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 40) = v14;
    *(_QWORD *)(v3 + 24) = v17;
    v25 = ((v17 & 0xFFF) + v14 + 4095) >> 12;
    *(_WORD *)(v3 + 8) = 8 * (v25 + 6);
    *(_QWORD *)(v3 + 32) = v17 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v3 + 44) = v17 & 0xFFF;
    *(_WORD *)(v3 + 10) = 1;
    if ( v25 )
    {
      v26 = 0LL;
      for ( j = 0; j < v25; v26 = j )
      {
        ++j;
        *(_QWORD *)(v3 + 8 * v26 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v17 + (v26 << 12))).QuadPart >> 12;
      }
      i = BugCheckParameter3;
      RemainingHibernateRangeDataSize = 0LL;
      v10 = v36;
    }
    *(_QWORD *)(i + 360) = v14;
    if ( !*(_BYTE *)(i + 400) )
      goto LABEL_28;
    v28 = __rdtsc();
    v29 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(i + 168) + 128LL))(1LL, v10, v3, 0LL);
    v30 = __rdtsc();
    qword_140303800 += (((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30) - v28;
    if ( (_DWORD)v29 == -1073741637 )
    {
      *(_BYTE *)(i + 400) = 0;
    }
    else
    {
      if ( (v29 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v29);
      }
      *(_DWORD *)(i + 336) = ((_DWORD)v29 != 259) + 1;
    }
    if ( !*(_BYTE *)(i + 400) )
    {
LABEL_28:
      v28 = __rdtsc();
      v33 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 64LL))(v10, v3);
      v34 = __rdtsc();
      qword_140303800 += (((unsigned __int64)HIDWORD(v34) << 32) | (unsigned int)v34) - v28;
      if ( (v33 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v33);
      }
      *(_DWORD *)(i + 336) = 2;
    }
    v5 = a2;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v41 == 0;
  return RemainingHibernateRangeDataSize;
}
