/*
 * XREFs of ?NeedsIntermediateSurfaceRealization@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x180085700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x180056A9C (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CImageBrush::NeedsIntermediateSurfaceRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rax
  _DWORD *v9; // r14
  _DWORD *v11; // r15
  struct CImageSource *v12; // rcx
  int BitmapCurrentValue; // eax
  unsigned int v14; // ebp
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // rdi
  struct IBitmapSource *v18; // rdi
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+3Ch] [rbp-2Ch]
  __int64 v23; // [rsp+48h] [rbp-20h]
  struct IBitmapSource *v24; // [rsp+70h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a2 + 248);
  v9 = a7;
  v11 = a8;
  v24 = 0LL;
  v20 = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 256);
  v22 = 0;
  v21 = v8;
  *a7 = 0;
  *v11 = 0;
  v12 = *(struct CImageSource **)(a1 + 512);
  v23 = 0LL;
  BitmapCurrentValue = GetBitmapCurrentValue(v12, (const struct BitmapSourceInfo *)&v20, &v24);
  v14 = BitmapCurrentValue;
  if ( BitmapCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapCurrentValue, 0x16Bu);
    goto LABEL_12;
  }
  v15 = *(_QWORD *)(a1 + 512);
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 48LL))(v15 + 8);
    v17 = *(_QWORD *)(a1 + 512);
    *(_BYTE *)(a1 + 364) = v16;
    *(_BYTE *)(a1 + 365) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 8) + 40LL))(v17 + 8);
  }
  else
  {
    *(_WORD *)(a1 + 364) = 0;
  }
  v18 = v24;
  if ( !v24 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 512) + 8LL) + 176LL))(*(_QWORD *)(a1 + 512) + 8LL) )
      *v9 = 1;
    else
      *v11 = 1;
LABEL_12:
    v18 = v24;
    if ( !v24 )
      return v14;
  }
  (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v18 + 16LL))(v18);
  return v14;
}
