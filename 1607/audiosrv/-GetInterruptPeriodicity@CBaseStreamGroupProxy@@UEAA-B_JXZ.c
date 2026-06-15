/*
 * XREFs of ?GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA?B_JXZ @ 0x1800233B0
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180021E80 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetInterruptPeriodicity(CBaseStreamGroupProxy *this)
{
  return *((_QWORD *)this + 1);
}
