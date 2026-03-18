/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00254DC
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0024F60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0285DE0 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0285F80 (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0024E4C (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z @ 0x1C0024E80 (-bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0025E84 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0025F0C (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C00266D0 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C00266F4 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C0027C7C (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C002802C (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C012683C (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C0130064 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014BD74 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0152CEC (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     memcmp @ 0x1C0158D00 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B68F8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFEOBJ *a2, unsigned __int8 *a3, int a4)
{
  __int64 v4; // rdi
  const wchar_t *v5; // r15
  PFEOBJ *v8; // r9
  IFIOBJ *v10; // r13
  _QWORD *v11; // rcx
  struct PFT **v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // r11
  __int64 v16; // rdi
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // cl
  char v19; // di
  unsigned __int8 v20; // al
  struct PFE *v21; // r15
  MAPPER *v22; // rcx
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r11
  MAPPER *v27; // rsi
  int v28; // r8d
  int v29; // r9d
  unsigned __int8 v30; // r8
  char v31; // al
  char v32; // dl
  MAPPER *v33; // rcx
  _DWORD *v34; // r13
  int v35; // eax
  struct PFE *v36; // rdi
  int v37; // r8d
  int v38; // r11d
  char *v39; // rcx
  int v40; // r8d
  unsigned __int8 v42; // al
  int v43; // eax
  __int16 *v44; // rax
  signed int v45; // edi
  int v46; // esi
  int v47; // ecx
  int v48; // r11d
  int v49; // eax
  unsigned int v50; // r11d
  int v51; // eax
  int v52; // eax
  struct PFE *v53; // rdx
  struct PFE *v54; // rdx
  int v55; // eax
  int v56; // edi
  int v57; // edx
  int v58; // eax
  int v59; // ecx
  int v60; // edi
  int v61; // ecx
  unsigned int v62; // r9d
  unsigned int v63; // r8d
  int v64; // eax
  int v65; // edi
  int v66; // r12d
  unsigned int v67; // r15d
  unsigned int v68; // edi
  int v69; // esi
  unsigned int v70; // r10d
  int v71; // r11d
  unsigned int v72; // r8d
  int v73; // r9d
  unsigned int v74; // eax
  int v75; // r9d
  struct PFE *v76; // rdx
  int v77; // eax
  int v78; // eax
  struct tagPvtData *v79; // rax
  int v80; // eax
  struct PFE *v81; // rdx
  PFEOBJ *v82; // rdi
  MAPPER *v83; // rdx
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rdx
  int v90; // eax
  unsigned int v91; // eax
  unsigned int v92; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v93; // [rsp+24h] [rbp-1Ch] BYREF
  struct PFE *v94; // [rsp+28h] [rbp-18h]
  _QWORD v95[2]; // [rsp+30h] [rbp-10h] BYREF
  int v96; // [rsp+80h] [rbp+40h] BYREF
  PFEOBJ *v97; // [rsp+88h] [rbp+48h]

  v97 = a2;
  v4 = *(_QWORD *)a2;
  v5 = 0LL;
  *((_DWORD *)this + 63) &= 0xFFFFB7FF;
  v8 = a2;
  v94 = (struct PFE *)v4;
  if ( *(struct PFE **)a2 == gppfeMapperDefault )
    *((_DWORD *)this + 63) |= 0x4000u;
  v10 = (MAPPER *)((char *)this + 256);
  *((_QWORD *)this + 32) = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  v11 = *(_QWORD **)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 12LL) & 2) != 0 )
    goto LABEL_199;
  v12 = gpPFTPrivate;
  v95[0] = *v11;
  if ( *(struct PFT **const *)(v95[0] + 128LL) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v95) )
      goto LABEL_199;
    v12 = gpPFTPrivate;
    v8 = v97;
  }
  v13 = *(_QWORD *)v8;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 12LL) & 0x20) != 0 )
  {
LABEL_199:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  if ( *(struct PFT **)(*(_QWORD *)v13 + 128LL) == *v12 )
  {
    v95[0] = *(_QWORD *)v13;
    v79 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v95);
    if ( v79 && (*((_DWORD *)v79 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
      goto LABEL_199;
    v8 = v97;
  }
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  v14 = *((_DWORD *)this + 63);
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v14 < 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 32LL) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*(_QWORD *)(v4 + 80) )
  {
    goto LABEL_199;
  }
  v15 = *(_QWORD *)v10;
  v16 = *((_QWORD *)this + 1);
  if ( (*(_BYTE *)(v16 + 27) & 3) != 0 )
  {
    if ( (*(_BYTE *)(v16 + 27) & 3) == 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v10 + 45LL) & 2) == 0 )
        goto LABEL_12;
      v80 = 15000;
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)v10 + 45LL) & 2) != 0 )
        goto LABEL_12;
      v80 = 350;
    }
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 45LL) & 1) == 0 )
      goto LABEL_12;
    v80 = 1;
  }
  v54 = v94;
  *((_DWORD *)this + 46) = v80;
  if ( (unsigned int)MAPPER::bNoMatch(this, v54) )
    return 0LL;
