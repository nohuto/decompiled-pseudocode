/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00281B0
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z @ 0x1C0027C60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028728C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C028742C (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0027B04 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z @ 0x1C0027B48 (-bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0027B94 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0028C80 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0028D08 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C0031558 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C003157C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C003159C (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0031A4C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C0031CC4 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00EA000 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C00F9AB4 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C0140CCC (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     memcmp @ 0x1C015BBC0 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B47F0 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  struct PFE *v4; // r10
  int v5; // r13d
  IFIOBJ *v10; // r14
  __int64 v11; // rcx
  struct PFT **v12; // rdx
  struct PFE *v13; // rcx
  int v14; // ebp
  MAPPER *v15; // r11
  __int64 v16; // rsi
  char v17; // al
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // cl
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned __int8 v24; // si
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // dl
  struct PFE *v28; // r12
  MAPPER *v29; // rcx
  int v30; // esi
  __int64 v31; // rax
  __int16 *v32; // rax
  signed int v33; // ebp
  int v34; // r15d
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // ebp
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  __int64 v42; // r15
  __int64 v43; // rbp
  MAPPER *v44; // r11
  int v45; // r8d
  int v46; // r8d
  int v47; // ecx
  char v48; // dl
  char v49; // dl
  MAPPER *v50; // rcx
  _DWORD *v51; // r15
  struct PFE *v52; // rbp
  int v53; // r8d
  int v54; // r11d
  char *v55; // rcx
  int v56; // eax
  unsigned int v57; // eax
  signed int v58; // r12d
  int v59; // edx
  int v60; // ecx
  int v61; // eax
  int v62; // r12d
  int v63; // r13d
  unsigned int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // r9d
  unsigned int v67; // r8d
  int v68; // eax
  _BYTE *v69; // r9
  unsigned __int64 v70; // rcx
  unsigned __int8 v71; // al
  struct PFE *v72; // rdx
  int v73; // eax
  int v74; // eax
  int v75; // r9d
  int v76; // eax
  int v77; // ecx
  int v78; // eax
  int v79; // r12d
  unsigned int v80; // ebp
  __int64 v81; // r11
  int v82; // ecx
  unsigned int v83; // r10d
  int v84; // r11d
  int v85; // r8d
  int v86; // r11d
  unsigned int v87; // ecx
  struct tagPvtData *v88; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v93; // rax
  unsigned __int64 v94; // r8
  MAPPER *v95; // rcx
  int v96; // edx
  int v97; // r8d
  __int64 v98; // rdx
  unsigned int v99; // eax
  int v100; // eax
  MAPPER *v101; // r8
  __int64 v102; // rdx
  char *v103; // rdx
  int v104; // r8d
  unsigned int v105; // eax
  unsigned int v106; // [rsp+20h] [rbp-58h]
  unsigned int v107; // [rsp+24h] [rbp-54h] BYREF
  struct PFE *v108; // [rsp+28h] [rbp-50h]
  _QWORD v109[2]; // [rsp+30h] [rbp-48h] BYREF
  int v110; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *Str2; // [rsp+88h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0;
  *((_DWORD *)this + 63) &= 0xFFFFB7FF;
  v108 = v4;
  Str2 = 0LL;
  if ( *a2 == gppfeMapperDefault )
    *((_DWORD *)this + 63) |= 0x4000u;
  v10 = (MAPPER *)((char *)this + 256);
  *((_QWORD *)this + 32) = *((_QWORD *)*a2 + 4);
  if ( (*((_DWORD *)*a2 + 3) & 2) != 0 )
    goto LABEL_200;
  v11 = *(_QWORD *)*a2;
  v12 = gpPFTPrivate;
  v109[0] = v11;
  if ( *(struct PFT **const *)(v11 + 128) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v109) )
      goto LABEL_200;
    v12 = gpPFTPrivate;
    v4 = v108;
  }
  v13 = *a2;
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_200;
  if ( *(struct PFT **)(*(_QWORD *)v13 + 128LL) != *v12 )
    goto LABEL_7;
  v109[0] = *(_QWORD *)v13;
  v88 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v109);
  if ( v88 )
  {
    if ( (*((_DWORD *)v88 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_200:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v4 = v108;
LABEL_7:
  v14 = *((_DWORD *)this + 63);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v14 < 0 && (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*((_QWORD *)v4 + 10) )
  {
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  v15 = *(MAPPER **)v10;
  v16 = *((_QWORD *)this + 1);
  v17 = *(_BYTE *)(v16 + 27) & 3;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      if ( (*((_BYTE *)v15 + 45) & 2) == 0 )
        goto LABEL_12;
      v68 = 15000;
    }
    else
    {
      if ( (*((_BYTE *)v15 + 45) & 2) != 0 )
        goto LABEL_12;
      v68 = 350;
    }
  }
  else
  {
    if ( (*((_BYTE *)v15 + 45) & 1) == 0 )
      goto LABEL_12;
    v68 = 1;
  }
  *((_DWORD *)this + 46) = v68;
  if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
    return 0LL;
  v4 = v108;
LABEL_12:
  v18 = *((_BYTE *)v15 + 45) & 0x70;
  v19 = *(_BYTE *)(v16 + 27) & 0x70;
  if ( !v19 )
  {
    if ( *((_BYTE *)this + 284) == 2 )
    {
      v19 = *((_BYTE *)v15 + 45) & 0x70;
    }
    else if ( v18 )
    {
      if ( (v14 & 0x800000) != 0 )
        v19 = 16;
      else
        v19 = 32;
    }
  }
  if ( (v19 & 0xF0u) < 0x60 )
    Str2 = (wchar_t *)gpwszFamilyDefaultFonts[(unsigned __int64)v19 >> 4];
  if ( v19 == v18 )
    goto LABEL_25;
  v20 = 0;
  if ( v18 )
  {
    if ( v19 > 0x30u )
    {
      if ( v18 > 0x30u )
      {
LABEL_23:
        v21 = v20 + 9000;
        if ( !v21 )
          goto LABEL_25;
        goto LABEL_24;
      }
    }
    else if ( v18 <= 0x30u )
    {
      goto LABEL_23;
    }
    v20 = 50;
    goto LABEL_23;
  }
  v21 = 8000;
LABEL_24:
  *((_DWORD *)this + 46) += v21;
  v22 = *((_DWORD *)this + 46);
  v23 = *((_DWORD *)this + 45);
  if ( v22 >= v23 && (v22 != v23 || (v14 & 0x1000080) != 0 || *((_DWORD *)v4 + 22) >= *((_DWORD *)this + 52)) )
    return 0LL;
LABEL_25:
  v24 = *((_BYTE *)this + 284);
  if ( v24 == 1 || (v14 & 0x8000000) != 0 )
  {
    v71 = jMapCharset(v24, (struct PFEOBJ *)a2);
    *a3 = v71;
    if ( v24 == 1 && (v14 & 0x8000000) == 0 && MAPPER::DefaultCharset != v71 )
    {
      v72 = v108;
      *((_DWORD *)this + 46) += 2;
      if ( (unsigned int)MAPPER::bNoMatch(this, v72) )
        return 0LL;
    }
  }
  else
  {
    v25 = *((_QWORD *)*a2 + 4);
    v26 = *(int *)(v25 + 40);
    if ( (_DWORD)v26 )
    {
      v27 = *(_BYTE *)(v25 + v26);
      v69 = (_BYTE *)(v25 + v26);
      v70 = v25 + v26 + 16;
      if ( (unsigned __int64)v69 >= v70 )
      {
LABEL_213:
        if ( *((_QWORD *)*a2 + 16) )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
          for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v93 = (char *)Flink + Blink_low;
              v94 = (unsigned __int64)&Flink[1] + Blink_low;
              if ( (unsigned __int64)v93 < v94 )
              {
                while ( *v93 != v24 )
                {
                  if ( *v93 != 1 && (unsigned __int64)++v93 < v94 )
                    continue;
                  goto LABEL_223;
                }
LABEL_224:
                v27 = v24;
                break;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v24 )
            {
              goto LABEL_224;
            }
LABEL_223:
            ;
          }
          v4 = v108;
        }
      }
      else
      {
        while ( *v69 != v24 )
        {
          if ( *v69 != 1 && (unsigned __int64)++v69 < v70 )
            continue;
          goto LABEL_213;
        }
        v27 = *((_BYTE *)this + 284);
      }
    }
    else
    {
      v27 = *(_BYTE *)(v25 + 44);
    }
    *a3 = v27;
    if ( v24 != v27 )
    {
      if ( (v14 & 0x4000000) == 0 )
        goto LABEL_239;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
        return 0LL;
    }
  }
  if ( a4 )
  {
    if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)a2, *((const unsigned __int16 **)this + 2), 0, &v110) )
    {
      if ( v110 )
        ++*((_DWORD *)this + 46);
    }
    else if ( !Str2 || _wcsicmp((const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL)), Str2) )
    {
      *((_DWORD *)this + 46) += 10000;
    }
    else
    {
      *((_DWORD *)this + 46) += 9000;
    }
    v28 = v108;
    if ( (unsigned int)MAPPER::bNoMatch(this, v108) )
      return 0LL;
  }
  else
  {
    v28 = v108;
  }
  v29 = *(MAPPER **)v10;
  v30 = *((_DWORD *)this + 63);
  v31 = *(int *)(*(_QWORD *)v10 + 8LL);
  if ( (v30 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)((char *)v29 + v31) != 64 )
      goto LABEL_239;
  }
  else if ( *(_WORD *)((char *)v29 + v31) == 64 )
  {
    goto LABEL_239;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x3000010) == 0 )
  {
    if ( (v30 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_239;
    v30 = *((_DWORD *)this + 63);
    v32 = *(__int16 **)v10;
    if ( (v30 & 2) != 0 )
      v33 = v32[28];
    else
      v33 = v32[30] + v32[31];
    v34 = *((_DWORD *)this + 41);
    if ( v33 < v34
      && (LOBYTE(v29) = (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x100000) != 0,
          ((unsigned __int8)v29 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
      && v34 > 7 * v33 / 4 )
    {
      if ( !MAPPER::bWin31BitmapHeightScaling(v29, v34, v33, &v110) )
        return 0LL;
      v74 = v110;
      if ( (unsigned int)v110 > 8 )
        v74 = 8;
      *((_DWORD *)this + 49) = v74;
    }
    else
    {
      *((_DWORD *)this + 49) = 1;
    }
    v35 = *((_DWORD *)this + 49);
    v36 = 0;
    if ( v35 > 1 )
    {
      if ( (v30 & 0x800) == 0 && v35 + 2 >= v33 )
        return 0LL;
      v33 *= v35;
      v36 = (20 * v35) | (5 * (v35 - 1));
    }
    if ( v34 >= v33 )
    {
      v38 = 150 * (v34 - v33);
    }
    else
    {
      v37 = v33 - v34;
      if ( (v30 & 0x1080) == 0x1080 )
      {
        if ( v37 > 1 )
          v36 += 150 * (v37 + 20);
LABEL_45:
        if ( v36 )
        {
          *((_DWORD *)this + 46) += v36;
          v39 = *((_DWORD *)this + 46);
          v40 = *((_DWORD *)this + 45);
          if ( v39 >= v40 && (v39 != v40 || (v30 & 0x1000080) != 0 || *((_DWORD *)v28 + 22) >= *((_DWORD *)this + 52)) )
            return 0LL;
          if ( v36 >= 0x2710 && (v30 & 0x4800) == 0 )
            return 0LL;
        }
        goto LABEL_50;
      }
      v38 = 150 * (v37 + 4);
    }
    v36 += v38;
    goto LABEL_45;
  }
LABEL_50:
  v42 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 80LL) + 104LL) & 1) != 0
    && IFIOBJ::lfOutPrecision(v10) == 6
    && (v30 & 0x4000) == 0 )
  {
    v95 = *(MAPPER **)v10;
    v96 = *((_DWORD *)this + 61);
    v97 = *(_DWORD *)(*(_QWORD *)v10 + 128LL);
    if ( (v96 != v97 || *((_DWORD *)this + 62) != *((_DWORD *)v95 + 33))
      && v96 * *((_DWORD *)v95 + 33) != v97 * *((_DWORD *)this + 62) )
    {
      goto LABEL_239;
    }
  }
  v43 = *((_QWORD *)this + 1);
  v44 = *(MAPPER **)v10;
  if ( *(_BYTE *)(v43 + 20) )
  {
    if ( (*((_BYTE *)v44 + 52) & 1) == 0 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic(v10) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v73 = 1;
      }
      else
      {
        v73 = 4;
      }
      *((_DWORD *)this + 46) += v73;
      if ( (unsigned int)MAPPER::bNoMatch(this, v28) )
        return 0LL;
    }
  }
  else if ( (*((_BYTE *)v44 + 52) & 1) != 0 )
  {
    *((_DWORD *)this + 46) += 4;
    if ( (unsigned int)MAPPER::bNoMatch(this, v28) )
      return 0LL;
  }
  v45 = *((unsigned __int16 *)v44 + 23) - *((_DWORD *)this + 43);
  if ( (v30 & 0x200000) != 0 )
  {
    v77 = *((unsigned __int16 *)v44 + 23) - *((_DWORD *)this + 43);
    if ( v45 < 0 )
      v77 = *((_DWORD *)this + 43) - *((unsigned __int16 *)v44 + 23);
    v78 = *((unsigned __int16 *)v44 + 23) - *((_DWORD *)this + 43);
    if ( v45 < 0 )
    {
      v78 = *((_DWORD *)this + 43) - *((unsigned __int16 *)v44 + 23);
      v45 = v78;
    }
    *((_DWORD *)this + 46) += (v45 + 2 * (v78 + 8 * v77)) >> 7;
    if ( (unsigned int)MAPPER::bNoMatch(this, v28) )
      return 0LL;
  }
  else if ( v45 )
  {
    if ( v45 < 0 )
    {
      v45 = *((_DWORD *)this + 43) - *((unsigned __int16 *)v44 + 23);
      if ( v45 > 150 )
      {
        if ( IFIOBJ::pvSimBold(v10) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v45 -= 120;
        }
      }
    }
    *((_DWORD *)this + 46) += (73 * v45) >> 8;
    if ( (unsigned int)MAPPER::bNoMatch(this, v28) )
      return 0LL;
  }
  v46 = v30 & 0x80;
  if ( (v30 & 0x80) == 0 )
  {
    v47 = *(_DWORD *)(*(_QWORD *)v10 + 48LL);
    if ( (v47 & 1) == 0
      && (v47 & 2) != 0
      && ((v30 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v42 + 72LL) < 0
       || ((v30 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62))
       && (*((_DWORD *)v44 + 12) & 0x40000000) == 0) )
    {
      goto LABEL_239;
    }
    v48 = *(_BYTE *)(v43 + 24);
    if ( v48 == 7 && IFIOBJ::lfOutPrecision(v10) != 8 )
      goto LABEL_239;
    if ( v48 == 10 && *((int *)v44 + 12) >= 0 )
      goto LABEL_239;
  }
  v49 = *(_BYTE *)(v43 + 24);
  if ( v49 == 9
    || (v50 = (MAPPER *)gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v49 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v42 + 72LL) & 0x20000000) != 0 )
  {
    if ( v46
      || (v50 = (MAPPER *)*(unsigned int *)(*(_QWORD *)v10 + 48LL), ((unsigned __int8)v50 & 1) == 0)
      && (((unsigned __int8)v50 & 2) != 0 || ((unsigned __int8)v50 & 4) != 0 || ((unsigned __int8)v50 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v57 = *((_DWORD *)this + 46);
      v50 = (MAPPER *)*((unsigned int *)this + 45);
      if ( v57 >= (unsigned int)v50
        && (v57 != (_DWORD)v50 || (v30 & 0x1000080) != 0 || *((_DWORD *)v28 + 22) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  v51 = (_DWORD *)((char *)v44 + 48);
  if ( (*((_DWORD *)v44 + 12) & 0x2000010) != 0 )
    goto LABEL_65;
  v58 = *((__int16 *)v44 + 38);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v43 + 4) )
  {
    if ( (v30 & 0x8000) == 0 && (*v51 & 0x100000) != 0 )
    {
      v79 = *((_DWORD *)this + 62);
      v80 = *((_DWORD *)this + 61);
      if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v79), v80, &Str2) )
        return 0LL;
      v106 = *(_DWORD *)(v81 + 132);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v81 + 128)), v106, &v110)
        || (unsigned int)SafeDivide<long,long,long>((unsigned int)v110, *((unsigned int *)this + 49), &v107) )
      {
        return 0LL;
      }
      v85 = 0;
      if ( v84 != v106 || v80 != v79 )
      {
        v86 = (int)Str2;
        if ( (unsigned int)Str2 <= (3 * v107) >> 1 )
        {
LABEL_270:
          if ( v83 )
          {
            v99 = v82 * *((_DWORD *)this + 48) / v83;
            if ( (int)(v86 - v99) >= 0 )
              v100 = v86 - v99;
            else
              v100 = v99 - v86;
            v5 += 30 * v100;
            goto LABEL_189;
          }
LABEL_239:
          *((_DWORD *)this + 46) = -2;
          return 0LL;
        }
        if ( !v107 )
          goto LABEL_239;
        *((_DWORD *)this + 48) = (unsigned int)Str2 / v107;
LABEL_185:
        v87 = *((_DWORD *)this + 48);
        if ( v87 > 5 )
          v87 = 5;
        *((_DWORD *)this + 48) = v87;
        v5 = 20 * v87;
        if ( v85 && v87 == v83 )
        {
LABEL_189:
          v52 = v108;
          if ( !v5 )
            goto LABEL_66;
          *((_DWORD *)this + 46) += v5;
          if ( !(unsigned int)MAPPER::bNoMatch(this, v52) )
            goto LABEL_66;
          return 0LL;
        }
        v82 = v110;
        goto LABEL_270;
      }
      v85 = 1;
      if ( v83 != 1 )
      {
        v86 = (int)Str2;
        *((_DWORD *)this + 48) = v83;
        goto LABEL_185;
      }
    }
