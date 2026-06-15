/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18002EF50
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18002E3CC (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x1800347FC (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002545C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025520 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18002FA14 (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  struct _GUID **v6; // rax
  unsigned __int16 *v9; // rdi
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v12; // r12d
  void *v13; // rcx
  unsigned __int16 *v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  int v17; // eax
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int16 *v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  unsigned __int16 *v21; // [rsp+90h] [rbp+30h] BYREF

  pvar = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = a5;
  *a4 = 0;
  v9 = 0LL;
  *v6 = 0LL;
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
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
      goto LABEL_20;
    v12 = (unsigned int)v19;
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
LABEL_20:
      ConnectorSignalProcessingModes = -2147418113;
      goto LABEL_4;
    }
    v14 = v19;
    v15 = -1LL;
    do
      ++v15;
    while ( v19[v15] );
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      ConnectorSignalProcessingModes = -2147024362;
    }
    else
    {
      v21 = 0LL;
      if ( is_mul_ok(v16, 2uLL) )
      {
        v17 = CTCoAllocPolicy::Alloc(v13, (v16 * (unsigned __int128)2uLL) >> 64, 2 * v16, (void **)&v21);
        v9 = v21;
        ConnectorSignalProcessingModes = v17;
        if ( v17 >= 0 )
          StringCchCopyNExW((char *)v21, v15 + 1, v14, v15);
      }
      else
      {
        ConnectorSignalProcessingModes = -2147024362;
      }
      if ( ConnectorSignalProcessingModes >= 0 )
      {
        PropVariantClear(&pvar);
        ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v9, v12, a4, a5);
        if ( ConnectorSignalProcessingModes >= 0 )
          ConnectorSignalProcessingModes = 0;
      }
    }
  }
LABEL_4:
  CoTaskMemFree(v9);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
