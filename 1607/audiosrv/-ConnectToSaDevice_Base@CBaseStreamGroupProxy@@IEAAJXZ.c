/*
 * XREFs of ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180022E44
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800241C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180074A50 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OP.c)
 * Callees:
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180022280 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022360 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x180023370 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ConnectToSaDevice_Base(CBaseStreamGroupProxy *this)
{
  CSaDeviceProxy *v2; // rcx
  void (__fastcall *v3)(CSaDeviceProxy *, struct IStreamGroupProxy *); // rax
  __int64 v4; // rdi
  unsigned int (__fastcall *v5)(CBaseStreamGroupProxy *__hidden); // rax
  unsigned int ResourcePriority; // eax
  __int64 v7; // r8
  __int64 (__fastcall *v8)(__int64, unsigned int, unsigned int, unsigned int); // rax

  v2 = (CSaDeviceProxy *)*((_QWORD *)this + 9);
  v3 = *(void (__fastcall **)(CSaDeviceProxy *, struct IStreamGroupProxy *))(*(_QWORD *)v2 + 160LL);
  if ( v3 == CSaDeviceProxy::OnStreamGroupConnected )
    CSaDeviceProxy::OnStreamGroupConnected(v2, this);
  else
    v3(v2, this);
  v4 = *((_QWORD *)this + 9);
  v5 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)this + 64LL);
  if ( v5 == CBaseStreamGroupProxy::GetResourcePriority )
    ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority(this);
  else
    ResourcePriority = v5(this);
  v7 = ResourcePriority;
  v8 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v4 + 72LL);
  if ( v8 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
    return CSaDeviceProxy::UpdateStreamGroupResourcePriority(v4, 0, v7, 0xFFFFFFFF);
  else
    return v8(v4, 0, v7, 0xFFFFFFFF);
}
