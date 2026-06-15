/*
 * XREFs of ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180071510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800320A8 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18007148C (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::OnPropertyValueChanged(
        const unsigned __int16 **this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  int v5; // eax
  const struct _tagpropertykey *v6; // rdx
  LONG lVal; // ebx
  unsigned __int16 *v8; // rcx
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-28h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  if ( CompareStringOrdinal(a2, -1, this[1], -1, 1) == 2 )
  {
    v5 = operator==((__int64)a3, (__int64)&PKEY_AudioEndpoint_Disable_SysFx);
    lVal = 0;
    if ( v5 )
    {
      if ( (int)CPolicyConfig::GetPropertyStoreProperty(this[1], 1, v6, &pvar) >= 0 && pvar.vt == 19 )
        lVal = pvar.lVal;
      if ( lVal != *((_DWORD *)this + 13) )
      {
        v8 = (unsigned __int16 *)this[23];
        *((_DWORD *)this + 13) = lVal;
        SetEvent(v8);
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  return 0LL;
}
