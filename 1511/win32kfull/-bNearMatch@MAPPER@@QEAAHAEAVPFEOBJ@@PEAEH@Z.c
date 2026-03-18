/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001F8E0
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C001F280 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028735C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C02874FC (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C001D7F8 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C001D81C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C001D83C (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C001E44C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C001E468 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C001EA78 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C001F12C (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z @ 0x1C001F170 (-bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C001F1BC (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00203CC (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0020454 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00F0B68 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C0101F58 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     memcmp @ 0x1C0151300 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B37C4 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
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
  int v66; // eax
  unsigned int v67; // r9d
  unsigned int v68; // r8d
  _BYTE *v69; // r9
  unsigned __int64 v70; // rcx
  char v71; // al
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
  unsigned int v82; // r13d
  int v83; // ecx
  unsigned int v84; // r10d
  int v85; // r11d
  int v86; // r8d
  int v87; // r11d
  unsigned int v88; // ecx
  int v89; // r9d
  struct tagPvtData *v90; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v95; // rax
  unsigned __int64 v96; // r8
  MAPPER *v97; // rcx
  int v98; // edx
  int v99; // r8d
  __int64 v100; // rdx
  unsigned int v101; // eax
  int v102; // eax
  MAPPER *v103; // r8
  __int64 v104; // rdx
  char *v105; // rdx
  int v106; // r8d
  unsigned int v107; // eax
  unsigned int v108; // [rsp+20h] [rbp-58h] BYREF
  struct PFE *v109; // [rsp+28h] [rbp-50h]
  _QWORD v110[2]; // [rsp+30h] [rbp-48h] BYREF
  int v111; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *Str2; // [rsp+88h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0;
  *((_DWORD *)this + 63) &= 0xFFFFB7FF;
  v109 = v4;
  Str2 = 0LL;
  if ( *a2 == gppfeMapperDefault )
    *((_DWORD *)this + 63) |= 0x4000u;
  v10 = (MAPPER *)((char *)this + 256);
  *((_QWORD *)this + 32) = *((_QWORD *)*a2 + 4);
  if ( (*((_DWORD *)*a2 + 3) & 2) != 0 )
    goto LABEL_202;
  v11 = *(_QWORD *)*a2;
  v12 = gpPFTPrivate;
  v110[0] = v11;
  if ( *(struct PFT **const *)(v11 + 128) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v110) )
      goto LABEL_202;
    v12 = gpPFTPrivate;
    v4 = v109;
  }
  v13 = *a2;
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_202;
  if ( *(struct PFT **)(*(_QWORD *)v13 + 128LL) != *v12 )
    goto LABEL_7;
  v110[0] = *(_QWORD *)v13;
  v90 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v110);
  if ( v90 )
  {
    if ( (*((_DWORD *)v90 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_202:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v4 = v109;
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
      v66 = 15000;
    }
    else
    {
      if ( (*((_BYTE *)v15 + 45) & 2) != 0 )
        goto LABEL_12;
      v66 = 350;
    }
  }
  else
  {
    if ( (*((_BYTE *)v15 + 45) & 1) == 0 )
      goto LABEL_12;
    v66 = 1;
  }
  *((_DWORD *)this + 46) = v66;
  if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
    return 0LL;
  v4 = v109;
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
      v72 = v109;
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
LABEL_215:
        if ( *((_QWORD *)*a2 + 16) )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
          for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v95 = (char *)Flink + Blink_low;
              v96 = (unsigned __int64)&Flink[1] + Blink_low;
              if ( (unsigned __int64)v95 < v96 )
              {
                while ( *v95 != v24 )
                {
                  if ( *v95 != 1 && (unsigned __int64)++v95 < v96 )
                    continue;
                  goto LABEL_225;
                }
LABEL_226:
                v27 = v24;
                break;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v24 )
            {
              goto LABEL_226;
            }
LABEL_225:
            ;
          }
          v4 = v109;
        }
      }
      else
      {
        while ( *v69 != v24 )
        {
          if ( *v69 != 1 && (unsigned __int64)++v69 < v70 )
            continue;
          goto LABEL_215;
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
        goto LABEL_240;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
        return 0LL;
    }
  }
  if ( a4 )
  {
    if ( (unsigned int)PFEOBJ::bCheckFamilyName(
                         (PFEOBJ *)a2,
                         *((const unsigned __int16 **)this + 2),
                         0,
                         (unsigned int *)&v111) )
    {
      if ( v111 )
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
    v28 = v109;
    if ( (unsigned int)MAPPER::bNoMatch(this, v109) )
      return 0LL;
  }
  else
  {
    v28 = v109;
  }
  v29 = *(MAPPER **)v10;
  v30 = *((_DWORD *)this + 63);
  v31 = *(int *)(*(_QWORD *)v10 + 8LL);
  if ( (v30 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)((char *)v29 + v31) != 64 )
      goto LABEL_240;
  }
  else if ( *(_WORD *)((char *)v29 + v31) == 64 )
  {
    goto LABEL_240;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x3000010) == 0 )
  {
    if ( (v30 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_240;
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
      if ( !MAPPER::bWin31BitmapHeightScaling(v29, v34, v33, &v111) )
        return 0LL;
      v74 = v111;
      if ( (unsigned int)v111 > 8 )
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
    v97 = *(MAPPER **)v10;
    v98 = *((_DWORD *)this + 61);
    v99 = *(_DWORD *)(*(_QWORD *)v10 + 128LL);
    if ( (v98 != v99 || *((_DWORD *)this + 62) != *((_DWORD *)v97 + 33))
      && v98 * *((_DWORD *)v97 + 33) != v99 * *((_DWORD *)this + 62) )
    {
      goto LABEL_240;
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
      goto LABEL_240;
    }
    v48 = *(_BYTE *)(v43 + 24);
    if ( v48 == 7 && IFIOBJ::lfOutPrecision(v10) != 8 )
      goto LABEL_240;
    if ( v48 == 10 && *((int *)v44 + 12) >= 0 )
      goto LABEL_240;
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
      v82 = *(_DWORD *)(v81 + 132);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v81 + 128)), v82, &v111)
        || (unsigned int)SafeDivide<long,long,long>((unsigned int)v111, *((unsigned int *)this + 49), &v108) )
      {
        return 0LL;
      }
      v86 = 0;
      if ( v85 != v82 || v80 != v79 )
      {
        v87 = (int)Str2;
        if ( (unsigned int)Str2 <= (3 * v108) >> 1 )
        {
          v89 = 0;
LABEL_272:
          if ( v84 )
          {
            v101 = v83 * *((_DWORD *)this + 48) / v84;
            if ( (int)(v87 - v101) >= 0 )
              v102 = v87 - v101;
            else
              v102 = v101 - v87;
            v89 += 30 * v102;
            goto LABEL_188;
          }
LABEL_240:
          *((_DWORD *)this + 46) = -2;
          return 0LL;
        }
        if ( !v108 )
          goto LABEL_240;
        *((_DWORD *)this + 48) = (unsigned int)Str2 / v108;
LABEL_184:
        v88 = *((_DWORD *)this + 48);
        if ( v88 > 5 )
          v88 = 5;
        *((_DWORD *)this + 48) = v88;
        v89 = 20 * v88;
        if ( v86 && v88 == v84 )
        {
LABEL_188:
          v52 = v109;
          if ( !v89 )
            goto LABEL_66;
          *((_DWORD *)this + 46) += v89;
          if ( !(unsigned int)MAPPER::bNoMatch(this, v52) )
            goto LABEL_66;
          return 0LL;
        }
        v83 = v111;
        goto LABEL_272;
      }
      v86 = 1;
      if ( v84 != 1 )
      {
        v87 = (int)Str2;
        *((_DWORD *)this + 48) = v84;
        goto LABEL_184;
      }
    }
