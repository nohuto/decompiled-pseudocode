/*
 * XREFs of vBmfdFill_IFIMETRICS @ 0x1C0147B24
 * Callers:
 *     bConvertFontRes @ 0x1C0147A10 (bConvertFontRes.c)
 * Callees:
 *     vComputeSpecialChars @ 0x1C01480CC (vComputeSpecialChars.c)
 *     fsSelectionFlags @ 0x1C014824C (fsSelectionFlags.c)
 *     StringCchLengthA @ 0x1C0148974 (StringCchLengthA.c)
 */

HRESULT __fastcall vBmfdFill_IFIMETRICS(__int64 a1, _QWORD *a2)
{
  const char *v2; // r11
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  HRESULT result; // eax
  const CHAR *v10; // r11
  unsigned int v11; // r12d
  int v12; // eax
  ULONG v13; // edx
  unsigned int v14; // eax
  signed int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  char v18; // dl
  __int16 v19; // cx
  char v20; // al
  __int16 v21; // r8
  __int16 v22; // cx
  __int16 v23; // r10
  __int16 v24; // r11
  __int16 v25; // r12
  __int16 v26; // r12
  __int16 v27; // ax
  __int16 v28; // cx
  __int16 v29; // cx
  __int16 v30; // dx
  int v31; // ecx
  __int16 v32; // ax
  __int16 v33; // r8
  __int16 v34; // dx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // edx
  int v38; // ecx
  char v39; // al
  char v40; // cl
  char v41; // cl
  char v42; // dl
  __int16 v43; // cx
  __int16 v44; // cx
  int v45; // eax
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-30h]
  _BYTE v47[20]; // [rsp+30h] [rbp-20h]
  BOOL v48; // [rsp+90h] [rbp+40h]
  size_t pcchLength; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (const char *)a2[2];
  v3 = *a2;
  v5 = *(_QWORD *)(a1 + 80);
  v48 = *(_WORD *)(a1 + 48) != 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !v2 )
    v2 = (const char *)(v3
                      + ((*(unsigned __int8 *)(v3 + 108) << 24) | (unsigned __int64)(*(unsigned __int8 *)(v3 + 105) | (*(unsigned __int16 *)(v3 + 106) << 8))));
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 16) = 192;
  *(_DWORD *)(v5 + 8) = 192;
  result = StringCchLengthA(v2, 0x7FFFFFFFuLL, &pcchLength);
  if ( result < 0 )
  {
    *(_DWORD *)v5 = 0;
  }
  else
  {
    v11 = pcchLength;
    v12 = 2 * pcchLength + 192;
    v13 = 2 * pcchLength + 2;
    *(_DWORD *)(v5 + 12) = v12;
    *(_DWORD *)(v5 + 20) = v12;
    BytesInMultiByteString = v11 + 1;
    if ( *(_DWORD *)(a1 + 32) )
    {
      RtlMultiByteToUnicodeN((PWCH)(v5 + 194), v13, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v5 + *(int *)(v5 + 16) + 2LL * v11 + 2) = 0;
      *(_WORD *)(*(int *)(v5 + 16) + v5) = 64;
    }
    else
    {
      RtlMultiByteToUnicodeN((PWCH)(v5 + 192), v13, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v5 + *(int *)(v5 + 16) + 2LL * v11) = 0;
    }
    *(_DWORD *)v5 = *(_DWORD *)(a1 + 60);
    v14 = *(_DWORD *)(a1 + 68);
    LODWORD(pcchLength) = 2;
    if ( v14 > 2 )
    {
      if ( v14 == 3 )
        *(_DWORD *)(v5 + 24) = 0;
    }
    else
    {
      v15 = (*(_DWORD *)(a1 + 56) + 195) & 0xFFFFFFFC;
      v16 = v5 + v15;
      *(_DWORD *)(v5 + 24) = v15;
      v17 = *(_DWORD *)(a1 + 68);
      if ( v17 )
      {
        if ( (unsigned int)(v17 - 1) <= 1 )
        {
          *(_QWORD *)v16 = 0LL;
          v8 = v16 + 12;
          *(_DWORD *)(v16 + 8) = 12;
        }
      }
      else
      {
        *(_DWORD *)v16 = 12;
        v6 = v16 + 12;
        *(_DWORD *)(v16 + 4) = 32;
        v7 = v16 + 32;
        *(_DWORD *)(v16 + 8) = 52;
        v8 = v16 + 52;
      }
    }
    *(_BYTE *)(v5 + 44) = *(_BYTE *)(v3 + 85);
    v18 = *(_BYTE *)(v3 + 90) & 0xF0;
    *(_BYTE *)(v5 + 45) = v18;
    *(_BYTE *)(v5 + 45) = v18 | (2 - (*(_BYTE *)(v3 + 86) != 0));
    v19 = *(_WORD *)(v3 + 83);
    *(_WORD *)(v5 + 46) = v19;
    if ( (unsigned __int16)(v19 - 1) > 0x3E7u )
      *(_WORD *)(v5 + 46) = 400;
    v20 = *(_BYTE *)(v5 + 45) & 0xF;
    *(_DWORD *)(v5 + 48) = 540674082;
    if ( v20 == 1 )
    {
      v45 = *(_DWORD *)(v5 + 48);
      if ( !v48 )
        v45 = 540678178;
      *(_DWORD *)(v5 + 48) = v45;
      *(_DWORD *)(v5 + 48) |= 0x400000u;
    }
    if ( v48 )
      *(_DWORD *)(v5 + 48) |= 0x10000000u;
    *(_DWORD *)(v5 + 28) = 0;
    *(_WORD *)(v5 + 52) = fsSelectionFlags(v3);
    *(_WORD *)(v5 + 54) = v21;
    v22 = *(_WORD *)(a1 + 44);
    v23 = *(_WORD *)(v3 + 76);
    if ( v23 > 0 )
      v22 -= v23;
    *(_WORD *)(v5 + 56) = v22;
    *(_WORD *)(v5 + 58) = v21;
    v24 = *(_WORD *)(v3 + 74);
    *(_WORD *)(v5 + 60) = v24;
    v25 = *(_WORD *)(a1 + 44);
    *(_WORD *)(v5 + 64) = v24;
    v26 = v25 - v24;
    *(_WORD *)(v5 + 62) = v26;
    *(_WORD *)(v5 + 66) = -v26;
    v27 = *(unsigned __int8 *)(v3 + 78);
    v28 = *(unsigned __int8 *)(v3 + 79);
    *(_WORD *)(v5 + 72) = -v26;
    v29 = v27 | (v28 << 8);
    *(_WORD *)(v5 + 70) = v24;
    *(_WORD *)(v5 + 68) = v29;
    *(_WORD *)(v5 + 74) = v29;
    *(_WORD *)(v5 + 78) = *(_WORD *)(a1 + 46);
    v30 = *(_WORD *)(v3 + 91);
    *(_WORD *)(v5 + 76) = v30;
    v31 = *(unsigned __int16 *)(a1 + 46);
    *(_QWORD *)(v5 + 84) = 0LL;
    v32 = v24 + v26;
    *(_QWORD *)(v5 + 92) = 0LL;
    if ( v30 > v31 )
      v30 = v31;
    *(_WORD *)(v5 + 76) = v30;
    if ( v32 <= 12 )
      v33 = 1;
    else
      v33 = v32 / 12;
    *(_WORD *)(v5 + 100) = v33;
    *(_WORD *)(v5 + 104) = v33;
    v34 = -1 - v33 / (int)pcchLength;
    *(_WORD *)(v5 + 102) = v34;
    if ( (__int16)(((v33 + 1) >> 1) - v34 - v26) > 0 )
      *(_WORD *)(v5 + 102) = ((v33 + 1) >> 1) - v26;
    *(_WORD *)(v5 + 106) = (__int16)(v24 - v23 + 2) / 3;
    *(_BYTE *)(v5 + 108) = *(_BYTE *)(a1 + 40);
    *(_BYTE *)(v5 + 109) = *(_BYTE *)(a1 + 41);
    *(_BYTE *)(v5 + 111) = *(_BYTE *)(a1 + 40) + *(_BYTE *)(a1 + 43);
    *(_BYTE *)(v5 + 110) = *(_BYTE *)(*a2 + 95LL) + *(_BYTE *)(*a2 + 97LL);
    vComputeSpecialChars(a1 + 36, v5 + 116, v5 + 118);
    v35 = *(_QWORD *)(a1 + 72);
    v36 = (unsigned int)(*(_DWORD *)(v35 + 36) - 1);
    *(_WORD *)(v5 + 112) = *(_WORD *)(v35 + 40);
    LOWORD(v36) = *(_WORD *)(v35 + 16 * (v36 + 1) + 24) + *(_WORD *)(v35 + 16 * (v36 + 1) + 26);
    *(_DWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 120) = 1LL;
    *(_WORD *)(v5 + 114) = v36 - 1;
    LODWORD(v36) = *(__int16 *)(v5 + 56);
    *(_WORD *)(v5 + 80) = *(__int16 *)(v5 + 56) / 2;
    *(_WORD *)(v5 + 82) = (int)v36 / 4;
    v37 = *(unsigned __int8 *)(v3 + 70) | (unsigned __int16)(*(unsigned __int8 *)(v3 + 71) << 8);
    *(_DWORD *)(v5 + 132) = v37;
    v38 = *(unsigned __int8 *)(v3 + 72) | (unsigned __int16)(*(unsigned __int8 *)(v3 + 73) << 8);
    if ( !v37 )
      v37 = 1;
    *(_DWORD *)(v5 + 132) = v37;
    if ( !v38 )
      v38 = 1;
    *(_DWORD *)(v5 + 128) = v38;
    if ( (*(_BYTE *)(v5 + 52) & 1) != 0 )
    {
      *(_DWORD *)(v5 + 136) = 1;
      *(_DWORD *)(v5 + 140) = 2;
    }
    else
    {
      *(_DWORD *)(v5 + 136) = 0;
      *(_DWORD *)(v5 + 140) = 1;
    }
    *(_DWORD *)(v5 + 148) = *(__int16 *)(v5 + 70);
    *(_DWORD *)(v5 + 152) = *(__int16 *)(v5 + 78);
    *(_DWORD *)(v5 + 156) = *(__int16 *)(v5 + 72);
    *(_DWORD *)(v5 + 144) = 0;
    *(_DWORD *)(v5 + 160) = 1852534357;
    v39 = *(_BYTE *)(v5 + 45);
    *(_QWORD *)(v5 + 164) = 0LL;
    if ( (v39 & 0x40) != 0 )
      v40 = 3;
    else
      v40 = (v39 & 0x50) != 0 ? 4 : 2;
    *(_BYTE *)(v5 + 172) = v40;
    v41 = 0;
    if ( (*(_BYTE *)(v5 + 45) & 0xF0) == 0x20 )
      v41 = 11;
    *(_BYTE *)(v5 + 173) = v41;
    v42 = ((((1374389535 * (unsigned __int64)*(unsigned __int16 *)(v5 + 46)) >> 32) & 0x80000000) != 0LL)
        + *(_WORD *)(v5 + 46) / 0x64u
        + 1;
    *(_BYTE *)(v5 + 174) = v42;
    v43 = *(_WORD *)(v3 + 86);
    *(_DWORD *)(v5 + 176) = 0;
    v44 = -v43;
    *(_WORD *)(v5 + 180) = 0;
    result = v44 != 0 ? 9 : 0;
    *(_BYTE *)(v5 + 175) = v44 != 0 ? 9 : 0;
    if ( *(_DWORD *)(v5 + 24) )
    {
      *(_WORD *)&v47[4] = *(_WORD *)(v5 + 46);
      *(_WORD *)&v47[6] = *(_WORD *)(v5 + 52);
      *(_DWORD *)&v47[8] = *(_DWORD *)(v5 + 76);
      *(_QWORD *)&v47[12] = *(_QWORD *)(v5 + 136);
      result = *(_DWORD *)&v47[16];
      v47[3] = v42;
      *(_WORD *)v47 = 0;
      v47[2] = 0;
      if ( v6 )
      {
        *(_OWORD *)v6 = *(_OWORD *)v47;
        *(_DWORD *)(v6 + 16) = *(_DWORD *)&v47[16];
        *(_BYTE *)(v8 + 3) = 8;
        *(_WORD *)(v6 + 6) |= 0x20u;
        ++*(_WORD *)(v6 + 8);
        ++*(_WORD *)(v6 + 10);
        *(_WORD *)(v6 + 4) = 700;
      }
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)v47;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)&v47[16];
        *(_WORD *)(v7 + 6) |= 1u;
        *(_DWORD *)(v7 + 12) = 1;
        *(_DWORD *)(v7 + 16) = 2;
      }
      if ( v8 )
      {
        *(_OWORD *)v8 = *(_OWORD *)v47;
        *(_DWORD *)(v8 + 16) = *(_DWORD *)&v47[16];
        *(_WORD *)(v8 + 6) |= 0x21u;
        ++*(_WORD *)(v8 + 8);
        ++*(_WORD *)(v8 + 10);
        *(_BYTE *)(v8 + 3) = 8;
        *(_WORD *)(v8 + 4) = 700;
        *(_DWORD *)(v8 + 12) = 1;
        *(_DWORD *)(v8 + 16) = 2;
      }
    }
  }
  return result;
}
