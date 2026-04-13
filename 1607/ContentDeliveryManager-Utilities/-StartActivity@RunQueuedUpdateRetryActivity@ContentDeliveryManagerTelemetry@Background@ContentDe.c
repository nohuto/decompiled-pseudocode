/*
 * XREFs of ?StartActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI@Z @ 0x18003CC48
 * Callers:
 *     ??$Start@PEBGAEAI@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEAI@Z @ 0x180043740 (--$Start@PEBGAEAI@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@Conten.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18000C890 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800417DC (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel_ea_1800417DC.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity *this,
        const unsigned __int16 *a2,
        int a3)
{
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rsi
  const WCHAR *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  const GUID *v10; // r9
  char *v11; // rbx
  _QWORD *Local; // rcx
  int v13; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  const WCHAR *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+D8h] [rbp+77h] BYREF

  v22 = a3;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0 )
  {
    v5 = *((_QWORD *)v6 + 3) & 0x400000000000LL;
    if ( v5 == *((_QWORD *)v6 + 3) )
    {
      LODWORD(v8) = GetCurrentThreadId();
      v16 = 4LL;
      v7 = &sourceString;
      v13 = v8;
      v15 = &v13;
      LODWORD(v8) = 0;
      if ( a2 )
      {
        v7 = a2;
        v8 = -1LL;
        do
          ++v8;
        while ( a2[v8] );
      }
      v17 = v7;
      v18 = 2 * v8 + 2;
      v20 = &v22;
      v19 = 0;
      v21 = 4LL;
      v9 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v9 + 4)
        || (v10 = (const GUID *)(v9 + 24), !*(_DWORD *)(v9 + 24))
        && !*(_DWORD *)(v9 + 28)
        && !*(_DWORD *)(v9 + 32)
        && !*(_DWORD *)(v9 + 36) )
      {
        v10 = 0LL;
      }
      TlgWrite(v6, &unk_18007E019, (LPCGUID)(v9 + 8), v10, 5u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v11 = (char *)this + 8;
    if ( *((_DWORD *)v11 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v5,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v11 = Local;
    if ( Local )
    {
      *((_QWORD *)v11 + 2) = *Local;
      *Local = v11;
      *((_DWORD *)v11 + 6) = GetCurrentThreadId();
    }
  }
}
