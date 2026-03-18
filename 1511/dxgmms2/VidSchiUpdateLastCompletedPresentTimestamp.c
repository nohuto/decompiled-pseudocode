/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0007460
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0004080 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C000EB40 (VidSchiNeedToForcePreemptNode.c)
 * Callees:
 *     Template_pqx @ 0x1C001D444 (Template_pqx.c)
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 *     Template_pqxxxx @ 0x1C0020958 (Template_pqxxxx.c)
 */

__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, char a2, char a3)
{
  LARGE_INTEGER *v3; // rdi
  __int64 v4; // r14
  __int64 result; // rax
  LARGE_INTEGER v8; // rbx
  int v9; // r15d
  __int64 v10; // r13
  int v11; // edx
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER PerformanceCounter; // rbp
  LARGE_INTEGER v14; // r8
  ULONGLONG v15; // r15
  unsigned __int64 v16; // r9
  ULONGLONG v17; // rsi
  unsigned __int128 v18; // rax
  ULONGLONG v19; // rsi
  int v20; // r8d
  unsigned __int64 v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r11
  ULONGLONG v24; // rdx
  ULONGLONG v25; // r9
  ULONGLONG v26; // rcx
  LARGE_INTEGER *v27; // rsi
  unsigned __int64 v28; // r9
  __int64 v29; // r11
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r8
  unsigned int v32; // r13d
  int v33; // r12d
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r9
  ULONGLONG v37; // r14
  __int64 v38; // r9
  unsigned __int64 v39; // r10
  char v40; // r11
  ULONGLONG v41; // r8
  char v42; // dl
  __int64 v43; // r9
  ULONGLONG v44; // r14
  __int64 v45; // r9
  unsigned __int64 v46; // r10
  char v47; // r11
  ULONGLONG v48; // r8
  int v49; // ecx
  unsigned int i; // edx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // [rsp+50h] [rbp-98h]
  __int64 v54; // [rsp+58h] [rbp-90h]
  unsigned int v55; // [rsp+68h] [rbp-80h]
  ULONGLONG ullMultiplier; // [rsp+70h] [rbp-78h] BYREF
  ULONGLONG v57; // [rsp+78h] [rbp-70h]
  ULONGLONG v58; // [rsp+80h] [rbp-68h] BYREF
  ULONGLONG v59; // [rsp+88h] [rbp-60h] BYREF
  ULONGLONG v60; // [rsp+90h] [rbp-58h] BYREF
  ULONGLONG v61; // [rsp+98h] [rbp-50h] BYREF
  LARGE_INTEGER v62; // [rsp+A0h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+108h] [rbp+20h] BYREF

  v3 = *(LARGE_INTEGER **)(a1 + 104);
  v4 = a1;
  result = *(unsigned int *)(a1 + 396);
  v8 = v3[4];
  v9 = gulPriorityToYieldPriorityBand[result];
  v53 = v9;
  if ( !v9 || v9 == 3 )
    return result;
  v10 = gulPriorityToYieldPriorityBand[result];
  v54 = v10;
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)&ullMultiplier);
  v62 = PerformanceCounter;
  result = v3[19].QuadPart;
  if ( !result && !a3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      result = Template_pqxxxx(
                 Microsoft_Windows_DxgKrnlEnableBits,
                 v11,
                 v14.LowPart,
                 *(_QWORD *)(v8.QuadPart + 16),
                 1,
                 *(_DWORD *)(v4 + 396),
                 PerformanceCounter.QuadPart,
                 0,
                 0);
    goto LABEL_52;
  }
  v15 = PerformanceCounter.QuadPart - result;
  if ( !a2 && !a3 )
  {
    if ( RtlULongLongMult(PerformanceCounter.QuadPart - result, 0x989680uLL, &pullResult) >= 0 )
    {
      result = pullResult / v16;
      v14.QuadPart = pullResult / v16;
    }
    else
    {
      v12.QuadPart = v15 / v16;
      result = 10000000 * (v15 / v16);
      v14.QuadPart = result + 10000000 * (v15 % v16) / v16;
    }
    if ( v14.QuadPart < *(_QWORD *)(v8.QuadPart + 2304) )
      return result;
  }
  v55 = *(_DWORD *)(v8.QuadPart + 4 * v10 + 164);
  v17 = v15 * v55;
  v18 = v17 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v19 = v17 / 0x64;
  if ( !v19 && !a3 )
  {
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      return Template_pqxxxx(
               v12.LowPart,
               DWORD2(v18),
               v14.LowPart,
               *(_QWORD *)(v8.QuadPart + 16),
               2,
               *(_DWORD *)(v4 + 396),
               v15,
               0,
               0);
    return result;
  }
  if ( RtlULongLongMult(v19, 0x989680uLL, &pullResult) >= 0 )
  {
    result = pullResult / v21;
    v24 = pullResult % v21;
    v25 = pullResult / v21;
  }
  else
  {
    v24 = 10000000 * (v19 % v21) % v21;
    result = 10000000 * (v19 / v21);
    v25 = result + 10000000 * (v19 % v21) / v21;
  }
  v26 = *(_QWORD *)(v8.QuadPart + 2296);
  v57 = v25;
  if ( v25 > v26 )
  {
    if ( !a3 )
    {
      result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      v27 = v3;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        result = Template_pqxxxx(
                   *(_DWORD *)(v4 + 396),
                   v24,
                   v20,
                   *(_QWORD *)(v8.QuadPart + 16),
                   1,
                   *(_DWORD *)(v4 + 396),
                   PerformanceCounter.QuadPart,
                   v3[19].QuadPart,
                   0);
      v9 = v10;
      goto LABEL_53;
    }
    v57 = v26;
    if ( RtlULongLongMult(v26, ullMultiplier, &pullResult) >= 0 )
    {
      result = 0xD6BF94D5E57A42BDuLL * pullResult;
      v19 = pullResult / 0x989680;
    }
    else
    {
      v22 = v55;
      v30 = v28 / 0x989680;
      v31 = v29 * (v57 - 10000000 * v30);
      result = 0xD6BF94D5E57A42BDuLL * v31;
      v19 = v29 * v30 + v31 / 0x989680;
    }
    v23 = 0x47AE147AE147AE15LL;
  }
  v32 = 0;
  v33 = (1 << *(_DWORD *)(v4 + 396)) - 1;
  LOBYTE(pullResult) = 0;
  if ( !*(_DWORD *)(v8.QuadPart + 56) )
    goto LABEL_51;
  v34 = v54;
  do
  {
    result = v32;
    v35 = *(_QWORD *)(v8.QuadPart + 8LL * v32 + 376);
    if ( (v33 & *(_DWORD *)(v35 + 1648)) == 0 && (v33 & *(_DWORD *)(v35 + 1652)) == 0 )
      goto LABEL_46;
    if ( *(_QWORD *)(v35 + 8 * v34 + 1848) > (unsigned __int64)(((v15
                                                                * (100 - v22)
                                                                * (unsigned __int128)(unsigned __int64)v23) >> 64)
                                                              + ((unsigned __int64)(v15 * (100 - v22)
                                                                                  - ((v15
                                                                                    * (100 - v22)
                                                                                    * (unsigned __int128)(unsigned __int64)v23) >> 64)) >> 1)) >> 6
      || a3 )
    {
      v42 = 1;
      *(_QWORD *)(v35 + 1888) = v19;
      *(_BYTE *)(v35 + 1896) = 1;
      *(_QWORD *)(v35 + 1880) = 0LL;
      result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      LOBYTE(pullResult) = 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_47;
      RtlULongLongMult(v15, 0x989680uLL, &v58);
      v44 = *(_QWORD *)(v43 + 8 * v54 + 1848);
      if ( RtlULongLongMult(v44, 0x989680uLL, &v60) >= 0 )
        v48 = v60 / v46;
      else
        v48 = 10000000 * (v44 / v46) + 10000000 * (v44 % v46) / v46;
      v4 = a1;
      result = Template_pqxxxx(
                 *(unsigned __int16 *)(v45 + 4),
                 *(_DWORD *)(a1 + 396),
                 v48,
                 *(_QWORD *)(v8.QuadPart + 16),
                 0,
                 *(_DWORD *)(a1 + 396),
                 v48,
                 *(_WORD *)(v45 + 4),
                 v47);
      goto LABEL_45;
    }
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      RtlULongLongMult(v15, 0x989680uLL, &v59);
      v37 = *(_QWORD *)(v36 + 8 * v54 + 1848);
      if ( RtlULongLongMult(v37, 0x989680uLL, &v61) >= 0 )
        v41 = v61 / v39;
      else
        v41 = 10000000 * (v37 / v39) + 10000000 * (v37 % v39) / v39;
      v4 = a1;
      result = Template_pqxxxx(
                 *(unsigned __int16 *)(v38 + 4),
                 *(_DWORD *)(a1 + 396),
                 v41,
                 *(_QWORD *)(v8.QuadPart + 16),
                 5,
                 *(_DWORD *)(a1 + 396),
                 v41,
                 *(_WORD *)(v38 + 4),
                 v40);
LABEL_45:
      v34 = v54;
    }
