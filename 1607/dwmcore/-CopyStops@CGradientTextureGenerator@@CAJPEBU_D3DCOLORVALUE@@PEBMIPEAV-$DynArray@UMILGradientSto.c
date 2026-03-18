/*
 * XREFs of ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x18019A2C4
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180199E40 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CGradientTextureGenerator::CopyStops(__int128 *a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int i; // edi
  __int64 v11; // rax
  __int128 v12; // xmm1
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  _BYTE v18[20]; // [rsp+30h] [rbp-58h] BYREF

  v8 = DynArrayImpl<0>::Grow(a4, 0x14u, a3 + 4, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(5u, 0LL, 0, v8, 0x2C7u);
    return v9;
  }
  for ( i = 0; i < a3; ++a1 )
  {
    v11 = *(unsigned int *)(a4 + 24);
    v12 = *a1;
    v13 = v11 + 1;
    *(_DWORD *)v18 = *a2;
    *(_OWORD *)&v18[4] = v12;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
    {
      v9 = 0;
      if ( v13 <= *(_DWORD *)(a4 + 20) )
      {
        v14 = *(_QWORD *)a4;
        v15 = 5 * v11;
        *(_OWORD *)(v14 + 4 * v15) = *(_OWORD *)v18;
        *(_DWORD *)(v14 + 4 * v15 + 16) = *(_DWORD *)&v18[16];
        *(_DWORD *)(a4 + 24) = v13;
        goto LABEL_10;
      }
      v16 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v18);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v9 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(5u, 0LL, 0, v9, 0x2D3u);
      return v9;
    }
LABEL_10:
    ++i;
    ++a2;
  }
  return v9;
}
