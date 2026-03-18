/*
 * XREFs of ??$New@VCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@AEAPEAV2@AEAV3@@?$IfaceBuffer@UIRenderingEffect@@$0DA@@@QEAAPEAVCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@01@Z @ 0x180111078
 * Callers:
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 * Callees:
 *     ??0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@VSamplerMode@@01@Z @ 0x180110ED0 (--0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@VSamplerMode@@01@Z.c)
 */

__int64 __fastcall IfaceBuffer<IRenderingEffect,48>::New<CCommonRenderingEffect,IImageSource * &,SamplerMode &,IImageSource * &,SamplerMode &>(
        __int64 a1,
        __int64 *a2,
        __int16 *a3,
        __int64 *a4,
        __int16 *a5)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+52h] [rbp+Ah]

  result = 0LL;
  if ( a1 )
  {
    v6 = *a4;
    v7 = *a2;
    v10 = *a5;
    v11 = *((_BYTE *)a5 + 2);
    v8 = *a3;
    v9 = *((_BYTE *)a3 + 2);
    return CCommonRenderingEffect::CCommonRenderingEffect(a1, v7, (__int64)&v8, v6, (__int64)&v10);
  }
  return result;
}
