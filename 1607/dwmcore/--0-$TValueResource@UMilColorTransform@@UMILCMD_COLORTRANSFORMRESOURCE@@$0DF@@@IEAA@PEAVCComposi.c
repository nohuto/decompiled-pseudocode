/*
 * XREFs of ??0?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@IEAA@PEAVCComposition@@@Z @ 0x18012AA68
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,53>::TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,53>(
        __int64 a1,
        struct CComposition *a2)
{
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[6]; // [rsp+20h] [rbp-78h] BYREF
  int v11; // [rsp+80h] [rbp-18h]

  CResource::CResource((CResource *)a1, a2);
  *(_QWORD *)a1 = &TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,53>::`vftable';
  LODWORD(v10[0]) = 0;
  memset_0((char *)v10 + 4, 0, 0x60uLL);
  v3 = v10[1];
  v4 = v11;
  *(_OWORD *)(a1 + 112) = v10[0];
  v5 = v10[2];
  *(_OWORD *)(a1 + 128) = v3;
  v6 = v10[3];
  *(_OWORD *)(a1 + 144) = v5;
  v7 = v10[4];
  *(_OWORD *)(a1 + 160) = v6;
  v8 = v10[5];
  *(_OWORD *)(a1 + 176) = v7;
  *(_OWORD *)(a1 + 192) = v8;
  *(_DWORD *)(a1 + 208) = v4;
  return a1;
}
