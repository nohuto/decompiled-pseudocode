/*
 * XREFs of vFill_IFIMETRICS @ 0x1C0155298
 * Callers:
 *     bLoadTTF @ 0x1C00207C4 (bLoadTTF.c)
 * Callees:
 *     EngGetCurrentCodePage @ 0x1C0018130 (EngGetCurrentCodePage.c)
 *     IsAnyCharsetDbcs @ 0x1C006448C (IsAnyCharsetDbcs.c)
 *     pjTable @ 0x1C00C1864 (pjTable.c)
 *     bContainGlyphSet @ 0x1C015464C (bContainGlyphSet.c)
 *     vFillIFICharsets @ 0x1C0155D1C (vFillIFICharsets.c)
 *     fsSelectionTTFD @ 0x1C0156AD0 (fsSelectionTTFD.c)
 *     bConvertExtras @ 0x1C0156B00 (bConvertExtras.c)
 *     IsBogusSignature @ 0x1C01583BC (IsBogusSignature.c)
 *     bValidRangeKERN @ 0x1C0158464 (bValidRangeKERN.c)
 *     IsCurrentCodePageDBCS @ 0x1C0241208 (IsCurrentCodePageDBCS.c)
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
  int v36; // eax
  bool v37; // cf
  __int16 v38; // ax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int8 v43; // al
  _DWORD *v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // r8
  _DWORD *v54; // rcx
  __int64 result; // rax
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
  __int16 v66; // cx
  char v67; // al
  int v68; // edx
  char v69; // cl
  char v70; // cl
  char v71; // al
  __int64 v72; // rcx
  unsigned __int8 v73; // al
  _WORD *v74; // [rsp+30h] [rbp-38h]
  int v75[2]; // [rsp+38h] [rbp-30h]
  _BYTE v76[20]; // [rsp+40h] [rbp-28h]
  unsigned __int32 AnsiCodePage; // [rsp+B0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v79; // [rsp+C0h] [rbp+58h]
  __int64 v80; // [rsp+C8h] [rbp+60h]

  v80 = a4;
  v79 = a3;
  v4 = *(_QWORD *)(a1 + 64);
  v7 = *(unsigned int *)(a1 + 160);
  v8 = (_WORD *)(v4 + *(unsigned int *)(a1 + 128));
  v9 = *(unsigned int *)(a1 + 216);
  v74 = (_WORD *)(v4 + *(unsigned int *)(a1 + 136));
  *(_QWORD *)v75 = v4;
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
  bConvertExtras(a2, a3);
  v13 = v79;
  *(_DWORD *)(a2 + 8) = v79[23];
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
  else if ( pjTable(1195987780, a1, &AnsiCodePage) && AnsiCodePage )
  {
    *(_DWORD *)(a2 + 48) = 950385;
  }
  if ( *((_QWORD *)v79 + 3) )
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
                                             + 4LL * ((unsigned int)(unsigned __int16)__ROR2__(v74[17], 8) - 1)),
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
    v66 = *(_WORD *)(a2 + 100);
    *(_QWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 92) = 0LL;
    *(_WORD *)(a2 + 104) = v66;
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
    v67 = __ROR2__(v8[22], 8);
    v37 = (*(_DWORD *)(a2 + 48) & 0x400000) != 0;
    *(_BYTE *)(a2 + 174) = (v67 & 1) != 0 ? 8 : 5;
    *(_DWORD *)(a2 + 176) = 0;
    *(_WORD *)(a2 + 180) = 0;
    *(_BYTE *)(a2 + 175) = v37 ? 9 : 0;
    *(_WORD *)(a2 + 46) = ausIFIMetrics2WinWeight[(unsigned __int8)((v67 & 1) != 0 ? 8 : 5)];
  }
  *(_DWORD *)(a2 + 36) = v16;
  if ( (*(_DWORD *)(a1 + 300) & 2) == 0 )
  {
    if ( !v12
      || *(_WORD *)v12 == (_WORD)v16
      || (v26 = _byteswap_ulong(*(_DWORD *)(v12 + 78)), !(_DWORD)v26)
      || (v27 = IsBogusSignature(v26, a1), LOBYTE(v16) = 0, v27) )
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
          v68 = (unsigned __int16)AnsiCodePage;
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
          *(_DWORD *)(a1 + 288) = v68;
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
      v69 = *(_BYTE *)(a2 + 44);
      *(_WORD *)(a2 + 108) = -226;
      if ( v69 == (char)0x80 )
      {
        *(_WORD *)(a2 + 110) = 8357;
      }
      else if ( ((v69 + 122) & 0xFD) != 0 )
      {
        *(_WORD *)(a2 + 110) = 8223;
      }
      else
      {
        *(_WORD *)(a2 + 110) = 8224;
      }
      if ( v69 == (char)0x80 )
      {
        *(_DWORD *)(a2 + 116) = 2162533;
      }
      else if ( ((v69 + 122) & 0xFD) != 0 )
      {
        *(_DWORD *)(a2 + 116) = 2097183;
      }
      else
      {
        *(_DWORD *)(a2 + 116) = 2106785;
      }
      goto LABEL_55;
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
              v38 = -155;
            }
            else
            {
              LOBYTE(v28) = v33 + 127;
              if ( (unsigned __int8)v28 > 7u || (v36 = 161, v37 = _bittest(&v36, v28), v38 = 9633, !v37) )
                v38 = *(unsigned __int8 *)(a2 + 110);
            }
            *(_WORD *)(a2 + 116) = v38;
            *(_WORD *)(a2 + 118) = *(unsigned __int8 *)(a2 + 111);
            goto LABEL_55;
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
  v70 = *(_BYTE *)(v15 + 22);
  *(_BYTE *)(a2 + 108) = v70;
  *(_BYTE *)(a2 + 109) = *(_BYTE *)(v15 + 24);
  *(_BYTE *)(a2 + 110) = -107;
  *(_BYTE *)(a2 + 111) = v70 + *(_BYTE *)(v15 + 28);
  v71 = *(_BYTE *)(v15 + 30);
  v72 = *(int *)(a2 + 8);
  if ( v71 == -56 )
    v71 = v16;
  *(_BYTE *)(a2 + 44) = v71;
  if ( (!_wcsicmp((const wchar_t *)(a2 + v72), L"ZapfDingbats")
     || !_wcsicmp((const wchar_t *)(a2 + *(int *)(a2 + 8)), L"Symbol"))
    && !*(_BYTE *)(a2 + 44) )
  {
    *(_BYTE *)(a2 + 44) = 2;
  }
LABEL_55:
  v39 = *(_QWORD *)(a1 + 88);
  v40 = (unsigned int)(*(_DWORD *)(v39 + 12) - 1);
  *(_WORD *)(a2 + 112) = *(_WORD *)(v39 + 16);
  LOWORD(v39) = *(_WORD *)(v39 + 16 * (v40 + 1)) + *(_WORD *)(v39 + 16 * (v40 + 1) + 2) - 1;
  *(_QWORD *)(a2 + 120) = 1LL;
  *(_WORD *)(a2 + 114) = v39;
  *(_DWORD *)(a2 + 128) = 1;
  *(_DWORD *)(a2 + 132) = 1;
  *(_DWORD *)(a2 + 136) = (__int16)__ROR2__(v74[10], 8);
  *(_DWORD *)(a2 + 140) = (__int16)__ROR2__(v74[9], 8);
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
  v41 = *(unsigned int *)(a1 + 200);
  v42 = *(_QWORD *)v75 + v41;
  if ( !(_DWORD)v41 )
    v42 = 0LL;
  if ( v42 )
  {
    if ( !(unsigned int)bValidRangeKERN(v42, *(unsigned int *)(a1 + 204), a2 + 164, v24) )
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
      v73 = *(_BYTE *)(a2 + 173);
      if ( v73 < 0x10u )
        *(_BYTE *)(a2 + 45) = byte_1C02F0778[v73];
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
    v43 = *(_BYTE *)(a2 + 173);
    if ( v43 >= 0x10u )
      *(_BYTE *)(a2 + 45) = 0;
    else
      *(_BYTE *)(a2 + 45) = ajPanoseFamilyForTtfd[v43];
  }
  v44 = v79;
  v45 = (int)v79[1];
  *(_DWORD *)(a2 + 24) = v45;
  if ( (_DWORD)v45 )
  {
    v46 = a2 + v45;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( (*(_WORD *)(a2 + 52) & 0x21) != 0 )
    {
      if ( (*(_WORD *)(a2 + 52) & 0x21) == 1 || (*(_WORD *)(a2 + 52) & 0x21) == 0x20 )
      {
        *(_QWORD *)v46 = 0LL;
        v49 = v46 + 12;
        *(_DWORD *)(v46 + 8) = 12;
      }
    }
    else
    {
      *(_DWORD *)v46 = 12;
      *(_DWORD *)(v46 + 4) = 32;
      v47 = v46 + 12;
      *(_DWORD *)(v46 + 8) = 52;
      v48 = v46 + 32;
      v49 = v46 + 52;
    }
    *(_WORD *)v76 = 0;
    v76[3] = *(_BYTE *)(a2 + 174);
    *(_WORD *)&v76[4] = *(_WORD *)(a2 + 46);
    v76[2] = 0;
    *(_WORD *)&v76[6] = *(_WORD *)(a2 + 52) & 0xFFBF;
    *(_DWORD *)&v76[8] = *(_DWORD *)(a2 + 76);
    *(_QWORD *)&v76[12] = *(_QWORD *)(a2 + 136);
    if ( v47 )
    {
      *(_OWORD *)v47 = *(_OWORD *)v76;
      *(_DWORD *)(v47 + 16) = *(_DWORD *)&v76[16];
      *(_BYTE *)(v49 + 3) = 8;
      *(_WORD *)(v47 + 6) |= 0x20u;
      ++*(_WORD *)(v47 + 8);
      ++*(_WORD *)(v47 + 10);
      *(_WORD *)(v47 + 4) = 700;
    }
    if ( v48 )
    {
      *(_OWORD *)v48 = *(_OWORD *)v76;
      *(_DWORD *)(v48 + 16) = *(_DWORD *)&v76[16];
      *(_WORD *)(v48 + 6) |= 1u;
      *(_DWORD *)(v48 + 12) = 7;
      *(_DWORD *)(v48 + 16) = 33;
    }
    if ( v49 )
    {
      *(_OWORD *)v49 = *(_OWORD *)v76;
      *(_DWORD *)(v49 + 16) = *(_DWORD *)&v76[16];
      *(_WORD *)(v49 + 6) |= 0x21u;
      ++*(_WORD *)(v49 + 8);
      ++*(_WORD *)(v49 + 10);
      *(_BYTE *)(v49 + 3) = 8;
      *(_WORD *)(v49 + 4) = 700;
      *(_DWORD *)(v49 + 12) = 7;
      *(_DWORD *)(v49 + 16) = 33;
    }
  }
  v50 = v44[21];
  *(_DWORD *)(a2 + 40) = v50;
  vFillIFICharsets(a1, a2, a2 + v50, v75[0], v12, v80);
  v51 = (int)v44[22];
  *(_DWORD *)(a2 + 196) = v51;
  if ( (_DWORD)v51 )
  {
    v52 = a2 + v51;
    v53 = 4LL;
    v54 = (_DWORD *)(a2 + v51);
    do
    {
      *v54 = _byteswap_ulong(*(_DWORD *)((char *)v54 + v12 - (a2 + v51) + 42));
      ++v54;
      --v53;
    }
    while ( v53 );
    if ( *(_WORD *)v12 )
    {
      if ( (unsigned int)IsBogusSignature(_byteswap_ulong(*(_DWORD *)(v12 + 78)), a1) )
        *(_DWORD *)(v52 + 16) = 0x20000;
      else
        *(_DWORD *)(v52 + 16) = _byteswap_ulong(*(_DWORD *)(v12 + 78));
      *(_DWORD *)(v52 + 20) = _byteswap_ulong(*(_DWORD *)(v12 + 82));
    }
    else
    {
      *(_QWORD *)(v52 + 16) = 0LL;
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
