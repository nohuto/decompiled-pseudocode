/*
 * XREFs of fs__Contour @ 0x1C00AE090
 * Callers:
 *     bGetGlyphOutline @ 0x1C00AC394 (bGetGlyphOutline.c)
 *     fs_NewContourGridFit @ 0x1C0246EC0 (fs_NewContourGridFit.c)
 * Callees:
 *     sbit_GetDevAdvanceHeight @ 0x1C00A17B4 (sbit_GetDevAdvanceHeight.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C00A1CA8 (sbit_GetDevAdvanceWidth.c)
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C00A341C (fsg_UpdatePrivateSpaceAddresses.c)
 *     fsg_QueryTwilightElementSubPixel @ 0x1C00A37A0 (fsg_QueryTwilightElementSubPixel.c)
 *     fsg_RunPreProgram @ 0x1C00A5424 (fsg_RunPreProgram.c)
 *     fs_SetUpKey @ 0x1C00AD5A8 (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00AD60C (fsg_UpdateWorkSpaceElement.c)
 *     fsg_QueryTwilightElement @ 0x1C00AD668 (fsg_QueryTwilightElement.c)
 *     InvokeGlobalGSScale @ 0x1C00ADCB0 (InvokeGlobalGSScale.c)
 *     fsg_GridFit @ 0x1C00AE864 (fsg_GridFit.c)
 *     scl_ScaleUpToSubPixelOverscale @ 0x1C00C5F80 (scl_ScaleUpToSubPixelOverscale.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 *     scl_ScaleDownFromSubPixelOverscale @ 0x1C00DA1F4 (scl_ScaleDownFromSubPixelOverscale.c)
 *     scl_CalcDevHorMetrics @ 0x1C00DAD10 (scl_CalcDevHorMetrics.c)
 *     sbit_CalcDevHorMetrics @ 0x1C0141348 (sbit_CalcDevHorMetrics.c)
 */

