/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180040FAC
 * Callers:
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18003FCBC (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1800403D0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18004334C (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  struct _GUID **v5; // r13
  unsigned __int16 *v7; // rsi
  struct IPropertyStoreVtbl *lpVtbl; // rax
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-30h]
  PROPVARIANT pvar; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v19[2]; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  unsigned __int16 *v21; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  pvar = 0LL;
  *(_QWORD *)v19 = 0LL;
  *a4 = 0;
  v7 = 0LL;
  *v5 = 0LL;
  v20 = 0LL;
  lpVtbl = a1->lpVtbl;
  v21 = 0LL;
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))lpVtbl->GetValue)(
                                     a1,
                                     a3,
                                     &pvar);
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( !(_WORD)pvar )
    {
LABEL_3:
      ConnectorSignalProcessingModes = -2147023728;
      goto LABEL_4;
    }
    if ( (_WORD)pvar != 19 )
      goto LABEL_16;
    v13 = v19[0];
    PropVariantClear(&pvar);
    ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                       a1,
                                       a2,
                                       &pvar);
    if ( ConnectorSignalProcessingModes < 0 )
      goto LABEL_4;
    if ( !(_WORD)pvar )
      goto LABEL_3;
    if ( (_WORD)pvar != 31 )
    {
LABEL_16:
      ConnectorSignalProcessingModes = -2147418113;
      goto LABEL_4;
    }
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*(_QWORD *)v19 + 2 * v16) );
    ConnectorSignalProcessingModes = _AllocStringWorker<CTCoAllocPolicy>(
                                       v15,
                                       v14,
                                       *(__int16 **)v19,
                                       v16,
                                       v17,
                                       (char **)&v21);
    if ( ConnectorSignalProcessingModes < 0 )
    {
      v7 = v21;
    }
    else
    {
      PropVariantClear(&pvar);
      v7 = v21;
      ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v21, v13, a4, v5);
      if ( ConnectorSignalProcessingModes >= 0 )
        ConnectorSignalProcessingModes = 0;
    }
  }
LABEL_4:
  CoTaskMemFree(v7);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
