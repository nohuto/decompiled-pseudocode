/*
 * XREFs of PopDecompressHiberBlocks @ 0x1403CDE5C
 * Callers:
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 * Callees:
 *     RtlDecompressBufferProgress @ 0x140113C60 (RtlDecompressBufferProgress.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401144BC (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     PopReadProducerConsumerBuffer @ 0x1403CE2C0 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x1403CE32C (ProducerConsumerCopyFromContextBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403CE3B0 (ConsumerPeekAndConsumeBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403CE50C (ProducerConsumerBufferComplete.c)
 *     PopHiberCheckForDebugBreak @ 0x1403CEA18 (PopHiberCheckForDebugBreak.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     BgDisplayProgressIndicator @ 0x1407271A4 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(
        _DWORD *BugCheckParameter3,
        _QWORD *a2,
        int a3,
        char a4,
        void (__fastcall *a5)(_DWORD *))
{
  unsigned int v5; // esi
  int v6; // r12d
  int v10; // r9d
  __int64 Number; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // edi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // r9
  _DWORD *v19; // rdi
  _QWORD *v20; // r8
  unsigned __int64 v21; // r12
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // r12
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  _DWORD *v30; // rdi
  unsigned __int64 v31; // r13
  int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  _BOOL8 v35; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  char *v44; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+68h] [rbp-98h]
  _DWORD *ProducerConsumerBuffer; // [rsp+70h] [rbp-90h]
  void (__fastcall *v47)(_DWORD *); // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  char v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v52; // [rsp+A8h] [rbp-58h]
  __int16 v53; // [rsp+AAh] [rbp-56h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+CCh] [rbp-34h]
  char v58; // [rsp+D0h] [rbp-30h] BYREF
  char v59; // [rsp+150h] [rbp+50h] BYREF

  v5 = 0;
  v6 = (int)qword_140303558;
  v47 = a5;
  v48 = 0LL;
  v44 = (char *)qword_140303558;
  v43 = 0;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140303968 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_140303500 )
      qword_140303968 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_140303501
      && ((unsigned int)dword_1403034E4 > 0x640 || !byte_140303500) )
    {
      v37 = __rdtsc();
      if ( byte_1403289E0 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140328D12 = 1;
      }
      v38 = __rdtsc();
      qword_140303950 += (((unsigned __int64)HIDWORD(v38) << 32) | (unsigned int)v38) - v37;
    }
    v42 = 4;
    v12 = ConsumerPeekAndConsumeBuffer(v6, (unsigned int)&v42, a3, v10, (__int64)a2);
    v13 = v12;
    if ( !v12 )
      break;
    ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(v12, 4, (unsigned int)&v49, v6, (__int64)a2, 1);
    v14 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v15 = PopReadProducerConsumerBuffer((int)v13 + 4, v14, (unsigned int)&v59, v6, (__int64)a2, 1);
    v17 = v14;
    v18 = &v58;
    v19 = ProducerConsumerBuffer;
    v20 = (_QWORD *)v15;
    v45 = v13 + v17 + 4;
    v21 = 0LL;
    if ( (unsigned __int8)*ProducerConsumerBuffer )
    {
      v22 = (unsigned __int8)*ProducerConsumerBuffer;
      do
      {
        v23 = *v20 >> 4;
        v16 = v23 + (*v20 & 0xFLL) + 1;
        v21 += (*v20 & 0xFLL) + 1;
        while ( v23 < v16 )
        {
          *(_QWORD *)v18 = v23++;
          v18 += 8;
        }
        ++v20;
        --v22;
      }
      while ( v22 );
      v19 = ProducerConsumerBuffer;
    }
    if ( v21 > (unsigned int)BugCheckParameter3[73] )
    {
      PopCheckpointSystemSleep(31LL);
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v24 = (unsigned int)((_DWORD)v21 << 12);
    v50 = (unsigned int)v24;
    v56 = v24;
    v25 = a2[1];
    v51 = 0LL;
    v52 = 8 * (((unsigned __int64)(v24 + 4095) >> 12) + 6);
    v53 = 0;
    v55 = 0LL;
    v57 = 0;
    MmMapMemoryDumpMdlEx(v25, v16, (__int64)&v51, 1);
    v26 = (*v19 >> 8) & 0x3FFFFF;
    v27 = __rdtsc();
    if ( v26 == (_DWORD)v24 )
    {
      ProducerConsumerCopyFromContextBuffer(v54, (unsigned int)v24, v44, v45);
      a2[9] += __rdtsc() - v27;
      v6 = (int)v44;
      v39 = __rdtsc();
      ProducerConsumerBufferComplete(v44, v44 + 48, v13, v42);
      v40 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v40) << 32) | (unsigned int)v40) - v39;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v26, v44, v45);
      v28 = v42;
      v45 = __rdtsc();
      a2[9] += v45 - v27;
      ProducerConsumerBufferComplete(v44, v44 + 48, v13, v28);
      v29 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29) - v45;
      if ( v47 )
      {
        v47(BugCheckParameter3);
        v48 = qword_140303940;
      }
      v30 = ProducerConsumerBuffer;
      v31 = __rdtsc();
      v32 = RtlDecompressBufferProgress(
              PopCompressMethodMap[(unsigned __int64)(unsigned int)*ProducerConsumerBuffer >> 30],
              v54,
              v24,
              a2[3],
              (*ProducerConsumerBuffer >> 8) & 0x3FFFFF,
              (__int64)&v43,
              a2[2],
              (__int64)v47,
              (__int64)BugCheckParameter3);
      v33 = __rdtsc();
      if ( v32 < 0 || v43 != (_DWORD)v24 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopCheckpointSystemSleep(31LL);
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1D0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      a2[8] += v33 - v31;
      if ( v47 )
        a2[8] = v48 + a2[8] - qword_140303940;
      v6 = (int)v44;
      v34 = v33 - v45;
      v35 = (*v30 & 0xC0000000) >= 0x80000000;
      a2[v35 + 13] += v50;
      a2[v35 + 11] += v34;
    }
    if ( !a4 )
      return v5;
  }
  return (unsigned int)-2147483614;
}
