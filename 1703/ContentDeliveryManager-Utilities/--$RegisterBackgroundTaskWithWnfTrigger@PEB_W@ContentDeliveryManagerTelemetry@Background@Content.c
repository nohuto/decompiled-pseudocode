/*
 * XREFs of ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x180068FB8
 * Callers:
 *     _lambda_69582238324f545b86bbebe50f8ed5ac_::operator() @ 0x1800683A0 (_lambda_69582238324f545b86bbebe50f8ed5ac_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
        const WCHAR **a1,
        const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  const WCHAR *v6; // r8
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v11; // [rsp+50h] [rbp-48h]
  int v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+5Ch] [rbp-3Ch]
  const unsigned __int16 *v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+6Ch] [rbp-2Ch]

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = &word_180091F08;
      LODWORD(v7) = 0;
      if ( *a1 )
      {
        v6 = *a1;
        v7 = -1LL;
        do
          ++v7;
        while ( (*a1)[v7] );
      }
      v11 = v6;
      v12 = 2 * v7 + 2;
      LODWORD(v7) = 0;
      v13 = 0;
      v8 = &word_180091EF8;
      if ( a2 )
      {
        v8 = a2;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)a2 + v7) );
      }
      v14 = v8;
      v15 = v7 + 1;
      v16 = 0;
      LODWORD(v4) = TlgWrite(v5, &unk_1800E042C, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