LABEL_12:
  v17 = *(_BYTE *)(v15 + 45) & 0x70;
  v18 = *(_BYTE *)(v16 + 27) & 0x70;
  if ( !v18 )
  {
    if ( *((_BYTE *)this + 284) == 2 )
    {
      v18 = *(_BYTE *)(v15 + 45) & 0x70;
    }
    else if ( v17 )
    {
      v18 = (v14 & 0x800000) != 0 ? 16 : 32;
    }
  }
  if ( (v18 & 0xF0u) < 0x60 )
    v5 = (const wchar_t *)gpwszFamilyDefaultFonts[(unsigned __int64)v18 >> 4];
  if ( v18 == v17 )
    goto LABEL_19;
  v51 = 0;
  if ( !v17 )
  {
    v52 = 8000;
    goto LABEL_80;
  }
  if ( v18 > 0x30u )
  {
    if ( v17 > 0x30u )
      goto LABEL_79;
    goto LABEL_164;
  }
  if ( v17 > 0x30u )
LABEL_164:
    v51 = 50;
LABEL_79:
  v52 = v51 + 9000;
LABEL_80:
  if ( v52 )
  {
    v53 = v94;
    *((_DWORD *)this + 46) += v52;
    if ( (unsigned int)MAPPER::bNoMatch(this, v53) )
      return 0LL;
  }
