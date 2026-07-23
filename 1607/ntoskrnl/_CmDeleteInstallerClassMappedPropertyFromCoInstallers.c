/*
 * XREFs of _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1406DCCFC
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x1406DF048 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassMappedPropertyFromCoInstallers(__int64 *a1, const WCHAR *a2)
{
  unsigned int v2; // ebx
  int CachedContextBaseKey; // eax
  __int64 v5; // rcx
  int v6; // eax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, (__int64 *)&v8);
  if ( CachedContextBaseKey >= 0 )
  {
    v6 = PnpCtxRegDeleteValue(v5, v8, a2);
    if ( v6 != -1073741772 && v6 != -1073741444 && v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)CachedContextBaseKey;
  }
  return v2;
}
