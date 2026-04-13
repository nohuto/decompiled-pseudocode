/*
 * XREFs of ??_G?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180020ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAA@XZ @ 0x18001E47C (--1-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus_ea_18001E47C.c)
 */

void *__fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
