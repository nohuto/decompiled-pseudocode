/*
 * XREFs of fs_ContourScan @ 0x1C00A9410
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 *     lGGOBitmap @ 0x1C0246EF8 (lGGOBitmap.c)
 * Callees:
 *     sbit_GetBitmap @ 0x1C000A084 (sbit_GetBitmap.c)
 *     fsc_OverscaleToSubPixel @ 0x1C00A7460 (fsc_OverscaleToSubPixel.c)
 *     fsc_FillGlyph @ 0x1C00A809C (fsc_FillGlyph.c)
 *     fs_SetUpKey @ 0x1C00AD5A8 (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00AD60C (fsg_UpdateWorkSpaceElement.c)
 *     fsc_CalcGrayMap @ 0x1C0106668 (fsc_CalcGrayMap.c)
 *     fs_ConvertGrayLevels @ 0x1C02D9508 (fs_ConvertGrayLevels.c)
 *     sbit_Embolden @ 0x1C02DAF28 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02DB4EC (sbit_EmboldenGray.c)
 *     sbit_EmboldenGrayFromMono @ 0x1C02DB8A4 (sbit_EmboldenGrayFromMono.c)
 *     sbit_EmboldenSubPixel @ 0x1C02DBACC (sbit_EmboldenSubPixel.c)
 *     sbit_ExpandGrayFromMono @ 0x1C02DBF14 (sbit_ExpandGrayFromMono.c)
 *     fsc_OverscaleToBold @ 0x1C02DC368 (fsc_OverscaleToBold.c)
 */

