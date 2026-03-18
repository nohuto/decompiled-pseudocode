/*
 * XREFs of ViGenericDirectoryControl @ 0x1406CE75C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericDirectoryControl(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_DIRECTORY_CONTROL, 12LL);
}
