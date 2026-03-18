/*
 * XREFs of PopDecompressHiberBlocks @ 0x1403F53D4
 * Callers:
 *     PopRestoreHiberContext @ 0x1403F4F20 (PopRestoreHiberContext.c)
 * Callees:
 *     RtlDecompressBufferProgress @ 0x14014DD4C (RtlDecompressBufferProgress.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     PopReadProducerConsumerBuffer @ 0x1403F5870 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x1403F58DC (ProducerConsumerCopyFromContextBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403F5960 (ConsumerPeekAndConsumeBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403F5AE8 (ProducerConsumerBufferComplete.c)
 *     PopHiberCheckForDebugBreak @ 0x1403F5FEC (PopHiberCheckForDebugBreak.c)
 *     BgDisplayProgressIndicator @ 0x14075E2BC (BgDisplayProgressIndicator.c)
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
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // edi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // r9
  _DWORD *v21; // rdi
  _QWORD *v22; // r8
  unsigned __int64 v23; // r12
  __int64 v24; // r10
  unsigned __int64 v25; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  _DWORD *v34; // rdi
  unsigned __int64 v35; // r13
  int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _BOOL8 v39; // rax
  unsigned int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  char *v44; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+68h] [rbp-98h]
  _DWORD *ProducerConsumerBuffer; // [rsp+70h] [rbp-90h]
  void (__fastcall *v47)(_DWORD *); // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  char v50; // [rsp+90h] [rbp-70h] BYREF
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
  v6 = (int)qword_14032E938;
  v47 = a5;
  v48 = 0LL;
  v44 = (char *)qword_14032E938;
  v43 = 0;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_14032ED48 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_14032E8E0 )
      qword_14032ED48 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_14032E8E1
      && (!byte_14032E8E0 || (unsigned int)dword_14032E8C4 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_1403538D0 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_1403539A0 = 1;
      }
      v13 = __rdtsc();
      qword_14032ED30 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
    }
    v42 = 4;
    v14 = ConsumerPeekAndConsumeBuffer(v6, (unsigned int)&v42, a3, v10, (__int64)a2);
    v15 = v14;
    if ( !v14 )
      break;
    ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(v14, 4, (unsigned int)&v50, v6, (__int64)a2, 1);
    v16 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v17 = PopReadProducerConsumerBuffer((int)v15 + 4, v16, (unsigned int)&v59, v6, (__int64)a2, 1);
    v19 = v16;
    v20 = &v58;
    v21 = ProducerConsumerBuffer;
    v22 = (_QWORD *)v17;
    v45 = v15 + v19 + 4;
    v23 = 0LL;
    if ( (unsigned __int8)*ProducerConsumerBuffer )
    {
      v24 = (unsigned __int8)*ProducerConsumerBuffer;
      do
      {
        v25 = *v22 >> 4;
        v18 = v25 + (*v22 & 0xFLL) + 1;
        v23 += (*v22 & 0xFLL) + 1;
        while ( v25 < v18 )
        {
          *(_QWORD *)v20 = v25++;
          v20 += 8;
        }
        ++v22;
        --v24;
      }
      while ( v24 );
      v21 = ProducerConsumerBuffer;
    }
    if ( v23 > (unsigned int)BugCheckParameter3[73] )
    {
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v26 = (unsigned int)((_DWORD)v23 << 12);
    v49 = (unsigned int)v26;
    v56 = v26;
    v27 = a2[1];
    v51 = 0LL;
    v52 = 8 * (((unsigned __int64)(v26 + 4095) >> 12) + 6);
    v53 = 0;
    v55 = 0LL;
    v57 = 0;
    MmMapMemoryDumpMdlEx(v27, v18, (__int64)&v51, 1);
    v28 = (*v21 >> 8) & 0x3FFFFF;
    v29 = __rdtsc();
    if ( v28 == (_DWORD)v26 )
    {
      ProducerConsumerCopyFromContextBuffer(v54, (unsigned int)v26, v44, v45);
      a2[9] += __rdtsc() - v29;
      v6 = (int)v44;
      v30 = __rdtsc();
      ProducerConsumerBufferComplete(v44, v44 + 48, v15, v42);
      v31 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v30;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v28, v44, v45);
      v32 = v42;
      v45 = __rdtsc();
      a2[9] += v45 - v29;
      ProducerConsumerBufferComplete(v44, v44 + 48, v15, v32);
      v33 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v45;
      if ( v47 )
      {
        v47(BugCheckParameter3);
        v48 = qword_14032ED20;
      }
      v34 = ProducerConsumerBuffer;
      v35 = __rdtsc();
      v36 = RtlDecompressBufferProgress(
              PopCompressMethodMap[(unsigned __int64)(unsigned int)*ProducerConsumerBuffer >> 30],
              v54,
              v26,
              a2[3],
              (*ProducerConsumerBuffer >> 8) & 0x3FFFFF,
              (__int64)&v43,
              a2[2],
              (__int64)v47,
              (__int64)BugCheckParameter3);
      v37 = __rdtsc();
      if ( v36 < 0 || v43 != (_DWORD)v26 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1D0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      a2[8] += v37 - v35;
      if ( v47 )
        a2[8] = v48 + a2[8] - qword_14032ED20;
      v6 = (int)v44;
      v38 = v37 - v45;
      v39 = (*v34 & 0xC0000000) >= 0x80000000;
      a2[v39 + 13] += v49;
      a2[v39 + 11] += v38;
    }
    if ( !a4 )
      return v5;
  }
  return (unsigned int)-2147483614;
}
