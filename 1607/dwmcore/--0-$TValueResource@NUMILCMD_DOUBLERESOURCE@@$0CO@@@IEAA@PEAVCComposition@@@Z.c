/*
 * XREFs of ??0?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@IEAA@PEAVCComposition@@@Z @ 0x1800B7F58
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CResource *__fastcall TValueResource<double,MILCMD_DOUBLERESOURCE,46>::TValueResource<double,MILCMD_DOUBLERESOURCE,46>(
        CResource *a1,
        struct CComposition *a2)
{
  CResource::CResource(a1, a2);
  *((_QWORD *)a1 + 14) = 0LL;
  *(_QWORD *)a1 = &TValueResource<double,MILCMD_DOUBLERESOURCE,46>::`vftable';
  return a1;
}
