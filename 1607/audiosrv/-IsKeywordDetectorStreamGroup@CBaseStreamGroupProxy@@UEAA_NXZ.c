/*
 * XREFs of ?IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023320
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180021E80 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup(CBaseStreamGroupProxy *this)
{
  return *((_BYTE *)this + 48);
}
