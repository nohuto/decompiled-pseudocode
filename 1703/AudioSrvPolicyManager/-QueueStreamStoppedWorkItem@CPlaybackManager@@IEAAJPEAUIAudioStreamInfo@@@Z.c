/*
 * XREFs of ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001612C
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180015ED0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001D7EC (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::QueueStreamStoppedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  CStreamStoppedWorkItem *v3; // rsi
  HANDLE ProcessHeap; // rax
  CStreamStoppedWorkItem *v5; // rbx
  int v6; // edi

  v3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = (CStreamStoppedWorkItem *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = &CStreamStoppedWorkItem::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CStreamStoppedWorkItem::Initialize(v5, a2);
    if ( v6 >= 0 )
    {
      v3 = v5;
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(CStreamStoppedWorkItem *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(CStreamStoppedWorkItem *))(*(_QWORD *)v3 + 16LL))(v3);
    if ( v6 >= 0 )
      v3 = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v6);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::CreateInstance", 308, v6);
  }
  if ( v3 )
    (*(void (__fastcall **)(CStreamStoppedWorkItem *, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_41cf1b36f95b3f413e10328c0a55d7ad_Traceguids, v6);
    }
    AudPolicyLogError("CPlaybackManager::QueueStreamStoppedWorkItem", 222, v6);
  }
  return (unsigned int)v6;
}
