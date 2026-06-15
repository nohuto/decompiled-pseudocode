/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140016A30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddData@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x1400159D0 (-AddData@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEA.c)
 *     WPP_SF_DDDD @ 0x140016EEC (WPP_SF_DDDD.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_s @ 0x14003AC48 (WPP_SF_s.c)
 *     Template_pqqqq @ 0x14003C02C (Template_pqqqq.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x14003E008 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAX@Z @ 0x14003E2B0 (-AEWMILOG_SECURITY@@YAXKPEAX@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E3E0 (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned int v5; // r15d
  __int64 v6; // r14
  unsigned int v7; // esi
  void *v8; // rcx
  unsigned __int32 v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  signed __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  unsigned int v19; // r11d
  __int64 v20; // rdx
  unsigned int v21; // r10d
  void (__fastcall *v22)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64); // rsi
  BOOL v23; // r8d
  __int64 v24; // rdx
  unsigned int v25; // r14d
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  int v28; // ecx
  void (__fastcall **v29)(char *, __int64, int *); // rax
  void *v30; // rcx
  const void *v31; // rdx
  unsigned int v32; // r13d
  size_t v33; // r8
  int v34; // edx
  __int64 v35; // rcx
  size_t Size; // [rsp+40h] [rbp-C0h]
  size_t Sizea; // [rsp+40h] [rbp-C0h]
  struct _EVENT_TRACE_HEADER v38; // [rsp+50h] [rbp-B0h] BYREF
  char *v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  struct _EVENT_TRACE_HEADER v44; // [rsp+B0h] [rbp-50h] BYREF
  char *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+110h] [rbp+10h] BYREF
  char *v51; // [rsp+140h] [rbp+40h]
  int v52; // [rsp+148h] [rbp+48h]
  __int64 u32ValidFrameCount; // [rsp+150h] [rbp+50h]
  __int64 u32BufferFlags; // [rsp+158h] [rbp+58h]
  __int64 v55; // [rsp+160h] [rbp+60h]
  struct _EVENT_TRACE_HEADER v56; // [rsp+170h] [rbp+70h] BYREF
  __int64 v57; // [rsp+1A0h] [rbp+A0h]
  int v58; // [rsp+1A8h] [rbp+A8h]
  __int64 Flag; // [rsp+1B0h] [rbp+B0h]
  UINT64 u64PaddingFrames; // [rsp+1B8h] [rbp+B8h]
  HNSTIME hnsQPCPosition; // [rsp+1C0h] [rbp+C0h]
  UINT64 u64DevicePosition; // [rsp+1C8h] [rbp+C8h]
  UINT64 u64StreamPosition; // [rsp+1D0h] [rbp+D0h]
  unsigned int v64; // [rsp+230h] [rbp+130h]
  unsigned int v65; // [rsp+238h] [rbp+138h]
  int v67; // [rsp+248h] [rbp+148h] BYREF

  v5 = 0;
  if ( g_u32AEWMILogLevel >= 2 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v51 = (char *)this - 440;
    u32ValidFrameCount = a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    EventTrace.Size = 88;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    EventTrace.Class.Type = 5;
    v52 = 0;
    v55 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  v6 = a2->u32ValidFrameCount;
  v7 = 0;
  v8 = (void *)*((_QWORD *)this - 40);
  *((_DWORD *)this + 5) = v6;
  *((_DWORD *)this + 4) = 2;
  ResetEvent(v8);
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0, 0);
  v10 = v9;
  v11 = v9 & 1;
  if ( !(_BYTE)v11 || !(_DWORD)v6 )
  {
    if ( g_u32AEWMILogLevel >= 2 )
    {
      memset_0(&v38, 0, 0x40uLL);
      v38.UserTime = 0x20000;
      v38.Size = 88;
      v39 = (char *)this - 440;
      v38.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
      v38.Class.Type = 23;
      v40 = 0;
      v41 = v10;
      v42 = v6;
      v43 = 101LL;
      TraceEvent(g_hAEWMITraceHandle, &v38);
    }
    goto LABEL_28;
  }
  v12 = *((_QWORD *)this - 47);
  v13 = (_QWORD *)((char *)this - 440);
  v14 = *(_QWORD *)(v12 + 8);
  v15 = *(_QWORD *)(v12 + 16);
  Size = v15;
  if ( v14 < 0 )
  {
    AEWMILOG_SECURITY(v11, (char *)this - 440);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) )
    {
      WPP_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        38LL,
        &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    _InterlockedAnd((volatile signed __int32 *)(v13[8] + 156LL), 0xFFFFFFFE);
    v35 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 2u )
    {
      goto LABEL_63;
    }
LABEL_62:
    WPP_SF_D(*(_QWORD *)(v35 + 16), 37LL, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, 0LL);
LABEL_63:
    AEWMILOG_DATA(v35, (char *)this - 440, 0x17u, v14, Size, 0x66uLL);
    goto LABEL_28;
  }
  if ( v15 < 0 )
  {
    AEWMILOG_SECURITY(v11, (char *)this - 440);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) )
    {
      WPP_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        38LL,
        &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    _InterlockedAnd((volatile signed __int32 *)(v13[8] + 156LL), 0xFFFFFFFE);
    v35 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 2u )
    {
      goto LABEL_63;
    }
    goto LABEL_62;
  }
  v16 = *((unsigned int *)this - 78);
  v17 = *(_DWORD *)(*((_QWORD *)this - 46) + 140LL);
  if ( v16 == 76800 )
    v18 = v14 % 76800;
  else
    v18 = v14 % v16;
  v19 = v18 + v17;
  v65 = v18 + v17;
  if ( v16 == 76800 )
    v20 = v15 % 76800;
  else
    v20 = v15 % v16;
  v21 = v20 + v17;
  v64 = v20 + v17;
  v5 = v14 - v15;
  v22 = *(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*v13 + 80LL);
  if ( v22 == CCrossProcessBaseEndpoint::SetCurrentTimeStamp )
  {
    v23 = *(_DWORD *)(v13[8] + 152LL) == 0;
    v24 = 5LL * (*(_DWORD *)(v13[8] + 152LL) == 0);
    *(_QWORD *)(v13[8] + 8 * v24 + 24) = a3->u64DevicePosition;
    *(_QWORD *)(v13[8] + 8 * v24 + 48) = a3->hnsQPCPosition;
    *(FLOAT32 *)(v13[8] + 8 * v24 + 56) = a3->f32FramesPerSecond;
    *(_QWORD *)(v13[8] + 8 * v24 + 32) = a3->u64StreamPosition;
    *(_QWORD *)(v13[8] + 8 * v24 + 40) = a3->u64PaddingFrames;
    *(_DWORD *)(v13[8] + 8 * v24 + 60) = a3->Flag;
    _InterlockedExchange((volatile __int32 *)(v13[8] + 152LL), v23);
    if ( g_u32AEWMILogLevel >= 3 )
    {
      memset_0(&v56, 0, 0x40uLL);
      v56.UserTime = 0x20000;
      v56.Size = 104;
      Flag = a3->Flag;
      u64PaddingFrames = a3->u64PaddingFrames;
      hnsQPCPosition = a3->hnsQPCPosition;
      u64DevicePosition = a3->u64DevicePosition;
      u64StreamPosition = a3->u64StreamPosition;
      v56.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_TIMESTAMP;
      v56.Class.Type = 3;
      v57 = 0LL;
      v58 = 0;
      TraceEvent(g_hAEWMITraceHandle, &v56);
      v15 = Size;
      v21 = v64;
      v19 = v65;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13[8] + 156LL), 0, 0) & 2) == 0 )
    {
      *(_QWORD *)(v13[8] + 104LL) = a3->u64DevicePosition;
      *(_QWORD *)(v13[8] + 120LL) = a3->u64PaddingFrames;
      *(_QWORD *)(v13[8] + 128LL) = a3->hnsQPCPosition;
      _InterlockedExchange64((volatile __int64 *)(v13[8] + 144LL), v15);
      _InterlockedOr((volatile signed __int32 *)(v13[8] + 156LL), 6u);
    }
  }
  else
  {
    v22((CCrossProcessServerInputEndpoint *)((char *)this - 440), a3, v15);
    v21 = v64;
    v19 = v65;
  }
  v7 = v6 * *((_DWORD *)this - 90);
  *((_DWORD *)this + 20) = 0;
  if ( v7 > v5 )
  {
    Sizea = v7 - v5;
    AEWMILOG_GLITCH(v21, (char *)this - 440, 2u, v19, v21, *((unsigned int *)this - 78), Sizea);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pqqqq(
        v28,
        (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (_DWORD)this - 440,
        v65,
        v64,
        *((_DWORD *)this - 78),
        v7 - v5);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
    {
      WPP_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        10LL,
        &WPP_ed8a107ce6a26194a692278bab6c3f50_Traceguids,
        v65,
        v64,
        v7,
        v5);
    }
    v29 = (void (__fastcall **)(char *, __int64, int *))*((_QWORD *)this - 20);
    v67 = 1;
    if ( (char *)*v29 == (char *)CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::AddData )
      CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::AddData(
        (__int64)this - 160,
        4u,
        (__int64)&v67);
    else
      (*v29)((char *)this - 160, 4LL, &v67);
    if ( v5 )
    {
      v30 = (void *)*((_QWORD *)this - 43);
      v31 = (const void *)(*((_QWORD *)this - 47) + v64);
      v32 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v64;
      if ( v5 > v32 )
      {
        memcpy_0(v30, v31, v32);
        v33 = v5 - v32;
        v31 = (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL));
        v30 = (void *)(v32 + *((_QWORD *)this - 43));
      }
      else
      {
        v33 = v5;
      }
      memcpy_0(v30, v31, v33);
      if ( *((_DWORD *)this - 88) == 8 )
        v34 = 128;
      else
        v34 = 0;
      memset_0((void *)(*((_QWORD *)this - 43) + v5), v34, Sizea);
      *((_DWORD *)this + 20) = Sizea;
      goto LABEL_25;
    }
    *((_DWORD *)this + 20) = v7;
