/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_967ead9d97ee2baedb0fd1633643a8c2_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180021430
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C3F0 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_967ead9d97ee2baedb0fd1633643a8c2_>::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  result = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(v1 + 8);
  if ( *(_QWORD *)(v1 + 112) )
  {
    v3 = *(_QWORD *)(v1 + 112);
    if ( v3 )
    {
      *(_QWORD *)(v1 + 112) = 0LL;
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return result;
}
