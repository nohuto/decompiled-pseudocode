/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1406DF138
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x1406DEF10 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpCtxRegSetValue @ 0x1404870E4 (_PnpCtxRegSetValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404FDCC4 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromCoInstallers(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        ULONG a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ecx
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( a4 != 8210 )
    return 3221225485LL;
  result = PnpCtxGetCachedContextBaseKey(a1, 11, (__int64 *)&v10);
  if ( (int)result >= 0 )
  {
    v9 = PnpCtxRegSetValue(v8, v10, a2, 7LL, a5, a6);
    if ( v9 == -1073741444 )
    {
      return 3221225701LL;
    }
    else
    {
      result = 0LL;
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
  }
  return result;
}