LABEL_65:
    v52 = v108;
    goto LABEL_66;
  }
  if ( (v30 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_239;
  v30 = *((_DWORD *)this + 63);
  v51 = (_DWORD *)(*(_QWORD *)v10 + 48LL);
  LOBYTE(v50) = (*v51 & 0x100000) != 0;
  if ( ((unsigned __int8)v50 & ((v30 & 0x8000) == 0)) != 0 )
  {
    v59 = *((_DWORD *)this + 42);
    if ( v59 > v58 )
    {
      if ( (unsigned int)MAPPER::bWin31BitmapWidthScaling(v50, v59, v58, &v110) )
      {
        v60 = v110;
        if ( (unsigned int)v110 > 5 )
          v60 = 5;
        *((_DWORD *)this + 48) = v60;
        goto LABEL_95;
      }
      return 0LL;
    }
  }
  if ( (*v51 & 0x1000000) != 0 )
  {
    v98 = (unsigned int)(*(__int16 *)(*(_QWORD *)v10 + 60LL) + *(__int16 *)(*(_QWORD *)v10 + 62LL));
    v110 = *((_DWORD *)this + 41) * v58;
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v110, v98, &v110) )
      return 0LL;
    v58 = v110;
  }
LABEL_95:
  v61 = *((_DWORD *)this + 48);
  if ( v61 > 1 )
  {
    v58 *= v61;
    v5 = (v61 - 1) | (20 * v61);
  }
  if ( *((_DWORD *)this + 42) - v58 < 0 )
    v62 = v58 - *((_DWORD *)this + 42);
  else
    v62 = *((_DWORD *)this + 42) - v58;
  v63 = 50 * v62 + v5;
  if ( !v63 )
    goto LABEL_65;
  *((_DWORD *)this + 46) += v63;
  v64 = *((_DWORD *)this + 46);
  v65 = *((_DWORD *)this + 45);
  if ( v64 < v65 )
    goto LABEL_65;
  if ( v64 != v65 || (v30 & 0x1000080) != 0 )
    return 0LL;
  v52 = v108;
  if ( *((_DWORD *)v108 + 22) < *((_DWORD *)this + 52) )
  {
LABEL_66:
    v53 = *((_DWORD *)this + 48);
    if ( v53 <= 1 && *((int *)this + 49) <= 1 )
    {
LABEL_68:
      if ( (*v51 & 0x10) != 0 || (v30 & 0x41000) == 0x41000 )
        goto LABEL_69;
      if ( (v30 & 0x80000) != 0 || (unsigned int)MAPPER::bCalcOrientation(this) )
      {
        v66 = *((_DWORD *)this + 44);
        v67 = v66 - *((_DWORD *)*a2 + 17);
        if ( !v67 )
          goto LABEL_69;
        if ( (*((_DWORD *)this + 63) & 0x480) == 0x480 )
        {
          if ( v67 > v66 )
            v67 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
          v67 %= 0x384u;
        }
        if ( !v67 )
          goto LABEL_69;
        if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x200000) != 0 )
        {
          if ( v67 > v66 )
            v67 = -v67;
          v67 %= 0x384u;
        }
        if ( !v67 )
        {
LABEL_69:
          v54 = *((_DWORD *)this + 63);
          if ( (v54 & 0x400000) != 0 )
          {
            ++*((_DWORD *)this + 46);
            if ( (unsigned int)MAPPER::bNoMatch(this, v52) )
              return 0LL;
          }
          if ( v54 < 0 )
            v55 = (char *)this + 92;
          else
            v55 = (char *)(*((_QWORD *)this + 1) + 348LL);
          v56 = *((_DWORD *)v55 + 1);
          if ( !v56 )
            return 1LL;
          v101 = *(MAPPER **)v10;
          if ( *(_DWORD *)(*(_QWORD *)v10 + 4LL) >= 0x10u )
          {
            v102 = *((int *)v101 + 51);
            if ( (_DWORD)v102 )
            {
              v103 = (char *)v101 + v102;
              if ( v103 )
              {
                v104 = *((_DWORD *)v103 + 1);
                if ( v104 && v56 == v104 && *((_DWORD *)this + 46) <= 0x88B8u )
                  *((_QWORD *)this + 36) = v52;
                v105 = *((_DWORD *)v103 + 1);
                if ( *((_DWORD *)v55 + 1) == v105 && !memcmp(v55 + 8, v103 + 8, 4LL * v105) )
                  return 1LL;
              }
            }
          }
        }
      }
      goto LABEL_239;
    }
    *((_DWORD *)this + 46) += 50;
    v75 = *((_DWORD *)this + 49);
    if ( v53 <= v75 )
    {
      if ( v53 >= v75 )
      {
LABEL_154:
        if ( (unsigned int)MAPPER::bNoMatch(this, v52) )
          return 0LL;
        goto LABEL_68;
      }
      if ( v53 == 1 )
        v76 = 100 * v75;
      else
        v76 = (100 * v75 + v53 / 2) / v53;
    }
    else if ( v75 == 1 )
    {
      v76 = 100 * v53;
    }
    else
    {
      v76 = (100 * v53 + v75 / 2) / v75;
    }
    *((_DWORD *)this + 46) += 4 * v76;
    goto LABEL_154;
  }
  return 0LL;
}
