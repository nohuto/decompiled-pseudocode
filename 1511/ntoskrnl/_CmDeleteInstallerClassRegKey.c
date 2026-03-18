/*
 * XREFs of _CmDeleteInstallerClassRegKey @ 0x140694028
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x14069404C (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmDeleteInstallerClassRegKey(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFCDF) != 0 )
    return 3221225485LL;
  else
    return CmDeleteCommonClassRegKey(a1, a2, a3, 0, 1);
}
