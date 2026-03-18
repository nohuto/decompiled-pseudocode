/*
 * XREFs of fs_ContourScan @ 0x1C00C142C
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00C267C (lGetGlyphBitmap.c)
 *     lGGOBitmap @ 0x1C02430B4 (lGGOBitmap.c)
 * Callees:
 *     sbit_GetBitmap @ 0x1C000BD48 (sbit_GetBitmap.c)
 *     fsc_OverscaleToSubPixel @ 0x1C00BF2EC (fsc_OverscaleToSubPixel.c)
 *     fsc_FillGlyph @ 0x1C00BFBAC (fsc_FillGlyph.c)
 *     fs_SetUpKey @ 0x1C00C50AC (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00C5110 (fsg_UpdateWorkSpaceElement.c)
 *     fsc_CalcGrayMap @ 0x1C0127C00 (fsc_CalcGrayMap.c)
 *     fs_ConvertGrayLevels @ 0x1C02DC604 (fs_ConvertGrayLevels.c)
 *     sbit_Embolden @ 0x1C02DDA94 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02DE064 (sbit_EmboldenGray.c)
 *     sbit_EmboldenGrayFromMono @ 0x1C02DE41C (sbit_EmboldenGrayFromMono.c)
 *     sbit_EmboldenSubPixel @ 0x1C02DE644 (sbit_EmboldenSubPixel.c)
 *     sbit_ExpandGrayFromMono @ 0x1C02DEA80 (sbit_ExpandGrayFromMono.c)
 *     fsc_OverscaleToBold @ 0x1C02DF908 (fsc_OverscaleToBold.c)
 */