LABEL_19:
  v19 = *((_BYTE *)this + 284);
  if ( v19 == 1 || (v14 & 0x8000000) != 0 )
  {
    v20 = jMapCharset(*((_BYTE *)this + 284), v97);
    *a3 = v20;
    if ( v19 == 1 && (v14 & 0x8000000) == 0 && MAPPER::DefaultCharset != v20 )
    {
      v76 = v94;
      *((_DWORD *)this + 46) += 2;
      if ( (unsigned int)MAPPER::bNoMatch(this, v76) )
        return 0LL;
    }
  }
  else
  {
    v42 = jMapCharset(*((_BYTE *)this + 284), v97);
    *a3 = v42;
    if ( v19 != v42 )
    {
      if ( (v14 & 0x4000000) == 0 )
        goto LABEL_199;
      v81 = v94;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v81) )
        return 0LL;
    }
  }
  if ( a4 )
  {
    v82 = v97;
    if ( PFEOBJ::bCheckFamilyName(v97, *((const unsigned __int16 **)this + 2), 0, &v96) )
    {
      if ( v96 )
        ++*((_DWORD *)this + 46);
    }
    else if ( !v5
           || _wcsicmp(
                (const wchar_t *)(*(_QWORD *)(*(_QWORD *)v82 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)v82 + 32LL) + 8LL)),
                v5) )
    {
      *((_DWORD *)this + 46) += 10000;
    }
    else
    {
      *((_DWORD *)this + 46) += 9000;
    }
    v21 = v94;
    if ( (unsigned int)MAPPER::bNoMatch(this, v94) )
      return 0LL;
  }
  else
  {
    v21 = v94;
  }
  v22 = *(MAPPER **)v10;
  v23 = *((_DWORD *)this + 63);
  v24 = *(int *)(*(_QWORD *)v10 + 8LL);
  if ( (v23 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)((char *)v22 + v24) != 64 )
      goto LABEL_199;
  }
  else if ( *(_WORD *)((char *)v22 + v24) == 64 )
  {
    goto LABEL_199;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x3000010) == 0 )
  {
    if ( (v23 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_199;
    v23 = *((_DWORD *)this + 63);
    v44 = *(__int16 **)v10;
    if ( (v23 & 2) != 0 )
      v45 = v44[28];
    else
      v45 = v44[30] + v44[31];
    v46 = *((_DWORD *)this + 41);
    if ( v45 < v46
      && (LOBYTE(v22) = (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x100000) != 0,
          ((unsigned __int8)v22 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
      && v46 > 7 * v45 / 4 )
    {
      if ( !MAPPER::bWin31BitmapHeightScaling(v22, v46, v45, &v96) )
        return 0LL;
      v55 = v96;
      if ( (unsigned int)v96 > 8 )
        v55 = 8;
      *((_DWORD *)this + 49) = v55;
    }
    else
    {
      *((_DWORD *)this + 49) = 1;
    }
    v47 = *((_DWORD *)this + 49);
    v48 = 0;
    if ( v47 > 1 )
    {
      if ( (v23 & 0x800) == 0 && v47 + 2 >= v45 )
        return 0LL;
      v45 *= v47;
      v48 = (20 * v47) | (5 * (v47 - 1));
    }
    if ( v46 < v45 )
    {
      v65 = v45 - v46;
      if ( (v23 & 0x1080) == 0x1080 )
      {
        if ( v65 > 1 )
          v48 += 150 * (v65 + 20);
LABEL_73:
        if ( v48 )
        {
          *((_DWORD *)this + 46) += v48;
          if ( (unsigned int)MAPPER::bNoMatch(this, v21) || v50 >= 0x2710 && (v23 & 0x4800) == 0 )
            return 0LL;
        }
        goto LABEL_28;
      }
      v49 = 150 * (v65 + 4);
    }
    else
    {
      v49 = 150 * (v46 - v45);
    }
    v48 += v49;
    goto LABEL_73;
  }
LABEL_28:
  v25 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 80LL) + 104LL) & 1) != 0
    && IFIOBJ::lfOutPrecision(v10) == 6
    && (v23 & 0x4000) == 0 )
  {
    v83 = *(MAPPER **)v10;
    v84 = *((_DWORD *)this + 61);
    v85 = *(_DWORD *)(*(_QWORD *)v10 + 128LL);
    if ( (v84 != v85 || *((_DWORD *)this + 62) != *((_DWORD *)v83 + 33))
      && v84 * *((_DWORD *)v83 + 33) != v85 * *((_DWORD *)this + 62) )
    {
      goto LABEL_199;
    }
  }
  v26 = *((_QWORD *)this + 1);
  v27 = *(MAPPER **)v10;
  if ( *(_BYTE *)(v26 + 20) )
  {
    if ( (*((_BYTE *)v27 + 52) & 1) != 0 )
      goto LABEL_31;
    if ( (unsigned int)IFIOBJ::bSimItalic(v10) )
    {
      *((_DWORD *)this + 47) |= 0x4000u;
      v64 = 1;
    }
    else
    {
      v64 = 4;
    }
    *((_DWORD *)this + 46) += v64;
  }
  else
  {
    if ( (*((_BYTE *)v27 + 52) & 1) == 0 )
      goto LABEL_31;
    *((_DWORD *)this + 46) += 4;
  }
  if ( (unsigned int)MAPPER::bNoMatch(this, v21) )
    return 0LL;
LABEL_31:
  v28 = *((unsigned __int16 *)v27 + 23) - *((_DWORD *)this + 43);
  if ( (v23 & 0x200000) != 0 )
  {
    v43 = (int)(19 * abs32(v28)) >> 7;
  }
  else
  {
    if ( !v28 )
      goto LABEL_33;
    if ( v28 < 0 )
    {
      v28 = *((_DWORD *)this + 43) - *((unsigned __int16 *)v27 + 23);
      if ( v28 > 150 )
      {
        if ( IFIOBJ::pvSimBold(v10) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v28 -= 120;
        }
      }
    }
    v43 = (73 * v28) >> 8;
  }
  *((_DWORD *)this + 46) += v43;
  if ( (unsigned int)MAPPER::bNoMatch(this, v21) )
    return 0LL;
