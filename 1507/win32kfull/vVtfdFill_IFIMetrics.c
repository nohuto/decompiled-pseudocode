/*
 * XREFs of vVtfdFill_IFIMetrics @ 0x1C0146DB4
 * Callers:
 *     bVtfdLoadFont @ 0x1C0147644 (bVtfdLoadFont.c)
 * Callees:
 *     cjVTFDIFIMETRICS @ 0x1C0147890 (cjVTFDIFIMETRICS.c)
 *     fsSelectionFlags @ 0x1C014824C (fsSelectionFlags.c)
 *     StringCchLengthA @ 0x1C0148974 (StringCchLengthA.c)
 *     iDefaultFace @ 0x1C0148FE4 (iDefaultFace.c)
 */

unsigned __int64 __fastcall vVtfdFill_IFIMetrics(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char *v5; // r14
  char *v6; // r15
  char *v7; // rdi
  unsigned __int64 v8; // r12
  char *v9; // r12
  unsigned __int64 result; // rax
  unsigned int v11; // r11d
  ULONG BytesInMultiByteString; // r8d
  unsigned int v13; // r13d
  int v14; // edx
  signed int v15; // eax
  int v16; // r8d
  unsigned int v17; // edx
  int *v18; // rcx
  char v19; // al
  char v20; // al
  __int16 v21; // cx
  char v22; // al
  int v23; // ecx
  signed int v24; // r10d
  __int16 v25; // r11
  __int16 v26; // r8
  __int16 v27; // ax
  __int16 v28; // r9
  __int16 v29; // r8
  __int16 v30; // cx
  __int16 v31; // r9
  __int16 v32; // cx
  __int16 v33; // r9
  __int16 v34; // dx
  CHAR v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // edx
  int v39; // ecx
  char v40; // cl
  char v41; // dl
  int v42; // ecx
  int v43; // ecx
  _BYTE v44[20]; // [rsp+30h] [rbp-28h]
  CHAR MultiByteString; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v46; // [rsp+A8h] [rbp+50h]
  CHAR v47; // [rsp+B0h] [rbp+58h] BYREF
  size_t pcchLength; // [rsp+B8h] [rbp+60h] BYREF

  v46 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(unsigned __int8 *)(a1 + 105) | (*(unsigned __int8 *)(a1 + 108) << 24) | (unsigned __int64)(*(unsigned __int16 *)(a1 + 106) << 8);
  *(_DWORD *)(a3 + 4) = 0;
  v9 = (char *)(a1 + v8);
  result = cjVTFDIFIMETRICS(a1);
  *(_DWORD *)a3 = result;
  if ( !(_DWORD)result )
    return result;
  *(_DWORD *)(a3 + 16) = 192;
  *(_DWORD *)(a3 + 8) = 192;
  StringCchLengthA(v9, 0x7FFFFFFFuLL, &pcchLength);
  BytesInMultiByteString = pcchLength + 1;
  result = 2LL * (unsigned int)(pcchLength + 1);
  if ( result > 0xFFFFFFFF || (int)result + 3 < (unsigned int)result )
  {
    *(_DWORD *)a3 = 0;
    return result;
  }
  v13 = v11 + ((result + 3) & 0xFFFFFFFC);
  if ( v13 < v11
    || (v14 = 2 * pcchLength, v15 = 2 * pcchLength + 192, *(_DWORD *)(a3 + 12) = v15, v15 < (int)v11)
    || (*(_DWORD *)(a3 + 20) = v15, a3 + 192 < a3) )
  {
    result = 0LL;
    *(_DWORD *)a3 = 0;
    return result;
  }
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 192), v14 + 2, 0LL, v9, BytesInMultiByteString);
  *(_WORD *)(a3 + *(int *)(a3 + 16) + 2LL * (unsigned int)pcchLength) = 0;
  v16 = iDefaultFace(a1);
  if ( v16 == 3 )
  {
    *(_DWORD *)(a3 + 24) = 0;
    goto LABEL_15;
  }
  result = a3 + (int)v13;
  *(_DWORD *)(a3 + 24) = v13;
  if ( result < a3 || (v17 = v13 + 12, v13 + 12 < v13) )
  {
LABEL_43:
    *(_DWORD *)a3 = 0;
    return result;
  }
  _mm_lfence();
  v18 = (int *)(a3 + *(int *)(a3 + 24));
  if ( v16 )
  {
    if ( (unsigned int)(v16 - 1) > 1 )
      goto LABEL_15;
    result = (unsigned __int64)(v18 + 3);
    *(_QWORD *)v18 = 0LL;
    v18[2] = 12;
    if ( v18 + 3 >= v18 )
    {
      result = v13 + 32;
      if ( (unsigned int)result >= v17 )
      {
        _mm_lfence();
        v7 = (char *)v18 + v18[2];
        goto LABEL_15;
      }
    }
    goto LABEL_43;
  }
  *v18 = 12;
  v18[1] = 32;
  v18[2] = 52;
  result = (unsigned __int64)v18 + *v18;
  if ( result < (unsigned __int64)v18 )
    goto LABEL_43;
  result = (unsigned __int64)v18 + v18[1];
  if ( result < (unsigned __int64)v18 )
    goto LABEL_43;
  result = (unsigned __int64)(v18 + 13);
  if ( v18 + 13 < v18 )
    goto LABEL_43;
  _mm_lfence();
  result = v13 + 72;
  v5 = (char *)v18 + *v18;
  v6 = (char *)v18 + v18[1];
  v7 = (char *)v18 + v18[2];
  if ( (unsigned int)result < v17 )
    goto LABEL_43;