__int64 __fastcall fs_ContourScan(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v6; // bx
  __int16 v7; // r15
  __int64 v8; // rax
  int v9; // r11d
  __int64 v10; // rdi
  int v11; // edx
  __int16 v12; // r14
  __int16 v13; // r10
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  char *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int16 v23; // cx
  __int16 v24; // ax
  __int16 v25; // ax
  __int16 v26; // dx
  __int16 v27; // r8
  __int16 v28; // ax
  __int16 v29; // r10
  __int16 *v30; // rbx
  unsigned __int16 v31; // ax
  __int64 result; // rax
  int v33; // r15d
  __int16 v34; // ax
  __int16 v35; // cx
  __int16 v36; // ax
  __int16 v37; // ax
  __int16 v38; // ax
  __int16 v39; // cx
  _DWORD *v40; // rbx
  __int64 v41; // rax
  _DWORD *v42; // rbx
  __int16 *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r8
  bool v46; // zf
  __int64 v47; // rax
  int v48; // ecx
  __int16 v49; // cx
  __int16 v50; // cx
  __int16 v51; // ax
  __int16 v52; // ax
  __int16 v53; // cx
  __int64 v54; // rdx
  __int16 v55; // [rsp+40h] [rbp-49h] BYREF
  _WORD *v56; // [rsp+48h] [rbp-41h]
  __int16 *v57; // [rsp+50h] [rbp-39h]
  __int16 *v58; // [rsp+58h] [rbp-31h]
  __int64 v59; // [rsp+60h] [rbp-29h]
  __int64 v60; // [rsp+68h] [rbp-21h]
  __int64 v61; // [rsp+70h] [rbp-19h]
  __int64 v62; // [rsp+98h] [rbp+Fh]
  char *v64; // [rsp+100h] [rbp+77h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = fs_SetUpKey(a1, 62LL, &v64, a4);
  v10 = v8;
  if ( !v8 )
    return (unsigned int)v64;
  v11 = v9 + 1;
  v12 = v9;
  if ( *(_DWORD *)(v8 + 1152) != v9 )
  {
    v12 = v9 + 1;
    if ( *(_DWORD *)(v8 + 1072) != __PAIR32__(v9, v11) )
      v12 = -1;
    if ( *(_DWORD *)(v8 + 844) != v9 && *(_WORD *)(v8 + 1002) != (_WORD)v9 )
      v12 = -1;
    v38 = *(_WORD *)(a1 + 106);
    v39 = *(_WORD *)(a1 + 104);
    if ( v38 > v39 && (v38 < *(__int16 *)(v10 + 694) || v39 > *(__int16 *)(v10 + 698)) )
      v12 = -1;
  }
  v13 = 2;
  if ( *(_DWORD *)(v10 + 948) == v9 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v10 + 232) + 24LL);
    if ( *(_QWORD *)(v10 + 264) != v14 )
    {
      *(_QWORD *)(v10 + 432) = v14 + *(unsigned int *)(v10 + 480);
      *(_QWORD *)(v10 + 440) = v14 + *(unsigned int *)(v10 + 484);
      *(_QWORD *)(v10 + 448) = v14 + *(unsigned int *)(v10 + 488);
      *(_QWORD *)(v10 + 456) = v14 + *(unsigned int *)(v10 + 492);
      *(_QWORD *)(v10 + 464) = v14 + *(unsigned int *)(v10 + 496);
      *(_QWORD *)(v10 + 472) = v14 + *(unsigned int *)(v10 + 548);
      fsg_UpdateWorkSpaceElement(v10 + 480, v10 + 432);
      *(_QWORD *)(v10 + 264) = *(_QWORD *)(*(_QWORD *)(v10 + 232) + 24LL);
    }
    v15 = *(_QWORD **)(v10 + 232);
    v16 = *(unsigned int *)(v10 + 552);
    v17 = v15[3];
    v18 = v15[7];
    v19 = (char *)(v17 + v16);
    if ( !(_DWORD)v16 )
      v19 = (char *)v15[6];
    v20 = *(unsigned int *)(v10 + 556);
    v64 = v19;
    if ( (_DWORD)v20 )
      v18 = v17 + v20;
    if ( *(_DWORD *)(v10 + 844) != v9 && (*(_BYTE *)(v10 + 1076) & 1) == 0 )
    {
      v34 = *(_WORD *)(a1 + 106);
      v35 = *(_WORD *)(a1 + 104);
      if ( v34 > v35 && (v34 < *(__int16 *)(v10 + 694) || v35 > *(__int16 *)(v10 + 698)) )
        return 6147LL;
      if ( v12 == 1 )
      {
        v6 = *(_WORD *)(v10 + 1060);
        v7 = *(_WORD *)(v10 + 1062);
        *(_DWORD *)(v10 + 1060) = v9;
      }
      result = sbit_GetBitmap(v10 + 964, v10, *(char **)(a1 + 48), v19);
      if ( !(_DWORD)result )
      {
        if ( v12 == 1 )
        {
          *(_WORD *)(v10 + 1060) = v6;
          *(_WORD *)(v10 + 1062) = v7;
        }
        if ( v12 )
          sbit_ExpandGrayFromMono(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v10 + 700) - *(_WORD *)(v10 + 696)),
            (unsigned __int16)(*(_WORD *)(v10 + 694) - *(_WORD *)(v10 + 698)),
            *(_WORD *)(v10 + 1156));
        if ( v12 == 1 && *(_WORD *)(v10 + 992) != 3 )
          sbit_EmboldenGrayFromMono(
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v10 + 700) - *(_WORD *)(v10 + 696)),
            (unsigned __int16)(*(_WORD *)(v10 + 694) - *(_WORD *)(v10 + 698)));
        *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 232) + 40LL);
        if ( !*(_DWORD *)(v10 + 836) )
          return 0LL;
        result = fs_ConvertGrayLevels(a2, *(unsigned __int16 *)(v10 + 832), *(unsigned __int16 *)(v10 + 1058));
        if ( !(_DWORD)result )
          return 0LL;
      }
      return result;
    }
    v21 = v17 + *(unsigned int *)(v10 + 548);
    v22 = *(_QWORD *)(v10 + 448);
    *(_QWORD *)(v10 + 760) = v21;
    v58 = *(__int16 **)v22;
    v59 = *(_QWORD *)(v22 + 8);
    v56 = *(_WORD **)(v22 + 56);
    v57 = *(__int16 **)(v22 + 64);
    v60 = *(_QWORD *)(v22 + 48);
    v61 = *(_QWORD *)(v22 + 88);
    v55 = *(_WORD *)(v22 + 80);
  }
  else
  {
    v40 = *(_DWORD **)(a1 + 112);
    if ( *v40 != 755809197 )
      return 5632LL;
    v41 = *(int *)(v10 + 736);
    v42 = v40 + 72;
    *(_QWORD *)(v10 + 760) = v42;
    v43 = (__int16 *)((char *)v42 + v41);
    v55 = *v43;
    v56 = v43 + 1;
    v44 = v55;
    v57 = &v43[v44 + 1];
    v45 = (unsigned __int16)(v11 + v57[v55 - v11]);
    v58 = &v57[v44];
    v59 = (__int64)&v57[2 * v45 + v44];
    v60 = 4 * v45 + v59;
    v46 = *(_DWORD *)(v45 + v60) == 165;
    v61 = v62;
    if ( !v46 )
      return 5632LL;
    v47 = *(_QWORD *)(v10 + 232);
    v9 = 0;
    v19 = *(char **)(v47 + 48);
    v13 = 2;
    v18 = *(_QWORD *)(v47 + 56);
    v64 = v19;
  }
  if ( !v18 )
    *(_WORD *)(v10 + 312) = v13;
  *(_QWORD *)(v10 + 728) = *(_QWORD *)(a1 + 48);
  v23 = *(_WORD *)(a1 + 106);
  *(_WORD *)(v10 + 690) = v23;
  v24 = *(_WORD *)(a1 + 104);
  *(_WORD *)(v10 + 692) = v24;
  if ( v23 <= v24 )
  {
    *(_WORD *)(v10 + 690) = *(_WORD *)(v10 + 694);
    *(_WORD *)(v10 + 692) = *(_WORD *)(v10 + 698);
  }
  v25 = *(_WORD *)(v10 + 690);
  v26 = *(_WORD *)(v10 + 694);
  v27 = *(_WORD *)(v10 + 698);
  if ( v25 > v26 )
    v25 = *(_WORD *)(v10 + 694);
  *(_WORD *)(v10 + 690) = v25;
  v28 = *(_WORD *)(v10 + 692);
  if ( v28 < v27 )
    v28 = v27;
  *(_WORD *)(v10 + 692) = v28;
  if ( *(_WORD *)(v10 + 680) == 3 && (*(char **)(v10 + 288) != v19 || *(_QWORD *)(v10 + 296) != v18) )
    *(_WORD *)(v10 + 680) = v13;
  v29 = *(_WORD *)(v10 + 680);
  if ( v29 )
  {
    if ( v29 == 1 )
    {
      v48 = *(__int16 *)(v10 + 690) - *(__int16 *)(v10 + 692);
      if ( *(_DWORD *)(v10 + 836) != v9 )
        v48 *= *(unsigned __int16 *)(v10 + 832);
      if ( v48 > *(__int16 *)(v10 + 682) )
        return 4107LL;
      *(_WORD *)(v10 + 312) = 2;
    }
  }
  else if ( *(_WORD *)(v10 + 690) != v26 || *(_WORD *)(v10 + 692) != v27 )
  {
    if ( *(_DWORD *)(v10 + 836) != v9 )
      return 5891LL;
    *(_WORD *)(v10 + 312) = 2;
  }
  v30 = (__int16 *)(v10 + 688);
  if ( *(_DWORD *)(v10 + 836) != v9 )
  {
    v36 = *(_WORD *)(v10 + 690);
    v30 = (__int16 *)(v10 + 784);
    if ( v36 == v26 )
    {
      *(_WORD *)(v10 + 786) = *(_WORD *)(v10 + 790);
    }
    else
    {
      v49 = v36 * *(_WORD *)(v10 + 832);
      if ( v49 > *(__int16 *)(v10 + 790) )
        v49 = *(_WORD *)(v10 + 790);
      *(_WORD *)(v10 + 786) = v49;
    }
    v37 = *(_WORD *)(v10 + 692);
    if ( v37 == v27 )
    {
      *(_WORD *)(v10 + 788) = *(_WORD *)(v10 + 794);
    }
    else
    {
      v50 = v37 * *(_WORD *)(v10 + 832);
      if ( v50 < *(__int16 *)(v10 + 794) )
        v50 = *(_WORD *)(v10 + 794);
      *(_WORD *)(v10 + 788) = v50;
    }
    *(_QWORD *)(v10 + 824) = *(_QWORD *)(a1 + 72);
  }
  if ( (*(_BYTE *)(v10 + 1076) & 1) != 0 )
  {
    v30 = (__int16 *)(v10 + 784);
    *(_QWORD *)(v10 + 824) = *(_QWORD *)(a1 + 72);
    *(_WORD *)(v10 + 786) = *(_WORD *)(v10 + 790);
    *(_WORD *)(v10 + 788) = *(_WORD *)(v10 + 794);
  }
  v31 = *(_WORD *)(v10 + 312);
  *(_QWORD *)(v10 + 768) = v19;
  *(_QWORD *)(v10 + 776) = v18;
  result = fsc_FillGlyph((__int64)&v55, v30, v10 + 736, v29, v31);
  if ( !(_DWORD)result )
  {
    if ( !*(_DWORD *)(v10 + 836)
      || (result = fsc_CalcGrayMap(v10 + 784, v10 + 688, *(unsigned __int16 *)(v10 + 832)), !(_DWORD)result) )
    {
      v33 = *(_DWORD *)(v10 + 1148);
      if ( v33 )
      {
        if ( !*(_DWORD *)(v10 + 1068)
          || (v51 = *(_WORD *)(v10 + 1076), (v51 & 1) == 0)
          || *(_DWORD *)(v10 + 844)
          || *(_WORD *)(v10 + 1072) != 1
          || *(_WORD *)(v10 + 1074)
          || (v51 & 8) != 0 )
        {
          v33 = 0;
        }
        v52 = *(_WORD *)(a1 + 106);
        v53 = *(_WORD *)(a1 + 104);
        if ( v52 > v53 && (v52 < *(__int16 *)(v10 + 694) || v53 > *(__int16 *)(v10 + 698)) )
          v33 = 0;
      }
      if ( (*(_BYTE *)(v10 + 1076) & 1) != 0 && !v33 )
        fsc_OverscaleToSubPixel((__int16 *)(v10 + 784), 0LL, (__int16 *)(v10 + 688));
      if ( *(_DWORD *)(v10 + 1068) )
      {
        if ( *(_DWORD *)(v10 + 836) )
        {
          sbit_EmboldenGray(
            *(void **)(v10 + 728),
            *(_WORD *)(v10 + 832) * *(_WORD *)(v10 + 832) + 1,
            *(_WORD *)(v10 + 1072),
            *(_WORD *)(v10 + 1074));
        }
        else if ( (*(_BYTE *)(v10 + 1076) & 1) != 0 )
        {
          if ( v33 )
          {
            fsc_OverscaleToBold(*(unsigned __int16 *)(v10 + 996), v10 + 784, v10 + 688);
            fsc_OverscaleToSubPixel((__int16 *)(v10 + 784), v54, (__int16 *)(v10 + 688));
          }
          else
          {
            sbit_EmboldenSubPixel(*(void **)(v10 + 728), *(_WORD *)(v10 + 1072), *(_WORD *)(v10 + 1074));
          }
        }
        else
        {
          if ( v12 != 1 )
            sbit_Embolden(
              *((_QWORD *)v30 + 5),
              (unsigned __int16)(v30[6] - v30[4]),
              (unsigned __int16)(v30[1] - v30[2]),
              (unsigned __int16)*v30,
              *(_WORD *)(v10 + 1072),
              *(_WORD *)(v10 + 1074));
          if ( v12 )
            sbit_ExpandGrayFromMono(
              *((_QWORD *)v30 + 5),
              *((_QWORD *)v30 + 5),
              (unsigned __int16)(v30[6] - v30[4]),
              (unsigned __int16)(v30[1] - v30[2]),
              *(_WORD *)(v10 + 1156));
          if ( v12 == 1 )
            sbit_EmboldenGrayFromMono(
              *((_QWORD *)v30 + 5),
              (unsigned __int16)(v30[6] - v30[4]),
              (unsigned __int16)(v30[1] - v30[2]));
        }
      }
      if ( *(_WORD *)(v10 + 680) == 2 )
      {
        *(_WORD *)(v10 + 680) = 3;
        *(_QWORD *)(v10 + 288) = v64;
        *(_QWORD *)(v10 + 296) = v18;
      }
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 232) + 40LL);
      return 0LL;
    }
  }
  return result;
}
