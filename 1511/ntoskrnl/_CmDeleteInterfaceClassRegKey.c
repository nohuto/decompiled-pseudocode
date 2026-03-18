/*
 * XREFs of _CmDeleteInterfaceClassRegKey @ 0x1406943E4
 * Callers:
 *     _CmDeleteInterfaceClassWorker @ 0x140694408 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmDeleteInterfaceClassRegKey(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFCBF) != 0 )
    return 3221225485LL;
  else
    return CmDeleteCommonClassRegKey(a1, a2, a3, 0, 1);
}
