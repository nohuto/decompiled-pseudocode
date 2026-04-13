/*
 * XREFs of ?StartActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBG0@Z @ 0x18003C0A8
 * Callers:
 *     ??$Start@IPEBGPEBG@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAI$$QEAPEBG1@Z @ 0x180042F84 (--$Start@IPEBGPEBG@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetr.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18000C890 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800417DC (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel_ea_1800417DC.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity *this,
        int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // r14
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  const WCHAR *v11; // rdx
  __int64 v12; // r8
  const GUID *v13; // r9
  char *v14; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  int *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  const WCHAR *v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  const WCHAR *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  int v28; // [rsp+E8h] [rbp+6Fh] BYREF

  v28 = a2;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0 )
  {
    v7 = *((_QWORD *)v8 + 3) & 0x400000000000LL;
    if ( v7 == *((_QWORD *)v8 + 3) )
    {
      v19 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v20 = &v28;
      v9 = &sourceString;
      v21 = 4LL;
      LODWORD(v10) = 0;
      v11 = &sourceString;
      if ( a3 )
      {
        v11 = a3;
        v10 = -1LL;
        do
          ++v10;
        while ( a3[v10] );
      }
      v22 = v11;
      v23 = 2 * v10 + 2;
      LODWORD(v10) = 0;
      v24 = 0;
      if ( a4 )
      {
        v9 = a4;
        v10 = -1LL;
        do
          ++v10;
        while ( a4[v10] );
      }
      v25 = v9;
      v26 = 2 * v10 + 2;
      v27 = 0;
      v12 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v12 + 4)
        || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
        && !*(_DWORD *)(v12 + 28)
        && !*(_DWORD *)(v12 + 32)
        && !*(_DWORD *)(v12 + 36) )
      {
        v13 = 0LL;
      }
      TlgWrite(v8, &unk_18007CF63, (LPCGUID)(v12 + 8), v13, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v14 = (char *)this + 8;
    if ( *((_DWORD *)v14 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v7,
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
