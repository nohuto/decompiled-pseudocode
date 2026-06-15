/*
 * XREFs of ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002B550
 * Callers:
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001B4A0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetCategory@CAudioStream@@UEAAKXZ @ 0x1800206A0 (-GetCategory@CAudioStream@@UEAAKXZ.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800289A0 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?IsCommunicationSession@CAudioSession@@UEAAHXZ @ 0x180028B50 (-IsCommunicationSession@CAudioSession@@UEAAHXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_ddS @ 0x18009124C (WPP_SF_ddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A350C (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 */

__int64 __fastcall CDuckingManager::OnStreamStateChanged(
        __int64 a1,
        CAudioSession *a2,
        __int64 a3,
        int a4,
        CAudioStream *a5)
{
  unsigned int v5; // ebp
  int v6; // esi
  TraceLoggingHProvider v9; // rbx
  __int64 (__fastcall *v10)(CAudioSession *); // rdi
  int IsCommunicationSession; // eax
  __int64 (__fastcall *v12)(CAudioSession *, struct IAudioProcess **); // rbx
  int Process; // eax
  int v14; // edi
  __int64 (__fastcall *v15)(CAudioStream *); // rdi
  unsigned int Category; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct IAudioProcess *v19; // r12
  unsigned int v20; // r15d
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  __int64 v24; // r9
  TraceLoggingHProvider v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  struct IAudioProcess *v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v5 = 0;
  v6 = a4;
  v29 = 0LL;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v22 = (*(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_ddS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14,
      (unsigned int)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
      v6,
      *(_DWORD *)(a1 + 292),
      v22);
    v9 = WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 296) )
  {
    if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v9 + 7) & 0x8000000) != 0
      && *((_BYTE *)v9 + 25) >= 4u )
    {
      v23 = 15;
LABEL_37:
      WPP_SF_(*((_QWORD *)v9 + 2), v23, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
    }
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)a2 + 48LL);
    if ( v10 == CAudioSession::IsCommunicationSession )
    {
      IsCommunicationSession = CAudioSession::IsCommunicationSession(a2);
    }
    else
    {
      IsCommunicationSession = v10(a2);
      v9 = WPP_GLOBAL_Control;
    }
    if ( !IsCommunicationSession )
    {
      v12 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL);
      if ( v12 == CAudioSession::GetProcess )
        Process = CAudioSession::GetProcess(a2, &v29);
      else
        Process = v12(a2, &v29);
      v14 = Process;
      if ( Process < 0 )
        goto LABEL_61;
      v15 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a5 + 40LL);
      if ( v15 == CAudioStream::GetCategory )
        Category = CAudioStream::GetCategory(a5);
      else
        Category = v15(a5);
      v19 = v29;
      v20 = Category;
      v14 = 0;
      if ( Category >= 0x15 )
        v14 = -2147024809;
      if ( v14 >= 0 && dword_1800C4CF0[Category] )
      {
        if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v29 + 88LL))(v29)
          && !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 120LL))(v19) )
        {
          v20 = 0;
        }
        v6 = v30;
      }
      if ( v14 < 0 )
      {
LABEL_61:
        v25 = WPP_GLOBAL_Control;
        goto LABEL_62;
      }
      if ( v20 != 3 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
        }
        goto LABEL_24;
      }
      if ( v6 == 1 )
      {
        v24 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 288));
        v25 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v24);
          v25 = WPP_GLOBAL_Control;
        }
        if ( *(_DWORD *)(a1 + 292) != 3 )
        {
          v26 = (*(__int64 (__fastcall **)(CAudioSession *, __int64, __int64, __int64))(*(_QWORD *)a2 + 64LL))(
                  a2,
                  v17,
                  v18,
                  v24);
          v14 = CDuckingManager::QueueDuckingWorkItem(a1 - 16, v26, *(unsigned int *)(a1 + 288), 1LL, 1);
LABEL_58:
          v25 = WPP_GLOBAL_Control;
        }
      }
      else
      {
        if ( v6 )
          goto LABEL_58;
        v27 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 288));
        v25 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v27);
          v25 = WPP_GLOBAL_Control;
        }
        if ( *(_DWORD *)(a1 + 292) != 3 )
        {
          v28 = (*(__int64 (__fastcall **)(CAudioSession *, __int64, __int64, __int64))(*(_QWORD *)a2 + 64LL))(
                  a2,
                  v17,
                  v18,
                  v27);
          v14 = CDuckingManager::QueueDuckingWorkItem(a1 - 16, v28, 0LL, 2LL, 1);
          goto LABEL_58;
        }
      }
      if ( v14 >= 0 )
      {
LABEL_24:
        v5 = v14;
        goto LABEL_25;
      }
LABEL_62:
      if ( v25 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v25 + 7) & 0x8000000) != 0
        && *((_BYTE *)v25 + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)v25 + 2), 20LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, (unsigned int)v14);
      }
      goto LABEL_24;
    }
    if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v9 + 7) & 0x8000000) != 0
      && *((_BYTE *)v9 + 25) >= 4u )
    {
      v23 = 16;
      goto LABEL_37;
    }
  }
LABEL_25:
  if ( v29 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v29 + 16LL))(v29);
  return v5;
}