__int64 __fastcall fs_ContourScan(__int64 a1, __int64 a2)
{
  __int16 v4; // bx
  __int16 v5; // r15
  __int64 v6; // rax
  int v7; // r11d
  __int64 v8; // rdi
  __int16 v9; // r10
  __int16 v10; // r14
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  char *v16; // r9
  __int64 v17; // rax
  __int16 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // dx
  __int16 v25; // r8
  __int16 v26; // ax
  __int16 v27; // r10
  __int16 *v28; // rbx
  unsigned __int16 v29; // ax
  __int64 result; // rax
  int v31; // r15d
  __int16 v32; // ax
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // ax
  __int16 v36; // ax
  __int16 v37; // cx
  _DWORD *v38; // rbx
  __int64 v39; // rax
  _DWORD *v40; // rbx
  __int16 *v41; // rbx
  __int64 v42; // r8
  bool v43; // zf
  __int64 v44; // rax
  int v45; // ecx
  __int16 v46; // cx
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // ax
  __int16 v50; // cx
  __int64 v51; // rdx
  __int16 v52; // [rsp+40h] [rbp-49h] BYREF
  _WORD *v53; // [rsp+48h] [rbp-41h]
  __int64 v54; // [rsp+50h] [rbp-39h]
  __int64 v55; // [rsp+58h] [rbp-31h]
  __int64 v56; // [rsp+60h] [rbp-29h]
  __int64 v57; // [rsp+68h] [rbp-21h]
  __int64 v58; // [rsp+70h] [rbp-19h]
  __int64 v59; // [rsp+98h] [rbp+Fh]
  char *v61; // [rsp+100h] [rbp+77h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = fs_SetUpKey(a1, 62LL, &v61);
  v8 = v6;
  if ( !v6 )
    return (unsigned int)v61;
  v9 = v7 + 1;
  v10 = v7;
  if ( *(_DWORD *)(v6 + 1152) != v7 )
  {
    v10 = v7 + 1;
    if ( *(_DWORD *)(v6 + 1072) != __PAIR32__(v7, v9) )
      v10 = -1;
    if ( *(_DWORD *)(v6 + 844) != v7 && *(_WORD *)(v6 + 1002) != (_WORD)v7 )
      v10 = -1;
    v36 = *(_WORD *)(a1 + 106);
    v37 = *(_WORD *)(a1 + 104);
    if ( v36 > v37 && (v36 < *(__int16 *)(v8 + 694) || v37 > *(__int16 *)(v8 + 698)) )
      v10 = -1;
  }
  if ( *(_DWORD *)(v8 + 948) == v7 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 232) + 24LL);
    if ( *(_QWORD *)(v8 + 264) != v11 )
    {
      *(_QWORD *)(v8 + 432) = v11 + *(unsigned int *)(v8 + 480);
      *(_QWORD *)(v8 + 440) = v11 + *(unsigned int *)(v8 + 484);
      *(_QWORD *)(v8 + 448) = v11 + *(unsigned int *)(v8 + 488);
      *(_QWORD *)(v8 + 456) = v11 + *(unsigned int *)(v8 + 492);
      *(_QWORD *)(v8 + 464) = v11 + *(unsigned int *)(v8 + 496);
      *(_QWORD *)(v8 + 472) = v11 + *(unsigned int *)(v8 + 548);
      fsg_UpdateWorkSpaceElement(v8 + 480, v8 + 432);
      *(_QWORD *)(v8 + 264) = *(_QWORD *)(*(_QWORD *)(v8 + 232) + 24LL);
    }
    v12 = *(_QWORD **)(v8 + 232);
    v13 = *(unsigned int *)(v8 + 552);
    v14 = v12[3];
    v15 = v12[7];
    v16 = (char *)(v14 + v13);
    if ( !(_DWORD)v13 )
      v16 = (char *)v12[6];
    v17 = *(unsigned int *)(v8 + 556);
    v61 = v16;
    if ( (_DWORD)v17 )
      v15 = v14 + v17;
    if ( *(_DWORD *)(v8 + 844) != v7 && (*(_BYTE *)(v8 + 1076) & (unsigned __int8)v9) == 0 )
    {
      v32 = *(_WORD *)(a1 + 106);
      v33 = *(_WORD *)(a1 + 104);
      if ( v32 > v33 && (v32 < *(__int16 *)(v8 + 694) || v33 > *(__int16 *)(v8 + 698)) )
        return 6147LL;
      if ( v10 == v9 )
      {
        v4 = *(_WORD *)(v8 + 1060);
        v5 = *(_WORD *)(v8 + 1062);
        *(_DWORD *)(v8 + 1060) = v7;
      }
      result = sbit_GetBitmap(v8 + 964, v8, *(char **)(a1 + 48), v16);
      if ( !(_DWORD)result )
      {
        if ( v10 == 1 )
        {
          *(_WORD *)(v8 + 1060) = v4;
          *(_WORD *)(v8 + 1062) = v5;
        }
        if ( v10 )
          sbit_ExpandGrayFromMono(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v8 + 700) - *(_WORD *)(v8 + 696)),
            (unsigned __int16)(*(_WORD *)(v8 + 694) - *(_WORD *)(v8 + 698)),
            *(_WORD *)(v8 + 1156));
        if ( v10 == 1 && *(_WORD *)(v8 + 992) != 3 )
          sbit_EmboldenGrayFromMono(
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v8 + 700) - *(_WORD *)(v8 + 696)),
            (unsigned __int16)(*(_WORD *)(v8 + 694) - *(_WORD *)(v8 + 698)));
        *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v8 + 232) + 40LL);
        if ( !*(_DWORD *)(v8 + 836) )
          return 0LL;
        result = fs_ConvertGrayLevels(a2, *(unsigned __int16 *)(v8 + 832), *(unsigned __int16 *)(v8 + 1058));
        if ( !(_DWORD)result )
          return 0LL;
      }
      return result;
    }
    v18 = v9;
    v19 = v14 + *(unsigned int *)(v8 + 548);
    v20 = *(_QWORD *)(v8 + 448);
    *(_QWORD *)(v8 + 760) = v19;
    v55 = *(_QWORD *)v20;
    v56 = *(_QWORD *)(v20 + 8);
    v53 = *(_WORD **)(v20 + 56);
    v54 = *(_QWORD *)(v20 + 64);
    v57 = *(_QWORD *)(v20 + 48);
    v58 = *(_QWORD *)(v20 + 88);
    v52 = *(_WORD *)(v20 + 80);
  }
  else
  {
    v38 = *(_DWORD **)(a1 + 112);
    if ( *v38 != 755809197 )
      return 5632LL;
    v39 = *(int *)(v8 + 736);
    v40 = v38 + 72;
    *(_QWORD *)(v8 + 760) = v40;
    v41 = (__int16 *)((char *)v40 + v39);
    v18 = 1;
    v52 = *v41;
    v53 = v41 + 1;
    v54 = (__int64)&v41[v52 + 1];
    v55 = 2LL * v52 + v54;
    v42 = (unsigned __int16)(v41[v52 + v52] + 1);
    v56 = 4 * v42 + v55;
    v57 = 4 * v42 + v56;
    v43 = *(_DWORD *)(v42 + v57) == 165;
    v58 = v59;
    if ( !v43 )
      return 5632LL;
    v44 = *(_QWORD *)(v8 + 232);
    v7 = 0;
    v16 = *(char **)(v44 + 48);
    v15 = *(_QWORD *)(v44 + 56);
    v61 = v16;
  }
  if ( !v15 )
    *(_WORD *)(v8 + 312) = 2;
  *(_QWORD *)(v8 + 728) = *(_QWORD *)(a1 + 48);
  v21 = *(_WORD *)(a1 + 106);
  *(_WORD *)(v8 + 690) = v21;
  v22 = *(_WORD *)(a1 + 104);
  *(_WORD *)(v8 + 692) = v22;
  if ( v21 <= v22 )
  {
    *(_WORD *)(v8 + 690) = *(_WORD *)(v8 + 694);
    *(_WORD *)(v8 + 692) = *(_WORD *)(v8 + 698);
  }
  v23 = *(_WORD *)(v8 + 690);
  v24 = *(_WORD *)(v8 + 694);
  v25 = *(_WORD *)(v8 + 698);
  if ( v23 > v24 )
    v23 = *(_WORD *)(v8 + 694);
  *(_WORD *)(v8 + 690) = v23;
  v26 = *(_WORD *)(v8 + 692);
  if ( v26 < v25 )
    v26 = v25;
  *(_WORD *)(v8 + 692) = v26;
  if ( *(_WORD *)(v8 + 680) == 3 && (*(char **)(v8 + 288) != v16 || *(_QWORD *)(v8 + 296) != v15) )
    *(_WORD *)(v8 + 680) = 2;
  v27 = *(_WORD *)(v8 + 680);
  if ( v27 )
  {
    if ( v27 != v18 )
      goto LABEL_24;
    v45 = *(__int16 *)(v8 + 690) - *(__int16 *)(v8 + 692);
    if ( *(_DWORD *)(v8 + 836) != v7 )
      v45 *= *(unsigned __int16 *)(v8 + 832);
    if ( v45 > *(__int16 *)(v8 + 682) )
      return 4107LL;
    goto LABEL_89;
  }
  if ( *(_WORD *)(v8 + 690) != v24 || *(_WORD *)(v8 + 692) != v25 )
  {
    if ( *(_DWORD *)(v8 + 836) != v7 )
      return 5891LL;
LABEL_89:
    *(_WORD *)(v8 + 312) = 2;
  }