__int64 __fastcall fs__Contour(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v6; // r12
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int16 v14; // dx
  _QWORD *TwilightElement; // rax
  __int64 v16; // r10
  int v17; // r11d
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int16 v21; // ax
  int v22; // r15d
  unsigned int v23; // r12d
  unsigned __int16 v24; // ax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // r9d
  int v28; // r13d
  __int64 v29; // r8
  __int64 v30; // rax
  __int16 v31; // r9
  __int64 v32; // r11
  __int64 v33; // rdx
  bool v34; // zf
  __int64 v35; // r11
  __int64 v36; // r10
  __int16 v37; // dx
  unsigned __int16 v38; // ax
  __int64 v39; // rdx
  int v40; // r11d
  int v41; // edi
  unsigned __int16 v42; // ax
  int v43; // r14d
  int v44; // r8d
  int v45; // edi
  int v46; // r11d
  int v47; // r14d
  int v48; // r8d
  __int64 v49; // rax
  int v50; // [rsp+58h] [rbp-11h]
  int v51; // [rsp+60h] [rbp-9h]
  __int64 v52; // [rsp+70h] [rbp+7h] BYREF
  _QWORD *TwilightElementSubPixel; // [rsp+78h] [rbp+Fh]
  __int64 v54; // [rsp+80h] [rbp+17h]
  _QWORD *v55; // [rsp+D0h] [rbp+67h] BYREF
  int v56; // [rsp+E0h] [rbp+77h]
  int v57; // [rsp+E8h] [rbp+7Fh] BYREF
  int v58; // [rsp+ECh] [rbp+83h]

  v56 = a3;
  v3 = 0;
  v6 = 0LL;
  LODWORD(v55) = 0;
  v7 = 0;
  v54 = 0LL;
  TwilightElementSubPixel = 0LL;
  v57 = 0;
  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v8 = fs_SetUpKey(a1, 14, &v55);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)v55;
  v10 = *(_QWORD *)(v8 + 232);
  v11 = *(_QWORD *)(v10 + 24);
  if ( *(_QWORD *)(v9 + 264) != v11 || *(_QWORD *)(v9 + 272) != *(_QWORD *)(v10 + 32) )
  {
    *(_QWORD *)(v9 + 432) = v11 + *(unsigned int *)(v9 + 480);
    *(_QWORD *)(v9 + 440) = v11 + *(unsigned int *)(v9 + 484);
    *(_QWORD *)(v9 + 448) = v11 + *(unsigned int *)(v9 + 488);
    *(_QWORD *)(v9 + 456) = v11 + *(unsigned int *)(v9 + 492);
    *(_QWORD *)(v9 + 464) = v11 + *(unsigned int *)(v9 + 496);
    *(_QWORD *)(v9 + 472) = v11 + *(unsigned int *)(v9 + 548);
    result = fsg_UpdatePrivateSpaceAddresses(
               v9,
               v9 + 388,
               *(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL),
               (_DWORD *)(v9 + 568),
               *(_QWORD *)(v9 + 432),
               &v52,
               (__int64 *)&v55);
    if ( (_DWORD)result )
      return result;
    v49 = *(_QWORD *)(v9 + 232);
    *(_OWORD *)(v9 + 240) = *(_OWORD *)v49;
    *(_OWORD *)(v9 + 256) = *(_OWORD *)(v49 + 16);
    *(_OWORD *)(v9 + 272) = *(_OWORD *)(v49 + 32);
    *(_OWORD *)(v9 + 288) = *(_OWORD *)(v49 + 48);
    *(_QWORD *)(v9 + 304) = *(_QWORD *)(v49 + 64);
  }
  fsg_UpdateWorkSpaceElement((unsigned int *)(v9 + 480), v9 + 432);
  v12 = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL);
  v13 = v12 + *(unsigned int *)(v9 + 584);
  if ( (*(_BYTE *)(v9 + 1076) & 2) != 0 )
  {
    v6 = v12 + *(unsigned int *)(v9 + 668);
    v54 = v6;
    TwilightElementSubPixel = fsg_QueryTwilightElementSubPixel(v12, (unsigned int *)(v9 + 568));
  }
  v14 = *(_WORD *)(v9 + 1076);
  if ( (v14 & 3) == 1 )
  {
    v57 = 1;
    if ( (v14 & 0x10) != 0 )
      v7 = 1;
  }
  TwilightElement = fsg_QueryTwilightElement(*(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL), (unsigned int *)(v9 + 568));
  v18 = (__int64)TwilightElement;
  v55 = TwilightElement;
  if ( !*(_DWORD *)(v9 + 1064) )
  {
    *(_DWORD *)(v9 + 424) = 0;
    v17 = 0;
    v56 = 0;
  }
  if ( *(_DWORD *)(v9 + 424) )
  {
    *(_DWORD *)(v9 + 424) = 0;
    result = fsg_RunPreProgram(v9, v9 + 388, v9 + 316, v13, v16, (__int64)TwilightElement, 0LL);
    if ( (_DWORD)result
      || (*(_BYTE *)(v9 + 1076) & 2) != 0
      && (result = fsg_RunPreProgram(v9, v9 + 388, v9 + 1080, v6, v9 + 432, (__int64)TwilightElementSubPixel, 0LL),
          (_DWORD)result) )
    {
      *(_DWORD *)(v9 + 1064) = 0;
      return result;
    }
    v18 = (__int64)v55;
    v16 = v9 + 432;
    v17 = v56;
  }
  if ( *(_DWORD *)(a1 + 120) && *(_DWORD *)(v9 + 844) && (*(_BYTE *)(v9 + 1076) & 1) == 0 )
  {
    *(_DWORD *)(v9 + 956) = 1;
    result = sbit_GetDevAdvanceWidth(v9 + 964, v9, (int *)&v55);
    if ( (_DWORD)result )
      return result;
    result = sbit_GetDevAdvanceHeight(v9 + 964, v9, &v57);
    if ( (_DWORD)result )
      return result;
    v40 = HIDWORD(v55);
    v41 = (int)v55;
    v44 = v58;
    v43 = v57;
    goto LABEL_33;
  }
  v51 = v57;
  v50 = *(_DWORD *)(v9 + 1068);
  *(_DWORD *)(v9 + 956) = 0;
  result = fsg_GridFit(
             v9,
             (int)v9 + 388,
             (int)v9 + 316,
             v13,
             v16,
             v18,
             *(_QWORD *)(a1 + 112),
             v17,
             v9 + 312,
             v9 + 952,
             v9 + 384,
             v50,
             v51,
             v7);
  if ( (_DWORD)result )
    return result;
  v21 = *(_WORD *)(v9 + 1076);
  if ( (v21 & 1) == 0 )
  {
LABEL_30:
    v32 = *(_QWORD *)(v9 + 448);
    v33 = *(_WORD *)(v9 + 1076) & 0x10;
    v34 = (*(_WORD *)(v9 + 1076) & 1) == 0;
    *(_QWORD *)(a2 + 120) = *(_QWORD *)v32;
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(v32 + 8);
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(v32 + 56);
    *(_QWORD *)(a2 + 144) = *(_QWORD *)(v32 + 64);
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(v32 + 48);
    *(_QWORD *)(a2 + 224) = *(_QWORD *)(v32 + 88);
    *(_WORD *)(a2 + 118) = *(_WORD *)(v32 + 80);
    if ( !v34 )
    {
      scl_ScaleDownFromSubPixelOverscale(v32, v33);
      *(_QWORD *)(a2 + 120) = *(_QWORD *)(v35 + 16);
    }
    v36 = *(_QWORD *)(v9 + 448);
    v37 = *(_WORD *)(*(_QWORD *)(v36 + 64) + 2LL * *(__int16 *)(v36 + 80) - 2);
    v38 = v37 + 2;
    v39 = (unsigned __int16)(v37 + 1);
    v40 = *(_DWORD *)(*(_QWORD *)(v36 + 8) + 4LL * v38) - *(_DWORD *)(*(_QWORD *)(v36 + 8) + 4 * v39);
    v41 = *(_DWORD *)(*(_QWORD *)v36 + 4LL * v38) - *(_DWORD *)(*(_QWORD *)v36 + 4 * v39);
    LOWORD(v39) = *(_WORD *)(*(_QWORD *)(v36 + 64) + 2LL * *(__int16 *)(v36 + 80) - 2);
    v42 = v39 + 4;
    LOWORD(v39) = v39 + 3;
    v43 = *(_DWORD *)(*(_QWORD *)v36 + 4LL * (unsigned __int16)v39) - *(_DWORD *)(*(_QWORD *)v36 + 4LL * v42);
    v44 = *(_DWORD *)(*(_QWORD *)(v36 + 8) + 4LL * (unsigned __int16)v39)
        - *(_DWORD *)(*(_QWORD *)(v36 + 8) + 4LL * v42);
LABEL_33:
    v45 = v41 << 10;
    v46 = v40 << 10;
    v47 = v43 << 10;
    v48 = v44 << 10;
    *(_DWORD *)(a2 + 72) = v45;
    *(_DWORD *)(a2 + 76) = v46;
    *(_DWORD *)(a2 + 204) = v47;
    *(_DWORD *)(a2 + 208) = v48;
    if ( (*(_BYTE *)(v9 + 1076) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 72) = (v45 + 3) / 6;
      *(_DWORD *)(a2 + 204) = (v47 + 3) / 6;
      if ( (*(_BYTE *)(v9 + 1076) & 0x10) != 0 )
      {
        *(_DWORD *)(a2 + 76) = (v46 + 2) / 5;
        *(_DWORD *)(a2 + 208) = (v48 + 2) / 5;
      }
    }
    *(_WORD *)(a2 + 116) = *(_WORD *)(v9 + 952);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL) + *(unsigned int *)(v9 + 580);
    result = 0LL;
    *(_DWORD *)(v9 + 420) = 30;
    return result;
  }
  v22 = 0;
  LODWORD(v55) = 0;
  LODWORD(v52) = 0;
  v23 = (v21 & 0x10 | 4) << 14;
  v57 = 0;
  if ( (v21 & 2) == 0 )
  {
    v28 = v56;
LABEL_24:
    scl_ScaleUpToSubPixelOverscale(*(_QWORD *)(v9 + 448), v20, v23);
    if ( v28 && (*(_BYTE *)(v9 + 1076) & 2) != 0 )
    {
      v29 = *(_QWORD *)(v9 + 448);
      if ( *(_WORD *)(*(_QWORD *)(v29 + 64) + 2LL * *(__int16 *)(v29 + 80) - 2) != 0xFFFF )
      {
        v30 = 0LL;
        do
        {
          ++v3;
          v30 += 4LL;
        }
        while ( v3 < (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v29 + 64) + 2LL * *(__int16 *)(v29 + 80) - 2) + 1) );
      }
      v31 = *(_WORD *)(*(_QWORD *)(v29 + 64) + 2LL * *(__int16 *)(v29 + 80) - 2);
      *(_DWORD *)(*(_QWORD *)v29 + 4LL * (unsigned __int16)(v31 + 2)) = 6 * v22
                                                                      + *(_DWORD *)(*(_QWORD *)v29
                                                                                  + 4LL * (unsigned __int16)(v31 + 1));
    }
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v9 + 844) )
  {
    result = sbit_CalcDevHorMetrics((int)v9 + 964, v9, (unsigned int)&v55, (unsigned int)&v52, (__int64)&v57);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    scl_CalcDevHorMetrics(*(_QWORD *)(v9 + 448), &v55, &v52, &v57);
  }
  v24 = *(_WORD *)(v9 + 384);
  v22 = (int)v55;
  if ( v24 && (_DWORD)v55 )
  {
    v25 = InvokeGlobalGSScale(*(_DWORD *)(v13 + 184), (int *)(v13 + 264), v24);
    v55 = (_QWORD *)((__int64)v22 << 16);
    v26 = CompDiv(v25, v55);
    if ( v26 < 0 )
      v26 = -v26;
  }
  else
  {
    v26 = 0x10000;
  }
  v27 = v54;
  v28 = v56;
  *(_DWORD *)(v54 + 468) = v26;
  result = fsg_GridFit(
             v9,
             (int)v9 + 388,
             (int)v9 + 1080,
             v27,
             v9 + 432,
             (__int64)TwilightElementSubPixel,
             *(_QWORD *)(a1 + 112),
             v28,
             v9 + 312,
             v9 + 952,
             v9 + 384,
             *(_DWORD *)(v9 + 1068),
             *(_WORD *)(v9 + 1076) & 1,
             *(_WORD *)(v9 + 1076) & 0x10);
  if ( !(_DWORD)result )
    goto LABEL_24;
  return result;
}
