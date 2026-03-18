/*
 * XREFs of vFill_IFIMETRICS @ 0x1C00130A4
 * Callers:
 *     bLoadTTF @ 0x1C0010AF4 (bLoadTTF.c)
 * Callees:
 *     bContainGlyphSet @ 0x1C000B734 (bContainGlyphSet.c)
 *     fsSelectionTTFD @ 0x1C0012700 (fsSelectionTTFD.c)
 *     bConvertExtras @ 0x1C0012730 (bConvertExtras.c)
 *     EngGetCurrentCodePage @ 0x1C00128B0 (EngGetCurrentCodePage.c)
 *     vFillIFICharsets @ 0x1C0012E80 (vFillIFICharsets.c)
 *     IsAnyCharsetDbcs @ 0x1C0015CE4 (IsAnyCharsetDbcs.c)
 *     pjTable @ 0x1C00A9840 (pjTable.c)
 *     IsBogusSignature @ 0x1C0150500 (IsBogusSignature.c)
 *     bValidRangeKERN @ 0x1C01505A8 (bValidRangeKERN.c)
 *     IsCurrentCodePageDBCS @ 0x1C0245208 (IsCurrentCodePageDBCS.c)
 */

__int64 __fastcall vFill_IFIMETRICS(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // rdx
  _WORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  _DWORD *v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // r10
  int v16; // r11d
  __int16 v17; // r15
  __int16 v18; // cx
  __int16 v19; // r8
  __int16 v20; // cx
  __int16 v21; // dx
  __int16 v22; // cx
  __int16 v23; // ax
  __int64 v24; // r9
  unsigned __int16 v25; // ax
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned __int32 v29; // edx
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // r8
  unsigned __int8 v32; // al
  char v33; // cl
  char v34; // al
  char v35; // al
  __int16 v36; // ax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int8 v41; // al
  _DWORD *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // r8
  _DWORD *v52; // rcx
  __int64 result; // rax
  int v54; // eax
  bool v55; // cf
  unsigned __int8 *v56; // r8
  __int64 v57; // rax
  int v58; // edx
  int v59; // eax
  int v60; // eax
  int v61; // r9d
  int v62; // eax
  char v63; // al
  __int64 v64; // rsi
  char v65; // al
  char v66; // al
  int v67; // edx
  char v68; // cl
  char v69; // cl
  char v70; // al
  __int64 v71; // rcx
  unsigned __int8 v72; // al
  _WORD *v73; // [rsp+30h] [rbp-38h]
  __int64 v74; // [rsp+38h] [rbp-30h]
  _BYTE v75[20]; // [rsp+40h] [rbp-28h]
  int AnsiCodePage; // [rsp+B0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v78; // [rsp+C0h] [rbp+58h]
  __int64 v79; // [rsp+C8h] [rbp+60h]

  v79 = a4;
  v78 = a3;
  v4 = *(_QWORD *)(a1 + 64);
  v7 = *(unsigned int *)(a1 + 160);
  v8 = (_WORD *)(v4 + *(unsigned int *)(a1 + 128));
  v9 = *(unsigned int *)(a1 + 216);
  v73 = (_WORD *)(v4 + *(unsigned int *)(a1 + 136));
  v74 = v4;
  if ( !(_DWORD)v9 || (v10 = v4 + v9, *(_DWORD *)(a1 + 220) < 0x10u) )
    v10 = 0LL;
  v11 = *(unsigned int *)(a1 + 176);
  v12 = v4 + v11;
  if ( !(_DWORD)v11 )
    v12 = 0LL;
  *(_DWORD *)a2 = *a3;
  *(_DWORD *)(a2 + 4) = 12;
  *(_DWORD *)(a2 + 192) = 0;
  *(_DWORD *)(a2 + 200) = (unsigned __int16)__ROR2__(*(_WORD *)(v7 + v4 + 4), 8);
  bConvertExtras(a2, (__int64)a3);
  v13 = v78;
  *(_DWORD *)(a2 + 8) = v78[23];
  *(_DWORD *)(a2 + 20) = v13[26];
  *(_DWORD *)(a2 + 16) = v13[27];
  *(_DWORD *)(a2 + 12) = v13[25];
  *(_DWORD *)(a2 + 48) = 688241;
  if ( *(_DWORD *)(a1 + 272) )
  {
    v56 = *(unsigned __int8 **)(a1 + 64);
    v57 = 4 * (v56[11] | ((v56[10] | ((v56[9] | (v56[8] << 8)) << 8)) << 8)) + 12;
    v58 = v56[v57 + 3] | ((v56[v57 + 2] | ((v56[v57 + 1] | (v56[v57] << 8)) << 8)) << 8);
    v59 = *(_DWORD *)(a2 + 48);
    if ( v58 == 1146308935 )
      v59 = 950385;
    *(_DWORD *)(a2 + 48) = v59;
  }
  else if ( pjTable(1195987780LL, a1, &AnsiCodePage) && AnsiCodePage )
  {
    *(_DWORD *)(a2 + 48) = 950385;
  }
  if ( *((_QWORD *)v78 + 3) )
    *(_DWORD *)(a2 + 48) |= 0x8000000u;
  if ( v10 )
  {
    if ( _byteswap_ulong(*(_DWORD *)(v10 + 12)) )
    {
      v61 = *(_DWORD *)(a2 + 48) | 0x400000;
      *(_DWORD *)(a2 + 48) = v61;
      if ( (__int16)__ROR2__(v8[18], 8) >= 0
        && __ROR2__(v8[20], 8) <= __ROR2__(
                                    *(_WORD *)(v4
                                             + *(unsigned int *)(a1 + 144)
                                             + 4LL * ((unsigned int)(unsigned __int16)__ROR2__(v73[17], 8) - 1)),
                                    8) )
      {
        *(_DWORD *)(a2 + 48) = v61 | 0x20000000;
      }
    }
  }
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  v14 = fsSelectionTTFD(v4, a1 + 112);
  *(_WORD *)(a2 + 52) = v14;
  v17 = HIBYTE(v14);
  if ( v12 )
    v18 = __ROR2__(*(_WORD *)(v12 + 8), 8) & 0xE;
  else
    v18 = v16;
  *(_WORD *)(a2 + 54) = v18;
  *(_WORD *)(a2 + 56) = __ROR2__(v8[9], 8);
  *(_WORD *)(a2 + 58) = __ROR2__(v8[23], 8);
  v19 = __ROR2__(*(_WORD *)(v15 + 4), 8);
  *(_WORD *)(a2 + 64) = v19;
  v20 = __ROR2__(*(_WORD *)(v15 + 6), 8);
  *(_WORD *)(a2 + 66) = v20;
  v21 = __ROR2__(*(_WORD *)(v15 + 8), 8);
  *(_WORD *)(a2 + 68) = v21;
  if ( v12 )
  {
    *(_WORD *)(a2 + 60) = __ROR2__(*(_WORD *)(v12 + 74), 8);
    *(_WORD *)(a2 + 62) = __ROR2__(*(_WORD *)(v12 + 76), 8);
    *(_WORD *)(a2 + 70) = __ROR2__(*(_WORD *)(v12 + 68), 8);
    *(_WORD *)(a2 + 72) = __ROR2__(*(_WORD *)(v12 + 70), 8);
    *(_WORD *)(a2 + 74) = __ROR2__(*(_WORD *)(v12 + 72), 8);
  }
  else
  {
    *(_WORD *)(a2 + 60) = v19;
    *(_WORD *)(a2 + 70) = v19;
    *(_WORD *)(a2 + 62) = -v20;
    *(_WORD *)(a2 + 72) = v20;
    *(_WORD *)(a2 + 74) = v21;
  }
  *(_DWORD *)(a2 + 144) = (__int16)__ROR2__(v8[18], 8);
  *(_DWORD *)(a2 + 148) = (__int16)__ROR2__(v8[21], 8);
  *(_DWORD *)(a2 + 152) = (__int16)__ROR2__(v8[20], 8);
  v22 = *(_WORD *)(a2 + 152) - *(_WORD *)(a2 + 144);
  *(_DWORD *)(a2 + 156) = (__int16)__ROR2__(v8[19], 8);
  *(_WORD *)(a2 + 78) = v22;
  if ( v12 )
  {
    v23 = __ROR2__(*(_WORD *)(v12 + 2), 8);
    *(_WORD *)(a2 + 76) = v23;
    if ( !v23 )
      *(_WORD *)(a2 + 76) = v22 / 2;
  }
  else
  {
    *(_WORD *)(a2 + 76) = 2 * v22 / 3;
  }
  v24 = (unsigned int)*(__int16 *)(a2 + 56);
  *(_WORD *)(a2 + 80) = *(__int16 *)(a2 + 56) / 2;
  *(_WORD *)(a2 + 82) = (int)v24 / 4;
  if ( v10 )
  {
    *(_WORD *)(a2 + 100) = __ROR2__(*(_WORD *)(v10 + 10), 8);
    *(_WORD *)(a2 + 102) = __ROR2__(*(_WORD *)(v10 + 8), 8);
  }
  else
  {
    *(_WORD *)(a2 + 100) = (__int16)(v24 + 7) / 14;
    *(_WORD *)(a2 + 102) = ((int)v24 + 5) / -10;
  }
  if ( v12 )
  {
    *(_WORD *)(a2 + 84) = __ROR2__(*(_WORD *)(v12 + 10), 8);
    *(_WORD *)(a2 + 86) = __ROR2__(*(_WORD *)(v12 + 12), 8);
    *(_WORD *)(a2 + 88) = __ROR2__(*(_WORD *)(v12 + 14), 8);
    *(_WORD *)(a2 + 90) = __ROR2__(*(_WORD *)(v12 + 16), 8);
    *(_WORD *)(a2 + 92) = __ROR2__(*(_WORD *)(v12 + 18), 8);
    *(_WORD *)(a2 + 94) = __ROR2__(*(_WORD *)(v12 + 20), 8);
    *(_WORD *)(a2 + 96) = __ROR2__(*(_WORD *)(v12 + 22), 8);
    *(_WORD *)(a2 + 98) = __ROR2__(*(_WORD *)(v12 + 24), 8);
    *(_WORD *)(a2 + 104) = __ROR2__(*(_WORD *)(v12 + 26), 8);
    *(_WORD *)(a2 + 106) = __ROR2__(*(_WORD *)(v12 + 28), 8);
  }
  else
  {
    *(_WORD *)(a2 + 104) = *(_WORD *)(a2 + 100);
    *(_QWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 92) = 0LL;
    *(_WORD *)(a2 + 106) = v19 / 3;
  }
  *(_DWORD *)(a2 + 168) = v16;
  if ( v12 )
  {
    v25 = __ROR2__(*(_WORD *)(v12 + 4), 8);
    *(_WORD *)(a2 + 46) = v25;
    if ( v25 < 0xAu )
      *(_WORD *)(a2 + 46) = ausIFIMetrics2WinWeight[v25];
    *(_QWORD *)(a2 + 172) = *(_QWORD *)(v12 + 32);
    *(_WORD *)(a2 + 180) = *(_WORD *)(v12 + 40);
  }
  else
  {
    *(_WORD *)(a2 + 172) = 2;
    v66 = __ROR2__(v8[22], 8);
    *(_DWORD *)(a2 + 176) = 0;
    *(_WORD *)(a2 + 180) = 0;
    v55 = (*(_DWORD *)(a2 + 48) & 0x400000) != 0;
    *(_BYTE *)(a2 + 174) = (v66 & 1) != 0 ? 8 : 5;
    *(_BYTE *)(a2 + 175) = v55 ? 9 : 0;
    *(_WORD *)(a2 + 46) = ausIFIMetrics2WinWeight[(unsigned __int8)((v66 & 1) != 0 ? 8 : 5)];
  }
  *(_DWORD *)(a2 + 36) = v16;
  if ( (*(_DWORD *)(a1 + 300) & 2) == 0 )
  {
    if ( !v12
      || *(_WORD *)v12 == (_WORD)v16
      || (v26 = _byteswap_ulong(*(_DWORD *)(v12 + 78)), !(_DWORD)v26)
      || (v27 = IsBogusSignature(v26), LOBYTE(v16) = 0, v27) )
    {
      if ( *(_DWORD *)(a1 + 316) == 5 )
      {
        v28 = *(unsigned __int16 *)(a1 + 312) - 2;
        if ( *(_WORD *)(a1 + 312) == 2 )
        {
          *(_BYTE *)(a2 + 44) = 0x80;
          *(_DWORD *)(a1 + 288) = 932;
        }
        else
        {
          v28 = *(unsigned __int16 *)(a1 + 312) - 3;
          if ( *(_WORD *)(a1 + 312) == 3 )
          {
            *(_BYTE *)(a2 + 44) = -122;
            *(_DWORD *)(a1 + 288) = 936;
          }
          else
          {
            v28 = *(unsigned __int16 *)(a1 + 312) - 4;
            if ( *(_WORD *)(a1 + 312) == 4 )
            {
              *(_BYTE *)(a2 + 44) = -120;
              *(_DWORD *)(a1 + 288) = 950;
            }
            else
            {
              v28 = *(unsigned __int16 *)(a1 + 312) - 5;
              if ( *(_WORD *)(a1 + 312) == 5 )
              {
                *(_BYTE *)(a2 + 44) = -127;
                *(_DWORD *)(a1 + 288) = 949;
              }
              else
              {
                *(_BYTE *)(a2 + 44) = v16;
                *(_DWORD *)(a1 + 288) = 1252;
              }
            }
          }
        }
      }
      else
      {
        v64 = *(_QWORD *)(a1 + 88);
        if ( bContainGlyphSet(0xFF71u, v64)
          && bContainGlyphSet(0xFF72u, v64)
          && bContainGlyphSet(0xFF73u, v64)
          && bContainGlyphSet(0xFF74u, v64)
          && bContainGlyphSet(0xFF75u, v64) )
        {
          *(_BYTE *)(a2 + 44) = 0x80;
          *(_DWORD *)(a1 + 288) = 932;
        }
        else if ( bContainGlyphSet(0x61D4u, v64) && bContainGlyphSet(0x9EE2u, v64) )
        {
          *(_BYTE *)(a2 + 44) = -122;
          *(_DWORD *)(a1 + 288) = 936;
        }
        else if ( bContainGlyphSet(0x9F98u, v64) && bContainGlyphSet(0x9F79u, v64) )
        {
          *(_BYTE *)(a2 + 44) = -120;
          *(_DWORD *)(a1 + 288) = 950;
        }
        else if ( bContainGlyphSet(0xAC00u, v64) && bContainGlyphSet(0xD558u, v64) )
        {
          *(_BYTE *)(a2 + 44) = -127;
          *(_DWORD *)(a1 + 288) = 949;
        }
        else if ( bContainGlyphSet(0xE000u, v64) && (unsigned int)IsCurrentCodePageDBCS() )
        {
          EngGetCurrentCodePage(&OemCodePage, (PUSHORT)&AnsiCodePage);
          v67 = (unsigned __int16)AnsiCodePage;
          v28 = (unsigned __int16)AnsiCodePage - 932;
          if ( (unsigned __int16)AnsiCodePage == 932 )
          {
            *(_BYTE *)(a2 + 44) = 0x80;
          }
          else
          {
            v28 = (unsigned __int16)AnsiCodePage - 936;
            if ( (unsigned __int16)AnsiCodePage == 936 )
            {
              *(_BYTE *)(a2 + 44) = -122;
            }
            else
            {
              v28 = (unsigned __int16)AnsiCodePage - 949;
              if ( (unsigned __int16)AnsiCodePage == 949 )
              {
                *(_BYTE *)(a2 + 44) = -127;
              }
              else
              {
                v28 = (unsigned __int16)AnsiCodePage - 950;
                if ( (unsigned __int16)AnsiCodePage == 950 )
                {
                  *(_BYTE *)(a2 + 44) = -120;
                }
                else
                {
                  v28 = (unsigned __int16)AnsiCodePage - 1361;
                  if ( (unsigned __int16)AnsiCodePage == 1361 )
                    *(_BYTE *)(a2 + 44) = -126;
                }
              }
            }
          }
          *(_DWORD *)(a1 + 288) = v67;
        }
        else
        {
          *(_BYTE *)(a2 + 44) = v17;
          if ( !(_BYTE)v17 && *(_BYTE *)(a2 + 172) == 5 )
          {
            v65 = 0;
            if ( *(_DWORD *)(a1 + 316) == 4 )
              v65 = 2;
            *(_BYTE *)(a2 + 44) = v65;
          }
          *(_DWORD *)(a1 + 288) = 1252;
        }
      }
    }
    else
    {
      v29 = _byteswap_ulong(*(_DWORD *)(v12 + 78));
      if ( (v29 & 0x1E0000) != 0 )
      {
        v28 = gfsCurSignature;
        if ( (gfsCurSignature & v29) != 0 )
        {
          EngGetCurrentCodePage(&OemCodePage, (PUSHORT)&AnsiCodePage);
          v60 = (unsigned __int16)AnsiCodePage;
          *(_BYTE *)(a2 + 44) = gjCurCharset;
          *(_DWORD *)(a1 + 288) = v60;
        }
        else if ( (v29 & 1) != 0 )
        {
          *(_BYTE *)(a2 + 44) = 0;
          *(_DWORD *)(a1 + 288) = 1252;
        }
        else if ( (v29 & 0x20000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = 0x80;
          *(_DWORD *)(a1 + 288) = 932;
        }
        else if ( (v29 & 0x100000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = -120;
          *(_DWORD *)(a1 + 288) = 950;
        }
        else if ( (v29 & 0x40000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = -122;
          *(_DWORD *)(a1 + 288) = 936;
        }
        else if ( (v29 & 0x80000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = -127;
          *(_DWORD *)(a1 + 288) = 949;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 44) = v17;
        if ( !(_BYTE)v17 && *(_BYTE *)(a2 + 172) == 5 )
        {
          v63 = 0;
          if ( *(_DWORD *)(a1 + 316) == 4 )
            v63 = 2;
          *(_BYTE *)(a2 + 44) = v63;
        }
        *(_DWORD *)(a1 + 288) = 1252;
      }
    }
    if ( *(_WORD *)(a1 + 310) != 3 || !v12 )
    {
      v68 = *(_BYTE *)(a2 + 44);
      *(_WORD *)(a2 + 108) = -226;
      if ( v68 == (char)0x80 )
      {
        *(_WORD *)(a2 + 110) = 8357;
      }
      else if ( ((v68 + 122) & 0xFD) != 0 )
      {
        *(_WORD *)(a2 + 110) = 8223;
      }
      else
      {
        *(_WORD *)(a2 + 110) = 8224;
      }
      if ( v68 == (char)0x80 )
      {
        *(_DWORD *)(a2 + 116) = 2162533;
      }
      else if ( ((v68 + 122) & 0xFD) != 0 )
      {
        *(_DWORD *)(a2 + 116) = 2097183;
      }
      else
      {
        *(_DWORD *)(a2 + 116) = 2106785;
      }
      goto LABEL_54;
    }
    v24 = 32LL;
    v30 = __ROR2__(*(_WORD *)(v12 + 64), 8);
    v31 = __ROR2__(*(_WORD *)(v12 + 66), 8);
    if ( v31 <= 0xFFu )
    {
      *(_BYTE *)(a2 + 109) = v31;
    }
    else
    {
      if ( v30 > 0xFFu )
      {
        v28 = v30;
        *(_BYTE *)(a2 + 44) = 2;
        *(_BYTE *)(a2 + 108) = 32;
        *(_DWORD *)(a2 + 36) = v30 - 32;
        v62 = v31 - v30 + 32;
        if ( v62 > 255 )
          LOBYTE(v62) = -1;
        *(_BYTE *)(a2 + 109) = v62;
LABEL_43:
        v32 = *(_BYTE *)(a2 + 108);
        if ( v32 >= 2u )
          *(_BYTE *)(a2 + 108) = v32 - 2;
        v33 = *(_BYTE *)(a2 + 44);
        if ( v33 == (char)0x80 )
        {
          *(_BYTE *)(a2 + 110) = -91;
        }
        else
        {
          if ( ((v33 + 122) & 0xFD) != 0 )
          {
            if ( v33 == -127 )
            {
              *(_WORD *)(a2 + 110) = 8063;
              goto LABEL_50;
            }
            v34 = *(_BYTE *)(a2 + 108) + 1;
            *(_BYTE *)(a2 + 110) = v34;
            v35 = v34 + 1;
LABEL_49:
            *(_BYTE *)(a2 + 111) = v35;
LABEL_50:
            if ( v33 == (char)0x80 )
            {
              v36 = -155;
            }
            else
            {
              LOBYTE(v28) = v33 + 127;
              if ( (unsigned __int8)v28 > 7u || (v54 = 161, v55 = _bittest(&v54, v28), v36 = 9633, !v55) )
                v36 = *(unsigned __int8 *)(a2 + 110);
            }
            *(_WORD *)(a2 + 116) = v36;
            *(_WORD *)(a2 + 118) = *(unsigned __int8 *)(a2 + 111);
            goto LABEL_54;
          }
          *(_BYTE *)(a2 + 110) = 32;
        }
        v35 = *(_BYTE *)(a2 + 108) + 2;
        goto LABEL_49;
      }
      *(_BYTE *)(a2 + 109) = -1;
    }
    *(_BYTE *)(a2 + 108) = v30;
    goto LABEL_43;
  }
  v69 = *(_BYTE *)(v15 + 22);
  *(_BYTE *)(a2 + 108) = v69;
  *(_BYTE *)(a2 + 109) = *(_BYTE *)(v15 + 24);
  *(_BYTE *)(a2 + 110) = -107;
  *(_BYTE *)(a2 + 111) = v69 + *(_BYTE *)(v15 + 28);
  v70 = *(_BYTE *)(v15 + 30);
  v71 = *(int *)(a2 + 8);
  if ( v70 == -56 )
    v70 = v16;
  *(_BYTE *)(a2 + 44) = v70;
  if ( (!_wcsicmp((const wchar_t *)(a2 + v71), L"ZapfDingbats")
     || !_wcsicmp((const wchar_t *)(a2 + *(int *)(a2 + 8)), L"Symbol"))
    && !*(_BYTE *)(a2 + 44) )
  {
    *(_BYTE *)(a2 + 44) = 2;
  }
LABEL_54:
  v37 = *(_QWORD *)(a1 + 88);
  v38 = (unsigned int)(*(_DWORD *)(v37 + 12) - 1);
  *(_WORD *)(a2 + 112) = *(_WORD *)(v37 + 16);
  LOWORD(v37) = *(_WORD *)(v37 + 16 * (v38 + 1)) + *(_WORD *)(v37 + 16 * (v38 + 1) + 2) - 1;
  *(_QWORD *)(a2 + 120) = 1LL;
  *(_WORD *)(a2 + 114) = v37;
  *(_DWORD *)(a2 + 128) = 1;
  *(_DWORD *)(a2 + 132) = 1;
  *(_DWORD *)(a2 + 136) = (__int16)__ROR2__(v73[10], 8);
  *(_DWORD *)(a2 + 140) = (__int16)__ROR2__(v73[9], 8);
  if ( v10 )
    *(_DWORD *)(a2 + 32) = (__int16)((10 * _byteswap_ulong(*(_DWORD *)(v10 + 4))) >> 16);
  else
    *(_DWORD *)(a2 + 32) = 0;
  if ( v12 )
  {
    *(_BYTE *)(a2 + 160) = *(_BYTE *)(v12 + 58);
    *(_BYTE *)(a2 + 161) = *(_BYTE *)(v12 + 59);
    *(_BYTE *)(a2 + 162) = *(_BYTE *)(v12 + 60);
    *(_BYTE *)(a2 + 163) = *(_BYTE *)(v12 + 61);
  }
  else
  {
    *(_DWORD *)(a2 + 160) = 1852534357;
  }
  v39 = *(unsigned int *)(a1 + 200);
  v40 = v74 + v39;
  if ( !(_DWORD)v39 )
    v40 = 0LL;
  if ( v40 )
  {
    if ( !(unsigned int)bValidRangeKERN(v40, *(unsigned int *)(a1 + 204), a2 + 164, v24) )
      *(_QWORD *)(a1 + 200) = 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 164) = 0;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 44) + 0x80) <= 1u )
  {
    if ( *(_BYTE *)(a2 + 172) == 3 )
    {
      *(_BYTE *)(a2 + 45) = 64;
    }
    else
    {
      v72 = *(_BYTE *)(a2 + 173);
      if ( v72 < 0x10u )
        *(_BYTE *)(a2 + 45) = byte_1C02EB1F0[v72];
      else
        *(_BYTE *)(a2 + 45) = 0;
    }
    if ( *(_BYTE *)(a2 + 175) == 9 )
      *(_DWORD *)(a2 + 48) |= 0x10400000u;
  }
  else if ( *(_BYTE *)(a2 + 172) == 3 )
  {
    *(_BYTE *)(a2 + 45) = 64;
  }
  else if ( *(_BYTE *)(a2 + 172) == 4 )
  {
    *(_BYTE *)(a2 + 45) = 80;
  }
  else if ( *(_BYTE *)(a2 + 175) == 9 )
  {
    *(_BYTE *)(a2 + 45) = 48;
  }
  else
  {
    v41 = *(_BYTE *)(a2 + 173);
    if ( v41 >= 0x10u )
      *(_BYTE *)(a2 + 45) = 0;
    else
      *(_BYTE *)(a2 + 45) = ajPanoseFamilyForTtfd[v41];
  }
  v42 = v78;
  v43 = (int)v78[1];
  *(_DWORD *)(a2 + 24) = v43;
  if ( (_DWORD)v43 )
  {
    v44 = a2 + v43;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    if ( (*(_WORD *)(a2 + 52) & 0x21) != 0 )
    {
      if ( (*(_WORD *)(a2 + 52) & 0x21) == 1 || (*(_WORD *)(a2 + 52) & 0x21) == 0x20 )
      {
        *(_QWORD *)v44 = 0LL;
        v47 = v44 + 12;
        *(_DWORD *)(v44 + 8) = 12;
      }
    }
    else
    {
      *(_DWORD *)v44 = 12;
      *(_DWORD *)(v44 + 4) = 32;
      v45 = v44 + 12;
      *(_DWORD *)(v44 + 8) = 52;
      v46 = v44 + 32;
      v47 = v44 + 52;
    }
    v75[3] = *(_BYTE *)(a2 + 174);
    *(_WORD *)&v75[4] = *(_WORD *)(a2 + 46);
    *(_WORD *)v75 = 0;
    *(_WORD *)&v75[6] = *(_WORD *)(a2 + 52) & 0xFFBF;
    *(_DWORD *)&v75[8] = *(_DWORD *)(a2 + 76);
    *(_QWORD *)&v75[12] = *(_QWORD *)(a2 + 136);
    v75[2] = 0;
    if ( v45 )
    {
      *(_OWORD *)v45 = *(_OWORD *)v75;
      *(_DWORD *)(v45 + 16) = *(_DWORD *)&v75[16];
      *(_BYTE *)(v47 + 3) = 8;
      *(_WORD *)(v45 + 6) |= 0x20u;
      ++*(_WORD *)(v45 + 8);
      ++*(_WORD *)(v45 + 10);
      *(_WORD *)(v45 + 4) = 700;
    }
    if ( v46 )
    {
      *(_OWORD *)v46 = *(_OWORD *)v75;
      *(_DWORD *)(v46 + 16) = *(_DWORD *)&v75[16];
      *(_WORD *)(v46 + 6) |= 1u;
      *(_DWORD *)(v46 + 12) = 7;
      *(_DWORD *)(v46 + 16) = 33;
    }
    if ( v47 )
    {
      *(_OWORD *)v47 = *(_OWORD *)v75;
      *(_DWORD *)(v47 + 16) = *(_DWORD *)&v75[16];
      *(_WORD *)(v47 + 6) |= 0x21u;
      ++*(_WORD *)(v47 + 8);
      ++*(_WORD *)(v47 + 10);
      *(_BYTE *)(v47 + 3) = 8;
      *(_WORD *)(v47 + 4) = 700;
      *(_DWORD *)(v47 + 12) = 7;
      *(_DWORD *)(v47 + 16) = 33;
    }
  }
  v48 = (int)v42[21];
  *(_DWORD *)(a2 + 40) = v48;
  vFillIFICharsets(a1, a2, (_BYTE *)(a2 + v48), v74, v12, v79);
  v49 = (int)v42[22];
  *(_DWORD *)(a2 + 196) = v49;
  if ( (_DWORD)v49 )
  {
    v50 = a2 + v49;
    v51 = 4LL;
    v52 = (_DWORD *)(a2 + v49);
    do
    {
      *v52 = _byteswap_ulong(*(_DWORD *)((char *)v52 + v12 - (a2 + v49) + 42));
      ++v52;
      --v51;
    }
    while ( v51 );
    if ( *(_WORD *)v12 )
    {
      if ( (unsigned int)IsBogusSignature(_byteswap_ulong(*(_DWORD *)(v12 + 78))) )
        *(_DWORD *)(v50 + 16) = 0x20000;
      else
        *(_DWORD *)(v50 + 16) = _byteswap_ulong(*(_DWORD *)(v12 + 78));
      *(_DWORD *)(v50 + 20) = _byteswap_ulong(*(_DWORD *)(v12 + 82));
    }
    else
    {
      *(_QWORD *)(v50 + 16) = 0LL;
    }
  }
  if ( (unsigned int)IsAnyCharsetDbcs(a1 + 352) )
  {
    *(_DWORD *)(a1 + 300) |= 0x100u;
    if ( *(_BYTE *)(a2 + 175) == 9 )
      *(_DWORD *)(a2 + 48) |= 0x10400000u;
  }
  result = -(*(_DWORD *)(a2 + 48) & 0x400000);
  *(_BYTE *)(a2 + 45) |= 2 - ((*(_DWORD *)(a2 + 48) & 0x400000) != 0);
  return result;
}
