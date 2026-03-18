/*
 * XREFs of ??0?$TValueResource@U_MilMatrix3x2D@@UMILCMD_MATRIXRESOURCE@@$0DE@@@IEAA@PEAVCComposition@@@Z @ 0x18012ABB8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

CResource *__fastcall TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,52>::TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,52>(
        CResource *a1,
        struct CComposition *a2)
{
  CResource *result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF

  CResource::CResource(a1, a2);
  *(_QWORD *)a1 = &TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,52>::`vftable';
  *(_QWORD *)&v6[0] = 0LL;
  memset_0((char *)v6 + 8, 0, 0x28uLL);
  result = a1;
  v4 = v6[1];
  *((_OWORD *)a1 + 7) = v6[0];
  v5 = v6[2];
  *((_OWORD *)a1 + 8) = v4;
  *((_OWORD *)a1 + 9) = v5;
  return result;
}
