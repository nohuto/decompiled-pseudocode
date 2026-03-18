/*
 * XREFs of fs__Contour @ 0x1C00B4F90
 * Callers:
 *     bGetGlyphOutline @ 0x1C00B3AC4 (bGetGlyphOutline.c)
 *     fs_NewContourGridFit @ 0x1C0246D94 (fs_NewContourGridFit.c)
 * Callees:
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C00AB990 (fsg_UpdatePrivateSpaceAddresses.c)
 *     fsg_RunPreProgram @ 0x1C00AD3BC (fsg_RunPreProgram.c)
 *     fsg_QueryTwilightElementSubPixel @ 0x1C00B1490 (fsg_QueryTwilightElementSubPixel.c)
 *     scl_ScaleDownFromSubPixelOverscale @ 0x1C00B14EC (scl_ScaleDownFromSubPixelOverscale.c)
 *     fs_SetUpKey @ 0x1C00B4B00 (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00B4B64 (fsg_UpdateWorkSpaceElement.c)
 *     fsg_QueryTwilightElement @ 0x1C00B4BC0 (fsg_QueryTwilightElement.c)
 *     fsg_GridFit @ 0x1C00B56AC (fsg_GridFit.c)
 *     InvokeGlobalGSScale @ 0x1C00B9E24 (InvokeGlobalGSScale.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 *     scl_CalcDevHorMetrics @ 0x1C00D4918 (scl_CalcDevHorMetrics.c)
 *     sbit_GetDevAdvanceHeight @ 0x1C01106A0 (sbit_GetDevAdvanceHeight.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C0110B28 (sbit_GetDevAdvanceWidth.c)
 *     sbit_CalcDevHorMetrics @ 0x1C0110C20 (sbit_CalcDevHorMetrics.c)
 */

__int64 __fastcall fs__Contour(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v5; // rsi
  _QWORD *TwilightElementSubPixel; // r12
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r14
  BOOL v15; // r15d
  _QWORD *TwilightElement; // rax
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rcx
  _WORD *v20; // r12
  __int64 result; // rax
  __int64 v22; // r15
  __int16 v23; // ax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // r14d
  __int64 v27; // r9
  int v28; // r11d
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rax
  BOOL v32; // edi
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rax
  __int16 v37; // r9
  __int64 v38; // r11
  __int64 v39; // rdi
  bool v40; // zf
  __int64 v41; // r11
  __int64 v42; // r9
  __int16 v43; // dx
  unsigned __int16 v44; // ax
  int v45; // r10d
  __int64 v46; // rdx
  int v47; // r10d
  int v48; // ebx
  __int64 v49; // r8
  __int64 v50; // rdx
  int v51; // r11d
  int v52; // eax
  int v53; // r10d
  int v54; // r11d
  BOOL v55; // ecx
  __int64 v56; // rbx
  __int64 v57; // rax
  int v58; // [rsp+38h] [rbp-31h]
  int v59; // [rsp+58h] [rbp-11h]
  __int64 v60; // [rsp+70h] [rbp+7h] BYREF
  _QWORD *v61; // [rsp+78h] [rbp+Fh]
  __int64 v62; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v63; // [rsp+D8h] [rbp+6Fh]
  int v64; // [rsp+E0h] [rbp+77h]
  __int64 v65; // [rsp+E8h] [rbp+7Fh] BYREF

  v64 = a3;
  v63 = a2;
  v3 = 0;
  v5 = 0LL;
  LODWORD(v62) = 0;
  TwilightElementSubPixel = 0LL;
  v61 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v7 = fs_SetUpKey(a1, 14, &v62);
  v65 = v7;
  v8 = v7;
  if ( !v7 )
    return (unsigned int)v62;
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
               &v60,
               &v62);
    if ( (_DWORD)result )
      return result;
    v8 = v65;
    v57 = *(_QWORD *)(v65 + 232);
    *(_OWORD *)(v65 + 240) = *(_OWORD *)v57;
    *(_OWORD *)(v8 + 256) = *(_OWORD *)(v57 + 16);
    *(_OWORD *)(v8 + 272) = *(_OWORD *)(v57 + 32);
    *(_OWORD *)(v8 + 288) = *(_OWORD *)(v57 + 48);
    *(_QWORD *)(v8 + 304) = *(_QWORD *)(v57 + 64);
  }
  v11 = v8 + 432;
  fsg_UpdateWorkSpaceElement((unsigned int *)(v8 + 480), v8 + 432);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 232) + 32LL);
  v14 = v13 + *(unsigned int *)(v12 + 584);
  if ( (*(_BYTE *)(v12 + 1076) & 2) != 0 )
  {
    v5 = v13 + *(unsigned int *)(v12 + 668);
    TwilightElementSubPixel = fsg_QueryTwilightElementSubPixel(v13, (unsigned int *)(v12 + 568));
    v61 = TwilightElementSubPixel;
  }
  v15 = (*(_BYTE *)(v12 + 1076) & 3) == 1;
  TwilightElement = fsg_QueryTwilightElement(*(_QWORD *)(*(_QWORD *)(v12 + 232) + 32LL), (unsigned int *)(v12 + 568));
  v19 = (__int64)TwilightElement;
  v62 = (__int64)TwilightElement;
  if ( !*(_DWORD *)(v18 + 1064) )
  {
    *(_DWORD *)(v18 + 424) = 0;
    v64 = 0;
  }
  if ( *(_DWORD *)(v18 + 424) )
  {
    *(_DWORD *)(v18 + 424) = 0;
    result = fsg_RunPreProgram(v18, v18 + 388, v18 + 316, v14, v11, (__int64)TwilightElement, 0LL);
    if ( !(_DWORD)result )
    {
      v18 = v65;
      if ( (*(_BYTE *)(v65 + 1076) & 2) == 0 )
      {
LABEL_54:
        v19 = v62;
        v17 = 1;
        goto LABEL_12;
      }
      result = fsg_RunPreProgram(v65, v65 + 388, v65 + 1080, v5, v11, (__int64)TwilightElementSubPixel, 0LL);
      if ( !(_DWORD)result )
      {
        v18 = v65;
        goto LABEL_54;
      }
    }
    *(_DWORD *)(v65 + 1064) = 0;
    return result;
  }
