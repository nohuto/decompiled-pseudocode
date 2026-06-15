/*
 * XREFs of ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800070C0
 * Callers:
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800077A0 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 * Callees:
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000AFA0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000B050 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000B180 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18000BC50 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18000C360 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::ConnectToSaDevice(__int64 a1, CSaDeviceProxy *a2, unsigned int a3)
{
  CSaDeviceProxy *v6; // rax
  int v7; // esi
  struct IAudioDeviceGraph *v8; // rsi
  __int64 (__fastcall *v9)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **); // rbx
  int DeviceGraph; // eax
  __int64 v11; // rbx
  void (*v12)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *); // rsi
  __int64 v13; // rbx
  unsigned int (__fastcall *v14)(CBaseStreamGroupProxy *__hidden); // rsi
  unsigned int v15; // eax
  __int64 (__fastcall *v16)(__int64, _QWORD, _QWORD, __int64); // rsi
  int v17; // eax
  struct IAudioDeviceGraph *v18; // rdi
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-38h] BYREF
  struct IAudioDeviceGraph *v21; // [rsp+70h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, a1 - 8, a2);
  }
  v21 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 80, lpCriticalSection);
  v6 = *(CSaDeviceProxy **)(a1 + 72);
  if ( v6 && v6 != a2 )
  {
    v7 = -2005139410;
LABEL_39:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18LL,
        &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
        (unsigned int)v7);
    }
    goto LABEL_27;
  }
  v7 = 0;
  if ( !v6 )
  {
    v8 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **))(*(_QWORD *)a2 + 56LL);
    if ( v9 == CSaDeviceProxy::GetDeviceGraph )
      DeviceGraph = CSaDeviceProxy::GetDeviceGraph(a2, &v21);
    else
      DeviceGraph = v9(a2, &v21);
    v7 = DeviceGraph;
    if ( DeviceGraph < 0 )
      goto LABEL_39;
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioDeviceGraph *, _QWORD))(**(_QWORD **)(a1 + 64) + 64LL))(
           *(_QWORD *)(a1 + 64),
           v21,
           a3);
    if ( v7 < 0 )
      goto LABEL_39;
    if ( *(CSaDeviceProxy **)(a1 + 72) != a2 )
    {
      (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = a2;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = *(void (**)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *))(**(_QWORD **)(a1 + 72) + 144LL);
    if ( v12 == CSaDeviceProxy::OnStreamGroupConnected )
      CSaDeviceProxy::OnStreamGroupConnected(*(CSaDeviceProxy **)(a1 + 72), (struct IStreamGroupProxy *)a1);
    else
      ((void (__fastcall *)(_QWORD, __int64))v12)(*(_QWORD *)(a1 + 72), a1);
    v13 = *(_QWORD *)(a1 + 72);
    v14 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a1 + 64LL);
    v15 = v14 == CBaseStreamGroupProxy::GetResourcePriority
        ? CBaseStreamGroupProxy::GetResourcePriority((CBaseStreamGroupProxy *)a1)
        : v14((CBaseStreamGroupProxy *)a1);
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v13 + 72LL);
    v17 = v16 == CSaDeviceProxy::UpdateStreamGroupResourcePriority
        ? CSaDeviceProxy::UpdateStreamGroupResourcePriority(v13, 0LL, v15, 0xFFFFFFFFLL)
        : v16(v13, 0LL, v15, 0xFFFFFFFFLL);
    v7 = v17;
    if ( v17 < 0 )
    {
      CBaseStreamGroupProxy::DisconnectFromSaDevice((CBaseStreamGroupProxy *)a1);
      goto LABEL_39;
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, a1 - 8, a2);
  }
LABEL_27:
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v7;
}
