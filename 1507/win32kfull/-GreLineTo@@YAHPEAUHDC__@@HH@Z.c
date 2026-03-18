/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E6364
 * Callers:
 *     NtGdiLineTo @ 0x1C00E62C0 (NtGdiLineTo.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019A54 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027C0C8 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  LONG v4; // r12d
  int v5; // ebx
  unsigned int v6; // edi
  DC *v7; // r8
  __int64 v8; // rdx
  LINEATTRS *v9; // r15
  int v10; // esi
  DC *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rax
  _DWORD *v15; // rcx
  int v16; // edx
  int v17; // r8d
  LONG v18; // r12d
  unsigned int *v19; // r10
  int v20; // r9d
  LONG v21; // r13d
  int x; // r14d
  int y; // esi
  __int64 v24; // rsi
  LONG v25; // ecx
  int v26; // r15d
  DC *v27; // rcx
  unsigned int v28; // r14d
  int v29; // r13d
  int v30; // eax
  DC *v31; // rdx
  unsigned int v32; // r8d
  int v33; // esi
  int v34; // r12d
  int v35; // r8d
  int v36; // r9d
  int v37; // r10d
  int v38; // r11d
  char *v39; // r15
  struct REGION *v40; // rax
  char *v41; // r15
  __int64 v42; // r8
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rdx
  DC *v46; // rcx
  int v47; // r14d
  DC *v48; // rcx
  struct _POINTFIX Current; // rax
  DC *v50; // r9
  __int64 v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+50h] [rbp-B0h]
  struct _POINTL v55[2]; // [rsp+60h] [rbp-A0h] BYREF
  LONG v56; // [rsp+70h] [rbp-90h]
  LONG v57; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v58; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v59; // [rsp+80h] [rbp-80h]
  DC *v60[6]; // [rsp+88h] [rbp-78h] BYREF
  LINEATTRS *v61; // [rsp+B8h] [rbp-48h]
  int v62; // [rsp+C0h] [rbp-40h]
  struct _XFORMOBJ v63[2]; // [rsp+C8h] [rbp-38h] BYREF
  BOOL (__stdcall *v64)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+D8h] [rbp-28h]
  __int64 v65; // [rsp+E0h] [rbp-20h]
  _BYTE v66[112]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v67; // [rsp+160h] [rbp+60h] BYREF
  PATHOBJ ppo; // [rsp+170h] [rbp+70h] BYREF
  __int64 v69; // [rsp+178h] [rbp+78h]

  v3 = a2;
  v57 = a2;
  v56 = a3;
  v4 = a3;
  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v60, a1);
  v6 = 0;
  if ( !v60[0] )
  {
    v5 = 0;
    EngSetLastError(6u);
    goto LABEL_74;
  }
  if ( (*((_DWORD *)v60[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v5 = 0;
LABEL_74:
    v6 = v5;
    goto LABEL_75;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v63, (struct XDCOBJ *)v60, 0x204u);
  v7 = v60[0];
  v8 = *((_QWORD *)v60[0] + 10);
  v9 = (LINEATTRS *)((char *)v60[0] + 184);
  v61 = (LINEATTRS *)((char *)v60[0] + 184);
  v10 = *(_DWORD *)(v8 + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v60[0], *(_QWORD *)(v8 + 16));
    v7 = v60[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 10) + 24LL));
    v7 = v60[0];
  }
  if ( (v9->fl & 0xB) != 0
    || (*((_DWORD *)v7 + 44) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v63[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 10) + 68LL) == 2 )
  {
    goto LABEL_58;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v66, (struct XDCOBJ *)v60, 0);
  if ( (v66[24] & 1) == 0 )
  {
    v5 = XDCOBJ::bFullScreen((XDCOBJ *)v60);
    goto LABEL_65;
  }
  if ( !(unsigned int)XDCOBJ::bHasSurface((XDCOBJ *)v60) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
    goto LABEL_58;
  }
  v11 = v60[0];
  v12 = *((_QWORD *)v60[0] + 64);
  v65 = v12;
  v13 = *(_DWORD *)(v12 + 112);
  if ( (v13 & 0x100) != 0 )
  {
    v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v60[0] + 6) + 2968LL);
  }
  else
  {
    if ( *(_WORD *)(v12 + 100) || (v13 & 0x20) != 0 )
      goto LABEL_62;
    v14 = EngLineTo;
  }
  v64 = v14;
  if ( !v14 )
  {
LABEL_62:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
    goto LABEL_57;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v63[0].ulReserved + 32LL) & 2) != 0 )
  {
    v15 = (_DWORD *)*((_QWORD *)v60[0] + 10);
    v16 = *(int *)(*(_QWORD *)&v63[0].ulReserved + 24LL) >> 4;
    v17 = *(int *)(*(_QWORD *)&v63[0].ulReserved + 28LL) >> 4;
    v18 = v17 + v4;
    v19 = v15 + 2;
    v20 = v15[2];
    v21 = v3 + v16;
    if ( (v20 & 0x100) != 0 )
    {
      x = (int)v15[21] >> 4;
      y = (int)v15[22] >> 4;
    }
    else
    {
      x = v16 + v15[19];
      y = v17 + v15[20];
    }
  }
  else
  {
    v24 = *((_QWORD *)v60[0] + 10);
    v55[0].x = v3;
    v55[0].y = v4;
    v59 = (unsigned int *)(v24 + 8);
    v53 = *(_DWORD *)(v24 + 8);
    if ( (v53 & 0x200) != 0 )
    {
      v55[1] = *(struct _POINTL *)(v24 + 76);
      EXFORMOBJ::bXform((EXFORMOBJ *)v63, v55, 2LL);
      x = v55[1].x;
      y = v55[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v63, v55, 1LL);
      x = *(int *)(v24 + 84) >> 4;
      y = *(int *)(v24 + 88) >> 4;
    }
    v21 = v55[0].x;
    v18 = v55[0].y;
    v20 = v53;
    v19 = v59;
  }
  if ( (unsigned int)(v21 + 134217726) > 0xFFFFFFC || (unsigned int)(v18 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v25 = v57;
    *v19 = v20 & 0xFFFFFCFF;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 76LL) = v25;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 80LL) = v56;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 84LL) = 16 * v21;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 88LL) = 16 * v18;
    v26 = *(_DWORD *)DC::eptlOrigin(v60[0]);
    v62 = v26;
    v28 = v26 + x;
    v29 = v26 + v21;
    v30 = *((_DWORD *)DC::eptlOrigin(v27) + 1);
    v33 = v30 + y;
    v34 = v30 + v18;
    v54 = v30;
    if ( v28 + 134217726 <= v32 && v33 + 134217726 <= v32 && v29 + 134217726 <= v32 && v34 + 134217726 <= v32 )
    {
      if ( (int)v28 > v29 )
      {
        v35 = v29;
        LODWORD(v67) = v29;
        v36 = v28 + 1;
      }
      else
      {
        v35 = v28;
        LODWORD(v67) = v28;
        v36 = v29 + 1;
      }
      DWORD2(v67) = v36;
      if ( v33 > v34 )
      {
        v37 = v34;
        DWORD1(v67) = v34;
        v38 = v33 + 1;
      }
      else
      {
        v37 = v33;
        DWORD1(v67) = v33;
        v38 = v34 + 1;
      }
      HIDWORD(v67) = v38;
      if ( (*((_DWORD *)v31 + 9) & 0xE0) != 0 )
      {
        *(_OWORD *)&v55[0].x = v67;
        XDCOBJ::vAccumulate(v60, v31, (__m128i *)v55);
        v36 = DWORD2(v67);
        v35 = v67;
        v31 = v60[0];
        v38 = HIDWORD(v67);
        v37 = DWORD1(v67);
      }
      if ( *((struct PEN **)v31 + 19) != gpPenNull )
      {
        v59 = 0LL;
        if ( v35 >= *((_DWORD *)v31 + 348)
          && v36 <= *((_DWORD *)v31 + 350)
          && v37 >= *((_DWORD *)v31 + 349)
          && v38 <= *((_DWORD *)v31 + 351) )
        {
LABEL_48:
          v41 = (char *)v31 + 1728;
          if ( *((_DWORD *)v31 + 432) == -1 )
          {
            *(_DWORD *)(*((_QWORD *)v31 + 10) + 8LL) |= 2u;
            v31 = v60[0];
          }
          v42 = *((_QWORD *)v31 + 10);
          v43 = *(_DWORD *)(v42 + 8);
          if ( (((unsigned __int8)v43 | *((_BYTE *)v31 + 332)) & 2) != 0 )
          {
            *(_DWORD *)(v42 + 8) = v43 & 0xFFFFFFFD;
            v44 = v65;
            HIDWORD(v52) = HIDWORD(v65);
            *((_DWORD *)v60[0] + 83) &= ~2u;
            EBRUSHOBJ::vInitBrush(
              v41,
              v60[0],
              *((_QWORD *)v60[0] + 19),
              *((_QWORD *)v60[0] + 12),
              *(_QWORD *)(v44 + 120));
            v31 = v60[0];
          }
          if ( (*((_DWORD *)v31 + 9) & 0xE0) != 0 && (*((_DWORD *)v41 + 32) & 0x100) == 0 )
          {
            *(_OWORD *)&v55[0].x = v67;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v60, v31, (struct _RECTL *)v55);
          }
          v45 = v65;
          ++*(_DWORD *)(v65 + 92);
          LODWORD(v52) = v29;
          if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, char *, _QWORD, int, __int64, int, __int128 *, int))v64)(
                  v45 + 24,
                  v59,
                  v41,
                  v28,
                  v33,
                  v52,
                  v34,
                  &v67,
                  ((((*(_BYTE *)(*((_QWORD *)v60[0] + 10) + 72LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v60[0] + 10) + 72LL)
                                                                                            - 1) & 0xF)
                                                                                          + 1)) )
          {
            v46 = v60[0];
            v47 = 16 * (v28 - v62);
            *(_DWORD *)(*((_QWORD *)v60[0] + 10) + 8LL) &= ~0x200u;
            *(_DWORD *)(*((_QWORD *)v46 + 10) + 8LL) |= 0x100u;
            *(_DWORD *)(*((_QWORD *)v46 + 10) + 84LL) = v47;
            *(_DWORD *)(*((_QWORD *)v46 + 10) + 88LL) = 16 * (v33 - v54);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
            v3 = v57;
            v4 = v56;
LABEL_57:
            v9 = v61;
LABEL_58:
            v58.x = v3;
            v58.y = v4;
            PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, v60, 1);
            if ( v69 )
            {
              if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v63, &v58, 1u) )
              {
                Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
                v50 = v60[0];
                *(_DWORD *)(*((_QWORD *)v60[0] + 10) + 8LL) &= 0xFFFFFCFF;
                *(struct _POINTL *)(*((_QWORD *)v50 + 10) + 76LL) = v58;
                *(_DWORD *)(*((_QWORD *)v50 + 10) + 84LL) = *(_DWORD *)Current.x;
                *(_DWORD *)(*((_QWORD *)v50 + 10) + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
                if ( (*((_DWORD *)v60[0] + 44) & 1) == 0
                  && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v60, v9, v63, 1u) )
                {
                  v5 = 0;
                }
              }
            }
            else
            {
              EngSetLastError(8u);
            }
            XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
            goto LABEL_74;
          }
          goto LABEL_65;
        }
        v39 = (char *)v31 + 2184;
        v59 = (unsigned int *)((char *)v31 + 2184);
        v40 = XDCOBJ::prgnEffRao((XDCOBJ *)v60);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v39, v40, (struct ERECTL *)&v67, 0);
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v39 + 4)) )
        {
          v31 = v60[0];
          goto LABEL_48;
        }
      }
LABEL_65:
      v6 = v5;
      goto LABEL_66;
    }
    EngSetLastError(0x57u);
    v48 = v60[0];
    *(_DWORD *)(*((_QWORD *)v60[0] + 10) + 8LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v48 + 10) + 8LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v48 + 10) + 84LL) = 16 * (v28 - v26);
    *(_DWORD *)(*((_QWORD *)v48 + 10) + 88LL) = 16 * (v33 - v54);
  }
LABEL_66:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
LABEL_75:
  DCOBJ::~DCOBJ((DCOBJ *)v60);
  return v6;
}
