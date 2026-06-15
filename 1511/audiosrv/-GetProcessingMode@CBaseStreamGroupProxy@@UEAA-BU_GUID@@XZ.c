/*
 * XREFs of ?GetProcessingMode@CBaseStreamGroupProxy@@UEAA?BU_GUID@@XZ @ 0x18000C380
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000C9B0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBaseStreamGroupProxy::GetProcessingMode(
        struct _GUID *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[1];
  return result;
}
