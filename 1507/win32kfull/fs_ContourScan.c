/*
 * XREFs of fs_ContourScan @ 0x1C00AF620
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00B209C (lGetGlyphBitmap.c)
 *     lGGOBitmap @ 0x1C0246DCC (lGGOBitmap.c)
 * Callees:
 *     fsc_OverscaleToSubPixel @ 0x1C00AEBF4 (fsc_OverscaleToSubPixel.c)
 *     fsc_FillGlyph @ 0x1C00AFD48 (fsc_FillGlyph.c)
 *     fsg_GetContourData @ 0x1C00B0F3C (fsg_GetContourData.c)
 *     fs_SetUpKey @ 0x1C00B4B00 (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00B4B64 (fsg_UpdateWorkSpaceElement.c)
 *     fsc_CalcGrayMap @ 0x1C014ECEC (fsc_CalcGrayMap.c)
 *     fs_ConvertGrayLevels @ 0x1C02D8160 (fs_ConvertGrayLevels.c)
 *     sbit_Embolden @ 0x1C02DA474 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02DAA38 (sbit_EmboldenGray.c)
 *     sbit_EmboldenGrayFromMono @ 0x1C02DADF0 (sbit_EmboldenGrayFromMono.c)
 *     sbit_EmboldenSubPixel @ 0x1C02DB018 (sbit_EmboldenSubPixel.c)
 *     sbit_ExpandGrayFromMono @ 0x1C02DB460 (sbit_ExpandGrayFromMono.c)
 *     sbit_GetBitmap @ 0x1C02DB5F4 (sbit_GetBitmap.c)
 *     fsc_OverscaleToBold @ 0x1C02DBCA0 (fsc_OverscaleToBold.c)
 */

