/*
 * XREFs of _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_2_::FTMEventDelegate::Invoke @ 0x180013D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_2_::FTMEventDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 40) = a3;
  SetEvent(*(HANDLE *)(a1 + 48));
  return 0LL;
}