LABEL_33:
  v29 = v23 & 0x80;
  if ( (v23 & 0x80) == 0 )
  {
    v30 = IFIOBJ::lfOutPrecision(v10);
    if ( v30 == 6
      && ((v23 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v25 + 72LL) < 0
       || ((v23 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62))
       && (*((_DWORD *)v27 + 12) & 0x40000000) == 0) )
    {
      goto LABEL_199;
    }
    v31 = *(_BYTE *)(v26 + 24);
    if ( v31 == 7 && v30 != 8 )
      goto LABEL_199;
    if ( v31 == 10 && *((int *)v27 + 12) >= 0 )
      goto LABEL_199;
  }
  v32 = *(_BYTE *)(v26 + 24);
  if ( v32 == 9
    || (v33 = (MAPPER *)gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v32 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v25 + 72LL) & 0x20000000) != 0 )
  {
    if ( v29 || IFIOBJ::lfOutPrecision(v10) != 8 )
    {
      *((_DWORD *)this + 46) += 2;
      if ( (unsigned int)MAPPER::bNoMatch(this, v21) )
        return 0LL;
    }
  }
  v34 = (_DWORD *)((char *)v27 + 48);
  v35 = *((_DWORD *)v27 + 12);
  if ( (v35 & 0x10) != 0 || (v35 & 0x2000000) != 0 )
    goto LABEL_43;
  v56 = *((__int16 *)v27 + 38);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v26 + 4) )
  {
    if ( (*v34 & 0x100000) != 0 && (v23 & 0x8000) == 0 )
    {
      v66 = *((_DWORD *)this + 62);
      v67 = *((_DWORD *)this + 61);
      if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v66), v67, &v92) )
        return 0LL;
      v68 = *((_DWORD *)v27 + 33);
      v69 = *((_DWORD *)v27 + 32);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * v69), v68, &v96)
        || (unsigned int)SafeDivide<long,long,long>((unsigned int)v96, *((unsigned int *)this + 49), &v93) )
      {
        return 0LL;
      }
      v72 = v92;
      v73 = 0;
      if ( v69 != v68 || v67 != v66 )
      {
        if ( v92 <= (3 * v93) >> 1 )
        {
LABEL_222:
          if ( v70 )
          {
            v71 += 30 * abs32(v72 - v96 * *((_DWORD *)this + 48) / v70);
            goto LABEL_152;
          }
          goto LABEL_199;
        }
        if ( !v93 )
          goto LABEL_199;
        *((_DWORD *)this + 48) = v92 / v93;
LABEL_148:
        v74 = *((_DWORD *)this + 48);
        if ( v74 > 5 )
          v74 = 5;
        *((_DWORD *)this + 48) = v74;
        v71 = 20 * v74;
        if ( v73 && v74 == v70 )
        {
LABEL_152:
          v36 = v94;
          if ( v71 )
          {
            *((_DWORD *)this + 46) += v71;
            if ( (unsigned int)MAPPER::bNoMatch(this, v36) )
              return 0LL;
          }
LABEL_44:
          v37 = *((_DWORD *)this + 48);
          if ( v37 <= 1 && *((int *)this + 49) <= 1 )
          {
LABEL_46:
            if ( (*v34 & 0x10) != 0 || (v23 & 0x1000) != 0 && (v23 & 0x40000) != 0 )
              goto LABEL_47;
            if ( (v23 & 0x80000) != 0 || (unsigned int)MAPPER::bCalcOrientation(this) )
            {
              v62 = *((_DWORD *)this + 44);
              v63 = v62 - *(_DWORD *)(*(_QWORD *)v97 + 68LL);
              if ( !v63 )
                goto LABEL_47;
              if ( (*((_DWORD *)this + 63) & 0x480) == 0x480 )
              {
                if ( v63 > v62 )
                  v63 = *(_DWORD *)(*(_QWORD *)v97 + 68LL) - *((_DWORD *)this + 44);
                v63 %= 0x384u;
              }
              if ( !v63 )
                goto LABEL_47;
              if ( (*(_DWORD *)(*((_QWORD *)this + 32) + 48LL) & 0x200000) != 0 )
              {
                if ( v63 > v62 )
                  v63 = -v63;
                v63 %= 0x384u;
              }
              if ( !v63 )
              {
LABEL_47:
                v38 = *((_DWORD *)this + 63);
                if ( (v38 & 0x400000) != 0 )
                {
                  ++*((_DWORD *)this + 46);
                  if ( (unsigned int)MAPPER::bNoMatch(this, v36) )
                    return 0LL;
                }
                if ( v38 < 0 )
                  v39 = (char *)this + 92;
                else
                  v39 = (char *)(*((_QWORD *)this + 1) + 348LL);
                v40 = *((_DWORD *)v39 + 1);
                if ( !v40 )
                  return 1LL;
                v87 = *((_QWORD *)this + 32);
                if ( *(_DWORD *)(v87 + 4) >= 0x10u )
                {
                  v88 = *(int *)(v87 + 204);
                  if ( (_DWORD)v88 )
                  {
                    v89 = v87 + v88;
                    if ( v89 )
                    {
                      v90 = *(_DWORD *)(v89 + 4);
                      if ( v90 && v40 == v90 && *((_DWORD *)this + 46) <= 0x88B8u )
                        *((_QWORD *)this + 36) = v36;
                      v91 = *(_DWORD *)(v89 + 4);
                      if ( *((_DWORD *)v39 + 1) == v91 && !memcmp(v39 + 8, (const void *)(v89 + 8), 4LL * v91) )
                        return 1LL;
                    }
                  }
                }
              }
            }
            goto LABEL_199;
          }
          *((_DWORD *)this + 46) += 50;
          v75 = *((_DWORD *)this + 49);
          if ( v37 > v75 )
          {
            if ( v75 == 1 )
              v78 = 100 * v37;
            else
              v78 = (100 * v37 + v75 / 2) / v75;
          }
          else
          {
            if ( v37 >= v75 )
              goto LABEL_162;
            if ( v37 == 1 )
              v78 = 100 * v75;
            else
              v78 = (100 * v75 + v37 / 2) / v37;
          }
          *((_DWORD *)this + 46) += 4 * v78;
LABEL_162:
          if ( (unsigned int)MAPPER::bNoMatch(this, v36) )
            return 0LL;
          goto LABEL_46;
        }
        goto LABEL_222;
      }
      v73 = v71 + 1;
      if ( v70 != v71 + 1 )
      {
        *((_DWORD *)this + 48) = v70;
        goto LABEL_148;
      }
    }
