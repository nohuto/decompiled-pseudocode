/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C003896C
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0037550 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     _TlgCreateSz @ 0x1C0039630 (_TlgCreateSz.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  __int64 v4; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  const void *v10; // rdx
  _QWORD *v11; // rdi
  unsigned int v12; // r11d
  unsigned int i; // r9d
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  _BYTE *v17; // r13
  char *v18; // r8
  __int64 v19; // r14
  signed __int64 v20; // rdx
  signed __int64 v21; // r9
  __int64 v22; // rcx
  const struct _TlgProvider_t *v23; // rcx
  int v24; // r9d
  const GUID *v25; // r8
  const GUID *v26; // r9
  _WORD *v27; // rax
  const void *v28; // rdx
  int v29; // r9d
  _WORD v31[2]; // [rsp+38h] [rbp-D0h] BYREF
  _WORD v32[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  _WORD v33[2]; // [rsp+40h] [rbp-C8h] BYREF
  _WORD v34[2]; // [rsp+44h] [rbp-C4h] BYREF
  _WORD v35[2]; // [rsp+48h] [rbp-C0h] BYREF
  _WORD v36[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+58h] [rbp-B0h] BYREF
  _WORD *v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  _WORD *v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  __int64 *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  _WORD *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+138h] [rbp+30h] BYREF
  _WORD *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  __int64 v57; // [rsp+158h] [rbp+50h]
  int v58; // [rsp+160h] [rbp+58h]
  int v59; // [rsp+164h] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+188h] [rbp+80h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  _WORD *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v67; // [rsp+1B8h] [rbp+B0h]
  int v68; // [rsp+1C0h] [rbp+B8h]
  int v69; // [rsp+1C4h] [rbp+BCh]

  v2 = (unsigned int)dword_1C0044400;
  P = RaidAllocatePool(NonPagedPoolNx, (unsigned int)Size, 0x65546152u, *(_QWORD *)(a1 + 8));
  if ( !P )
  {
    v3 = -1073741801;
    goto LABEL_39;
  }
  v4 = v2;
  qword_1C0044420 = RaidAllocatePool(NonPagedPoolNx, 8 * v2, 0x65546152u, *(_QWORD *)(a1 + 8));
  if ( !qword_1C0044420 )
  {
    v3 = -1073741801;
    goto LABEL_37;
  }
  if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)&hProvider.ProviderMetadataPtr);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  v6 = PerformanceCounter;
  if ( PerformanceCounter.QuadPart <= 0 || (v7 = *(_QWORD *)(a1 + 1776), PerformanceCounter.QuadPart >= v7) )
    v8 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 1776);
  else
    v8 = PerformanceCounter.QuadPart - v7 - 1;
  if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
  {
    v9 = 0LL;
    if ( hProvider.ProviderMetadataPtr && v8 )
      v9 = 10000
         * (1000 * (v8 % (unsigned __int64)hProvider.ProviderMetadataPtr)
          % (unsigned __int64)hProvider.ProviderMetadataPtr)
         / (unsigned __int64)hProvider.ProviderMetadataPtr
         + 10000
         * (1000
          * (v8 % (unsigned __int64)hProvider.ProviderMetadataPtr)
          / (unsigned __int64)hProvider.ProviderMetadataPtr
          + 1000 * (v8 / (unsigned __int64)hProvider.ProviderMetadataPtr));
  }
  else
  {
    v9 = v8;
  }
  qword_1C0044410 = v6.QuadPart;
  v10 = *(const void **)(a1 + 1768);
  *(LARGE_INTEGER *)(a1 + 1776) = v6;
  if ( !v10 )
  {
    v3 = -1073741823;
    goto LABEL_37;
  }
  v11 = P;
  memmove(P, v10, (unsigned int)Size);
  v12 = g_RaidNumberProcessors;
  for ( i = 1; i < v12; ++i )
  {
    if ( (_DWORD)v2 )
    {
      v14 = v11;
      v15 = i * (unsigned int)dword_1C0044404;
      v16 = v2;
      do
      {
        *v14 += *(_QWORD *)((char *)v14 + v15);
        ++v14;
        --v16;
      }
      while ( v16 );
    }
  }
  v17 = qword_1C0044420;
  memset(qword_1C0044420, 0, 8 * v2);
  v18 = *(char **)(a1 + 1784);
  v19 = 0LL;
  if ( (_DWORD)v2 )
  {
    v20 = (char *)v11 - v18;
    v21 = v17 - v18;
    do
    {
      v22 = *(_QWORD *)&v18[v20] - *(_QWORD *)v18;
      v19 += v22;
      *(_QWORD *)&v18[v21] = v22;
      v18 += 8;
      --v4;
    }
    while ( v4 );
  }
  memmove(*(void **)(a1 + 1784), v11, (unsigned int)dword_1C0044404);
  if ( v19 )
  {
    if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( (unsigned int)dword_1C0044050 <= 5 || !TlgKeywordOn(v23, 0x400000000000uLL) )
        goto LABEL_36;
      v36[0] = TelemetryPerfContext;
      LOWORD(v37) = dword_1C00443A4;
      v31[0] = WORD1(qword_1C00443D0);
      v35[0] = qword_1C00443D0;
      v33[0] = HIWORD(TelemetryPerfContext);
      hProvider.CallbackContext = (void *)(a1 + 1672);
      v39 = v36;
      v41 = v33;
      v43 = &v37;
      v45 = v35;
      *(_QWORD *)&hProvider.LevelPlus1 = v9 / 0x2710;
      v47 = (__int64 *)v31;
      v32[0] = HIWORD(TelemetryPerfContext);
      v34[0] = v2;
      hProvider.AnnotationFunc = (void (*)(...))16;
      v40 = 2LL;
      v42 = 2LL;
      v44 = 2LL;
      v46 = 2LL;
      v48 = 2LL;
      TlgCreateSz(&pDesc, "BucketType1IoType");
      TlgCreateSz(&v50, "BucketType1IoSize");
      TlgCreateSz(&v51, "BucketType1IoLatency");
      TlgCreateSz(&v52, "BucketType2IoType");
      TlgCreateSz(&v53, "BucketType2IoLatency");
      TlgCreateSz(&v54, "Read, Write");
      v57 = (__int64)*(&xmmword_1C00443A8 + 1);
      v55 = v32;
      v58 = 8 * v24;
      v56 = 2LL;
      v59 = 0;
      TlgCreateSz(&v60, "2ms, 64ms, 256ms, 256+ms");
      TlgCreateSz(&v61, "Flush, Unmap");
      TlgCreateSz(&v62, "64ms, 100ms, 100+ms");
      v27 = v34;
      v28 = &unk_1C003D4D3;
    }
    else
    {
      if ( (unsigned int)dword_1C0044050 <= 5 || !TlgKeywordOn(v23, 0x400000000000uLL) )
        goto LABEL_36;
      v34[0] = TelemetryPerfContext;
      v31[0] = dword_1C00443A4;
      LOWORD(v37) = WORD1(qword_1C00443D0);
      v35[0] = qword_1C00443D0;
      v32[0] = HIWORD(TelemetryPerfContext);
      hProvider.CallbackContext = (void *)(a1 + 1672);
      v39 = v34;
      v41 = v32;
      v43 = (__int64 *)v31;
      v45 = v35;
      *(_QWORD *)&hProvider.LevelPlus1 = v9 / 0x2710;
      v47 = &v37;
      v33[0] = HIWORD(TelemetryPerfContext);
      v36[0] = v2;
      hProvider.AnnotationFunc = (void (*)(...))16;
      v40 = 2LL;
      v42 = 2LL;
      v44 = 2LL;
      v46 = 2LL;
      v48 = 2LL;
      TlgCreateSz(&pDesc, "BucketType1IoType");
      TlgCreateSz(&v50, "BucketType1IoSize");
      TlgCreateSz(&v51, "BucketType1IoLatency");
      TlgCreateSz(&v52, "BucketType2IoType");
      TlgCreateSz(&v53, "BucketType2IoLatency");
      TlgCreateSz(&v54, "Read, Write");
      v57 = (__int64)*(&xmmword_1C00443A8 + 1);
      v55 = v33;
      v58 = 8 * v29;
      v56 = 2LL;
      v59 = 0;
      TlgCreateSz(&v60, "16ms, 64ms, 256ms, 256+ms");
      TlgCreateSz(&v61, "Flush, Unmap");
      TlgCreateSz(&v62, "64ms, 100ms, 100+ms");
      v27 = v36;
      v28 = &unk_1C003D267;
    }
    v65 = v27;
    v68 = 8 * (unsigned __int16)v2;
    v69 = 0;
    v67 = v17;
    v66 = 2LL;
    v64 = 8LL;
    p_hProvider = &hProvider;
    TlgWrite(&hProvider, v28, v25, v26, 0x16u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
  }
LABEL_36:
  v3 = 0;
LABEL_37:
  if ( P )
  {
    ExFreePoolWithTag(P, 0x65546152u);
    P = 0LL;
  }
LABEL_39:
  if ( qword_1C0044420 )
  {
    ExFreePoolWithTag(qword_1C0044420, 0x65546152u);
    qword_1C0044420 = 0LL;
  }
  return v3;
}
