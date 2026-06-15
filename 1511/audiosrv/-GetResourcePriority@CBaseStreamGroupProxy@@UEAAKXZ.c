/*
 * XREFs of ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18000C360
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800070C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18000BC50 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetResourcePriority(CBaseStreamGroupProxy *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 7) + 56LL);
}
