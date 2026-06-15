/*
 * XREFs of ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x180087B74
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DF50 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x180088B14 (-GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::CacheUnsupportedConnectorFormats(
        CEndpointCharacteristics *this,
        struct CUnsupportedConnectorFormats *a2)
{
  __int64 v3; // [rsp+20h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v5[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 *v6[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-18h]

  v6[1] = (unsigned __int8 *)-2LL;
  v3 = 0LL;
  pvar = 0LL;
  *(_QWORD *)v5 = 0LL;
  v6[0] = 0LL;
  v7 = PKEY_AudioEngine_Connector_UnsupportedFormats;
  v8 = 200 * *(_DWORD *)a2 + 2;
  if ( (*(int (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 2) + 32LL))(
         *((_QWORD *)this + 2),
         2LL,
         &v3) >= 0 )
  {
    LOWORD(pvar) = 65;
    if ( (int)CUnsupportedConnectorFormats::GetBlob(a2, v6, v5) >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v3 + 48LL))(v3, &v7, &pvar);
      PropVariantClear(&pvar);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
