/*
 * XREFs of PopRequestRead @ 0x1403CE5E8
 * Callers:
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 *     PopDecompressCallback @ 0x1403CE5D4 (PopDecompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     ProducerConsumerBufferComplete @ 0x1403CE50C (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x1403CE93C (ProducerGetBuffer.c)
 *     PopGetIoLocation @ 0x1403CE9D4 (PopGetIoLocation.c)
 *     PopHiberCheckForDebugBreak @ 0x1403CEA18 (PopHiberCheckForDebugBreak.c)
 *     PopHiberChecksumHiberFileData @ 0x1403CEA54 (PopHiberChecksumHiberFileData.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 */

void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r12d
  __int64 v5; // r13
  __int64 v7; // rcx
  ULONG_PTR v8; // r15
  __int64 IoLocation; // rax
  __int64 v10; // rbp
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 Buffer; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  int v17; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  BOOL v27; // r14d
  int v28; // ebx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+10h]
  unsigned int v33; // [rsp+80h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 328);
  v4 = 0;
  v5 = a2;
  while ( *(_QWORD *)(BugCheckParameter3 + 408) )
  {
    v7 = *(unsigned int *)(BugCheckParameter3 + 336);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
      {
        PopHiberChecksumHiberFileData(
          BugCheckParameter3,
          0,
          *(_QWORD *)(BugCheckParameter3 + 384),
          *(_QWORD *)(BugCheckParameter3 + 392),
          *(_QWORD *)(BugCheckParameter3 + 368));
        v20 = __rdtsc();
        qword_140303918 += v20 - *(_QWORD *)(BugCheckParameter3 + 344);
        ProducerConsumerBufferComplete(
          v5,
          v5 + 32,
          *(_QWORD *)(BugCheckParameter3 + 392),
          *(_DWORD *)(BugCheckParameter3 + 368));
        v21 = __rdtsc();
        qword_140303948 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v20;
        v22 = *(_QWORD *)(BugCheckParameter3 + 368);
        v23 = *(_QWORD *)(BugCheckParameter3 + 408) == v22;
        *(_QWORD *)(BugCheckParameter3 + 408) -= v22;
        if ( v23 )
          *(_QWORD *)(v5 + 32) = *(_QWORD *)(v5 + 40);
        v24 = *(_QWORD *)(BugCheckParameter3 + 360);
        *(_QWORD *)(BugCheckParameter3 + 384) += v24;
        *(_QWORD *)(BugCheckParameter3 + 352) += v24;
        *(_QWORD *)(BugCheckParameter3 + 360) = 0LL;
        *(_DWORD *)(BugCheckParameter3 + 336) = 0;
        continue;
      }
      ++qword_140303928;
      v16 = __rdtsc();
      v17 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              2LL,
              BugCheckParameter3 + 376,
              v3);
      BugCheckParameter4 = v17;
      if ( v17 < 0 )
      {
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      v19 = __rdtsc();
      qword_140303940 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v16;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return;
    }
    else
    {
      PopHiberCheckForDebugBreak(v7, 1LL);
      v8 = BugCheckParameter3 + 376;
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), *(_QWORD *)(BugCheckParameter3 + 384), &v31);
      v10 = *(unsigned int *)(BugCheckParameter3 + 416);
      v11 = v33;
      *(_QWORD *)(BugCheckParameter3 + 376) = IoLocation;
      v12 = *(_QWORD *)(BugCheckParameter3 + 408);
      v13 = (v10 << 12) - *(_QWORD *)(BugCheckParameter3 + 352) % (unsigned __int64)(v10 << 12);
      if ( v13 >= v31 )
        v13 = v31;
      if ( v13 < v12 )
        LODWORD(v12) = v13;
      Buffer = ProducerGetBuffer(v5, (unsigned int)v13, (unsigned int)v12, v11);
      v15 = Buffer;
      if ( !Buffer )
        return;
      *(_QWORD *)(BugCheckParameter3 + 392) = Buffer;
      *(_QWORD *)v3 = 0LL;
      *(_DWORD *)(v3 + 40) = v13;
      *(_QWORD *)(v3 + 32) = Buffer & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v3 + 24) = Buffer;
      v25 = ((Buffer & 0xFFF) + v13 + 4095) >> 12;
      *(_DWORD *)(v3 + 44) = Buffer & 0xFFF;
      *(_WORD *)(v3 + 10) = 1;
      *(_WORD *)(v3 + 8) = 8 * (v25 + 6);
      if ( v25 )
      {
        v26 = 0LL;
        do
        {
          ++v4;
          *(_QWORD *)(v3 + 8 * v26 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v15 + (v26 << 12))).QuadPart >> 12;
          v26 = v4;
        }
        while ( v4 < v25 );
        v5 = v32;
        v8 = BugCheckParameter3 + 376;
      }
      v4 = 0;
      v27 = *(_BYTE *)(BugCheckParameter3 + 400) != 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
      v28 = (*(__int64 (__fastcall **)(BOOL, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              v27,
              v8,
              v3);
      if ( v28 == -1073741637 )
      {
        if ( !v27 )
          goto LABEL_33;
        *(_BYTE *)(BugCheckParameter3 + 400) = 0;
        *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
        v28 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                v8,
                v3);
      }
      if ( v28 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_33:
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v28);
      }
      v29 = __rdtsc();
      qword_140303940 += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29)
                       - *(_QWORD *)(BugCheckParameter3 + 344);
      v30 = *(_QWORD *)(BugCheckParameter3 + 408);
      *(_QWORD *)(BugCheckParameter3 + 360) = v13;
      if ( v13 < v30 )
        v30 = v13;
      *(_QWORD *)(BugCheckParameter3 + 368) = v30;
      if ( v27 && v28 )
      {
        *(_DWORD *)(BugCheckParameter3 + 336) = 1;
        continue;
      }
    }
    *(_DWORD *)(BugCheckParameter3 + 336) = 2;
  }
}
