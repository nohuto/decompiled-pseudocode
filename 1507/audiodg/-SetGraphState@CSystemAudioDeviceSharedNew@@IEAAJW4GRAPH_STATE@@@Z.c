/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z @ 0x14000E020
 * Callers:
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E160 (-DisconnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E250 (-StopStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E340 (-StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ @ 0x14000E8A0 (-Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ.c)
 * Callees:
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F4F0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F590 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F970 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_DDD @ 0x140027448 (WPP_SF_DDD.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::SetGraphState(__int64 a1, int a2)
{
  int v4; // ebx
  struct ISaDeviceCallback *v5; // rdi
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *); // r14
  int v7; // eax
  int v8; // edx
  CAudioDeviceGraph *v10; // rbx
  __int64 (__fastcall *v11)(CAudioDeviceGraph *__hidden); // rdi

  v4 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v10 = *(CAudioDeviceGraph **)(a1 + 360);
      v11 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)v10 + 96LL);
      if ( v11 == CAudioDeviceGraph::Stop )
      {
        v7 = CAudioDeviceGraph::Stop(*(CAudioDeviceGraph **)(a1 + 360));
        break;
      }
      goto LABEL_26;
    case 1:
      v10 = *(CAudioDeviceGraph **)(a1 + 360);
      v11 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)v10 + 104LL);
      if ( v11 == CAudioDeviceGraph::Pause )
      {
        v7 = CAudioDeviceGraph::Pause(*(CAudioDeviceGraph **)(a1 + 360));
        break;
      }
LABEL_26:
      v7 = v11(v10);
      break;
    case 2:
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 112LL))(*(_QWORD *)(a1 + 360));
      break;
    case 3:
      if ( a1 )
        v5 = (struct ISaDeviceCallback *)(a1 + 272);
      else
        v5 = 0LL;
      v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *))(**(_QWORD **)(a1 + 360)
                                                                                             + 88LL);
      if ( v6 == CAudioDeviceGraph::Start )
        v7 = CAudioDeviceGraph::Start(*(CAudioDeviceGraph **)(a1 + 360), v5);
      else
        v7 = v6(*(CAudioDeviceGraph **)(a1 + 360), v5);
      break;
    default:
      goto LABEL_10;
  }
  v4 = v7;
LABEL_10:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0 )
  {
    v8 = v4 < 0 ? 2 : 4;
    if ( *(unsigned __int8 *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= v8 )
      WPP_SF_DDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        30LL,
        &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
        *(unsigned int *)(a1 + 368),
        a2,
        v4);
  }
  if ( v4 < 0 )
    *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 368);
  else
    *(_DWORD *)(a1 + 368) = a2;
  return (unsigned int)v4;
}
