/*
 * XREFs of ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180166F74
 * Callers:
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x180151520 (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180166E98 (--$FillTexture@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enum@Mil.c)
 *     ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801673FC (-CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV-$DynArray@UMILGradientSto.c)
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180167554 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 *     ?PrepareStopsForInterpolation@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@@Z @ 0x1801677CC (-PrepareStopsForInterpolation@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A.c)
 *     ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x18016782C (-RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_.c)
 */

__int64 __fastcall CGradientTextureGenerator::GenerateGradientTexture<unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v9; // eax
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r9d
  int v14; // ecx
  int v15; // r8d
  float v16; // xmm2_4
  int v17; // ecx
  int v18; // r8d
  unsigned int v20; // [rsp+20h] [rbp-59h]
  int v21; // [rsp+30h] [rbp-49h]
  __int128 v22; // [rsp+40h] [rbp-39h] BYREF
  int v23; // [rsp+50h] [rbp-29h]
  int v24; // [rsp+54h] [rbp-25h]
  int v25; // [rsp+58h] [rbp-21h]
  _BYTE v26[16]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v27[16]; // [rsp+70h] [rbp-9h] BYREF

  v23 = 0;
  v24 = 0;
  v25 = 0;
  v9 = *(_DWORD *)a6;
  v22 = 0LL;
  if ( a7 >= v9 )
  {
    if ( (unsigned int)a3 > 0x7FFFFFFB )
    {
      v20 = 582;
      goto LABEL_3;
    }
    v12 = CGradientTextureGenerator::CopyStops(a1, a2, a3, &v22);
    v11 = v12;
    if ( v12 < 0 )
    {
      v20 = 593;
LABEL_9:
      v10 = v12;
      goto LABEL_4;
    }
    CGradientTextureGenerator::PrepareStopsForInterpolation(&v22, a5);
    LOBYTE(v13) = 1;
    CGradientTextureGenerator::CreateWellFormedGradientArray(
      v14,
      (unsigned int)&v22,
      v15,
      v13,
      (__int64)v26,
      (__int64)v27);
    v16 = *(float *)(a6 + 12);
    if ( v16 < 1.0 && v16 != 0.0 && *(float *)(a6 + 4) != 0.0 )
    {
      v12 = CGradientTextureGenerator::RepositionStopsForSmallGradientSpans(a6, v26, v27, &v22);
      v11 = v12;
      if ( v12 < 0 )
      {
        v20 = 621;
        goto LABEL_9;
      }
      CGradientTextureGenerator::CreateWellFormedGradientArray(
        v17,
        (unsigned int)&v22,
        v18,
        0,
        (__int64)v26,
        (__int64)v27);
    }
    CGradientTextureGenerator::FillTexture<unsigned int>(
      (__int64 *)&v22,
      a4,
      a5,
      (__int64)v26,
      (__int64)v27,
      (unsigned int *)a6,
      v21,
      a8);
    goto LABEL_17;
  }
  v20 = 576;
LABEL_3:
  v10 = -2147024809;
  v11 = -2147024809;
LABEL_4:
  MilInstrumentationCheckHR(
    5u,
    &`CGradientTextureGenerator::GenerateGradientTexture<unsigned int>'::`2'::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    v10,
    v20);
LABEL_17:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v22);
  return v11;
}
