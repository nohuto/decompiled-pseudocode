/*
 * XREFs of ??0?$TValueResource@UMilRectD@@UMILCMD_RECTDRESOURCE@@$0DB@@@IEAA@PEAVCComposition@@@Z @ 0x18012AB30
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CResource *__fastcall TValueResource<MilRectD,MILCMD_RECTDRESOURCE,49>::TValueResource<MilRectD,MILCMD_RECTDRESOURCE,49>(
        CResource *a1,
        struct CComposition *a2)
{
  CResource *result; // rax

  CResource::CResource(a1, a2);
  *(_QWORD *)a1 = &TValueResource<MilRectD,MILCMD_RECTDRESOURCE,49>::`vftable';
  result = a1;
  *((_OWORD *)a1 + 7) = 0uLL;
  *((_OWORD *)a1 + 8) = 0uLL;
  return result;
}
