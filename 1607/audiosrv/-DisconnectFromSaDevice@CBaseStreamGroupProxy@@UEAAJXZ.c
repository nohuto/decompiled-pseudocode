/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180022D10
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800241C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180024554 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x180074984 (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x1800221C0 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022360 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180022480 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x180023370 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180028E54 (-InternalRelease@-$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  char *v1; // r14
  int v2; // ebx
  CSaDeviceProxy *v3; // rsi
  __int64 (__fastcall *v5)(CSaDeviceProxy *, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  CSaDeviceProxy *v7; // rcx
  void (__fastcall *v8)(CSaDeviceProxy *, struct IStreamGroupProxy *); // rax
  __int64 v9; // rsi
  unsigned int (__fastcall *v10)(CBaseStreamGroupProxy *__hidden); // rax
  unsigned int ResourcePriority; // eax
  __int64 v12; // r9
  __int64 (__fastcall *v13)(__int64, unsigned int, unsigned int, unsigned int); // rax
  struct IAudioDeviceGraph *v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = (char *)this + 72;
  v2 = 0;
  v3 = (CSaDeviceProxy *)*((_QWORD *)this + 9);
  if ( !v3 )
    goto LABEL_15;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v15);
  v5 = *(__int64 (__fastcall **)(CSaDeviceProxy *, struct IAudioDeviceGraph **))(*(_QWORD *)v3 + 56LL);
  if ( v5 == CSaDeviceProxy::GetDeviceGraph )
    DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v3, &v15);
  else
    DeviceGraph = v5(v3, &v15);
  v2 = DeviceGraph;
  if ( DeviceGraph >= 0 )
  {
    if ( v15 )
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8));
    if ( v2 >= 0 )
    {
      v7 = *(CSaDeviceProxy **)v1;
      v8 = *(void (__fastcall **)(CSaDeviceProxy *, struct IStreamGroupProxy *))(**(_QWORD **)v1 + 168LL);
      if ( v8 == CSaDeviceProxy::OnStreamGroupDisconnected )
        CSaDeviceProxy::OnStreamGroupDisconnected(v7, this);
      else
        v8(v7, this);
      v9 = *(_QWORD *)v1;
      v10 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)this + 64LL);
      if ( v10 == CBaseStreamGroupProxy::GetResourcePriority )
        ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority(this);
      else
        ResourcePriority = v10(this);
      v12 = ResourcePriority;
      v13 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v9 + 72LL);
      if ( v13 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
        CSaDeviceProxy::UpdateStreamGroupResourcePriority(v9, 2u, 0xFFFFFFFF, v12);
      else
        v13(v9, 2u, 0xFFFFFFFF, v12);
    }
  }
  Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v15);
  if ( v2 >= 0 )
LABEL_15:
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(v1);
  return (unsigned int)v2;
}
