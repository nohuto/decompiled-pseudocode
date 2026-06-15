/*
 * XREFs of ?DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@@Z @ 0x18008C930
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CDeviceGraphManager::DisconnectStreamGroupFromSaDevice(
        CDeviceGraphManager *this,
        struct IStreamGroupProxy *a2,
        struct ISaDeviceProxy *a3)
{
  return (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct IStreamGroupProxy *, struct ISaDeviceProxy *))(*(_QWORD *)a2 + 168LL))(
           a2,
           a2,
           a3);
}
