/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1404BBC3C
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x1404BB8B8 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1406DDFF0 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromCoInstallers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v12; // edi
  unsigned int CachedContextBaseKey; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a3;
  v7 = a7;
  v8 = 0;
  v9 = a5;
  v17 = 0LL;
  *a4 = 0;
  *v7 = 0;
  if ( v9 )
  {
    v12 = a6;
    v9 &= -(__int64)(a6 != 0);
  }
  else
  {
    v12 = 0;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11LL, &v17);
  if ( (CachedContextBaseKey & 0x80000000) != 0 )
    return CachedContextBaseKey;
  LODWORD(v16) = v12;
  CachedContextBaseKey = PnpCtxRegQueryValue(v14, v17, a2, &a7, v9, &v16);
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    return (unsigned int)-1073741275;
  if ( CachedContextBaseKey && CachedContextBaseKey != -1073741789 )
    return CachedContextBaseKey;
  if ( (_DWORD)a7 == 7 )
  {
    *v7 = v16;
    *a4 = 8210;
    if ( CachedContextBaseKey || !v12 )
      return (unsigned int)-1073741789;
  }
  else
  {
    PnpCtxRegDeleteValue(CachedContextBaseKey, v17, a2);
  }
  return v8;
}
