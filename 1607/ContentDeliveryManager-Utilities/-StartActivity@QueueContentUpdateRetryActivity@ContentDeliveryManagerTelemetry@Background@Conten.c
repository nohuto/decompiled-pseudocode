/*
 * XREFs of ?StartActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI_N@Z @ 0x18003C688
 * Callers:
 *     ??$Start@PEBGAEAIAEB_N@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEAIAEB_N@Z @ 0x18004358C (--$Start@PEBGAEAIAEB_N@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Backgroun.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18000C890 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800417DC (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel_ea_1800417DC.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity *this,
        const unsigned __int16 *a2,
        int a3,
        unsigned __int8 a4)
{
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rsi
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  const GUID *v12; // r9
  char *v13; // rbx
  _QWORD *Local; // rcx
  int v15; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  const WCHAR *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  int *v23; // [rsp+80h] [rbp+7h]
  __int64 v24; // [rsp+88h] [rbp+Fh]
  int *v25; // [rsp+90h] [rbp+17h]
  __int64 v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+F0h] [rbp+77h] BYREF

  v27 = a3;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0 )
  {
    v7 = *((_QWORD *)v8 + 3) & 0x400000000000LL;
    if ( v7 == *((_QWORD *)v8 + 3) )
    {
      LODWORD(v10) = GetCurrentThreadId();
      v19 = 4LL;
      v9 = &sourceString;
      v15 = v10;
      v18 = &v15;
      LODWORD(v10) = 0;
      if ( a2 )
      {
        v9 = a2;
        v10 = -1LL;
        do
          ++v10;
        while ( a2[v10] );
      }
      v20 = v9;
      v21 = 2 * v10 + 2;
      v23 = &v27;
      v16 = a4;
      v25 = &v16;
      v22 = 0;
      v24 = 4LL;
      v26 = 4LL;
      v11 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v11 + 4)
        || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
        && !*(_DWORD *)(v11 + 28)
        && !*(_DWORD *)(v11 + 32)
        && !*(_DWORD *)(v11 + 36) )
      {
        v12 = 0LL;
      }
      TlgWrite(v8, &unk_18007E1D7, (LPCGUID)(v11 + 8), v12, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v13 = (char *)this + 8;
    if ( *((_DWORD *)v13 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v7,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v13 = Local;
    if ( Local )
    {
      *((_QWORD *)v13 + 2) = *Local;
      *Local = v13;
      *((_DWORD *)v13 + 6) = GetCurrentThreadId();
    }
  }
}
