/*
 * XREFs of ?LogFailure_@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEAUFailureInfo@wil@@@Z @ 0x18000D73C
 * Callers:
 *     ?FailureLoggingCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@CAXPEAUFailureInfo@wil@@PEAG_K@Z @ 0x18000D8B0 (-FailureLoggingCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@CAXPE.c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ @ 0x18000D6B4 (-Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::LogFailure_(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry *this,
        struct wil::FailureInfo *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rdx
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // r9
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  void *v9; // rdx
  void *v10; // r8
  int v11; // [rsp+30h] [rbp-49h] BYREF
  int v12; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  const unsigned __int16 *v14; // [rsp+60h] [rbp-19h]
  int v15; // [rsp+68h] [rbp-11h]
  int v16; // [rsp+6Ch] [rbp-Dh]
  char *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  const unsigned __int16 *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+1Fh]
  int *v24; // [rsp+A0h] [rbp+27h]
  __int64 v25; // [rsp+A8h] [rbp+2Fh]
  void *v26; // [rsp+B0h] [rbp+37h]
  int v27; // [rsp+B8h] [rbp+3Fh]
  int v28; // [rsp+BCh] [rbp+43h]

  v3 = (const struct _TlgProvider_t *)*((_QWORD *)ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance()
                                      + 1);
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v4 = *((_QWORD *)a2 + 6);
    v5 = &word_18002D63C;
    v6 = &word_18002D63C;
    LODWORD(v7) = 0;
    if ( v4 )
    {
      v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v7 = -1LL;
      do
        ++v7;
      while ( *(_BYTE *)(v4 + v7) );
    }
    v8 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v15 = v7 + 1;
    v17 = (char *)a2 + 56;
    LODWORD(v7) = 0;
    v14 = v6;
    v16 = 0;
    v18 = 4LL;
    if ( v8 )
    {
      v5 = v8;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v8 + v7) );
    }
    v9 = (void *)*((_QWORD *)a2 + 2);
    v20 = v7 + 1;
    v12 = *(_DWORD *)a2;
    v22 = &v12;
    v11 = *((_DWORD *)a2 + 1);
    v24 = &v11;
    LODWORD(v7) = 0;
    v19 = v5;
    v10 = &unk_18002D640;
    v21 = 0;
    v23 = 4LL;
    v25 = 4LL;
    if ( v9 )
    {
      v10 = v9;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_WORD *)v9 + v7) );
    }
    v26 = v10;
    v27 = 2 * v7 + 2;
    v28 = 0;
    TlgWrite(v3, &unk_180035562, 0LL, 0LL, 8u, &pData);
  }
}
