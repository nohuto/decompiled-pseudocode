/*
 * XREFs of ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x180159324
 * Callers:
 *     ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801595A4 (--$FillTexture@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enum@Mil.c)
 * Callees:
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x1801594B4 (--$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4.c)
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x180159808 (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
 *     ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x18015A364 (-InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::FillGradientSpan<unsigned int>(
        __int64 *a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  __int64 v4; // r14
  int v6; // ebx
  __int64 v9; // rbp
  float v10; // xmm8_4
  __int64 result; // rax
  float v12; // xmm7_4
  int v13; // r12d
  float v14; // xmm6_4
  int v15; // edi
  float v16; // xmm6_4
  int v17; // [rsp+40h] [rbp-98h]
  struct _D3DCOLORVALUE v18; // [rsp+48h] [rbp-90h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v20; // [rsp+F8h] [rbp+20h] BYREF

  v6 = 0;
  v9 = *a1 + 20;
  v10 = (float)a3;
  v19 = *a1;
  v4 = v19;
  v20 = v9;
  result = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  v12 = 1.0 / (float)a3;
  v13 = v19 + 20 * result;
  v17 = v13;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v14 = *(float *)v9;
      result = (unsigned int)(int)floorf_0(*(float *)v9 * v10);
      if ( (int)result <= a3 )
      {
        v15 = 0;
        if ( (int)result >= 0 )
          v15 = result;
      }
      else
      {
        v15 = a3;
      }
      if ( v6 < v15 )
      {
        v16 = v14 - *(float *)v4;
        do
        {
          CGradientTextureGenerator::InterpolateColors(
            (const struct _D3DCOLORVALUE *)(v4 + 4),
            (const struct _D3DCOLORVALUE *)(v9 + 4),
            (float)((float)v6 * v12) + (float)((float)(1.0 / v10) * 0.5),
            v16,
            *(float *)v4,
            &v18);
          result = CGradientTextureGenerator::SetOutputTexel<unsigned int>(&v18, a2, a4);
          a4 += 4LL;
          ++v6;
        }
        while ( v6 < v15 );
        v13 = v17;
      }
      if ( v6 >= a3 )
        break;
      result = CGradientTextureGenerator::FillSingleTexelGradientSpan<unsigned int>(
                 (int)&v19,
                 (int)&v20,
                 v13,
                 a2,
                 v6,
                 COERCE_INT(1.0 / v10),
                 v10,
                 a4);
      a4 += 4LL;
      if ( ++v6 >= a3 )
        break;
      v4 = v19;
      v9 = v20;
    }
  }
  return result;
}
