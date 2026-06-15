/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800264C0
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800297F0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180029C40 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x18008EA24 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x180026BB0 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180026C50 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180026D90 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180026EC0 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  CSaDeviceProxy *v1; // rbx
  int v2; // edi
  __int64 (__fastcall *v4)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **); // rdi
  int DeviceGraph; // eax
  void (*v6)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *); // rbp
  __int64 v7; // r14
  unsigned int (__fastcall *v8)(CBaseStreamGroupProxy *__hidden); // rbx
  unsigned int ResourcePriority; // eax
  void (__fastcall *v10)(__int64, __int64, __int64, _QWORD); // rbx
  struct IAudioDeviceGraph *v11; // r14
  __int64 v12; // r14
  struct IAudioDeviceGraph *v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CSaDeviceProxy *)*((_QWORD *)this + 10);
  v2 = 0;
  if ( !v1 )
    goto LABEL_17;
  v14 = 0LL;
  v4 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **))(*(_QWORD *)v1 + 56LL);
  if ( v4 == CSaDeviceProxy::GetDeviceGraph )
    DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v1, &v14);
  else
    DeviceGraph = v4(v1, &v14);
  v2 = DeviceGraph;
  if ( DeviceGraph >= 0 )
  {
    if ( v14 )
      v2 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioDeviceGraph *))(**((_QWORD **)this + 9) + 80LL))(
             *((_QWORD *)this + 9),
             v14);
    if ( v2 >= 0 )
    {
      v6 = *(void (**)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *))(**((_QWORD **)this + 10) + 152LL);
      if ( v6 == CSaDeviceProxy::OnStreamGroupDisconnected )
        CSaDeviceProxy::OnStreamGroupDisconnected(*((CSaDeviceProxy **)this + 10), this);
      else
        ((void (__fastcall *)(_QWORD, CBaseStreamGroupProxy *))v6)(*((_QWORD *)this + 10), this);
      v7 = *((_QWORD *)this + 10);
      v8 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)this + 64LL);
      if ( v8 == CBaseStreamGroupProxy::GetResourcePriority )
        ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority(this);
      else
        ResourcePriority = v8(this);
      v10 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 72LL);
      if ( (char *)v10 == (char *)CSaDeviceProxy::UpdateStreamGroupResourcePriority )
        CSaDeviceProxy::UpdateStreamGroupResourcePriority(v7, 2LL, 0xFFFFFFFFLL, ResourcePriority);
      else
        v10(v7, 2LL, 0xFFFFFFFFLL, ResourcePriority);
    }
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v2 >= 0 )
  {
LABEL_17:
    v12 = *((_QWORD *)this + 10);
    if ( v12 )
    {
      *((_QWORD *)this + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return (unsigned int)v2;
}
