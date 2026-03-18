/*
 * XREFs of PopRequestRead @ 0x1403A2D00
 * Callers:
 *     PopRestoreHiberContext @ 0x1403A2150 (PopRestoreHiberContext.c)
 *     PopDecompressCallback @ 0x1403A2C2C (PopDecompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401E66D8 (PopInternalAddToDumpFile.c)
 *     ProducerConsumerBufferComplete @ 0x1403A2C40 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x1403A304C (ProducerGetBuffer.c)
 *     PopGetIoLocation @ 0x1403A30E4 (PopGetIoLocation.c)
 *     PopHiberCheckForDebugBreak @ 0x1403A3128 (PopHiberCheckForDebugBreak.c)
 *     PopHiberChecksumHiberFileData @ 0x1403A3170 (PopHiberChecksumHiberFileData.c)
 */

void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r15d
  __int64 v5; // r13
  __int64 v7; // rcx
  ULONG_PTR v8; // r12
  __int64 IoLocation; // rax
  int v10; // ebp
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
  __int64 v26; // r12
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  BOOL v28; // r14d
  int v29; // ebx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+10h]
  unsigned int v34; // [rsp+80h] [rbp+18h]

  v34 = a3;
  v33 = a2;
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
        qword_1402DE738 += v20 - *(_QWORD *)(BugCheckParameter3 + 344);
        ProducerConsumerBufferComplete(
          v5,
          v5 + 32,
          *(_QWORD *)(BugCheckParameter3 + 392),
          *(_DWORD *)(BugCheckParameter3 + 368));
        v21 = __rdtsc();
        qword_1402DE768 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v20;
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
      ++qword_1402DE748;
      v16 = __rdtsc();
      v17 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              2LL,
              BugCheckParameter3 + 376,
              v3);
      BugCheckParameter4 = v17;
      if ( v17 < 0 )
      {
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      v19 = __rdtsc();
      qword_1402DE760 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v16;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return;
    }
    else
    {
      PopHiberCheckForDebugBreak(v7, 1LL);
      v8 = BugCheckParameter3 + 376;
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), *(_QWORD *)(BugCheckParameter3 + 384), &v32);
      v10 = *(_DWORD *)(BugCheckParameter3 + 416);
      v11 = v34;
      *(_QWORD *)(BugCheckParameter3 + 376) = IoLocation;
      v12 = *(_QWORD *)(BugCheckParameter3 + 408);
      v13 = (unsigned int)(v10 << 12)
          - *(_QWORD *)(BugCheckParameter3 + 352) % (unsigned __int64)(unsigned int)(v10 << 12);
      if ( v13 >= v32 )
        v13 = v32;
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
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(v15 + (v4++ << 12)));
          *(_QWORD *)(v3 + 8 * v26 + 48) = PhysicalAddress.QuadPart >> 12;
          v26 = v4;
        }
        while ( v4 < v25 );
        v5 = v33;
        v8 = BugCheckParameter3 + 376;
      }
      v4 = 0;
      v28 = *(_BYTE *)(BugCheckParameter3 + 400) != 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
      v29 = (*(__int64 (__fastcall **)(BOOL, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              v28,
              v8,
              v3);
      if ( v29 == -1073741637 )
      {
        if ( !v28 )
          goto LABEL_33;
        *(_BYTE *)(BugCheckParameter3 + 400) = 0;
        *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
        v29 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                v8,
                v3);
      }
      if ( v29 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_33:
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v29);
      }
      v30 = __rdtsc();
      qword_1402DE760 += (((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30)
                       - *(_QWORD *)(BugCheckParameter3 + 344);
      v31 = *(_QWORD *)(BugCheckParameter3 + 408);
      *(_QWORD *)(BugCheckParameter3 + 360) = v13;
      if ( v13 < v31 )
        v31 = v13;
      *(_QWORD *)(BugCheckParameter3 + 368) = v31;
      if ( v28 && v29 )
      {
        *(_DWORD *)(BugCheckParameter3 + 336) = 1;
        continue;
      }
    }
    *(_DWORD *)(BugCheckParameter3 + 336) = 2;
  }
}
