/*
 * XREFs of ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016640
 * Callers:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400156D4 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140015D40 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039EC0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 */

void __fastcall AERTDestroyZoneHeap(void *a1)
{
  __int64 v2; // rcx
  int v3; // edi
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+28h] [rbp-29h] BYREF
  __int64 v5; // [rsp+58h] [rbp+7h]
  int v6; // [rsp+60h] [rbp+Fh]
  void *v7; // [rsp+68h] [rbp+17h]
  __int64 v8; // [rsp+70h] [rbp+1Fh]
  __int64 v9; // [rsp+78h] [rbp+27h]
  __int64 v10; // [rsp+80h] [rbp+2Fh]
  __int64 v11; // [rsp+88h] [rbp+37h]
  __int64 v12; // [rsp+90h] [rbp+3Fh]
  __int64 v13; // [rsp+98h] [rbp+47h]

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      51LL,
      &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids,
      a1);
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( a1 )
  {
    v3 = RtlDestroyMemoryZone(a1);
    if ( (v3 & 0xC0000000) != 0xC0000000 )
    {
LABEL_7:
      v2 = *(_QWORD *)&WPP_GLOBAL_Control;
      goto LABEL_8;
    }
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        52LL,
        &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids,
        a1);
      goto LABEL_7;
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_8:
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v5 = 0LL;
    v6 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    EventTrace.Size = 120;
    v13 = v3;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    EventTrace.Class.Type = 4;
    v7 = a1;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( (unsigned int *)v2 != &WPP_GLOBAL_Control && (*(_DWORD *)(v2 + 28) & 0x40000) != 0 && *(_BYTE *)(v2 + 25) >= 4u )
    WPP_SF_(*(_QWORD *)(v2 + 16), 53LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
}
