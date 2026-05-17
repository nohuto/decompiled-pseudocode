/*
 * XREFs of RtlpHpSegHeapCreate @ 0x180003E6C
 * Callers:
 *     RtlpHpMetadataHeapInit @ 0x1800036D0 (RtlpHpMetadataHeapInit.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x1800039A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x180003B44 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x180003B9C (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegHeapAllocate @ 0x180003BE8 (RtlpHpSegHeapAllocate.c)
 *     RtlpHpVsContextInitialize @ 0x180003DAC (RtlpHpVsContextInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x1800040E8 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpSegHeapDestroy @ 0x180008328 (RtlpHpSegHeapDestroy.c)
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800EEDA0 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x1800EEE70 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x1800EF7B0 (RtlpLogHeapCreateEvent.c)
 */

__m128i *__fastcall RtlpHpSegHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  NTSTATUS v6; // eax
  char v7; // cl
  volatile signed __int64 *v8; // rax
  __m128i *v9; // rdi
  __int64 **v10; // r13
  _QWORD *v11; // rax
  unsigned __int64 v12; // rsi
  __m128i *v13; // rsi
  unsigned __int8 v15; // al
  int v16; // r12d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int16 v22; // cx
  __int64 *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-49h]
  __m128i v25; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-31h]
  __int64 (__fastcall *v27)(); // [rsp+50h] [rbp-29h]
  __int64 (__fastcall *v28)(); // [rsp+58h] [rbp-21h]
  char SystemInformation[56]; // [rsp+60h] [rbp-19h] BYREF
  char v30; // [rsp+98h] [rbp+1Fh]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v6 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v7 = v30;
  if ( v6 < 0 )
    v7 = 1;
  v30 = v7;
  v8 = RtlpHpSegHeapAllocate(a1, v7);
  v9 = (__m128i *)v8;
  if ( !v8 )
    return 0LL;
  *((_DWORD *)v8 + 4) = -571548178;
  v10 = (__int64 **)(v8 + 15);
  v11 = v8 + 12;
  v11[1] = v11;
  *v11 = v11;
  v9[1].m128i_i32[1] = a1;
  v9[7].m128i_i64[1] = 0LL;
  v9[8].m128i_i64[0] = 0LL;
  v9[5].m128i_i64[1] = 0LL;
  v9[3].m128i_i64[0] = 0LL;
  v9[3].m128i_i64[1] = 0LL;
  v9[4].m128i_i64[0] = 0LL;
  v9[9].m128i_i64[0] = 0LL;
  if ( (v9[1].m128i_i32[1] & 0x20000000) != 0 )
    v9[2].m128i_i32[0] = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v28 = 0LL;
  v25.m128i_i64[0] = (__int64)RtlpHpSegVsAllocate;
  v27 = RtlpHpSegLfhVsDecommit;
  v25.m128i_i64[1] = (__int64)RtlpHpSegLfhVsFree;
  v26 = RtlpHpSegLfhVsCommit;
  RtlpHpVsContextInitialize(v9 + 11, (__int64)v9, &v25);
  v25.m128i_i64[0] = (__int64)RtlpHpSegLfhAllocate;
  v27 = RtlpHpSegLfhVsDecommit;
  v25.m128i_i64[1] = (__int64)RtlpHpSegLfhVsFree;
  v26 = RtlpHpSegLfhVsCommit;
  v28 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(&v9[18], v9, (unsigned int)v30, &v25);
  v24 = (unsigned __int8)((a2 + 0xFFFFF) >> 20);
  v12 = (unsigned __int8)((unsigned __int64)(a3 + 4095) >> 12);
  if ( v24 )
  {
LABEL_12:
    if ( v12 > 0xFE )
    {
      v15 = -2;
      v12 -= 254LL;
    }
    else
    {
      v15 = v12;
      v12 = 0LL;
    }
    v16 = v15;
    v17 = RtlpHpSegSegmentAllocate(v9->m128i_i64, v15);
    v18 = v17;
    if ( v17 )
    {
      --v24;
      *(_DWORD *)(v17 + 64) = -857879331;
      RtlpHpSegSegmentInitialize(v17, v16);
      v19 = *v10;
      LOBYTE(v20) = 0;
      v22 = *(_WORD *)(v21 + 90);
      if ( !*v10 )
        goto LABEL_16;
      while ( 1 )
      {
        if ( v22 < *((_WORD *)v19 + 13) )
        {
          v23 = (__int64 *)*v19;
          if ( !*v19 )
          {
            LOBYTE(v20) = 0;
LABEL_16:
            RtlRbInsertNodeEx(&v9[7].m128i_u64[1], v19, v20, v18 + 64);
            v9[1].m128i_i64[1] += (unsigned __int8)~*(_BYTE *)(v18 + 90);
            RtlpHpSegHeapAddSegment((__int64)v9, v18);
            if ( !v24 )
              goto LABEL_8;
            goto LABEL_12;
          }
        }
        else
        {
          v23 = (__int64 *)v19[1];
          if ( !v23 )
          {
            LOBYTE(v20) = 1;
            goto LABEL_16;
          }
        }
        v19 = v23;
      }
    }
    v13 = 0LL;
LABEL_29:
    if ( v9 )
      RtlpHpSegHeapDestroy(v9);
  }
  else
  {
LABEL_8:
    v13 = v9;
    v9 = 0LL;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeCreate(v13, v13[10].m128i_i64[1] - (_QWORD)v13, a1);
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      RtlpLogHeapCreateEvent(
        (_DWORD)v13,
        a1,
        v13[10].m128i_i64[1] - (_DWORD)v13,
        v13[10].m128i_i32[0] - (_DWORD)v13,
        MEMORY[0x7FFE0380]);
      goto LABEL_29;
    }
  }
  return v13;
}
