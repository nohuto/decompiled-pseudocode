/*
 * XREFs of ?StartActivity@ActionReverted@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180041538
 * Callers:
 *     ??$Start@PEBGPEBGPEBG@ActionReverted@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBG00@Z @ 0x1800431A4 (--$Start@PEBGPEBGPEBG@ActionReverted@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180011DCC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18003BDB8 (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionReverted::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionReverted *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // r15
  const WCHAR *v10; // rcx
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rdx
  __int64 v14; // r8
  const GUID *v15; // r9
  _QWORD *v16; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-29h]
  __int64 v21; // [rsp+68h] [rbp-21h]
  const WCHAR *v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  const WCHAR *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  const WCHAR *v28; // [rsp+90h] [rbp+7h]
  int v29; // [rsp+98h] [rbp+Fh]
  int v30; // [rsp+9Ch] [rbp+13h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v9 > 5u && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0 )
  {
    v8 = *((_QWORD *)v9 + 3) & 0x200000000000LL;
    if ( v8 == *((_QWORD *)v9 + 3) )
    {
      v21 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v10 = &word_180091F08;
      LODWORD(v11) = 0;
      v12 = &word_180091F08;
      if ( a2 )
      {
        v12 = a2;
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
      }
      v22 = v12;
      v23 = 2 * v11 + 2;
      LODWORD(v11) = 0;
      v24 = 0;
      v13 = &word_180091F08;
      if ( a3 )
      {
        v13 = a3;
        v11 = -1LL;
        do
          ++v11;
        while ( a3[v11] );
      }
      v25 = v13;
      v26 = 2 * v11 + 2;
      LODWORD(v11) = 0;
      v27 = 0;
      if ( a4 )
      {
        v10 = a4;
        v11 = -1LL;
        do
          ++v11;
        while ( a4[v11] );
      }
      v28 = v10;
      v29 = 2 * v11 + 2;
      v30 = 0;
      v14 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v14 + 4)
        || (v15 = (const GUID *)(v14 + 24), !*(_DWORD *)(v14 + 24))
        && !*(_DWORD *)(v14 + 28)
        && !*(_DWORD *)(v14 + 32)
        && !*(_DWORD *)(v14 + 36) )
      {
        v15 = 0LL;
      }
      TlgWrite(v9, &unk_1800DF951, (LPCGUID)(v14 + 8), v15, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v16 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *v16 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v16;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
