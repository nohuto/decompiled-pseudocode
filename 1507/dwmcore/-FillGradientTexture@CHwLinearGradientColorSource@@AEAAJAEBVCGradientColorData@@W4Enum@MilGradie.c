/*
 * XREFs of ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801431AC
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x180143360 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?UnlockRect@CD3DSurface@@QEAAXXZ @ 0x1800153FC (-UnlockRect@CD3DSurface@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801437F4 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180159680 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::FillGradientTexture(__int64 a1, __int64 a2, int a3, int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int Gradient; // eax
  int v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v8 = CHwVidMemTextureManager::ReCreateAndLockSysMemSurface(
         (CHwVidMemTextureManager *)(a1 + 128),
         (struct LOCKED_RECT *)&v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( v12 >= 4 * *(_DWORD *)(a1 + 108) )
    {
      Gradient = CGradientTextureGenerator::GenerateGradientTexture<unsigned int>(
                   *(_QWORD *)a2,
                   *(_QWORD *)(a2 + 32),
                   *(_DWORD *)(a2 + 24),
                   a3,
                   a4,
                   a1 + 112,
                   *(_DWORD *)(a1 + 108),
                   v13);
      v9 = Gradient;
      if ( Gradient < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Gradient, 0x10Fu);
    }
    else
    {
      v9 = -2003304446;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304446, 0x103u);
    }
    CD3DSurface::UnlockRect(*(CD3DSurface **)(a1 + 136));
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xFDu);
  }
  return v9;
}
