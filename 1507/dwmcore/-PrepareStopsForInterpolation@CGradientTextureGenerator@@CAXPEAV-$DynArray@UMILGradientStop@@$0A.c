/*
 * XREFs of ?PrepareStopsForInterpolation@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@@Z @ 0x18015A498
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180159680 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180072ED4 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 */

void __fastcall CGradientTextureGenerator::PrepareStopsForInterpolation(unsigned int *a1, int a2)
{
  __int64 v2; // rsi
  __m128i *v3; // rbx
  const struct _D3DCOLORVALUE *v4; // rdi
  const __m128i *v5; // rax
  struct _D3DCOLORVALUE v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == 1 && (int)a1[6] > 0 )
  {
    v2 = a1[6];
    v3 = (__m128i *)(*(_QWORD *)a1 + 4LL);
    v4 = (const struct _D3DCOLORVALUE *)v3;
    do
    {
      v5 = (const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v6, v4);
      v4 = (const struct _D3DCOLORVALUE *)((char *)v4 + 20);
      *v3 = _mm_loadu_si128(v5);
      v3 = (__m128i *)((char *)v3 + 20);
      --v2;
    }
    while ( v2 );
  }
}