__int64 __fastcall fs_ContourScan(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // bx
  __int16 v6; // r15
  __int64 v7; // rax
  int v8; // r11d
  __int64 v9; // rdi
  __int16 v10; // r9
  __int16 v11; // r14
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rax
  __int16 v19; // cx
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // dx
  __int16 v23; // r8
  __int16 v24; // ax
  int v25; // r9d
  unsigned __int16 *v26; // rbx
  __int64 result; // rax
  int v28; // r15d
  __int16 v29; // ax
  __int16 v30; // ax
  __int16 v31; // ax
  __int16 v32; // cx
  __int16 v33; // ax
  __int16 v34; // cx
  _DWORD *v35; // rbx
  __int64 v36; // rax
  _DWORD *v37; // rbx
  __int16 *v38; // rbx
  __int64 v39; // r8
  bool v40; // zf
  __int64 v41; // rax
  int v42; // ecx
  __int16 v43; // cx
  __int16 v44; // cx
  __int16 v45; // ax
  __int16 v46; // ax
  __int16 v47; // cx
  __int64 v48; // rdx
  __int16 v49; // [rsp+20h] [rbp-79h]
  __int16 v50; // [rsp+50h] [rbp-49h] BYREF
  _WORD *v51; // [rsp+58h] [rbp-41h] BYREF
  __int64 v52; // [rsp+60h] [rbp-39h] BYREF
  __int64 v53; // [rsp+68h] [rbp-31h] BYREF
  __int64 v54; // [rsp+70h] [rbp-29h] BYREF
  __int64 v55; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v56[14]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v58; // [rsp+110h] [rbp+77h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = fs_SetUpKey(a1, 62LL, &v58, a4);
  v9 = v7;
  if ( !v7 )
    return (unsigned int)v58;
  v10 = v8 + 1;
  v11 = v8;
  if ( *(_DWORD *)(v7 + 1152) != v8 )
  {
    v11 = v8 + 1;
    if ( *(_WORD *)(v7 + 1072) != v10 || *(_WORD *)(v7 + 1074) != (_WORD)v8 )
      v11 = -1;
    if ( *(_DWORD *)(v7 + 844) != v8 && *(_WORD *)(v7 + 1002) != (_WORD)v8 )
      v11 = -1;
    v31 = *(_WORD *)(a1 + 106);
    v32 = *(_WORD *)(a1 + 104);
    if ( v31 > v32 && (v31 < *(__int16 *)(v9 + 694) || v32 > *(__int16 *)(v9 + 698)) )
      v11 = -1;
  }
  if ( *(_DWORD *)(v9 + 948) == v8 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 24LL);
    if ( *(_QWORD *)(v9 + 264) != v12 )
    {
      *(_QWORD *)(v9 + 432) = v12 + *(unsigned int *)(v9 + 480);
      *(_QWORD *)(v9 + 440) = v12 + *(unsigned int *)(v9 + 484);
      *(_QWORD *)(v9 + 448) = v12 + *(unsigned int *)(v9 + 488);
      *(_QWORD *)(v9 + 456) = v12 + *(unsigned int *)(v9 + 492);
      *(_QWORD *)(v9 + 464) = v12 + *(unsigned int *)(v9 + 496);
      *(_QWORD *)(v9 + 472) = v12 + *(unsigned int *)(v9 + 548);
      fsg_UpdateWorkSpaceElement(v9 + 480, v9 + 432);
      v10 = 1;
      *(_QWORD *)(v9 + 264) = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 24LL);
    }
    v13 = *(_QWORD **)(v9 + 232);
    v14 = *(unsigned int *)(v9 + 552);
    v15 = v13[3];
    v16 = v13[7];
    v17 = v15 + v14;
    if ( !(_DWORD)v14 )
      v17 = v13[6];
    v18 = *(unsigned int *)(v9 + 556);
    v58 = v17;
    if ( (_DWORD)v18 )
      v16 = v15 + v18;
    if ( *(_DWORD *)(v9 + 844) != v8 && (*(_BYTE *)(v9 + 1076) & (unsigned __int8)v10) == 0 )
    {
      v33 = *(_WORD *)(a1 + 106);
      v34 = *(_WORD *)(a1 + 104);
      if ( v33 > v34 && (v33 < *(__int16 *)(v9 + 694) || v34 > *(__int16 *)(v9 + 698)) )
        return 6147LL;
      if ( v11 == v10 )
      {
        v5 = *(_WORD *)(v9 + 1060);
        v6 = *(_WORD *)(v9 + 1062);
        *(_DWORD *)(v9 + 1060) = v8;
      }
      result = sbit_GetBitmap(v9 + 964, v9, *(_QWORD *)(a1 + 48), v17);
      if ( !(_DWORD)result )
      {
        if ( v11 == 1 )
        {
          *(_WORD *)(v9 + 1060) = v5;
          *(_WORD *)(v9 + 1062) = v6;
        }
        if ( v11 )
          sbit_ExpandGrayFromMono(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v9 + 700) - *(_WORD *)(v9 + 696)),
            (unsigned __int16)(*(_WORD *)(v9 + 694) - *(_WORD *)(v9 + 698)),
            *(_WORD *)(v9 + 1156));
        if ( v11 == 1 && *(_WORD *)(v9 + 992) != 3 )
          sbit_EmboldenGrayFromMono(
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v9 + 700) - *(_WORD *)(v9 + 696)),
            (unsigned __int16)(*(_WORD *)(v9 + 694) - *(_WORD *)(v9 + 698)));
        *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 40LL);
        if ( !*(_DWORD *)(v9 + 836) )
          return 0LL;
        result = fs_ConvertGrayLevels(a2, *(unsigned __int16 *)(v9 + 832), *(unsigned __int16 *)(v9 + 1058));
        if ( !(_DWORD)result )
          return 0LL;
      }
      return result;
    }
    *(_QWORD *)(v9 + 760) = v15 + *(unsigned int *)(v9 + 548);
    fsg_GetContourData(
      v9 + 432,
      0,
      (unsigned int)&v53,
      (unsigned int)&v54,
      (__int64)&v51,
      (__int64)&v52,
      (__int64)&v55,
      (__int64)v56,
      (__int64)&v50);
  }
  else
  {
    v35 = *(_DWORD **)(a1 + 112);
    if ( *v35 != 755809197 )
      return 5632LL;
    v36 = *(int *)(v9 + 736);
    v37 = v35 + 72;
    *(_QWORD *)(v9 + 760) = v37;
    v38 = (__int16 *)((char *)v37 + v36);
    v50 = *v38;
    v51 = v38 + 1;
    v52 = (__int64)&v38[v50 + 1];
    v53 = 2LL * v50 + v52;
    v39 = (unsigned __int16)(v38[v50 + v50] + 1);
    v54 = 4 * v39 + v53;
    v55 = 4 * v39 + v54;
    v40 = *(_DWORD *)(v39 + v55) == 165;
    v56[0] = v56[5];
    if ( !v40 )
      return 5632LL;
    v41 = *(_QWORD *)(v9 + 232);
    v17 = *(_QWORD *)(v41 + 48);
    v16 = *(_QWORD *)(v41 + 56);
    v58 = v17;
  }
  if ( !v16 )
    *(_WORD *)(v9 + 312) = 2;
  *(_QWORD *)(v9 + 728) = *(_QWORD *)(a1 + 48);
  v19 = *(_WORD *)(a1 + 106);
  *(_WORD *)(v9 + 690) = v19;
  v20 = *(_WORD *)(a1 + 104);
  *(_WORD *)(v9 + 692) = v20;
  if ( v19 <= v20 )
  {
    *(_WORD *)(v9 + 690) = *(_WORD *)(v9 + 694);
    *(_WORD *)(v9 + 692) = *(_WORD *)(v9 + 698);
  }
  v21 = *(_WORD *)(v9 + 690);
  v22 = *(_WORD *)(v9 + 694);
  v23 = *(_WORD *)(v9 + 698);
  if ( v21 > v22 )
    v21 = *(_WORD *)(v9 + 694);
  *(_WORD *)(v9 + 690) = v21;
  v24 = *(_WORD *)(v9 + 692);
  if ( v24 < v23 )
    v24 = v23;
  *(_WORD *)(v9 + 692) = v24;
  if ( *(_WORD *)(v9 + 680) == 3 && (*(_QWORD *)(v9 + 288) != v17 || *(_QWORD *)(v9 + 296) != v16) )
    *(_WORD *)(v9 + 680) = 2;
  v25 = *(unsigned __int16 *)(v9 + 680);
  if ( (_WORD)v25 )
  {
    if ( (_WORD)v25 != 1 )
      goto LABEL_24;
    v42 = *(__int16 *)(v9 + 690) - *(__int16 *)(v9 + 692);
    if ( *(_DWORD *)(v9 + 836) )
      v42 *= *(unsigned __int16 *)(v9 + 832);
    if ( v42 > *(__int16 *)(v9 + 682) )
      return 4107LL;
    goto LABEL_90;
  }
  if ( *(_WORD *)(v9 + 690) != v22 || *(_WORD *)(v9 + 692) != v23 )
  {
    if ( *(_DWORD *)(v9 + 836) )
      return 5891LL;
LABEL_90:
    *(_WORD *)(v9 + 312) = 2;
  }
