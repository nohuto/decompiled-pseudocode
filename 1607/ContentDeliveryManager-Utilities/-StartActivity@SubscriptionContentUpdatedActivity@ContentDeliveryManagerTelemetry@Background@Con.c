/*
 * XREFs of ?StartActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG_N1@Z @ 0x18003D1F8
 * Callers:
 *     ??$Start@PEBGAEA_NAEA_N@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEA_N1@Z @ 0x180043810 (--$Start@PEBGAEA_NAEA_N@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backg.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18000C890 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800417DC (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel_ea_1800417DC.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity *this,
        const unsigned __int16 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rsi
  const WCHAR *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  const GUID *v13; // r9
  char *v14; // rbx
  _QWORD *Local; // rcx
  int v16; // [rsp+30h] [rbp-49h] BYREF
  int v17; // [rsp+34h] [rbp-45h] BYREF
  int v18; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v20; // [rsp+60h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-11h]
  const WCHAR *v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  int *v25; // [rsp+80h] [rbp+7h]
  __int64 v26; // [rsp+88h] [rbp+Fh]
  int *v27; // [rsp+90h] [rbp+17h]
  __int64 v28; // [rsp+98h] [rbp+1Fh]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v9 > 5u && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0 )
  {
    v8 = *((_QWORD *)v9 + 3) & 0x400000000000LL;
    if ( v8 == *((_QWORD *)v9 + 3) )
    {
      LODWORD(v11) = GetCurrentThreadId();
      v21 = 4LL;
      v10 = &sourceString;
      v16 = v11;
      v20 = &v16;
      LODWORD(v11) = 0;
      if ( a2 )
      {
        v10 = a2;
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
      }
      v22 = v10;
      v23 = 2 * v11 + 2;
      v17 = a3;
      v25 = &v17;
      v18 = a4;
      v27 = &v18;
      v24 = 0;
      v26 = 4LL;
      v28 = 4LL;
      v12 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v12 + 4)
        || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
        && !*(_DWORD *)(v12 + 28)
        && !*(_DWORD *)(v12 + 32)
        && !*(_DWORD *)(v12 + 36) )
      {
        v13 = 0LL;
      }
      TlgWrite(v9, &unk_18007DE33, (LPCGUID)(v12 + 8), v13, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v14 = (char *)this + 8;
    if ( *((_DWORD *)v14 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v14 = Local;
    if ( Local )
    {
      *((_QWORD *)v14 + 2) = *Local;
      *Local = v14;
      *((_DWORD *)v14 + 6) = GetCurrentThreadId();
    }
  }
}
