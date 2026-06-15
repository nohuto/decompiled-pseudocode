/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005760
 * Callers:
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400058B0 (-DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400059A0 (-StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005A40 (-StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005F50 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140006230 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 * Callees:
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140007220 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x1400072C0 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x1400076A0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_DDD @ 0x140027D98 (WPP_SF_DDD.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(__int64 a1, int a2)
{
  int v2; // ebp
  int v4; // ebx
  struct ISaDeviceCallback *v5; // rbx
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *); // r14
  int v7; // eax
  int v8; // edx
  __int64 result; // rax
  CAudioDeviceGraph *v10; // rbx
  __int64 (__fastcall *v11)(CAudioDeviceGraph *__hidden); // rdi

  v2 = a2;
  v4 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v10 = *(CAudioDeviceGraph **)(a1 + 304);
      v11 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)v10 + 128LL);
      if ( v11 == CAudioDeviceGraph::Stop )
      {
        v7 = CAudioDeviceGraph::Stop(*(CAudioDeviceGraph **)(a1 + 304));
        goto LABEL_9;
      }
LABEL_26:
      v7 = v11(v10);
      goto LABEL_9;
    case 1:
      v10 = *(CAudioDeviceGraph **)(a1 + 304);
      v11 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)v10 + 136LL);
      if ( v11 == CAudioDeviceGraph::Pause )
      {
        v7 = CAudioDeviceGraph::Pause(*(CAudioDeviceGraph **)(a1 + 304));
LABEL_9:
        v4 = v7;
        break;
      }
      goto LABEL_26;
    case 2:
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 144LL))(*(_QWORD *)(a1 + 304));
      goto LABEL_9;
    case 3:
      if ( a1 )
        v5 = (struct ISaDeviceCallback *)(a1 + 272);
      else
        v5 = 0LL;
      v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *))(**(_QWORD **)(a1 + 304)
                                                                                             + 120LL);
      if ( v6 == CAudioDeviceGraph::Start )
        v7 = CAudioDeviceGraph::Start(*(CAudioDeviceGraph **)(a1 + 304), v5);
      else
        v7 = v6(*(CAudioDeviceGraph **)(a1 + 304), v5);
      goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
  {
    v8 = 2;
    if ( v4 >= 0 )
      v8 = 4;
    if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v8 )
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids,
        *(unsigned int *)(a1 + 312),
        v2,
        v4);
  }
  if ( v4 < 0 )
    v2 = *(_DWORD *)(a1 + 312);
  result = (unsigned int)v4;
  *(_DWORD *)(a1 + 312) = v2;
  return result;
}
