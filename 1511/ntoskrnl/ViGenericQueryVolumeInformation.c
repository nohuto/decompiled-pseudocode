/*
 * XREFs of ViGenericQueryVolumeInformation @ 0x1406CE984
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericQueryVolumeInformation(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_QUERY_VOLUME_INFORMATION, 0xAu);
}
