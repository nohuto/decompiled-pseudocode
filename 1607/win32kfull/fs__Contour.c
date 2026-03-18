/*
 * XREFs of fs__Contour @ 0x1C00C7348
 * Callers:
 *     bGetGlyphOutline @ 0x1C00C3F44 (bGetGlyphOutline.c)
 *     fs_NewContourGridFit @ 0x1C024307C (fs_NewContourGridFit.c)
 * Callees:
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C001BBD8 (fsg_UpdatePrivateSpaceAddresses.c)
 *     fsg_QueryTwilightElementSubPixel @ 0x1C001BF4C (fsg_QueryTwilightElementSubPixel.c)
 *     sbit_GetDevAdvanceHeight @ 0x1C001CAB8 (sbit_GetDevAdvanceHeight.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C001D030 (sbit_GetDevAdvanceWidth.c)
 *     fsg_RunPreProgram @ 0x1C001DF04 (fsg_RunPreProgram.c)
 *     fs_SetUpKey @ 0x1C00C50AC (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00C5110 (fsg_UpdateWorkSpaceElement.c)
 *     fsg_QueryTwilightElement @ 0x1C00C516C (fsg_QueryTwilightElement.c)
 *     InvokeGlobalGSScale @ 0x1C00C57D8 (InvokeGlobalGSScale.c)
 *     fsg_GridFit @ 0x1C00C7CF8 (fsg_GridFit.c)
 *     scl_ScaleUpToSubPixelOverscale @ 0x1C00EDC40 (scl_ScaleUpToSubPixelOverscale.c)
 *     scl_ScaleDownFromSubPixelOverscale @ 0x1C00F8464 (scl_ScaleDownFromSubPixelOverscale.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     scl_CalcDevHorMetrics @ 0x1C00F8B98 (scl_CalcDevHorMetrics.c)
 *     scl_CalcDevAdvanceWidth @ 0x1C00FEEE8 (scl_CalcDevAdvanceWidth.c)
 *     sbit_CalcDevHorMetrics @ 0x1C014782C (sbit_CalcDevHorMetrics.c)
 */

