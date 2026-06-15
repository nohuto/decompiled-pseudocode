/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E948
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000EA00 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall IsExclusiveModeDisabled(struct IMMDevice *a1)
{
  unsigned int v1; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v1 = 0;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, 0, &PKEY_Endpoint_AllowExclusive, &pvar);
  if ( PropertyStoreProperty < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        108LL,
        &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
        (unsigned int)PropertyStoreProperty);
    }
  }
  else if ( pvar.vt )
  {
    LOBYTE(v1) = pvar.iVal == 0;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  return v1;
}