LABEL_46:
    v42 = pullResult;
LABEL_47:
    v22 = v55;
    ++v32;
    v23 = 0x47AE147AE147AE15LL;
  }
  while ( v32 < *(_DWORD *)(v8.QuadPart + 56) );
  PerformanceCounter = v62;
  if ( v42 )
  {
    v49 = *(_DWORD *)(v4 + 396) - 1;
    *(_DWORD *)(v8.QuadPart + 160) = v49;
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      result = Template_pqx(v49, (unsigned int)&EventYieldStartAdapter, v34, *(_QWORD *)(v8.QuadPart + 16), v49, v57);
  }
LABEL_51:
  v10 = v54;
  v9 = v53;
LABEL_52:
  v27 = v3;
LABEL_53:
  for ( i = 0; i < *(_DWORD *)(v8.QuadPart + 56); ++i )
  {
    v51 = *(_QWORD *)(v8.QuadPart + 8LL * i + 376);
    *(_QWORD *)(v51 + 8 * v10 + 1816) = 0LL;
    *(_QWORD *)(v51 + 8 * v10 + 1848) = 0LL;
    *(LARGE_INTEGER *)(v51 + 8 * v10 + 1784) = PerformanceCounter;
    result = *(unsigned int *)(v51 + 1512);
    v52 = *(_QWORD *)(v51 + 8 * result + 1520);
    if ( v52 )
    {
      result = *(unsigned int *)(v52 + 396);
      if ( gulPriorityToYieldPriorityBand[result] >= v9 )
      {
        result = 0LL;
        if ( PerformanceCounter.QuadPart )
          result = PerformanceCounter.QuadPart;
        *(_QWORD *)(v51 + 8 * v10 + 1816) = result;
      }
    }
  }
  v27[19] = PerformanceCounter;
  return result;
}
