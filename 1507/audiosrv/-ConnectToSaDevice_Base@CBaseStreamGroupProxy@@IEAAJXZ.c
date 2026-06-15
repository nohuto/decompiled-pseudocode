/*
 * XREFs of ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x1800665DC
 * Callers:
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008EE50 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OP.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ConnectToSaDevice_Base(CBaseStreamGroupProxy *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx

  (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)this + 10) + 144LL))(
    *((_QWORD *)this + 10),
    this);
  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = *v2;
  v4 = (*(unsigned int (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 64LL))(this);
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(v3 + 72))(v2, 0LL, v4, 0xFFFFFFFFLL);
}
