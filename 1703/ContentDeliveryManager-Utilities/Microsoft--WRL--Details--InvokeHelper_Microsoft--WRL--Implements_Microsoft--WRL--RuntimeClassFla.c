/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_d4e16ff8e34da2edeeacc718f45dd8b6__&___ptr64_2__1_::Invoke @ 0x1800338B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180029DF4 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_d4e16ff8e34da2edeeacc718f45dd8b6______ptr64_2__1_::Invoke(
        __int64 a1,
        PVOID a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *(RTL_SRWLOCK **)(a1 + 40);
  if ( a2 == v2[12].Ptr )
    ContentManagement::ContentManagementService::CloseConnection(v2);
  return 0LL;
}
