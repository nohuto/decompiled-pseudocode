/*
 * XREFs of ??0CCompiledEffectTemplate@@IEAA@PEAVCComposition@@@Z @ 0x180112A30
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CCompiledEffectTemplate *__fastcall CCompiledEffectTemplate::CCompiledEffectTemplate(
        CCompiledEffectTemplate *this,
        struct CComposition *a2)
{
  CCompiledEffectTemplate *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = &CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::`vftable';
  *((_QWORD *)this + 9) = this;
  *((_QWORD *)this + 10) = (char *)this + 112;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_DWORD *)this + 24) = 2;
  *(_QWORD *)((char *)this + 100) = 2LL;
  result = this;
  *((GUID *)this + 8) = DirectX::g_XMZero;
  return result;
}
