/*
 * XREFs of ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801673FC
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180166F74 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CGradientTextureGenerator::CopyStops(__int128 *a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rax
  __int128 v12; // xmm1
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebx
  _BYTE v19[20]; // [rsp+30h] [rbp-58h] BYREF

  v8 = DynArrayImpl<0>::Grow(a4, 0x14u, a3 + 4, 0, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        v11 = *(unsigned int *)(a4 + 24);
        v12 = *a1;
        v13 = v11 + 1;
        *(_DWORD *)v19 = *a2;
        *(_OWORD *)&v19[4] = v12;
        if ( (int)v11 + 1 < (unsigned int)v11 )
          break;
        v9 = 0;
        if ( v13 > *(_DWORD *)(a4 + 20) )
        {
          v16 = DynArrayImpl<0>::AddMultipleAndSet(a4, 20, 1, v19);
          v17 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
          v9 = v17;
          if ( v17 < 0 )
            goto LABEL_13;
        }
        else
        {
          v14 = *(_QWORD *)a4;
          v15 = 5 * v11;
          *(_OWORD *)(v14 + 4 * v15) = *(_OWORD *)v19;
          *(_DWORD *)(v14 + 4 * v15 + 16) = *(_DWORD *)&v19[16];
          *(_DWORD *)(a4 + 24) = v13;
        }
        ++v10;
        ++a2;
        ++a1;
        if ( v10 >= a3 )
          return v9;
      }
      v17 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v9 = -2147024362;
LABEL_13:
      MilInstrumentationCheckHR(5u, 0LL, 0, v17, 0x2D5u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(5u, 0LL, 0, v8, 0x2C9u);
  }
  return v9;
}
