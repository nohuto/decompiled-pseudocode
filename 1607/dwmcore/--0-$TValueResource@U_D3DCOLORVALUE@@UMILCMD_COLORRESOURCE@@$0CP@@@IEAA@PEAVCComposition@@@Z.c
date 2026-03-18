/*
 * XREFs of ??0?$TValueResource@U_D3DCOLORVALUE@@UMILCMD_COLORRESOURCE@@$0CP@@@IEAA@PEAVCComposition@@@Z @ 0x18012AB88
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CResource *__fastcall TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,47>::TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,47>(
        CResource *a1,
        struct CComposition *a2)
{
  CResource *result; // rax

  CResource::CResource(a1, a2);
  *(_QWORD *)a1 = &TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,47>::`vftable';
  result = a1;
  *((_OWORD *)a1 + 7) = 0LL;
  return result;
}