LABEL_43:
    v36 = v94;
    goto LABEL_44;
  }
  if ( (v23 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_199;
  v23 = *((_DWORD *)this + 63);
  v34 = (_DWORD *)(*((_QWORD *)this + 32) + 48LL);
  LOBYTE(v33) = (*v34 & 0x100000) != 0;
  if ( ((unsigned __int8)v33 & ((v23 & 0x8000) == 0)) == 0 || (v57 = *((_DWORD *)this + 42), v57 <= v56) )
  {
    if ( (*v34 & 0x1000000) != 0 )
    {
      v86 = (unsigned int)(*(__int16 *)(*((_QWORD *)this + 32) + 60LL) + *(__int16 *)(*((_QWORD *)this + 32) + 62LL));
      v96 = *((_DWORD *)this + 41) * v56;
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v96, v86, &v96) )
        return 0LL;
      v56 = v96;
    }
    goto LABEL_114;
  }
  if ( (unsigned int)MAPPER::bWin31BitmapWidthScaling(v33, v57, v56, &v96) )
  {
    v77 = v96;
    if ( (unsigned int)v96 > 5 )
      v77 = 5;
    *((_DWORD *)this + 48) = v77;
LABEL_114:
    v58 = *((_DWORD *)this + 48);
    v59 = 0;
    if ( v58 > 1 )
    {
      v56 *= v58;
      v59 = (v58 - 1) | (20 * v58);
    }
    if ( *((_DWORD *)this + 42) - v56 < 0 )
      v60 = v56 - *((_DWORD *)this + 42);
    else
      v60 = *((_DWORD *)this + 42) - v56;
    v61 = 50 * v60 + v59;
    if ( v61 )
    {
      *((_DWORD *)this + 46) += v61;
      if ( (unsigned int)MAPPER::bNoMatch(this, v21) )
        return 0LL;
    }
    goto LABEL_43;
  }
  return 0LL;
}