LABEL_15:
  *(_BYTE *)(a3 + 44) = *(_BYTE *)(a1 + 85);
  v19 = *(_BYTE *)(a1 + 90);
  *(_BYTE *)(a3 + 45) = v19;
  if ( (v19 & 0xF) != 0 )
    v20 = v19 & 0xF0 | 2;
  else
    v20 = v19 & 0xF0 | 1;
  *(_BYTE *)(a3 + 45) = v20;
  v21 = *(_WORD *)(a1 + 83);
  *(_WORD *)(a3 + 46) = v21;
  if ( (unsigned __int16)(v21 - 1) > 0x3E7u )
    *(_WORD *)(a3 + 46) = 400;
  v22 = *(_BYTE *)(a3 + 45);
  *(_DWORD *)(a3 + 48) = 589844;
  v23 = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 28) = 0;
  if ( (v22 & 0xF) == 1 )
    v23 = 4788244;
  *(_DWORD *)(a3 + 48) = v23;
  *(_DWORD *)(a3 + 52) = (unsigned __int16)fsSelectionFlags(a1);
  v26 = *(_WORD *)(a1 + 88);
  if ( *(__int16 *)(a1 + 76) <= 0 )
    v27 = *(_WORD *)(a1 + 88);
  else
    v27 = v26 - ((*(unsigned __int8 *)(a1 + 77) << 8) | *(unsigned __int8 *)(a1 + 76));
  *(_WORD *)(a3 + 56) = v27;
  *(_WORD *)(a3 + 58) = 0;
  v28 = *(_WORD *)(a1 + 74);
  *(_WORD *)(a3 + 60) = v28;
  v29 = v26 - v28;
  *(_WORD *)(a3 + 64) = v28;
  *(_WORD *)(a3 + 62) = v29;
  *(_WORD *)(a3 + 66) = -v29;
  v30 = *(_WORD *)(a1 + 78);
  *(_WORD *)(a3 + 70) = v28;
  *(_WORD *)(a3 + 68) = v30;
  v31 = v29 + v28;
  *(_WORD *)(a3 + 74) = v30;
  *(_WORD *)(a3 + 72) = -v29;
  *(_WORD *)(a3 + 76) = *(_WORD *)(a1 + 91);
  v32 = *(_WORD *)(a1 + 93);
  *(_QWORD *)(a3 + 84) = 0LL;
  *(_WORD *)(a3 + 78) = v32;
  *(_QWORD *)(a3 + 92) = 0LL;
  if ( v31 <= v25 )
    v33 = 1;
  else
    v33 = v31 / 12;
  *(_WORD *)(a3 + 100) = v33;
  *(_WORD *)(a3 + 104) = v33;
  v34 = -1 - v33 / v24;
  *(_WORD *)(a3 + 102) = v34;
  if ( (__int16)(((v33 + 1) >> 1) - v34 - v29) > 0 )
    *(_WORD *)(a3 + 102) = ((v33 + 1) >> 1) - v29;
  *(_WORD *)(a3 + 106) = (__int16)(v24
                                 + (*(unsigned __int8 *)(a1 + 74) | (*(unsigned __int8 *)(a1 + 75) << 8))
                                 - (*(unsigned __int8 *)(a1 + 76) | (*(unsigned __int8 *)(a1 + 77) << 8)))
                       / 3;
  *(_BYTE *)(a3 + 108) = *(_BYTE *)(a1 + 95);
  *(_BYTE *)(a3 + 109) = *(_BYTE *)(a1 + 96);
  v35 = *(_BYTE *)(a1 + 95) + *(_BYTE *)(a1 + 98);
  MultiByteString = *(_BYTE *)(a1 + 95) + *(_BYTE *)(a1 + 97);
  *(_BYTE *)(a3 + 110) = MultiByteString;
  v47 = v35;
  *(_BYTE *)(a3 + 111) = v35;
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 116), v24, 0LL, &MultiByteString, 1u);
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 118), 2u, 0LL, &v47, 1u);
  v36 = v46;
  v37 = (unsigned int)(*(_DWORD *)(v46 + 12) - 1) + 1LL;
  *(_WORD *)(a3 + 112) = *(_WORD *)(v46 + 16);
  LOWORD(v37) = *(_WORD *)(v36 + 16 * v37) + *(_WORD *)(v36 + 16 * v37 + 2);
  *(_DWORD *)(a3 + 80) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_WORD *)(a3 + 114) = v37 - 1;
  *(_QWORD *)(a3 + 120) = 1LL;
  v38 = *(unsigned __int16 *)(a1 + 70);
  *(_DWORD *)(a3 + 132) = v38;
  v39 = *(unsigned __int16 *)(a1 + 72);
  if ( !v38 )
    v38 = 1;
  *(_DWORD *)(a3 + 132) = v38;
  if ( !v39 )
    v39 = 1;
  *(_DWORD *)(a3 + 128) = v39;
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a3 + 136) = 1;
    *(_DWORD *)(a3 + 140) = 2;
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    *(_DWORD *)(a3 + 140) = 1;
  }
  *(_DWORD *)(a3 + 148) = *(__int16 *)(a3 + 70);
  v40 = 0;
  *(_DWORD *)(a3 + 152) = *(__int16 *)(a3 + 78);
  *(_DWORD *)(a3 + 156) = *(__int16 *)(a3 + 72);
  *(_DWORD *)(a3 + 144) = 0;
  *(_DWORD *)(a3 + 160) = 1852534357;
  *(_QWORD *)(a3 + 164) = 0LL;
  *(_BYTE *)(a3 + 172) = 1;
  if ( (*(_BYTE *)(a3 + 45) & 0xF0) == 0x20 )
    v40 = 11;
  *(_BYTE *)(a3 + 173) = v40;
  v41 = *(_WORD *)(a1 + 83) / 0x64u + 1;
  *(_BYTE *)(a3 + 174) = v41;
  v42 = *(unsigned __int16 *)(a1 + 86);
  *(_DWORD *)(a3 + 176) = 0;
  v43 = -v42;
  *(_WORD *)(a3 + 180) = 0;
  result = v43 != 0 ? 9 : 0;
  *(_BYTE *)(a3 + 175) = v43 != 0 ? 9 : 0;
  if ( *(_DWORD *)(a3 + 24) )
  {
    *(_WORD *)&v44[4] = *(_WORD *)(a3 + 46);
    *(_WORD *)&v44[6] = *(_WORD *)(a3 + 52);
    *(_DWORD *)&v44[8] = *(_DWORD *)(a3 + 76);
    *(_QWORD *)&v44[12] = *(_QWORD *)(a3 + 136);
    result = *(unsigned int *)&v44[16];
    v44[3] = v41;
    *(_WORD *)v44 = 0;
    v44[2] = 0;
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)v44;
      *((_DWORD *)v5 + 4) = *(_DWORD *)&v44[16];
      v7[3] = 8;
      *((_WORD *)v5 + 3) |= 0x20u;
      ++*((_WORD *)v5 + 4);
      ++*((_WORD *)v5 + 5);
      *((_WORD *)v5 + 2) = 700;
    }
    if ( v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)v44;
      *((_DWORD *)v6 + 4) = *(_DWORD *)&v44[16];
      *((_WORD *)v6 + 3) |= 1u;
      *((_DWORD *)v6 + 3) = 1;
      *((_DWORD *)v6 + 4) = 2;
    }
    if ( v7 )
    {
      *(_OWORD *)v7 = *(_OWORD *)v44;
      *((_DWORD *)v7 + 4) = *(_DWORD *)&v44[16];
      *((_WORD *)v7 + 3) |= 0x21u;
      ++*((_WORD *)v7 + 4);
      ++*((_WORD *)v7 + 5);
      v7[3] = 8;
      *((_WORD *)v7 + 2) = 700;
      *((_DWORD *)v7 + 3) = 1;
      *((_DWORD *)v7 + 4) = 2;
    }
  }
  return result;
}
