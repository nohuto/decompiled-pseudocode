/*
 * XREFs of ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5DE0
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A60B0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?GetSessionFromSessionId@CDuckingManager@@AEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800A4C68 (-GetSessionFromSessionId@CDuckingManager@@AEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A55CC (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A58DC (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800A6428 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x1800A664C (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 */

__int64 __fastcall CDuckingManager::OnAutoUnduckWorkItem(CDuckingManager *this, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r15
  int SessionFromSessionId; // esi
  const wchar_t *v6; // rax
  __int64 v7; // r9
  const unsigned __int16 *v8; // rbx
  struct IAudioSessionInfo *v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF

  v2 = *a2;
  v10 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x37u,
      (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
  }
  SessionFromSessionId = CDuckingManager::GetSessionFromSessionId(this, v2, &v10, 1u);
  if ( SessionFromSessionId < 0 )
    goto LABEL_25;
  if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v10 + 48LL))(v10) || *((_DWORD *)a2 + 4) )
  {
    Sleep(0x1F4u);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v8 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v10 + 72LL))(v10);
    if ( (int)CDuckingManager::RemoveDuckingGainStages(this, v8, &v11) >= 0 )
      CDuckingManager::RecalculateSessionVolumes(this, v8, &v11);
    if ( !*((_DWORD *)this + 76) )
      CDuckingManager::NotifyFilteredClientsAutoUnduck(this, v2);
    SessionFromSessionId = CDuckingManager::NotifyUnfilteredClientsAutoUnduck(this, v2);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  }
  else if ( *((_DWORD *)this + 76) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      v6 = (const wchar_t *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v10 + 64LL))(v10);
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x38u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        v6);
    }
    v11 = 0LL;
    SessionFromSessionId = (**(__int64 (__fastcall ***)(struct IAudioSessionInfo *, GUID *, __int64 *))v10)(
                             v10,
                             &GUID_08460157_7ba0_4775_a5a3_97302f08c239,
                             &v11);
    if ( SessionFromSessionId >= 0 )
    {
      LOBYTE(v7) = 1;
      SessionFromSessionId = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 48LL))(
                               v11,
                               &DuckingPolicyGuid,
                               0LL,
                               v7,
                               0LL);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( SessionFromSessionId < 0 )
  {
LABEL_25:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x39u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        SessionFromSessionId);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)SessionFromSessionId;
}
