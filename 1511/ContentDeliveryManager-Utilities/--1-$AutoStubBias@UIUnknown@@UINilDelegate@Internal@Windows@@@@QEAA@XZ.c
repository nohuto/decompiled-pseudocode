/*
 * XREFs of ??1?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@QEAA@XZ @ 0x18001F1E4
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C3F0 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus.c)
 *     ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001E8C0 (-FireProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINil.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x180029532 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncActionCompletedHandler__ea_180029532.c)
 *     _Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireProgress_::_1_::dtor$4 @ 0x180029787 (_Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncActionCompl_ea_180029787.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall AutoStubBias<IUnknown,Windows::Internal::INilDelegate>::~AutoStubBias<IUnknown,Windows::Internal::INilDelegate>(
        int *a1)
{
  _UNKNOWN **v1; // rax
  LPSTREAM v3; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( a1[2] >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)a1 + 40LL))(
      *(_QWORD *)a1,
      0LL,
      0LL,
      0LL,
      -2LL);
    LODWORD(v1) = CoReleaseMarshalData(*(LPSTREAM *)a1);
  }
  v3 = *(LPSTREAM *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    LODWORD(v1) = (*(__int64 (__fastcall **)(LPSTREAM))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return (int)v1;
}
