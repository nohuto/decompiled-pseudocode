/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DDDD @ 0x140017060 (WPP_SF_DDDD.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_s @ 0x14003AC20 (WPP_SF_s.c)
 *     Template_pqqqq @ 0x14003C03C (Template_pqqqq.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x14003E050 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E15C (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAX@Z @ 0x14003E41C (-AEWMILOG_SECURITY@@YAXKPEAX@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rdi
  void *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r9
  _QWORD *v10; // r15
  __int64 v11; // r11
  signed __int64 v12; // r10
  unsigned int v13; // ecx
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbx
  int v18; // ecx
  unsigned int v19; // r15d
  void (__fastcall **v20)(char *, __int64, int *); // rax
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  signed __int32 v23; // r8d
  unsigned int v24; // r15d
  const void *v25; // rdx
  void *v26; // rcx
  unsigned int v27; // edi
  size_t v28; // r8
  int v29; // edx
  UINT_PTR v30; // rax
  unsigned int v31; // edi
  unsigned __int64 v32; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v33; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+40h] [rbp-C0h]
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+50h] [rbp-B0h] BYREF
  char *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 u32ValidFrameCount; // [rsp+90h] [rbp-70h]
  __int64 u32BufferFlags; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  struct _EVENT_TRACE_HEADER v41; // [rsp+B0h] [rbp-50h] BYREF
  char *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int64 v46; // [rsp+100h] [rbp+0h]
  struct _EVENT_TRACE_HEADER v47; // [rsp+110h] [rbp+10h] BYREF
  char *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  __int64 v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  __int64 v52; // [rsp+160h] [rbp+60h]
  unsigned int v53; // [rsp+1C0h] [rbp+C0h]
  int v54; // [rsp+1C8h] [rbp+C8h] BYREF
  struct AE_CURRENT_POSITION *v55; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v56; // [rsp+1D8h] [rbp+D8h]

  v55 = a3;
  v5 = 0;
  if ( g_u32AEWMILogLevel >= 2 )
  {
    v40 = 0LL;
    memset(&EventTrace, 0, 24);
    EventTrace.ProcessorTime = 0LL;
    v37 = 0LL;
    v36 = (char *)this - 440;
    u32ValidFrameCount = a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    EventTrace.Size = 88;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    EventTrace.Class.Type = 5;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  v6 = a2->u32ValidFrameCount;
  v7 = (void *)*((_QWORD *)this - 40);
  *((_DWORD *)this + 5) = v6;
  *((_DWORD *)this + 4) = 2;
  v53 = 0;
  ResetEvent(v7);
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0, 0);
  if ( (v8 & 1) == 0 && (*((_BYTE *)this - 288) & 1) == 0 || !(_DWORD)v6 )
  {
    if ( g_u32AEWMILogLevel >= 2 )
    {
      v44 = v8;
      v41.ProcessorTime = 0x2000000000000LL;
      *(_QWORD *)&v41.ThreadId = 0LL;
      v41.TimeStamp.QuadPart = 0LL;
      v42 = (char *)this - 440;
      *(_QWORD *)&v41.Size = 0x1700000058LL;
      v41.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
      v43 = 0LL;
      v45 = v6;
      v46 = 101LL;
      TraceEvent(g_hAEWMITraceHandle, &v41);
    }
    goto LABEL_33;
  }
  v9 = *((_QWORD *)this - 47);
  v10 = (_QWORD *)((char *)this - 440);
  v11 = *(_QWORD *)(v9 + 8);
  v12 = *(_QWORD *)(v9 + 16);
  v33 = v11;
  v56 = v12;
  if ( v11 < 0 || v12 < 0 )
  {
    AEWMILOG_SECURITY(v8, (char *)this - 440);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    _InterlockedAnd((volatile signed __int32 *)(v10[8] + 156LL), 0xFFFFFFFE);
    v13 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, 0LL);
    }
    AEWMILOG_DATA(v13, (char *)this - 440, 0x17u, v33, v56, 0x66uLL);
    goto LABEL_33;
  }
  v5 = v11 - v12;
  v14 = *(_DWORD *)(*((_QWORD *)this - 46) + 140LL);
  v34 = v14 + v11 % *((unsigned int *)this - 78);
  v15 = v14 + v12 % *((unsigned int *)this - 78);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 168), 0, 0) )
  {
    LODWORD(v6) = v5 / *((_DWORD *)this - 90);
    if ( a2->u32ValidFrameCount < (unsigned int)v6 )
      LODWORD(v6) = a2->u32ValidFrameCount;
    a2->u32ValidFrameCount = v6;
    *((_DWORD *)this + 5) = v6;
  }
  (*(void (__fastcall **)(char *, struct AE_CURRENT_POSITION *, unsigned __int64))(*v10 + 80LL))(
    (char *)this - 440,
    v55,
    v56);
  v16 = v6 * *((_DWORD *)this - 90);
  *((_DWORD *)this + 20) = 0;
  v53 = v16;
  if ( v16 <= v5 )
  {
    v31 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v15;
    if ( v16 <= v31 )
    {
      v24 = v16;
      a2->pBuffer = *((_QWORD *)this - 47) + v15;
      *((_DWORD *)this + 4) = 0;
    }
    else
    {
      memcpy_0(*((void **)this - 43), (const void *)(*((_QWORD *)this - 47) + v15), v31);
      v24 = v53;
      memcpy_0(
        (void *)(v31 + *((_QWORD *)this - 43)),
        (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
        v53 - v31);
      a2->pBuffer = *((_QWORD *)this - 43);
      *((_DWORD *)this + 4) = 1;
    }
    a2->u32BufferFlags = BUFFER_VALID;
    goto LABEL_36;
  }
  v17 = v16 - v5;
  v32 = *((unsigned int *)this - 78);
  v56 = v15;
  AEWMILOG_GLITCH(v15, (char *)this - 440, 2u, v34, v15, v32, v17);
  if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
    Template_pqqqq(v18, (unsigned int)"!", (_DWORD)this - 440, v34, v15, *((_DWORD *)this - 78), v17);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0 )
  {
    v19 = v53;
  }
  else
  {
    v19 = v53;
    if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_e3fd866db05c3bf798c866060de40f25_Traceguids,
        v34,
        v15,
        v53,
        v5);
  }
  v20 = (void (__fastcall **)(char *, __int64, int *))*((_QWORD *)this - 20);
  v54 = 1;
  (*v20)((char *)this - 160, 4LL, &v54);
  if ( !v5 )
  {
    *((_DWORD *)this + 20) = v19;
LABEL_33:
    a2->pBuffer = *((_QWORD *)this - 43);
    a2->u32BufferFlags = BUFFER_SILENT;
    v22 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
    v21 = _InterlockedCompareExchange(
            (volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL),
            v22 & 0xFFFFFFFD,
            v22);
    if ( v22 != v21 )
    {
      do
      {
        v23 = v21;
        v21 = _InterlockedCompareExchange(
                (volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL),
                v21 & 0xFFFFFFFD,
                v21);
      }
      while ( v21 != v23 );
    }
    v24 = v53;
    goto LABEL_36;
  }
  v25 = (const void *)(*((_QWORD *)this - 47) + v56);
  v26 = (void *)*((_QWORD *)this - 43);
  v27 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v15;
  if ( v5 <= v27 )
  {
    v28 = v5;
  }
  else
  {
    memcpy_0(v26, v25, v27);
    v28 = v5 - v27;
    v25 = (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL));
    v26 = (void *)(v27 + *((_QWORD *)this - 43));
  }
  memcpy_0(v26, v25, v28);
  v29 = 0;
  if ( *((_DWORD *)this - 88) == 8 )
    v29 = 128;
  memset_0((void *)(*((_QWORD *)this - 43) + v5), v29, v17);
  v30 = *((_QWORD *)this - 43);
  v24 = v53;
  *((_DWORD *)this + 20) = v17;
  a2->pBuffer = v30;
  *((_DWORD *)this + 4) = 1;
  a2->u32BufferFlags = BUFFER_VALID;
LABEL_36:
  if ( g_u32AEWMILogLevel >= 2 )
  {
    *(_QWORD *)&v47.Size = 88LL;
    v47.ProcessorTime = 0LL;
    v49 = 0LL;
    *(_QWORD *)&v47.ThreadId = 0LL;
    v47.TimeStamp.QuadPart = 0LL;
    v48 = (char *)this - 440;
    v50 = v24;
    v51 = v5;
    v52 = *((int *)this + 4);
    v47.UserTime = 0x20000;
    v47.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    v47.Class.Type = 6;
    TraceEvent(g_hAEWMITraceHandle, &v47);
  }
}
