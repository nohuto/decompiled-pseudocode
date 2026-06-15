/*
 * XREFs of ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800297F0
 * Callers:
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029040 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800264C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x180026BB0 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180026CE0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180026D90 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180026EC0 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::ConnectToSaDevice(__int64 a1, CSaDeviceProxy *a2, unsigned int a3)
{
  CSaDeviceProxy *v6; // rax
  int v7; // edi
  struct IAudioDeviceGraph *v8; // rdi
  __int64 (__fastcall *v9)(CSaDeviceProxy *, struct IAudioDeviceGraph **); // rbx
  int DeviceGraph; // eax
  __int64 v11; // rbx
  void (__fastcall *v12)(CSaDeviceProxy *, struct IStreamGroupProxy *); // rdi
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(CBaseStreamGroupProxy *); // rbx
  unsigned int v15; // eax
  __int64 (__fastcall *v16)(__int64, unsigned int, unsigned int, unsigned int); // rbp
  int v17; // eax
  struct IAudioDeviceGraph *v18; // rsi
  LPCRITICAL_SECTION lpCriticalSection[5]; // [rsp+30h] [rbp-28h] BYREF
  struct IAudioDeviceGraph *v21; // [rsp+60h] [rbp+8h] BYREF

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
      a1 - 8,
      a2);
  }
  v21 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 88, (__int64)lpCriticalSection);
  v6 = *(CSaDeviceProxy **)(a1 + 80);
  if ( v6 && v6 != a2 )
  {
    v7 = -2005139410;
LABEL_39:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        14LL,
        &WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
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
    v9 = *(__int64 (__fastcall **)(CSaDeviceProxy *, struct IAudioDeviceGraph **))(*(_QWORD *)a2 + 56LL);
    if ( v9 == CSaDeviceProxy::GetDeviceGraph )
      DeviceGraph = CSaDeviceProxy::GetDeviceGraph(a2, &v21);
    else
      DeviceGraph = v9(a2, &v21);
    v7 = DeviceGraph;
    if ( DeviceGraph < 0 )
      goto LABEL_39;
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioDeviceGraph *, _QWORD))(**(_QWORD **)(a1 + 72) + 72LL))(
           *(_QWORD *)(a1 + 72),
           v21,
           a3);
    if ( v7 < 0 )
      goto LABEL_39;
    if ( *(CSaDeviceProxy **)(a1 + 80) != a2 )
    {
      (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = a2;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = *(void (__fastcall **)(CSaDeviceProxy *, struct IStreamGroupProxy *))(**(_QWORD **)(a1 + 80) + 144LL);
    if ( v12 == CSaDeviceProxy::OnStreamGroupConnected )
      CSaDeviceProxy::OnStreamGroupConnected(*(CSaDeviceProxy **)(a1 + 80), (struct IStreamGroupProxy *)a1);
    else
      v12(*(CSaDeviceProxy **)(a1 + 80), (struct IStreamGroupProxy *)a1);
    v13 = *(_QWORD *)(a1 + 80);
    v14 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a1 + 64LL);
    v15 = v14 == CBaseStreamGroupProxy::GetResourcePriority
        ? CBaseStreamGroupProxy::GetResourcePriority((CBaseStreamGroupProxy *)a1)
        : v14((CBaseStreamGroupProxy *)a1);
    v16 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v13 + 72LL);
    v17 = v16 == CSaDeviceProxy::UpdateStreamGroupResourcePriority
        ? CSaDeviceProxy::UpdateStreamGroupResourcePriority(v13, 0, v15, 0xFFFFFFFF)
        : v16(v13, 0, v15, 0xFFFFFFFF);
    v7 = v17;
    if ( v17 < 0 )
    {
      CBaseStreamGroupProxy::DisconnectFromSaDevice((CBaseStreamGroupProxy *)a1);
      goto LABEL_39;
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      15LL,
      &WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
      a1 - 8,
      a2);
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
