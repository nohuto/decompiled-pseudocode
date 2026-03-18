/*
 * XREFs of ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x18015A4F8
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180159680 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z @ 0x18015A2A0 (-InsertAt@-$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z.c)
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
  unsigned int v12; // edi
  int v13; // r9d
  __int64 v14; // r8
  __int128 v15; // xmm0
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r8d
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // edx
  __int64 v28; // r8
  float i; // xmm6_4
  __int64 v30; // rax
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-40h]
  _BYTE v34[20]; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a4;
  *(_DWORD *)v34 = 0;
  *(_OWORD *)&v34[4] = v4;
  v10 = v5 - *(_QWORD *)(v7 + 4);
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 1) - *(_QWORD *)(v7 + 12);
  if ( v10 )
  {
    v11 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)v34);
    v12 = v11;
    if ( v11 < 0 )
    {
      v33 = 920;
LABEL_8:
      v13 = v11;
LABEL_32:
      MilInstrumentationCheckHR(5u, 0LL, 0, v13, v33);
      return v12;
    }
  }
  v11 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)v34);
  v12 = v11;
  if ( v11 < 0 )
  {
    v33 = 926;
    goto LABEL_8;
  }
  v14 = *(unsigned int *)(a4 + 24);
  v15 = *a3;
  v16 = *(_QWORD *)a4;
  *(_DWORD *)v34 = 1065353216;
  v17 = *(_QWORD *)a3;
  *(_OWORD *)&v34[4] = v15;
  v18 = v17 - *(_QWORD *)(v16 + 20LL * (unsigned int)(v14 - 1) + 4);
  if ( !v18 )
    v18 = *((_QWORD *)a3 + 1) - *(_QWORD *)(v16 + 20LL * (unsigned int)(v14 - 1) + 12);
  if ( v18 )
  {
    v19 = v14 + 1;
    if ( (int)v14 + 1 < (unsigned int)v14 )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v12 = -2147024362;
LABEL_21:
      v33 = 944;
LABEL_31:
      v13 = v20;
      goto LABEL_32;
    }
    if ( v19 > *(_DWORD *)(a4 + 20) )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v34);
      v20 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
      v12 = v20;
      if ( v20 < 0 )
        goto LABEL_21;
    }
    else
    {
      v21 = 5 * v14;
      *(_OWORD *)(v16 + 4 * v21) = *(_OWORD *)v34;
      *(_DWORD *)(v16 + 4 * v21 + 16) = *(_DWORD *)&v34[16];
      *(_DWORD *)(a4 + 24) = v19;
    }
  }
  v22 = *(unsigned int *)(a4 + 24);
  v23 = v22 + 1;
  if ( (int)v22 + 1 < (unsigned int)v22 )
  {
    v20 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v12 = -2147024362;
LABEL_30:
    v33 = 949;
    goto LABEL_31;
  }
  v12 = 0;
  if ( v23 > *(_DWORD *)(a4 + 20) )
  {
    v32 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v34);
    v20 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
    v12 = v20;
    if ( v20 < 0 )
      goto LABEL_30;
  }
  else
  {
    v25 = *(_QWORD *)a4;
    v26 = 5 * v22;
    *(_OWORD *)(v25 + 4 * v26) = *(_OWORD *)v34;
    *(_DWORD *)(v25 + 4 * v26 + 16) = *(_DWORD *)&v34[16];
    *(_DWORD *)(a4 + 24) = v23;
  }
  v27 = 1;
  v28 = *(_QWORD *)a4;
  for ( i = (float)(1.0 - *(float *)(a1 + 12)) * 0.5;
        v27 < *(_DWORD *)(a4 + 24) - 1;
        *(float *)(v28 + 20 * v30) = (float)(*(float *)(a1 + 12) * *(float *)(v28 + 20 * v30)) + i )
  {
    v30 = v27++;
  }
  return v12;
}
