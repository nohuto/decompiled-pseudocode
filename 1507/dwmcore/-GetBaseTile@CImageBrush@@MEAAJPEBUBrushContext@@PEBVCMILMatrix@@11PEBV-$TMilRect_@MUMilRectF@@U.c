/*
 * XREFs of ?GetBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180085600
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x180056A9C (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CImageBrush::GetBaseTile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct D2DMatrix *a4,
        struct D2DMatrix *a5,
        __int64 a6,
        __int64 a7,
        struct IBitmapSource **a8,
        struct D2DMatrix *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v13; // eax
  struct CImageSource *v14; // rcx
  int BitmapCurrentValue; // eax
  unsigned int v16; // ebp
  __int64 v17; // rdi
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+3Ch] [rbp-1Ch]
  __int64 v22; // [rsp+48h] [rbp-10h]

  v19 = *(_QWORD *)(a2 + 248);
  v13 = *(_DWORD *)(a2 + 256);
  v21 = 0;
  v20 = v13;
  *a8 = 0LL;
  *a10 = 1;
  v14 = *(struct CImageSource **)(a1 + 512);
  v22 = 0LL;
  BitmapCurrentValue = GetBitmapCurrentValue(v14, (const struct BitmapSourceInfo *)&v19, a8);
  v16 = BitmapCurrentValue;
  if ( BitmapCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapCurrentValue, 0x1BDu);
  }
  else
  {
    if ( *a8 )
      *a10 = 0;
    *a11 = 1;
    D2DMatrixMultiply(a9, a4, a5);
    v17 = *(_QWORD *)(a1 + 512);
    if ( v17 )
      *(_DWORD *)(a1 + 360) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 8) + 200LL))(v17 + 8);
    else
      *(_DWORD *)(a1 + 360) = 0;
  }
  return v16;
}
