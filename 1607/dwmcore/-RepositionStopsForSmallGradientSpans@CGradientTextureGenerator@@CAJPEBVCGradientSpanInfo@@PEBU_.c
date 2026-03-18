/*
 * XREFs of ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x18019A6E0
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180199E40 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z @ 0x18019A488 (-InsertAt@-$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::RepositionStopsForSmallGradientSpans(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4)
{
  __int128 v4; // xmm1
  __int64 v5; // rax
  __int64 v7; // r9
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // r8
  float i; // xmm6_4
  __int64 v30; // rax
  unsigned int v32; // [rsp+20h] [rbp-40h]
  _BYTE v33[20]; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a4;
  *(_DWORD *)v33 = 0;
  *(_OWORD *)&v33[4] = v4;
  v10 = v5 - *(_QWORD *)(v7 + 4);
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 1) - *(_QWORD *)(v7 + 12);
  if ( v10 )
  {
    v11 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)v33);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 918;
LABEL_31:
      v23 = v11;
      goto LABEL_32;
    }
  }
  v11 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)v33);
  v12 = v11;
  if ( v11 < 0 )
  {
    v32 = 924;
    goto LABEL_31;
  }
  v13 = *(unsigned int *)(a4 + 24);
  v14 = *a3;
  v15 = *(_QWORD *)a4;
  *(_DWORD *)v33 = 1065353216;
  v16 = *(_QWORD *)a3;
  *(_OWORD *)&v33[4] = v14;
  v17 = v16 - *(_QWORD *)(v15 + 20LL * (unsigned int)(v13 - 1) + 4);
  if ( !v17 )
    v17 = *((_QWORD *)a3 + 1) - *(_QWORD *)(v15 + 20LL * (unsigned int)(v13 - 1) + 12);
  if ( v17 )
  {
    v18 = v13 + 1;
    if ( (int)v13 + 1 >= (unsigned int)v13 )
    {
      if ( v18 <= *(_DWORD *)(a4 + 20) )
      {
        v19 = 5 * v13;
        *(_OWORD *)(v15 + 4 * v19) = *(_OWORD *)v33;
        *(_DWORD *)(v15 + 4 * v19 + 16) = *(_DWORD *)&v33[16];
        *(_DWORD *)(a4 + 24) = v18;
        goto LABEL_14;
      }
      v22 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v33);
      v12 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v12 < 0 )
    {
      v32 = 942;
LABEL_20:
      v23 = v12;
LABEL_32:
      MilInstrumentationCheckHR(5u, 0LL, 0, v23, v32);
      return (unsigned int)v12;
    }
  }
LABEL_14:
  v20 = *(unsigned int *)(a4 + 24);
  v21 = v20 + 1;
  if ( (int)v20 + 1 >= (unsigned int)v20 )
  {
    v12 = 0;
    if ( v21 <= *(_DWORD *)(a4 + 20) )
    {
      v24 = *(_QWORD *)a4;
      v25 = 5 * v20;
      *(_OWORD *)(v24 + 4 * v25) = *(_OWORD *)v33;
      *(_DWORD *)(v24 + 4 * v25 + 16) = *(_DWORD *)&v33[16];
      *(_DWORD *)(a4 + 24) = v21;
      goto LABEL_26;
    }
    v26 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v33);
    v12 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
  }
  else
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v12 < 0 )
  {
    v32 = 947;
    goto LABEL_20;
  }
LABEL_26:
  v27 = 1;
  v28 = *(_QWORD *)a4;
  for ( i = (float)(1.0 - *(float *)(a1 + 12)) * 0.5;
        v27 < *(_DWORD *)(a4 + 24) - 1;
        *(float *)(v28 + 20 * v30) = (float)(*(float *)(a1 + 12) * *(float *)(v28 + 20 * v30)) + i )
  {
    v30 = v27++;
  }
  return (unsigned int)v12;
}
