/*
 * XREFs of ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800077A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800070C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CDeviceGraphManager::ConnectStreamGroupToSaDevice(
        __int64 a1,
        __int64 a2,
        CSaDeviceProxy *a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, CSaDeviceProxy *, unsigned int); // rdi

  v5 = *(__int64 (__fastcall **)(__int64, CSaDeviceProxy *, unsigned int))(*(_QWORD *)a2 + 160LL);
  if ( v5 == CSharedStreamGroupProxy::ConnectToSaDevice )
    return CSharedStreamGroupProxy::ConnectToSaDevice(a2, a3, a4);
  else
    return ((__int64 (__fastcall *)(__int64, CSaDeviceProxy *, _QWORD, __int64))v5)(a2, a3, a4, a5);
}
