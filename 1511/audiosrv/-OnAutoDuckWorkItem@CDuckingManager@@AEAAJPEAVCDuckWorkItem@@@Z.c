/*
 * XREFs of ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A33E0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetdBFromUserPreference@CDuckingManager@@AEAAMXZ @ 0x1800646A0 (-GetdBFromUserPreference@CDuckingManager@@AEAAMXZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x1800A1520 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A1858 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?GetSessionFromSessionId@CDuckingManager@@AEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800A2000 (-GetSessionFromSessionId@CDuckingManager@@AEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800A256C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x1800A2AAC (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800A3768 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 */

__int64 __fastcall CDuckingManager::OnAutoDuckWorkItem(CDuckingManager *this, struct CDuckWorkItem *a2)
{
  unsigned __int16 *v2; // r12
  int SessionFromSessionId; // r14d
  const wchar_t *v6; // rax
  CRefCountedObject *v7; // rdi
  float v8; // xmm6_4
  CVolumeGainStage *v9; // rsi
  int v10; // eax
  const struct _GUID *v11; // rdx
  const unsigned __int16 *v12; // rbx
  int v14; // [rsp+20h] [rbp-20h]
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF
  struct IAudioSessionInfo *v16; // [rsp+90h] [rbp+50h] BYREF
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(unsigned __int16 **)a2;
  v16 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
  }
  SessionFromSessionId = CDuckingManager::GetSessionFromSessionId(this, v2, &v16, 1u);
  if ( SessionFromSessionId < 0 )
    goto LABEL_37;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v16 + 48LL))(v16) || *((_DWORD *)a2 + 4) )
  {
    v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v16 + 72LL))(v16);
    if ( (int)CDuckingManager::ApplyDuckingGainStages(this, v12) >= 0 )
      CDuckingManager::RecalculateSessionVolumes(this, v12, 0LL);
    CDuckingManager::NotifyFilteredClientsAutoDuck(this, v2, v12, *((_DWORD *)a2 + 2));
    SessionFromSessionId = CDuckingManager::NotifyUnfilteredClientsAutoDuck(this, v2, *((_DWORD *)a2 + 2));
  }
  else if ( *((_DWORD *)this + 76) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (const wchar_t *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v16 + 64LL))(v16);
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x35u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        v6);
    }
    v7 = 0LL;
    v15 = 0LL;
    v8 = 0.0;
    SessionFromSessionId = (**(__int64 (__fastcall ***)(struct IAudioSessionInfo *, GUID *, __int64 *))v16)(
                             v16,
                             &GUID_08460157_7ba0_4775_a5a3_97302f08c239,
                             &v15);
    if ( SessionFromSessionId >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) )
        v8 = CDuckingManager::GetdBFromUserPreference(this);
      v9 = (CVolumeGainStage *)operator new(0x38uLL);
      if ( v9 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
        v7 = CVolumeGainStage::CVolumeGainStage(v9, v11, v8, 0LL, v10 != 0);
      }
      else
      {
        v7 = 0LL;
      }
      if ( v7 )
        SessionFromSessionId = (*(__int64 (__fastcall **)(__int64, CRefCountedObject *, __int128 *))(*(_QWORD *)v15 + 40LL))(
                                 v15,
                                 v7,
                                 &DuckingPolicyGuid);
      else
        SessionFromSessionId = -2147024882;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) )
      {
        v17 = 0LL;
        SessionFromSessionId = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
                                 v15,
                                 &GUID_ec081b02_27c6_4867_9203_959f1731a3e5,
                                 &v17);
        if ( SessionFromSessionId >= 0 )
        {
          LOBYTE(v14) = 0;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v17 + 24LL))(
            v17,
            2LL,
            0LL,
            0xFFFFFFFFLL,
            v14,
            0LL);
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v7 )
      CRefCountedObject::Release(v7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( SessionFromSessionId < 0 )
  {
LABEL_37:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        SessionFromSessionId);
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)SessionFromSessionId;
}
