/*
 * XREFs of KsepGetModuleInfoByAddress @ 0x140570C50
 * Callers:
 *     KsepValidateShimProviderAndData @ 0x140570BAC (KsepValidateShimProviderAndData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KsepGetModuleInfoByAddress(unsigned __int64 a1, unsigned int *a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v7; // r8d
  int v8; // r9d
  _DWORD *i; // rcx
  __int64 v10; // rdx

  if ( !a1 || !a3 || !a2 )
    return 3221225485LL;
  v7 = *a2;
  v8 = 0;
  if ( !*a2 )
    return 3221226021LL;
  for ( i = a2 + 6; ; i += 74 )
  {
    v10 = *(_QWORD *)i;
    if ( a1 >= *(_QWORD *)i && a1 < v10 + (unsigned __int64)(unsigned int)i[2] )
      break;
    if ( ++v8 >= v7 )
      return 3221226021LL;
  }
  *a3 = v10;
  if ( a4 )
    *a4 = i[2];
  return 0LL;
}
