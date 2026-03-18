/*
 * XREFs of _CmDeleteInstallerClassRegKey @ 0x140713BC0
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x140713BE4 (_CmDeleteInstallerClassWorker.c)
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