LABEL_24:
  v26 = (unsigned __int16 *)(v9 + 688);
  if ( *(_DWORD *)(v9 + 836) )
  {
    v29 = *(_WORD *)(v9 + 690);
    v26 = (unsigned __int16 *)(v9 + 784);
    if ( v29 == v22 )
    {
      *(_WORD *)(v9 + 786) = *(_WORD *)(v9 + 790);
    }
    else
    {
      v43 = v29 * *(_WORD *)(v9 + 832);
      if ( v43 > *(__int16 *)(v9 + 790) )
        v43 = *(_WORD *)(v9 + 790);
      *(_WORD *)(v9 + 786) = v43;
    }
    v30 = *(_WORD *)(v9 + 692);
    if ( v30 == v23 )
    {
      *(_WORD *)(v9 + 788) = *(_WORD *)(v9 + 794);
    }
    else
    {
      v44 = v30 * *(_WORD *)(v9 + 832);
      if ( v44 < *(__int16 *)(v9 + 794) )
        v44 = *(_WORD *)(v9 + 794);
      *(_WORD *)(v9 + 788) = v44;
    }
    *(_QWORD *)(v9 + 824) = *(_QWORD *)(a1 + 72);
  }
  if ( (*(_BYTE *)(v9 + 1076) & 1) != 0 )
  {
    v26 = (unsigned __int16 *)(v9 + 784);
    *(_QWORD *)(v9 + 824) = *(_QWORD *)(a1 + 72);
    *(_WORD *)(v9 + 786) = *(_WORD *)(v9 + 790);
    *(_WORD *)(v9 + 788) = *(_WORD *)(v9 + 794);
  }
  *(_QWORD *)(v9 + 768) = v58;
  v49 = *(_WORD *)(v9 + 312);
  *(_QWORD *)(v9 + 776) = v16;
  result = fsc_FillGlyph((unsigned int)&v50, (_DWORD)v26, (int)v9 + 736, v25, v49);
  if ( !(_DWORD)result )
  {
    if ( !*(_DWORD *)(v9 + 836)
      || (result = fsc_CalcGrayMap(v9 + 784, v9 + 688, *(unsigned __int16 *)(v9 + 832)), !(_DWORD)result) )
    {
      v28 = *(_DWORD *)(v9 + 1148);
      if ( v28 )
      {
        if ( !*(_DWORD *)(v9 + 1068)
          || (v45 = *(_WORD *)(v9 + 1076), (v45 & 1) == 0)
          || *(_DWORD *)(v9 + 844)
          || *(_WORD *)(v9 + 1072) != 1
          || *(_WORD *)(v9 + 1074)
          || (v45 & 8) != 0 )
        {
          v28 = 0;
        }
        v46 = *(_WORD *)(a1 + 106);
        v47 = *(_WORD *)(a1 + 104);
        if ( v46 > v47 && (v46 < *(__int16 *)(v9 + 694) || v47 > *(__int16 *)(v9 + 698)) )
          v28 = 0;
      }
      if ( (*(_BYTE *)(v9 + 1076) & 1) != 0 && !v28 )
        fsc_OverscaleToSubPixel((__int16 *)(v9 + 784), 0LL, (__int16 *)(v9 + 688));
      if ( *(_DWORD *)(v9 + 1068) )
      {
        if ( *(_DWORD *)(v9 + 836) )
        {
          sbit_EmboldenGray(
            *(void **)(v9 + 728),
            *(_WORD *)(v9 + 832) * *(_WORD *)(v9 + 832) + 1,
            *(_WORD *)(v9 + 1072),
            *(_WORD *)(v9 + 1074));
        }
        else if ( (*(_BYTE *)(v9 + 1076) & 1) != 0 )
        {
          if ( v28 )
          {
            fsc_OverscaleToBold(*(unsigned __int16 *)(v9 + 996), v9 + 784, v9 + 688);
            fsc_OverscaleToSubPixel((__int16 *)(v9 + 784), v48, (__int16 *)(v9 + 688));
          }
          else
          {
            sbit_EmboldenSubPixel(*(void **)(v9 + 728), *(_WORD *)(v9 + 1072), *(_WORD *)(v9 + 1074));
          }
        }
        else
        {
          if ( v11 != 1 )
            sbit_Embolden(
              *((_QWORD *)v26 + 5),
              (unsigned __int16)(v26[6] - v26[4]),
              (unsigned __int16)(v26[1] - v26[2]),
              *v26,
              *(_WORD *)(v9 + 1072),
              *(_WORD *)(v9 + 1074));
          if ( v11 )
            sbit_ExpandGrayFromMono(
              *((_QWORD *)v26 + 5),
              *((_QWORD *)v26 + 5),
              (unsigned __int16)(v26[6] - v26[4]),
              (unsigned __int16)(v26[1] - v26[2]),
              *(_WORD *)(v9 + 1156));
          if ( v11 == 1 )
            sbit_EmboldenGrayFromMono(
              *((_QWORD *)v26 + 5),
              (unsigned __int16)(v26[6] - v26[4]),
              (unsigned __int16)(v26[1] - v26[2]));
        }
      }
      if ( *(_WORD *)(v9 + 680) == 2 )
      {
        *(_WORD *)(v9 + 680) = 3;
        *(_QWORD *)(v9 + 288) = v58;
        *(_QWORD *)(v9 + 296) = v16;
      }
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 40LL);
      return 0LL;
    }
  }
  return result;
}
