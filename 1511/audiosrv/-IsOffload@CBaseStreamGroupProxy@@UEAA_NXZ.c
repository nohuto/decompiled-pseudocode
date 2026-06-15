/*
 * XREFs of ?IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000C320
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000C9B0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::IsOffload(CBaseStreamGroupProxy *this)
{
  return *((_BYTE *)this + 49);
}
