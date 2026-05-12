/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C003AC14
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00393B0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     Template_qcccjczxxxxxqqqb @ 0x1C003BBB8 (Template_qcccjczxxxxxqqqb.c)
 *     _TlgCreateSz @ 0x1C003C064 (_TlgCreateSz.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  const unsigned __int16 *ProviderMetadataPtr; // rbx
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  const void *v10; // rdx
  _QWORD *v11; // rdi
  unsigned int v12; // r11d
  unsigned int i; // r9d
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  _BYTE *v17; // r14
  char *v18; // r8
  __int64 v19; // r12
  signed __int64 v20; // rdx
  signed __int64 v21; // r9
  __int64 v22; // rcx
  const struct _TlgProvider_t *v23; // rcx
  unsigned int v24; // r11d
  char v25; // di
  const wchar_t *v26; // r15
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // r11d
  LPCSTR v30; // r10
  int v31; // r11d
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  unsigned int v34; // r8d
  unsigned int v35; // r10d
  _QWORD *v36; // r9
  unsigned int v37; // r11d
  unsigned __int16 v38; // r12
  unsigned __int16 v39; // r13
  unsigned int v40; // eax
  char v42; // [rsp+A8h] [rbp-80h] BYREF
  char v43; // [rsp+A9h] [rbp-7Fh] BYREF
  char v44; // [rsp+AAh] [rbp-7Eh] BYREF
  char v45; // [rsp+ABh] [rbp-7Dh] BYREF
  __int16 v46; // [rsp+ACh] [rbp-7Ch] BYREF
  __int16 v47; // [rsp+B0h] [rbp-78h] BYREF
  __int16 v48; // [rsp+B4h] [rbp-74h] BYREF
  __int16 v49; // [rsp+B8h] [rbp-70h] BYREF
  __int16 v50; // [rsp+BCh] [rbp-6Ch] BYREF
  __int16 v51; // [rsp+C0h] [rbp-68h] BYREF
  __int16 v52; // [rsp+C4h] [rbp-64h] BYREF
  int v53; // [rsp+C8h] [rbp-60h] BYREF
  int v54; // [rsp+CCh] [rbp-5Ch] BYREF
  int v55; // [rsp+D0h] [rbp-58h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+D8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp-10h] BYREF
  __int64 v58; // [rsp+138h] [rbp+10h]
  __int64 v59; // [rsp+140h] [rbp+18h]
  const unsigned __int16 *v60; // [rsp+148h] [rbp+20h]
  __int64 v61; // [rsp+150h] [rbp+28h]
  int *v62; // [rsp+158h] [rbp+30h]
  __int64 v63; // [rsp+160h] [rbp+38h]
  char *v64; // [rsp+168h] [rbp+40h]
  __int64 v65; // [rsp+170h] [rbp+48h]
  char *v66; // [rsp+178h] [rbp+50h]
  __int64 v67; // [rsp+180h] [rbp+58h]
  char *v68; // [rsp+188h] [rbp+60h]
  __int64 v69; // [rsp+190h] [rbp+68h]
  char *v70; // [rsp+198h] [rbp+70h]
  __int64 v71; // [rsp+1A0h] [rbp+78h]
  int *v72; // [rsp+1A8h] [rbp+80h]
  __int64 v73; // [rsp+1B0h] [rbp+88h]
  int *v74; // [rsp+1B8h] [rbp+90h]
  __int64 v75; // [rsp+1C0h] [rbp+98h]
  __int16 *v76; // [rsp+1C8h] [rbp+A0h]
  __int64 v77; // [rsp+1D0h] [rbp+A8h]
  __int16 *v78; // [rsp+1D8h] [rbp+B0h]
  __int64 v79; // [rsp+1E0h] [rbp+B8h]
  __int16 *v80; // [rsp+1E8h] [rbp+C0h]
  __int64 v81; // [rsp+1F0h] [rbp+C8h]
  __int16 *v82; // [rsp+1F8h] [rbp+D0h]
  __int64 v83; // [rsp+200h] [rbp+D8h]
  __int16 *v84; // [rsp+208h] [rbp+E0h]
  __int64 v85; // [rsp+210h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+218h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+228h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+238h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+248h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+258h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+268h] [rbp+140h] BYREF
  __int16 *v92; // [rsp+278h] [rbp+150h]
  __int64 v93; // [rsp+280h] [rbp+158h]
  __int64 v94; // [rsp+288h] [rbp+160h]
  int v95; // [rsp+290h] [rbp+168h]
  int v96; // [rsp+294h] [rbp+16Ch]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+298h] [rbp+170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+2A8h] [rbp+180h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+2B8h] [rbp+190h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+2C8h] [rbp+1A0h]
  __int64 v101; // [rsp+2D0h] [rbp+1A8h]
  __int16 *v102; // [rsp+2D8h] [rbp+1B0h]
  __int64 v103; // [rsp+2E0h] [rbp+1B8h]
  _BYTE *v104; // [rsp+2E8h] [rbp+1C0h]
  int v105; // [rsp+2F0h] [rbp+1C8h]
  int v106; // [rsp+2F4h] [rbp+1CCh]

  hProvider.ProviderMetadataPtr = (const unsigned __int16 *)a1;
  ProviderMetadataPtr = (const unsigned __int16 *)a1;
  memset(&hProvider.KeywordAll, 0, 40);
  v2 = (unsigned int)dword_1C0048400;
  P = RaidAllocatePool(NonPagedPoolNx, (unsigned int)Size, 0x65546152u, *(_QWORD *)(a1 + 8));
  if ( P
    && (v4 = v2,
        (qword_1C0048420 = RaidAllocatePool(NonPagedPoolNx, 8 * v2, 0x65546152u, *((_QWORD *)ProviderMetadataPtr + 1))) != 0LL) )
  {
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)&hProvider.KeywordAny);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v6 = PerformanceCounter;
    if ( PerformanceCounter.QuadPart <= 0
      || (v7 = *((_QWORD *)ProviderMetadataPtr + 230), PerformanceCounter.QuadPart >= v7) )
    {
      v8 = PerformanceCounter.QuadPart - *((_QWORD *)ProviderMetadataPtr + 230);
    }
    else
    {
      v8 = PerformanceCounter.QuadPart - v7 - 1;
    }
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    {
      v9 = 0LL;
      if ( hProvider.KeywordAny && v8 )
        v9 = 10000 * (1000 * (v8 % hProvider.KeywordAny) % hProvider.KeywordAny) / hProvider.KeywordAny
           + 10000 * (1000 * (v8 % hProvider.KeywordAny) / hProvider.KeywordAny + 1000 * (v8 / hProvider.KeywordAny));
    }
    else
    {
      v9 = v8;
    }
    qword_1C0048410 = v6.QuadPart;
    v10 = (const void *)*((_QWORD *)ProviderMetadataPtr + 229);
    *((LARGE_INTEGER *)ProviderMetadataPtr + 230) = v6;
    if ( v10 )
    {
      v11 = P;
      memmove(P, v10, (unsigned int)Size);
      v12 = g_RaidNumberProcessors;
      for ( i = 1; i < v12; ++i )
      {
        if ( (_DWORD)v2 )
        {
          v14 = v11;
          v15 = i * (unsigned int)dword_1C0048404;
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
      v17 = qword_1C0048420;
      memset(qword_1C0048420, 0, 8 * v2);
      v18 = (char *)*((_QWORD *)ProviderMetadataPtr + 231);
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
      memmove(*((void **)ProviderMetadataPtr + 231), v11, (unsigned int)dword_1C0048404);
      v24 = 0;
      if ( v19 )
      {
        if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          v25 = 4;
          v26 = L"2ms, 64ms, 256ms, 2048ms, 2048+ms";
        }
        else
        {
          v25 = 3;
          v26 = L"16ms, 64ms, 256ms, 2048ms, 2048+ms";
        }
        if ( (unsigned int)dword_1C0048030 > 5 && TlgKeywordOn(v23, 0x400000000000uLL) )
        {
          v27 = *((_QWORD *)ProviderMetadataPtr + 3);
          v53 = *(_DWORD *)(v27 + 56);
          v44 = *((_BYTE *)ProviderMetadataPtr + 88);
          v42 = *((_BYTE *)ProviderMetadataPtr + 89);
          v43 = *((_BYTE *)ProviderMetadataPtr + 90);
          v54 = *((_DWORD *)ProviderMetadataPtr + 132);
          v55 = *((_DWORD *)ProviderMetadataPtr + 133);
          v50 = TelemetryPerfContext;
          v49 = dword_1C00483A4;
          v48 = WORD1(qword_1C00483D0);
          v47 = qword_1C00483D0;
          v63 = 4LL;
          v58 = v27 + 5192;
          v60 = ProviderMetadataPtr + 844;
          v62 = &v53;
          v64 = &v44;
          v66 = &v42;
          v68 = &v43;
          v70 = &v45;
          v72 = &v54;
          v74 = &v55;
          v76 = &v50;
          v78 = &v51;
          v80 = &v49;
          v82 = &v47;
          v73 = 4LL;
          v75 = 4LL;
          *(_QWORD *)&hProvider.LevelPlus1 = v9 / 0x2710;
          v84 = &v48;
          v45 = v25;
          v51 = HIWORD(TelemetryPerfContext);
          v46 = HIWORD(TelemetryPerfContext);
          v52 = v2;
          v59 = 16LL;
          v61 = 16LL;
          v65 = 1LL;
          v67 = 1LL;
          v69 = 1LL;
          v71 = 1LL;
          v77 = 2LL;
          v79 = 2LL;
          v81 = 2LL;
          v83 = 2LL;
          v85 = 2LL;
          TlgCreateSz(&pDesc, "BucketType1IoType");
          TlgCreateSz(&v87, "BucketType1IoSize");
          TlgCreateSz(&v88, "BucketType1IoLatency");
          TlgCreateSz(&v89, "BucketType2IoType");
          TlgCreateSz(&v90, "BucketType2IoLatency");
          TlgCreateSz(&v91, "Read, Write");
          v94 = (__int64)*(&xmmword_1C00483A8 + 1);
          v92 = &v46;
          v95 = 8 * v28;
          v93 = 2LL;
          v96 = v29;
          TlgCreateSz(&v97, v30);
          TlgCreateSz(&v98, "Flush, Unmap");
          TlgCreateSz(&v99, "64ms, 100ms, 100+ms");
          v101 = 8LL;
          v102 = &v52;
          v105 = 8 * (unsigned __int16)v2;
          p_hProvider = &hProvider;
          v103 = 2LL;
          v104 = v17;
          v106 = v31;
          TlgWrite(&hProvider, &unk_1C0040A86, v32, v33, 0x1Eu, &pData);
          v24 = 0;
        }
        v34 = v24;
        if ( (_DWORD)v2 )
        {
          v35 = dword_1C00483FC;
          v36 = v17;
          v37 = dword_1C00483CC;
          v38 = HIWORD(TelemetryPerfContext);
          v39 = TelemetryPerfContext;
          do
          {
            if ( v34 >= v37 && v34 < v35 )
            {
              v40 = v34 / (v39 * (unsigned int)v38);
              if ( v40 >= 5 )
                v40 = 4;
              *(&hProvider.KeywordAll + v40) += *v36;
            }
            ++v34;
            ++v36;
          }
          while ( v34 < (unsigned int)v2 );
          ProviderMetadataPtr = hProvider.ProviderMetadataPtr;
        }
        if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 2) != 0 )
          Template_qcccjczxxxxxqqqb(
            (_DWORD)ProviderMetadataPtr + 1688,
            *((_QWORD *)ProviderMetadataPtr + 3),
            v34,
            *(_DWORD *)(*((_QWORD *)ProviderMetadataPtr + 3) + 56LL),
            *((_BYTE *)ProviderMetadataPtr + 88),
            *((_BYTE *)ProviderMetadataPtr + 89),
            *((_BYTE *)ProviderMetadataPtr + 90),
            (__int64)(ProviderMetadataPtr + 844),
            v25,
            (__int64)v26,
            hProvider.KeywordAll,
            hProvider.RegHandle,
            (char)hProvider.EnableCallback,
            (char)hProvider.CallbackContext,
            (char)hProvider.AnnotationFunc,
            *((_DWORD *)ProviderMetadataPtr + 132),
            *((_DWORD *)ProviderMetadataPtr + 133),
            8 * v2,
            (__int64)v17);
      }
      v3 = 0;
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741801;
  }
  *((_QWORD *)ProviderMetadataPtr + 66) = 0LL;
  if ( P )
  {
    ExFreePoolWithTag(P, 0x65546152u);
    P = 0LL;
  }
  if ( qword_1C0048420 )
  {
    ExFreePoolWithTag(qword_1C0048420, 0x65546152u);
    qword_1C0048420 = 0LL;
  }
  return v3;
}
