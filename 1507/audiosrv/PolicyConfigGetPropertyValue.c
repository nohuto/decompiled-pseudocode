/*
 * XREFs of PolicyConfigGetPropertyValue @ 0x180038730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800387B0 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

int __fastcall PolicyConfigGetPropertyValue(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  int (*v5)(CPolicyConfig *__hidden, const unsigned __int16 *, int, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rdi

  v5 = *(int (**)(CPolicyConfig *__hidden, const unsigned __int16 *, int, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)g_PolicyConfig + 88LL);
  if ( v5 == CPolicyConfig::GetPropertyValue )
    return CPolicyConfig::GetPropertyValue(g_PolicyConfig, a2, a3, a4, a5);
  else
    return ((__int64 (__fastcall *)(CPolicyConfig *, const unsigned __int16 *, _QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))v5)(
             g_PolicyConfig,
             a2,
             a3,
             a4,
             a5);
}
