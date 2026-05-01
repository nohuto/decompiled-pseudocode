/*
 * XREFs of ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x180021190
 * Callers:
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x1800201F4 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800045AC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180022208 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Hide::StartActivity(
        SingleViewExperienceTelemetry::Hide *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // r14
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rax
  const unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  const GUID *v14; // r9
  char *v15; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-31h]
  __int64 v20; // [rsp+68h] [rbp-29h]
  const unsigned __int16 *v21; // [rsp+70h] [rbp-21h]
  int v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+7Ch] [rbp-15h]
  const unsigned __int16 *v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+88h] [rbp-9h]
  int v26; // [rsp+8Ch] [rbp-5h]
  int *v27; // [rsp+90h] [rbp-1h]
  __int64 v28; // [rsp+98h] [rbp+7h]
  void **v29; // [rsp+A0h] [rbp+Fh]
  __int64 v30; // [rsp+A8h] [rbp+17h]
  int v31; // [rsp+108h] [rbp+77h] BYREF

  v31 = a4;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0 )
  {
    v8 = *((_QWORD *)v9 + 3) & 0x200000000000LL;
    if ( v8 == *((_QWORD *)v9 + 3) )
    {
      v20 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v10 = (const unsigned __int16 *)&unk_1800359D8;
      LODWORD(v11) = 0;
      v12 = (const unsigned __int16 *)&unk_1800359D8;
      if ( a2 )
      {
        v12 = a2;
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
      }
      v21 = v12;
      v22 = 2 * v11 + 2;
      LODWORD(v11) = 0;
      v23 = 0;
      if ( a3 )
      {
        v10 = a3;
        v11 = -1LL;
        do
          ++v11;
        while ( a3[v11] );
      }
      v24 = v10;
      v25 = 2 * v11 + 2;
      v27 = &v31;
      v29 = &a5;
      v26 = 0;
      v28 = 4LL;
      v30 = 8LL;
      v13 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v13 + 4)
        || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
        && !*(_DWORD *)(v13 + 28)
        && !*(_DWORD *)(v13 + 32)
        && !*(_DWORD *)(v13 + 36) )
      {
        v14 = 0LL;
      }
      TlgWrite(v9, &unk_180042EAA, (LPCGUID)(v13 + 8), v14, 7u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v15 = (char *)this + 8;
    if ( *((_DWORD *)v15 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v15 = Local;
    if ( Local )
    {
      *((_QWORD *)v15 + 2) = *Local;
      *Local = v15;
      *((_DWORD *)v15 + 6) = GetCurrentThreadId();
    }
  }
}
