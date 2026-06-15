/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18003C558
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18003BB10 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18003D1BC (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180028950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18003C6EC (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  unsigned __int16 *v8; // rsi
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v10; // r12d
  unsigned __int16 *v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  char *v14; // rax
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int16 *v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]

  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *a4 = 0;
  v8 = 0LL;
  *a5 = 0LL;
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                     a1,
                                     a3,
                                     &pvar);
  if ( ConnectorSignalProcessingModes < 0 )
    goto LABEL_16;
  if ( !(_WORD)pvar )
    goto LABEL_17;
  if ( (_WORD)pvar != 19 )
  {
LABEL_18:
    ConnectorSignalProcessingModes = -2147418113;
    goto LABEL_16;
  }
  v10 = (unsigned int)v17;
  PropVariantClear(&pvar);
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                     a1,
                                     a2,
                                     &pvar);
  if ( ConnectorSignalProcessingModes < 0 )
    goto LABEL_16;
  ConnectorSignalProcessingModes = 0;
  if ( !(_WORD)pvar )
  {
LABEL_17:
    ConnectorSignalProcessingModes = -2147023728;
    goto LABEL_16;
  }
  if ( (_WORD)pvar != 31 )
    goto LABEL_18;
  v11 = v17;
  v12 = -1LL;
  do
    ++v12;
  while ( v17[v12] );
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    ConnectorSignalProcessingModes = -2147024362;
    goto LABEL_16;
  }
  if ( is_mul_ok(v13, 2uLL) )
  {
    v14 = (char *)CoTaskMemAlloc(2 * v13);
    v8 = (unsigned __int16 *)v14;
    if ( !v14 )
    {
      ConnectorSignalProcessingModes = -2147024882;
      goto LABEL_16;
    }
    StringCchCopyNExW(v14, v12 + 1, v11, v12);
  }
  else
  {
    ConnectorSignalProcessingModes = -2147024362;
  }
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    PropVariantClear(&pvar);
    ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v8, v10, a4, a5);
    if ( ConnectorSignalProcessingModes >= 0 )
      ConnectorSignalProcessingModes = 0;
  }
LABEL_16:
  CoTaskMemFree(v8);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
