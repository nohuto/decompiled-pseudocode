/*
 * XREFs of ViGenericSetVolumeInformation @ 0x14071AAB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericSetVolumeInformation(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SET_VOLUME_INFORMATION, 0xBu);
}
