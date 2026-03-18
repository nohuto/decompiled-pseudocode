/*
 * XREFs of ??0?$TValueResource@UMilSizeD@@UMILCMD_SIZERESOURCE@@$0DD@@@IEAA@PEAVCComposition@@@Z @ 0x18001DA00
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CResource *__fastcall TValueResource<MilSizeD,MILCMD_SIZERESOURCE,51>::TValueResource<MilSizeD,MILCMD_SIZERESOURCE,51>(
        CResource *a1,
        struct CComposition *a2)
{
  CResource *result; // rax

  CResource::CResource(a1, a2);
  *(_QWORD *)a1 = &TValueResource<MilSizeD,MILCMD_SIZERESOURCE,51>::`vftable';
  result = a1;
  *((_OWORD *)a1 + 7) = 0LL;
  return result;
}
