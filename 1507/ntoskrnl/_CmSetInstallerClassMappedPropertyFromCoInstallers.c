/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140719044
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140718E1C (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegSetValue @ 0x1405575A0 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromCoInstallers(
        _QWORD *a1,
        const WCHAR *a2,
        __int64 a3,
        int a4,
        void *a5,
        ULONG a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ecx
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( a4 != 8210 )
    return 3221225485LL;
  result = PnpCtxGetCachedContextBaseKey(a1, 11, &v10);
  if ( (int)result >= 0 )
  {
    v9 = PnpCtxRegSetValue(v8, v10, a2, 7u, a5, a6);
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
