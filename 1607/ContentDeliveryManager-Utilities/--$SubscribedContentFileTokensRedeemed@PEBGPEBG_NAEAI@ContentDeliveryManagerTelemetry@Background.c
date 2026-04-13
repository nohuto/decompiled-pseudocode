/*
 * XREFs of ??$SubscribedContentFileTokensRedeemed@PEBGPEBG_NAEAI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG0$$QEA_NAEAI@Z @ 0x1800431F4
 * Callers:
 *     ?CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIAppServiceResponse@AppService@ApplicationModel@Windows@@@Z @ 0x18003F438 (-CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UITargetedCon.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscribedContentFileTokensRedeemed<unsigned short const *,unsigned short const *,bool,unsigned int &>(
        const WCHAR **a1,
        const WCHAR **a2,
        __int64 a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  const WCHAR *v10; // rdx
  const WCHAR *v11; // r8
  __int64 v12; // rax
  const WCHAR *v13; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  const WCHAR *v16; // [rsp+58h] [rbp+7h]
  int v17; // [rsp+60h] [rbp+Fh]
  int v18; // [rsp+64h] [rbp+13h]
  const WCHAR *v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+70h] [rbp+1Fh]
  int v21; // [rsp+74h] [rbp+23h]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+80h] [rbp+2Fh]
  __int64 v24; // [rsp+88h] [rbp+37h]
  __int64 v25; // [rsp+90h] [rbp+3Fh]

  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    LODWORD(v8) = 0;
    if ( (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x400000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v10 = &sourceString;
      v11 = &sourceString;
      LODWORD(v12) = 0;
      if ( *a1 )
      {
        v11 = *a1;
        v12 = -1LL;
        do
          ++v12;
        while ( (*a1)[v12] );
      }
      v13 = *a2;
      v17 = 2 * v12 + 2;
      LODWORD(v12) = 0;
      v16 = v11;
      v18 = 0;
      if ( v13 )
      {
        v10 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( v13[v12] );
      }
      v19 = v10;
      v20 = 2 * v12 + 2;
      v21 = 0;
      v22 = a3;
      v23 = 1LL;
      v24 = a4;
      v25 = 4LL;
      LODWORD(v8) = TlgWrite(v9, &unk_18007D38C, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v8;
}