LABEL_24:
  v28 = (__int16 *)(v8 + 688);
  if ( *(_DWORD *)(v8 + 836) != v7 )
  {
    v34 = *(_WORD *)(v8 + 690);
    v28 = (__int16 *)(v8 + 784);
    if ( v34 == v24 )
    {
      *(_WORD *)(v8 + 786) = *(_WORD *)(v8 + 790);
    }
    else
    {
      v46 = v34 * *(_WORD *)(v8 + 832);
      if ( v46 > *(__int16 *)(v8 + 790) )
        v46 = *(_WORD *)(v8 + 790);
      *(_WORD *)(v8 + 786) = v46;
    }
    v35 = *(_WORD *)(v8 + 692);
    if ( v35 == v25 )
    {
      *(_WORD *)(v8 + 788) = *(_WORD *)(v8 + 794);
    }
    else
    {
      v47 = v35 * *(_WORD *)(v8 + 832);
      if ( v47 < *(__int16 *)(v8 + 794) )
        v47 = *(_WORD *)(v8 + 794);
      *(_WORD *)(v8 + 788) = v47;
    }
    *(_QWORD *)(v8 + 824) = *(_QWORD *)(a1 + 72);
  }
  if ( ((unsigned __int8)v18 & *(_BYTE *)(v8 + 1076)) != 0 )
  {
    v28 = (__int16 *)(v8 + 784);
    *(_QWORD *)(v8 + 824) = *(_QWORD *)(a1 + 72);
    *(_WORD *)(v8 + 786) = *(_WORD *)(v8 + 790);
    *(_WORD *)(v8 + 788) = *(_WORD *)(v8 + 794);
  }
  v29 = *(_WORD *)(v8 + 312);
  *(_QWORD *)(v8 + 768) = v16;
  *(_QWORD *)(v8 + 776) = v15;
  result = fsc_FillGlyph((__int64)&v52, v28, v8 + 736, v27, v29);
  if ( !(_DWORD)result )
  {
    if ( !*(_DWORD *)(v8 + 836)
      || (result = fsc_CalcGrayMap(v8 + 784, v8 + 688, *(unsigned __int16 *)(v8 + 832)), !(_DWORD)result) )
    {
      v31 = *(_DWORD *)(v8 + 1148);
      if ( v31 )
      {
        if ( !*(_DWORD *)(v8 + 1068)
          || (v48 = *(_WORD *)(v8 + 1076), (v48 & 1) == 0)
          || *(_DWORD *)(v8 + 844)
          || *(_WORD *)(v8 + 1072) != 1
          || *(_WORD *)(v8 + 1074)
          || (v48 & 8) != 0 )
        {
          v31 = 0;
        }
        v49 = *(_WORD *)(a1 + 106);
        v50 = *(_WORD *)(a1 + 104);
        if ( v49 > v50 && (v49 < *(__int16 *)(v8 + 694) || v50 > *(__int16 *)(v8 + 698)) )
          v31 = 0;
      }
      if ( (*(_BYTE *)(v8 + 1076) & 1) != 0 && !v31 )
        fsc_OverscaleToSubPixel((__int16 *)(v8 + 784), 0LL, (__int16 *)(v8 + 688));
      if ( *(_DWORD *)(v8 + 1068) )
      {
        if ( *(_DWORD *)(v8 + 836) )
        {
          sbit_EmboldenGray(
            *(void **)(v8 + 728),
            *(_WORD *)(v8 + 832) * *(_WORD *)(v8 + 832) + 1,
            *(_WORD *)(v8 + 1072),
            *(_WORD *)(v8 + 1074));
        }
        else if ( (*(_BYTE *)(v8 + 1076) & 1) != 0 )
        {
          if ( v31 )
          {
            fsc_OverscaleToBold(*(unsigned __int16 *)(v8 + 996), v8 + 784, v8 + 688);
            fsc_OverscaleToSubPixel((__int16 *)(v8 + 784), v51, (__int16 *)(v8 + 688));
          }
          else
          {
            sbit_EmboldenSubPixel(*(void **)(v8 + 728), *(_WORD *)(v8 + 1072), *(_WORD *)(v8 + 1074));
          }
        }
        else
        {
          if ( v10 != 1 )
            sbit_Embolden(
              *((_QWORD *)v28 + 5),
              (unsigned __int16)(v28[6] - v28[4]),
              (unsigned __int16)(v28[1] - v28[2]),
              (unsigned __int16)*v28,
              *(_WORD *)(v8 + 1072),
              *(_WORD *)(v8 + 1074));
          if ( v10 )
            sbit_ExpandGrayFromMono(
              *((_QWORD *)v28 + 5),
              *((_QWORD *)v28 + 5),
              (unsigned __int16)(v28[6] - v28[4]),
              (unsigned __int16)(v28[1] - v28[2]),
              *(_WORD *)(v8 + 1156));
          if ( v10 == 1 )
            sbit_EmboldenGrayFromMono(
              *((_QWORD *)v28 + 5),
              (unsigned __int16)(v28[6] - v28[4]),
              (unsigned __int16)(v28[1] - v28[2]));
        }
      }
      if ( *(_WORD *)(v8 + 680) == 2 )
      {
        *(_WORD *)(v8 + 680) = 3;
        *(_QWORD *)(v8 + 288) = v61;
        *(_QWORD *)(v8 + 296) = v15;
      }
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v8 + 232) + 40LL);
      return 0LL;
    }
  }
  return result;
}
