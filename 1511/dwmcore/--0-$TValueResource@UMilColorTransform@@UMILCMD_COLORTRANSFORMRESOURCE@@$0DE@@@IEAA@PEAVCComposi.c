/*
 * XREFs of ??0?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@IEAA@PEAVCComposition@@@Z @ 0x1801127D0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,52>::TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,52>(
        __int64 a1,
        __int64 a2)
{
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[6]; // [rsp+20h] [rbp-78h] BYREF
  int v11; // [rsp+80h] [rbp-18h]

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  LODWORD(v10[0]) = 0;
  *(_QWORD *)a1 = &TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,52>::`vftable';
  memset_0((char *)v10 + 4, 0, 0x60uLL);
  v3 = v10[1];
  v4 = v11;
  *(_OWORD *)(a1 + 40) = v10[0];
  v5 = v10[2];
  *(_OWORD *)(a1 + 56) = v3;
  v6 = v10[3];
  *(_OWORD *)(a1 + 72) = v5;
  v7 = v10[4];
  *(_OWORD *)(a1 + 88) = v6;
  v8 = v10[5];
  *(_OWORD *)(a1 + 104) = v7;
  *(_OWORD *)(a1 + 120) = v8;
  *(_DWORD *)(a1 + 136) = v4;
  return a1;
}