LABEL_12:
  if ( *(_DWORD *)(a1 + 120) && *(_DWORD *)(v18 + 844) && (*(_BYTE *)(v18 + 1076) & 1) == 0 )
  {
    v56 = v18 + 964;
    *(_DWORD *)(v18 + 956) = v17;
    result = sbit_GetDevAdvanceWidth(v18 + 964, v18, &v62);
    if ( (_DWORD)result )
      return result;
    v22 = v65;
    result = sbit_GetDevAdvanceHeight(v56, v65, &v60);
    if ( (_DWORD)result )
      return result;
    v48 = HIDWORD(v62);
    v47 = v62;
    v52 = HIDWORD(v60);
    v51 = v60;
    v39 = v63;
    goto LABEL_41;
  }
  v59 = *(_DWORD *)(v18 + 1068);
  v20 = (_WORD *)(v18 + 384);
  v58 = v64;
  *(_DWORD *)(v18 + 956) = 0;
  result = fsg_GridFit(
             v18,
             (int)v18 + 388,
             (int)v18 + 316,
             v14,
             v11,
             v19,
             *(_QWORD *)(a1 + 112),
             v58,
             v18 + 312,
             v18 + 952,
             v18 + 384,
             v59,
             v15);
  if ( (_DWORD)result )
    return result;
  v22 = v65;
  v23 = *(_WORD *)(v65 + 1076);
  if ( (v23 & 1) == 0 )
  {
LABEL_38:
    v38 = *(_QWORD *)(v22 + 448);
    v39 = v63;
    v40 = (*(_WORD *)(v22 + 1076) & 1) == 0;
    *(_QWORD *)(v63 + 120) = *(_QWORD *)v38;
    *(_QWORD *)(v39 + 128) = *(_QWORD *)(v38 + 8);
    *(_QWORD *)(v39 + 136) = *(_QWORD *)(v38 + 56);
    *(_QWORD *)(v39 + 144) = *(_QWORD *)(v38 + 64);
    *(_QWORD *)(v39 + 152) = *(_QWORD *)(v38 + 48);
    *(_QWORD *)(v39 + 224) = *(_QWORD *)(v38 + 88);
    *(_WORD *)(v39 + 118) = *(_WORD *)(v38 + 80);
    if ( !v40 )
    {
      scl_ScaleDownFromSubPixelOverscale(v38);
      *(_QWORD *)(v39 + 120) = *(_QWORD *)(v41 + 16);
    }
    v42 = *(_QWORD *)(v22 + 448);
    v43 = *(_WORD *)(*(_QWORD *)(v42 + 64) + 2LL * *(__int16 *)(v42 + 80) - 2);
    v44 = v43 + 2;
    v45 = *(_DWORD *)(*(_QWORD *)v42 + 4LL * (unsigned __int16)(v43 + 2));
    v46 = 4LL * (unsigned __int16)(v43 + 1);
    v47 = v45 - *(_DWORD *)(v46 + *(_QWORD *)v42);
    v48 = *(_DWORD *)(*(_QWORD *)(v42 + 8) + 4LL * v44) - *(_DWORD *)(*(_QWORD *)(v42 + 8) + v46);
    LOWORD(v46) = *(_WORD *)(*(_QWORD *)(v42 + 64) + 2LL * *(__int16 *)(v42 + 80) - 2);
    v49 = 4LL * (unsigned __int16)(v46 + 4);
    v50 = 4LL * (unsigned __int16)(v46 + 3);
    v51 = *(_DWORD *)(v50 + *(_QWORD *)v42) - *(_DWORD *)(*(_QWORD *)v42 + v49);
    v52 = *(_DWORD *)(*(_QWORD *)(v42 + 8) + v50) - *(_DWORD *)(*(_QWORD *)(v42 + 8) + v49);
LABEL_41:
    v53 = v47 << 10;
    v54 = v51 << 10;
    *(_DWORD *)(v39 + 72) = v53;
    *(_DWORD *)(v39 + 76) = v48 << 10;
    *(_DWORD *)(v39 + 204) = v54;
    *(_DWORD *)(v39 + 208) = v52 << 10;
    if ( (*(_BYTE *)(v22 + 1076) & 1) != 0 )
    {
      *(_DWORD *)(v39 + 72) = (v53 + 3) / 6;
      *(_DWORD *)(v39 + 204) = (v54 + 3) / 6;
    }
    *(_WORD *)(v39 + 116) = *(_WORD *)(v22 + 952);
    *(_QWORD *)(v39 + 160) = *(_QWORD *)(*(_QWORD *)(v22 + 232) + 32LL) + *(unsigned int *)(v22 + 580);
    result = 0LL;
    *(_DWORD *)(v22 + 420) = 30;
    return result;
  }
  LODWORD(v62) = 0;
  LODWORD(v60) = 0;
  LODWORD(v65) = 0;
  if ( (v23 & 2) == 0 )
  {
    v26 = v64;
LABEL_23:
    v27 = *(_QWORD *)(v22 + 448);
    v28 = 0;
    if ( *(_WORD *)(*(_QWORD *)(v27 + 64) + 2LL * *(__int16 *)(v27 + 80) - 2) != 0xFFF7 )
    {
      v29 = 0LL;
      do
      {
        v30 = *(int *)(*(_QWORD *)v27 + v29);
        if ( (_DWORD)v30 )
        {
          v55 = (int)v30 < 0;
          v31 = 393216 * v30;
          v32 = (v31 & 0x8000) != 0 && (!v55 || (v31 & 0x7FFF) != 0);
          v33 = HIDWORD(v31);
          v34 = v32 + (v31 >> 16);
          if ( (v33 & 0xFFFF0000) != 0 )
          {
            if ( (v33 & 0xFFFF0000) == 0xFFFF0000 )
            {
              if ( v34 > 0 )
                v34 = 0x80000000;
            }
            else
            {
              v34 = 0x80000000;
              if ( (v33 & 0x80000000) != 0 )
                v34 = 0x7FFFFFFF;
            }
          }
          else if ( v34 < 0 )
          {
            v34 = 0x7FFFFFFF;
          }
        }
        else
        {
          v34 = 0;
        }
        *(_DWORD *)(*(_QWORD *)v27 + v29) = v34;
        ++v28;
        v29 += 4LL;
      }
      while ( v28 < (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v27 + 64) + 2LL * *(__int16 *)(v27 + 80) - 2) + 9) );
    }
    if ( v26 && (*(_BYTE *)(v22 + 1076) & 2) != 0 )
    {
      v35 = *(_QWORD *)(v22 + 448);
      if ( *(_WORD *)(*(_QWORD *)(v35 + 64) + 2LL * *(__int16 *)(v35 + 80) - 2) != 0xFFFF )
      {
        v36 = 0LL;
        do
        {
          ++v3;
          v36 += 4LL;
        }
        while ( v3 < (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v35 + 64) + 2LL * *(__int16 *)(v35 + 80) - 2) + 1) );
      }
      v37 = *(_WORD *)(*(_QWORD *)(v35 + 64) + 2LL * *(__int16 *)(v35 + 80) - 2);
      *(_DWORD *)(*(_QWORD *)v35 + 4LL * (unsigned __int16)(v37 + 2)) = 6 * v62
                                                                      + *(_DWORD *)(*(_QWORD *)v35
                                                                                  + 4LL * (unsigned __int16)(v37 + 1));
    }
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v22 + 844) )
  {
    result = sbit_CalcDevHorMetrics((int)v22 + 964, v22, (unsigned int)&v62, (unsigned int)&v60, (__int64)&v65);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    scl_CalcDevHorMetrics(*(_QWORD *)(v22 + 448), &v62, &v60, &v65);
  }
  if ( *v20 && (_DWORD)v62 )
  {
    v24 = InvokeGlobalGSScale(*(unsigned int *)(v14 + 184), v14 + 264, (unsigned __int16)*v20);
    v65 = (__int64)(int)v62 << 16;
    v25 = CompDiv(v24, v65);
    if ( v25 < 0 )
      v25 = -v25;
  }
  else
  {
    v25 = 0x10000;
  }
  v26 = v64;
  *(_DWORD *)(v5 + 468) = v25;
  result = fsg_GridFit(
             v22,
             (int)v22 + 388,
             (int)v22 + 1080,
             v5,
             v11,
             (__int64)v61,
             *(_QWORD *)(a1 + 112),
             v26,
             v22 + 312,
             v22 + 952,
             (__int64)v20,
             *(_DWORD *)(v22 + 1068),
             *(_WORD *)(v22 + 1076) & 1);
  if ( !(_DWORD)result )
    goto LABEL_23;
  return result;
}
