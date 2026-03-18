/*
 * XREFs of ??0?$TValueResource@UMilPoint2D@@UMILCMD_POINTRESOURCE@@$0DA@@@IEAA@PEAVCComposition@@@Z @ 0x18012AB00
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CResource *__fastcall TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,48>::TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,48>(
        CResource *a1,
        struct CComposition *a2)
{
  CResource *result; // rax

  CResource::CResource(a1, a2);
  *(_QWORD *)a1 = &TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,48>::`vftable';
  result = a1;
  *((_OWORD *)a1 + 7) = 0LL;
  return result;
}