LABEL_28:
    a2->pBuffer = *((_QWORD *)this - 43);
    a2->u32BufferFlags = BUFFER_SILENT;
    v26 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
    do
    {
      v27 = v26;
      v26 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL),
              v26 & 0xFFFFFFFD,
              v26);
    }
    while ( v27 != v26 );
    goto LABEL_20;
  }
  v25 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v21;
  if ( v7 > v25 )
  {
    memcpy_0(*((void **)this - 43), (const void *)(*((_QWORD *)this - 47) + v21), v25);
    memcpy_0(
      (void *)(v25 + *((_QWORD *)this - 43)),
      (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
      v7 - v25);
LABEL_25:
    a2->pBuffer = *((_QWORD *)this - 43);
    *((_DWORD *)this + 4) = 1;
    goto LABEL_19;
  }
  a2->pBuffer = *((_QWORD *)this - 47) + v21;
  *((_DWORD *)this + 4) = 0;
LABEL_19:
  a2->u32BufferFlags = BUFFER_VALID;
LABEL_20:
  if ( g_u32AEWMILogLevel >= 2 )
  {
    memset_0(&v44, 0, 0x40uLL);
    v44.UserTime = 0x20000;
    v44.Size = 88;
    v45 = (char *)this - 440;
    v47 = v7;
    v48 = v5;
    v49 = *((int *)this + 4);
    v44.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    v44.Class.Type = 6;
    v46 = 0;
    TraceEvent(g_hAEWMITraceHandle, &v44);
  }
}
