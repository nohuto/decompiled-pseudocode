/*
 * XREFs of ?GetType@CBaseStreamGroupProxy@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18000C350
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000C9B0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetType(__int64 a1)
{
  return *(unsigned int *)(a1 + 52);
}
