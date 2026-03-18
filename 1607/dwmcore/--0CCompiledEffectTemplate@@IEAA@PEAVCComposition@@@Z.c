/*
 * XREFs of ??0CCompiledEffectTemplate@@IEAA@PEAVCComposition@@@Z @ 0x18012ADBC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CNotificationResource@@QEAA@PEAVCComposition@@@Z @ 0x18010B9CC (--0CNotificationResource@@QEAA@PEAVCComposition@@@Z.c)
 */

CCompiledEffectTemplate *__fastcall CCompiledEffectTemplate::CCompiledEffectTemplate(
        CCompiledEffectTemplate *this,
        struct CComposition *a2)
{
  CNotificationResource::CNotificationResource(this, a2);
  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  return this;
}
