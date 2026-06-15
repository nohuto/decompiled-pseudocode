/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DDDD @ 0x140014AE0 (WPP_SF_DDDD.c)
 *     Template_pqqqq @ 0x140014B50 (Template_pqqqq.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_s @ 0x140039AAC (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x14003C104 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14003C358 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned int v5; // r12d
  __int64 v6; // rbx
  unsigned int v7; // esi
  void *v8; // rcx
  unsigned __int8 v9; // r8
  unsigned __int32 v10; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // r14
  signed __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rdx
  unsigned int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // r9
  void (__fastcall *v22)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64); // rax
  BOOL v23; // r8d
  __int64 v24; // rdx
  HNSTIME v25; // rcx
  unsigned int v26; // r14d
  char *v27; // rbx
  __int64 (__fastcall *v28)(); // rax
  ULONGLONG TickCount64; // rax
  __int64 v30; // rdx
  ULONGLONG v31; // r14
  volatile signed __int32 *v32; // rcx
  __int64 (__fastcall *v33)(); // rax
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  void *v36; // rcx
  unsigned int v37; // r14d
  const void *v38; // rdx
  size_t v39; // r8
  int v40; // edx
  _QWORD *v41; // rcx
  unsigned int v42; // ecx
  unsigned __int8 v43; // r8
  UINT32 v44; // eax
  UINT32 v45; // [rsp+40h] [rbp-C0h]
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+50h] [rbp-B0h] BYREF
  char *v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+88h] [rbp-78h]
  __int64 u32ValidFrameCount; // [rsp+90h] [rbp-70h]
  __int64 u32BufferFlags; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  struct _EVENT_TRACE_HEADER v52; // [rsp+B0h] [rbp-50h] BYREF
  char *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  struct _EVENT_TRACE_HEADER v58; // [rsp+110h] [rbp+10h] BYREF
  char *v59; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+148h] [rbp+48h]
  __int64 v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  __int64 v63; // [rsp+160h] [rbp+60h]
  struct _EVENT_TRACE_HEADER v64; // [rsp+170h] [rbp+70h] BYREF
  char *v65; // [rsp+1A0h] [rbp+A0h]
  int v66; // [rsp+1A8h] [rbp+A8h]
  __int64 v67; // [rsp+1B0h] [rbp+B0h]
  __int64 v68; // [rsp+1B8h] [rbp+B8h]
  __int64 v69; // [rsp+1C0h] [rbp+C0h]
  __int64 v70; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_TRACE_HEADER v71; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v72; // [rsp+200h] [rbp+100h]
  int v73; // [rsp+208h] [rbp+108h]
  __int64 Flag; // [rsp+210h] [rbp+110h]
  UINT64 u64PaddingFrames; // [rsp+218h] [rbp+118h]
  HNSTIME hnsQPCPosition; // [rsp+220h] [rbp+120h]
  UINT64 u64DevicePosition; // [rsp+228h] [rbp+128h]
  UINT64 u64StreamPosition; // [rsp+230h] [rbp+130h]
  unsigned int v79; // [rsp+290h] [rbp+190h]
  unsigned int v80; // [rsp+298h] [rbp+198h]
  unsigned int v82; // [rsp+2A8h] [rbp+1A8h] BYREF

  v5 = 0;
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v47 = (char *)this - 440;
    u32ValidFrameCount = a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    EventTrace.Size = 88;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    LOWORD(EventTrace.Version) = 1285;
    v48 = 0;
    v51 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  v6 = a2->u32ValidFrameCount;
  v7 = 0;
  v8 = (void *)*((_QWORD *)this - 40);
  v45 = v6;
  *((_DWORD *)this + 5) = v6;
  *((_DWORD *)this + 4) = 2;
  ResetEvent(v8);
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0, 0);
  v11 = v10;
  if ( (v10 & 1) == 0 && (*((_BYTE *)this - 288) & 1) == 0 || !(_DWORD)v6 )
  {
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset_0(&v52, 0, 0x40uLL);
      v52.UserTime = 0x20000;
      v52.Size = 88;
      v53 = (char *)this - 440;
      v52.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
      LOWORD(v52.Version) = 1303;
      v54 = 0;
      v55 = v11;
      v56 = v6;
      v57 = 101LL;
      TraceEvent(g_hAEWMITraceHandle, &v52);
    }
    goto LABEL_46;
  }
  v12 = *((_QWORD *)this - 47);
  v13 = (_QWORD *)((char *)this - 440);
  v14 = *(_QWORD *)(v12 + 8);
  v15 = *(_QWORD *)(v12 + 16);
  if ( v14 < 0 )
  {
    AEWMILOG_SECURITY(v12, (char *)this - 440, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    _InterlockedAnd((volatile signed __int32 *)(v13[8] + 156LL), 0xFFFFFFFE);
    v41 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_77;
    }
LABEL_76:
    WPP_SF_D(v41[2], 37LL, &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, 0LL);
LABEL_77:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x645u, -2147467259);
    AEWMILOG_DATA(v42, (char *)this - 440, v43, 0x17u, v14, v15, 0x66uLL);
    goto LABEL_46;
  }
  if ( v15 < 0 )
  {
    AEWMILOG_SECURITY(v12, (char *)this - 440, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    _InterlockedAnd((volatile signed __int32 *)(v13[8] + 156LL), 0xFFFFFFFE);
    v41 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_77;
    }
    goto LABEL_76;
  }
  v16 = *((unsigned int *)this - 78);
  v17 = *(_DWORD *)(*((_QWORD *)this - 46) + 140LL);
  if ( v16 == 70560 )
    v18 = v14 % 70560;
  else
    v18 = v14 % v16;
  v19 = v18 + v17;
  v80 = v18 + v17;
  if ( v16 == 70560 )
    v20 = v15 % 70560;
  else
    v20 = v15 % v16;
  v21 = (unsigned int)(v20 + v17);
  v5 = v14 - v15;
  v79 = v21;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 168), 0, 0) )
  {
    v44 = v5 / *((_DWORD *)this - 90);
    if ( a2->u32ValidFrameCount < v44 )
      v44 = a2->u32ValidFrameCount;
    a2->u32ValidFrameCount = v44;
    *((_DWORD *)this + 5) = v44;
    v45 = v44;
  }
  v22 = *(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*v13 + 80LL);
  if ( v22 == CCrossProcessBaseEndpoint::SetCurrentTimeStamp )
  {
    v23 = *(_DWORD *)(*((_QWORD *)this - 47) + 152LL) == 0;
    v24 = 5LL * (*(_DWORD *)(*((_QWORD *)this - 47) + 152LL) == 0);
    *(_QWORD *)(v13[8] + 8 * v24 + 24) = a3->u64DevicePosition;
    *(_QWORD *)(v13[8] + 8 * v24 + 48) = a3->hnsQPCPosition;
    *(FLOAT32 *)(v13[8] + 8 * v24 + 56) = a3->f32FramesPerSecond;
    *(_QWORD *)(v13[8] + 8 * v24 + 32) = a3->u64StreamPosition;
    *(_QWORD *)(v13[8] + 8 * v24 + 40) = a3->u64PaddingFrames;
    *(_DWORD *)(v13[8] + 8 * v24 + 60) = a3->Flag;
    _InterlockedExchange((volatile __int32 *)(v13[8] + 152LL), v23);
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset_0(&v71, 0, 0x40uLL);
      v71.UserTime = 0x20000;
      v71.Size = 104;
      v72 = 0LL;
      v73 = 0;
      Flag = a3->Flag;
      u64PaddingFrames = a3->u64PaddingFrames;
      hnsQPCPosition = a3->hnsQPCPosition;
      u64DevicePosition = a3->u64DevicePosition;
      u64StreamPosition = a3->u64StreamPosition;
      v71.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_TIMESTAMP;
      LOWORD(v71.Version) = 1283;
      TraceEvent(g_hAEWMITraceHandle, &v71);
      v21 = v79;
      v19 = v80;
    }
    v25 = v13[8];
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 156), 0, 0) & 2) == 0 )
    {
      *(_QWORD *)(v13[8] + 104LL) = a3->u64DevicePosition;
      *(_QWORD *)(v13[8] + 120LL) = a3->u64PaddingFrames;
      v25 = a3->hnsQPCPosition;
      *(_QWORD *)(v13[8] + 128LL) = v25;
      _InterlockedExchange64((volatile __int64 *)(v13[8] + 144LL), v15);
      _InterlockedOr((volatile signed __int32 *)(v13[8] + 156LL), 6u);
    }
  }
  else
  {
    v22((CCrossProcessServerInputEndpoint *)((char *)this - 440), a3, v15);
    v21 = v79;
    v19 = v80;
  }
  v7 = v45 * *((_DWORD *)this - 90);
  *((_DWORD *)this + 20) = 0;
  if ( v7 > v5 )
  {
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset_0(&v64, 0, 0x40uLL);
      v64.UserTime = 0x20000;
      v64.Size = 96;
      v67 = v80;
      v68 = v79;
      v69 = *((unsigned int *)this - 78);
      LOWORD(v64.Version) = 1282;
      v70 = v7 - v5;
      v64.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_GLITCH;
      v65 = (char *)this - 440;
      v66 = 0;
      TraceEvent(g_hAEWMITraceHandle, &v64);
      v21 = v79;
      v19 = v80;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
    {
      Template_pqqqq(
        v25,
        &EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (char *)this - 440,
        v19,
        v21,
        *((_DWORD *)this - 78),
        v7 - v5);
      v21 = v79;
      v19 = v80;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_fbab40e259403f23a0948ee7ac4d9477_Traceguids,
        v19,
        v21,
        v7,
        v5);
    }
    if ( v14 > 0 )
    {
      v27 = (char *)this - 160;
      v82 = 1;
      v28 = (__int64 (__fastcall *)())**((_QWORD **)this - 20);
      if ( v28 == CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::AddData )
      {
        TickCount64 = GetTickCount64();
        v31 = TickCount64;
        if ( !v27[32] )
          goto LABEL_60;
        if ( TickCount64 - *((_QWORD *)v27 + 9) > *((_QWORD *)v27 + 7) )
        {
          v27[32] = 0;
          if ( TickCount64 - *((_QWORD *)v27 + 6) > *((_QWORD *)v27 + 5) )
          {
            LOBYTE(v30) = 1;
            (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v27 + 8LL))((char *)this - 160, v30);
            *((_QWORD *)v27 + 6) = v31;
          }
        }
        if ( !v27[32] )
        {
LABEL_60:
          v27[32] = 1;
          *((_QWORD *)v27 + 8) = v31;
          *((_QWORD *)v27 + 11) = v31;
        }
        v32 = (volatile signed __int32 *)*((_QWORD *)v27 + 1);
        *((_QWORD *)v27 + 9) = v31;
        if ( v32 )
        {
          v33 = *(__int64 (__fastcall **)())(*(_QWORD *)v32 + 8LL);
          if ( v33 == CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::AddData )
            _InterlockedExchangeAdd(v32 + 16, v82);
          else
            ((void (__fastcall *)(volatile signed __int32 *, __int64, unsigned int *))v33)(v32, 4LL, &v82);
          v27[16] = 1;
        }
        if ( v31 - *((_QWORD *)v27 + 11) > *((_QWORD *)v27 + 10) )
        {
          (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v27 + 8LL))((char *)this - 160, 0LL);
          *((_QWORD *)v27 + 11) = v31;
        }
      }
      else
      {
        ((void (__fastcall *)(char *, __int64, unsigned int *, __int64))v28)((char *)this - 160, 4LL, &v82, v21);
      }
    }
    if ( v5 )
    {
      v36 = (void *)*((_QWORD *)this - 43);
      v37 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v79;
      v38 = (const void *)(*((_QWORD *)this - 47) + v79);
      if ( v5 > v37 )
      {
        memcpy_0(v36, v38, v37);
        v39 = v5 - v37;
        v38 = (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL));
        v36 = (void *)(v37 + *((_QWORD *)this - 43));
      }
      else
      {
        v39 = v5;
      }
      memcpy_0(v36, v38, v39);
      if ( *((_DWORD *)this - 88) == 8 )
        v40 = 128;
      else
        v40 = 0;
      memset_0((void *)(*((_QWORD *)this - 43) + v5), v40, v7 - v5);
      *((_DWORD *)this + 20) = v7 - v5;
      goto LABEL_24;
    }
    *((_DWORD *)this + 20) = v7;
