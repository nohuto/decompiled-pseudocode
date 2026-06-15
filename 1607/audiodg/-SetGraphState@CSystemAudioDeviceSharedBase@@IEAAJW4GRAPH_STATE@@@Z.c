/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348
 * Callers:
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005470 (-DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005550 (-StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400055F0 (-StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400059E0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005C10 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 * Callees:
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x1400068D0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140006960 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140006D20 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140026990 (WPP_SF_DDD.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(__int64 a1, int a2)
{
  int v2; // esi
  int v4; // ebx
  struct ISaDeviceCallback *v5; // rdx
  CAudioDeviceGraph *v6; // rcx
  __int64 (__fastcall *v7)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *); // rax
  int v8; // eax
  int v9; // edx
  CAudioDeviceGraph *v11; // rcx
  __int64 (__fastcall *v12)(CAudioDeviceGraph *__hidden); // rax
  CAudioDeviceGraph *v13; // rcx

  v2 = a2;
  v4 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v13 = *(CAudioDeviceGraph **)(a1 + 304);
      v12 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)v13 + 128LL);
      if ( v12 == CAudioDeviceGraph::Stop )
      {
        v8 = CAudioDeviceGraph::Stop(v13);
        goto LABEL_9;
      }
LABEL_23:
      v8 = ((__int64 (*)(void))v12)();
      goto LABEL_9;
    case 1:
      v11 = *(CAudioDeviceGraph **)(a1 + 304);
      v12 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)v11 + 136LL);
      if ( v12 == CAudioDeviceGraph::Pause )
      {
        v8 = CAudioDeviceGraph::Pause(v11);
LABEL_9:
        v4 = v8;
        break;
      }
      goto LABEL_23;
    case 2:
      v12 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(**(_QWORD **)(a1 + 304) + 144LL);
      goto LABEL_23;
    case 3:
      if ( a1 )
        v5 = (struct ISaDeviceCallback *)(a1 + 272);
      else
        v5 = 0LL;
      v6 = *(CAudioDeviceGraph **)(a1 + 304);
      v7 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *))(*(_QWORD *)v6 + 120LL);
      if ( v7 == CAudioDeviceGraph::Start )
        v8 = CAudioDeviceGraph::Start(v6, v5);
      else
        v8 = v7(v6, v5);
      goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
  {
    v9 = 2;
    if ( v4 >= 0 )
      v9 = 4;
    if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v9 )
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
        *(unsigned int *)(a1 + 312),
        v2,
        v4);
  }
  if ( v4 < 0 )
    v2 = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 312) = v2;
  return (unsigned int)v4;
}
