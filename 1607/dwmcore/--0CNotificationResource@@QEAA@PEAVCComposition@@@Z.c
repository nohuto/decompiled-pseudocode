/*
 * XREFs of ??0CNotificationResource@@QEAA@PEAVCComposition@@@Z @ 0x18010B9CC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CCompiledEffectTemplate@@IEAA@PEAVCComposition@@@Z @ 0x18012ADBC (--0CCompiledEffectTemplate@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801498F8 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CNotificationResource *__fastcall CNotificationResource::CNotificationResource(
        CNotificationResource *this,
        struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  return this;
}