LABEL_46:
    a2->pBuffer = *((_QWORD *)this - 43);
    a2->u32BufferFlags = BUFFER_SILENT;
    v34 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
    do
    {
      v35 = v34;
      v34 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL),
              v34 & 0xFFFFFFFD,
              v34);
    }
    while ( v35 != v34 );
    goto LABEL_21;
  }
  v26 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v21;
  if ( v7 > v26 )
  {
    memcpy_0(*((void **)this - 43), (const void *)(*((_QWORD *)this - 47) + (unsigned int)v21), v26);
    memcpy_0(
      (void *)(v26 + *((_QWORD *)this - 43)),
      (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
      v7 - v26);
LABEL_24:
    a2->pBuffer = *((_QWORD *)this - 43);
    *((_DWORD *)this + 4) = 1;
    goto LABEL_20;
  }
  a2->pBuffer = *((_QWORD *)this - 47) + (unsigned int)v21;
  *((_DWORD *)this + 4) = 0;
LABEL_20:
  a2->u32BufferFlags = BUFFER_VALID;
LABEL_21:
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&v58, 0, 0x40uLL);
    v58.UserTime = 0x20000;
    v58.Size = 88;
    v59 = (char *)this - 440;
    v61 = v7;
    v62 = v5;
    v63 = *((int *)this + 4);
    v58.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    LOWORD(v58.Version) = 1286;
    v60 = 0;
    TraceEvent(g_hAEWMITraceHandle, &v58);
  }
}