LABEL_65:
    v52 = v109;
    goto LABEL_66;
  }
  if ( (v30 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_240;
  v30 = *((_DWORD *)this + 63);
  v51 = (_DWORD *)(*(_QWORD *)v10 + 48LL);
  LOBYTE(v50) = (*v51 & 0x100000) != 0;
  if ( ((unsigned __int8)v50 & ((v30 & 0x8000) == 0)) != 0 )
  {
    v59 = *((_DWORD *)this + 42);
    if ( v59 > v58 )
    {
      if ( (unsigned int)MAPPER::bWin31BitmapWidthScaling(v50, v59, v58, &v111) )
      {
        v60 = v111;
        if ( (unsigned int)v111 > 5 )
          v60 = 5;
        *((_DWORD *)this + 48) = v60;
        goto LABEL_95;
      }
      return 0LL;
    }
  }
  if ( (*v51 & 0x1000000) != 0 )
  {
    v100 = (unsigned int)(*(__int16 *)(*(_QWORD *)v10 + 60LL) + *(__int16 *)(*(_QWORD *)v10 + 62LL));
    v111 = *((_DWORD *)this + 41) * v58;
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v111, v100, &v111) )
      return 0LL;
    v58 = v111;
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
  v52 = v109;
  if ( *((_DWORD *)v109 + 22) < *((_DWORD *)this + 52) )
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
        v67 = *((_DWORD *)this + 44);
        v68 = v67 - *((_DWORD *)*a2 + 17);
        if ( !v68 )
          goto LABEL_69;
        if ( (*((_DWORD *)this + 63) & 0x480) == 0x480 )
        {
          if ( v68 > v67 )
            v68 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
          v68 %= 0x384u;
        }
        if ( !v68 )
          goto LABEL_69;
        if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x200000) != 0 )
        {
          if ( v68 > v67 )
            v68 = -v68;
          v68 %= 0x384u;
        }
        if ( !v68 )
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
          v103 = *(MAPPER **)v10;
          if ( *(_DWORD *)(*(_QWORD *)v10 + 4LL) >= 0x10u )
          {
            v104 = *((int *)v103 + 51);
            if ( (_DWORD)v104 )
            {
              v105 = (char *)v103 + v104;
              if ( v105 )
              {
                v106 = *((_DWORD *)v105 + 1);
                if ( v106 && v56 == v106 && *((_DWORD *)this + 46) <= 0x88B8u )
                  *((_QWORD *)this + 36) = v52;
                v107 = *((_DWORD *)v105 + 1);
                if ( *((_DWORD *)v55 + 1) == v107 && !memcmp(v55 + 8, v105 + 8, 4LL * v107) )
                  return 1LL;
              }
            }
          }
        }
      }
      goto LABEL_240;
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
