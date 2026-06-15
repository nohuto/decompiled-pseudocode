/*
 * XREFs of ?IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023310
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180021E80 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::IsOffload(CBaseStreamGroupProxy *this)
{
  return *((_BYTE *)this + 49);
}