__int64 __fastcall fs__Contour(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int16 v13; // dx
  _QWORD *TwilightElement; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rdx
  __int16 v19; // ax
  int v20; // r15d
  unsigned int v21; // r12d
  unsigned __int16 v22; // ax
  unsigned int v23; // eax
  int v24; // eax
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r11
  __int64 v30; // rdx
  bool v31; // zf
  __int64 v32; // r11
  __int64 v33; // rbx
  unsigned __int16 v34; // dx
  unsigned __int16 v35; // ax
  int v36; // r10d
  int v37; // r8d
  int v38; // ecx
  int v39; // r9d
  int v40; // r10d
  int v41; // r8d
  __int64 v42; // rax
  int v43; // [rsp+38h] [rbp-31h]
  int v44; // [rsp+58h] [rbp-11h]
  int v45; // [rsp+60h] [rbp-9h]
  __int64 v46; // [rsp+70h] [rbp+7h] BYREF
  __int64 v47; // [rsp+78h] [rbp+Fh]
  _QWORD *TwilightElementSubPixel; // [rsp+80h] [rbp+17h]
  _QWORD *v49; // [rsp+D0h] [rbp+67h] BYREF
  int v50; // [rsp+E0h] [rbp+77h]
  int v51; // [rsp+E8h] [rbp+7Fh] BYREF
  int v52; // [rsp+ECh] [rbp+83h]

  v50 = a3;
  v3 = 0;
  LODWORD(v49) = 0;
  v6 = 0;
  v47 = 0LL;
  TwilightElementSubPixel = 0LL;
  v51 = 0;
  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v7 = fs_SetUpKey(a1, 14, &v49);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)v49;
  v9 = *(_QWORD *)(v7 + 232);
  v10 = *(_QWORD *)(v9 + 24);
  if ( *(_QWORD *)(v8 + 264) != v10 || *(_QWORD *)(v8 + 272) != *(_QWORD *)(v9 + 32) )
  {
    *(_QWORD *)(v8 + 432) = v10 + *(unsigned int *)(v8 + 480);
    *(_QWORD *)(v8 + 440) = v10 + *(unsigned int *)(v8 + 484);
    *(_QWORD *)(v8 + 448) = v10 + *(unsigned int *)(v8 + 488);
    *(_QWORD *)(v8 + 456) = v10 + *(unsigned int *)(v8 + 492);
    *(_QWORD *)(v8 + 464) = v10 + *(unsigned int *)(v8 + 496);
    *(_QWORD *)(v8 + 472) = v10 + *(unsigned int *)(v8 + 548);
    result = fsg_UpdatePrivateSpaceAddresses(
               v8,
               v8 + 388,
               *(_QWORD *)(*(_QWORD *)(v8 + 232) + 32LL),
               (_DWORD *)(v8 + 568),
               *(_QWORD *)(v8 + 432),
               &v46,
               (__int64 *)&v49);
    if ( (_DWORD)result )
      return result;
    v42 = *(_QWORD *)(v8 + 232);
    *(_OWORD *)(v8 + 240) = *(_OWORD *)v42;
    *(_OWORD *)(v8 + 256) = *(_OWORD *)(v42 + 16);
    *(_OWORD *)(v8 + 272) = *(_OWORD *)(v42 + 32);
    *(_OWORD *)(v8 + 288) = *(_OWORD *)(v42 + 48);
    *(_QWORD *)(v8 + 304) = *(_QWORD *)(v42 + 64);
  }
  fsg_UpdateWorkSpaceElement((unsigned int *)(v8 + 480), v8 + 432);
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 232) + 32LL);
  v12 = v11 + *(unsigned int *)(v8 + 584);
  if ( (*(_BYTE *)(v8 + 1076) & 2) != 0 )
  {
    v47 = v11 + *(unsigned int *)(v8 + 668);
    TwilightElementSubPixel = fsg_QueryTwilightElementSubPixel(v11, (unsigned int *)(v8 + 568));
  }
  v13 = *(_WORD *)(v8 + 1076);
  if ( (v13 & 3) == 1 )
  {
    v51 = 1;
    if ( (v13 & 0x10) != 0 )
      v6 = 1;
  }
  TwilightElement = fsg_QueryTwilightElement(*(_QWORD *)(*(_QWORD *)(v8 + 232) + 32LL), (unsigned int *)(v8 + 568));
  v16 = (__int64)TwilightElement;
  v49 = TwilightElement;
  if ( !*(_DWORD *)(v8 + 1064) )
  {
    *(_DWORD *)(v8 + 424) = 0;
    v50 = 0;
  }
  if ( *(_DWORD *)(v8 + 424) )
  {
    *(_DWORD *)(v8 + 424) = 0;
    result = fsg_RunPreProgram(v8, v8 + 388, v8 + 316, v12, v15, (__int64)TwilightElement, 0LL);
    if ( (_DWORD)result
      || (*(_BYTE *)(v8 + 1076) & 2) != 0
      && (result = fsg_RunPreProgram(v8, v8 + 388, v8 + 1080, v47, v8 + 432, (__int64)TwilightElementSubPixel, 0LL),
          (_DWORD)result) )
    {
      *(_DWORD *)(v8 + 1064) = 0;
      return result;
    }
    v16 = (__int64)v49;
    v15 = v8 + 432;
  }
  if ( *(_DWORD *)(a1 + 120) && *(_DWORD *)(v8 + 844) && (*(_BYTE *)(v8 + 1076) & 1) == 0 )
  {
    *(_DWORD *)(v8 + 956) = 1;
    result = sbit_GetDevAdvanceWidth(v8 + 964, v8, (int *)&v49);
    if ( (_DWORD)result )
      return result;
    result = sbit_GetDevAdvanceHeight(v8 + 964, v8, &v51);
    if ( (_DWORD)result )
      return result;
    v37 = v52;
    v36 = v51;
    goto LABEL_33;
  }
  v45 = v51;
  v44 = *(_DWORD *)(v8 + 1068);
  v43 = v50;
  *(_DWORD *)(v8 + 956) = 0;
  result = fsg_GridFit(
             v8,
             (int)v8 + 388,
             (int)v8 + 316,
             v12,
             v15,
             v16,
             *(_QWORD *)(a1 + 112),
             v43,
             v8 + 312,
             v8 + 952,
             v8 + 384,
             v44,
             v45,
             v6);
  if ( (_DWORD)result )
    return result;
  v19 = *(_WORD *)(v8 + 1076);
  if ( (v19 & 1) == 0 )
  {
LABEL_30:
    v29 = *(_QWORD *)(v8 + 448);
    v30 = *(_WORD *)(v8 + 1076) & 0x10;
    v31 = (*(_WORD *)(v8 + 1076) & 1) == 0;
    *(_QWORD *)(a2 + 120) = *(_QWORD *)v29;
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(v29 + 8);
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(v29 + 56);
    *(_QWORD *)(a2 + 144) = *(_QWORD *)(v29 + 64);
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(v29 + 48);
    *(_QWORD *)(a2 + 224) = *(_QWORD *)(v29 + 88);
    *(_WORD *)(a2 + 118) = *(_WORD *)(v29 + 80);
    if ( !v31 )
    {
      scl_ScaleDownFromSubPixelOverscale(v29, v30);
      *(_QWORD *)(a2 + 120) = *(_QWORD *)(v32 + 16);
    }
    v33 = *(_QWORD *)(v8 + 448);
    scl_CalcDevAdvanceWidth(v33, &v49);
    v34 = *(_WORD *)(*(_QWORD *)(v33 + 64) + 2LL * (*(__int16 *)(v33 + 80) - 1));
    v35 = v34 + 4;
    v34 += 3;
    v36 = *(_DWORD *)(*(_QWORD *)v33 + 4LL * v34) - *(_DWORD *)(*(_QWORD *)v33 + 4LL * v35);
    v37 = *(_DWORD *)(*(_QWORD *)(v33 + 8) + 4LL * v34) - *(_DWORD *)(*(_QWORD *)(v33 + 8) + 4LL * v35);
LABEL_33:
    v38 = (_DWORD)v49 << 10;
    v39 = HIDWORD(v49) << 10;
    v40 = v36 << 10;
    v41 = v37 << 10;
    *(_DWORD *)(a2 + 72) = (_DWORD)v49 << 10;
    *(_DWORD *)(a2 + 76) = v39;
    *(_DWORD *)(a2 + 204) = v40;
    *(_DWORD *)(a2 + 208) = v41;
    if ( (*(_BYTE *)(v8 + 1076) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 72) = (v38 + 3) / 6;
      *(_DWORD *)(a2 + 204) = (v40 + 3) / 6;
      if ( (*(_BYTE *)(v8 + 1076) & 0x10) != 0 )
      {
        *(_DWORD *)(a2 + 76) = (v39 + 2) / 5;
        *(_DWORD *)(a2 + 208) = (v41 + 2) / 5;
      }
    }
    *(_WORD *)(a2 + 116) = *(_WORD *)(v8 + 952);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(*(_QWORD *)(v8 + 232) + 32LL) + *(unsigned int *)(v8 + 580);
    result = 0LL;
    *(_DWORD *)(v8 + 420) = 30;
    return result;
  }
  v20 = 0;
  LODWORD(v49) = 0;
  LODWORD(v46) = 0;
  v21 = (v19 & 0x10 | 4) << 14;
  v51 = 0;
  if ( (v19 & 2) == 0 )
    goto LABEL_24;
  if ( *(_DWORD *)(v8 + 844) )
  {
    result = sbit_CalcDevHorMetrics((int)v8 + 964, v8, (unsigned int)&v49, (unsigned int)&v46, (__int64)&v51);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    scl_CalcDevHorMetrics(*(_QWORD *)(v8 + 448), &v49, &v46, &v51);
  }
  v22 = *(_WORD *)(v8 + 384);
  v20 = (int)v49;
  if ( v22 && (_DWORD)v49 )
  {
    v23 = InvokeGlobalGSScale(*(_DWORD *)(v12 + 184), (int *)(v12 + 264), v22);
    v49 = (_QWORD *)((__int64)v20 << 16);
    v24 = CompDiv(v23, v49);
    if ( v24 < 0 )
      v24 = -v24;
  }
  else
  {
    v24 = 0x10000;
  }
  v25 = v47;
  *(_DWORD *)(v47 + 468) = v24;
  result = fsg_GridFit(
             v8,
             (int)v8 + 388,
             (int)v8 + 1080,
             v25,
             v8 + 432,
             (__int64)TwilightElementSubPixel,
             *(_QWORD *)(a1 + 112),
             v50,
             v8 + 312,
             v8 + 952,
             v8 + 384,
             *(_DWORD *)(v8 + 1068),
             *(_WORD *)(v8 + 1076) & 1,
             *(_WORD *)(v8 + 1076) & 0x10);
  if ( !(_DWORD)result )
  {
LABEL_24:
    scl_ScaleUpToSubPixelOverscale(*(_QWORD *)(v8 + 448), v18, v21);
    if ( v50 && (*(_BYTE *)(v8 + 1076) & 2) != 0 )
    {
      v26 = *(_QWORD *)(v8 + 448);
      if ( *(_WORD *)(*(_QWORD *)(v26 + 64) + 2LL * (*(__int16 *)(v26 + 80) - 1)) != 0xFFFF )
      {
        v27 = 0LL;
        do
        {
          ++v3;
          v27 += 4LL;
        }
        while ( v3 < (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v26 + 64) + 2LL * (*(__int16 *)(v26 + 80) - 1)) + 1) );
      }
      v28 = *(__int16 *)(v26 + 80) - 1;
      *(_DWORD *)(*(_QWORD *)v26 + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v26 + 64) + 2 * v28) + 2)) = 6 * v20 + *(_DWORD *)(*(_QWORD *)v26 + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v26 + 64) + 2 * v28) + 1));
    }
    goto LABEL_30;
  }
  return result;
}
