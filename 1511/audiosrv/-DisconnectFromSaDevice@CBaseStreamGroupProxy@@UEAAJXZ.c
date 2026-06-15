/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18000BC50
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800070C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180007530 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x18008B550 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000AF10 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000B050 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000B180 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18000C360 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  CSaDeviceProxy *v1; // rbx
  int v2; // edi
  __int64 (__fastcall *v4)(CSaDeviceProxy *, struct IAudioDeviceGraph **); // rdi
  int DeviceGraph; // eax
  void (__fastcall *v6)(CSaDeviceProxy *, struct IStreamGroupProxy *); // rbp
  __int64 v7; // r14
  unsigned int (__fastcall *v8)(CBaseStreamGroupProxy *__hidden); // rbx
  unsigned int ResourcePriority; // eax
  __int64 (__fastcall *v10)(__int64, unsigned int, unsigned int, unsigned int); // rbx
  struct IAudioDeviceGraph *v11; // r14
  __int64 v12; // r14
  struct IAudioDeviceGraph *v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CSaDeviceProxy *)*((_QWORD *)this + 9);
  v2 = 0;
  if ( !v1 )
    goto LABEL_17;
  v14 = 0LL;
  v4 = *(__int64 (__fastcall **)(CSaDeviceProxy *, struct IAudioDeviceGraph **))(*(_QWORD *)v1 + 56LL);
  if ( v4 == CSaDeviceProxy::GetDeviceGraph )
    DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v1, &v14);
  else
    DeviceGraph = v4(v1, &v14);
  v2 = DeviceGraph;
  if ( DeviceGraph >= 0 )
  {
    if ( v14 )
      v2 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioDeviceGraph *))(**((_QWORD **)this + 8) + 72LL))(
             *((_QWORD *)this + 8),
             v14);
    if ( v2 >= 0 )
    {
      v6 = *(void (__fastcall **)(CSaDeviceProxy *, struct IStreamGroupProxy *))(**((_QWORD **)this + 9) + 152LL);
      if ( v6 == CSaDeviceProxy::OnStreamGroupDisconnected )
        CSaDeviceProxy::OnStreamGroupDisconnected(*((CSaDeviceProxy **)this + 9), this);
      else
        v6(*((CSaDeviceProxy **)this + 9), this);
      v7 = *((_QWORD *)this + 9);
      v8 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)this + 64LL);
      if ( v8 == CBaseStreamGroupProxy::GetResourcePriority )
        ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority(this);
      else
        ResourcePriority = v8(this);
      v10 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v7 + 72LL);
      if ( v10 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
        CSaDeviceProxy::UpdateStreamGroupResourcePriority(v7, 2u, 0xFFFFFFFF, ResourcePriority);
      else
        v10(v7, 2u, 0xFFFFFFFF, ResourcePriority);
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
    v12 = *((_QWORD *)this + 9);
    if ( v12 )
    {
      *((_QWORD *)this + 9) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return (unsigned int)v2;
}
