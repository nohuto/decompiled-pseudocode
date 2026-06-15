/*
 * XREFs of ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x180026BB0
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800264C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800297F0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetResourcePriority(CBaseStreamGroupProxy *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 8) + 56LL);
}
