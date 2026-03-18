/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C000F9E4
 * Callers:
 *     NtGdiLineTo @ 0x1C000F8F0 (NtGdiLineTo.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0049004 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C02797F8 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
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
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  BOOL (__stdcall *v15)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rax
  _DWORD *v16; // rcx
  int v17; // edx
  int v18; // r8d
  LONG v19; // r12d
  unsigned int *v20; // r10
  int v21; // r9d
  LONG v22; // r13d
  int x; // r14d
  int y; // esi
  __int64 v25; // rsi
  LONG v26; // ecx
  int v27; // r15d
  DC *v28; // rcx
  unsigned int v29; // r14d
  int v30; // r13d
  int v31; // eax
  DC *v32; // rdx
  unsigned int v33; // r8d
  int v34; // esi
  int v35; // r12d
  int v36; // r8d
  int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  char *v40; // r15
  struct REGION *v41; // rax
  char *v42; // r15
  __int64 v43; // r8
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rdx
  DC *v47; // rcx
  int v48; // r14d
  DC *v49; // rcx
  struct _POINTFIX Current; // rax
  DC *v51; // r9
  __int64 v53; // [rsp+28h] [rbp-D8h]
  int v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+50h] [rbp-B0h]
  struct _POINTL v56[2]; // [rsp+60h] [rbp-A0h] BYREF
  LONG v57; // [rsp+70h] [rbp-90h]
  LONG v58; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v59; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v60; // [rsp+80h] [rbp-80h]
  DC *v61[6]; // [rsp+88h] [rbp-78h] BYREF
  int v62; // [rsp+B8h] [rbp-48h]
  LINEATTRS *v63; // [rsp+C0h] [rbp-40h]
  BOOL (__stdcall *v64)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+C8h] [rbp-38h]
  struct _XFORMOBJ v65[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-20h]
  _BYTE v67[112]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v68; // [rsp+160h] [rbp+60h] BYREF
  PATHOBJ ppo; // [rsp+170h] [rbp+70h] BYREF
  __int64 v70; // [rsp+178h] [rbp+78h]

  v3 = a2;
  v57 = a2;
  v58 = a3;
  v4 = a3;
  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v61, a1);
  v6 = 0;
  if ( !v61[0] )
  {
    v5 = 0;
    EngSetLastError(6u);
    goto LABEL_73;
  }
  if ( (*((_DWORD *)v61[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v5 = 0;
LABEL_73:
    v6 = v5;
    goto LABEL_74;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v65, (struct XDCOBJ *)v61, 0x204u);
  v7 = v61[0];
  v8 = *((_QWORD *)v61[0] + 10);
  v9 = (LINEATTRS *)((char *)v61[0] + 184);
  v63 = (LINEATTRS *)((char *)v61[0] + 184);
  v10 = *(_DWORD *)(v8 + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v61[0], *(_QWORD *)(v8 + 16));
    v7 = v61[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 10) + 24LL));
    v7 = v61[0];
  }
  if ( (v9->fl & 0xB) != 0
    || (*((_DWORD *)v7 + 44) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v65[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 10) + 68LL) == 2 )
  {
    goto LABEL_58;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v67, (struct XDCOBJ *)v61, 0);
  v11 = v61[0];
  v12 = *((_QWORD *)v61[0] + 6);
  if ( (v67[24] & 1) == 0 )
  {
    v5 = XDCOBJ::bFullScreen((XDCOBJ *)v61);
    goto LABEL_64;
  }
  v13 = *((_QWORD *)v61[0] + 64);
  v66 = v13;
  if ( !v13 )
    goto LABEL_62;
  v14 = *(_DWORD *)(v13 + 112);
  if ( (v14 & 0x100) != 0 )
  {
    v15 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v12 + 2960);
  }
  else
  {
    if ( *(_WORD *)(v13 + 100) || (v14 & 0x20) != 0 )
      goto LABEL_62;
    v15 = EngLineTo;
  }
  v64 = v15;
  if ( !v15 )
  {
LABEL_62:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v67);
    goto LABEL_57;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v65[0].ulReserved + 32LL) & 2) != 0 )
  {
    v16 = (_DWORD *)*((_QWORD *)v61[0] + 10);
    v17 = *(int *)(*(_QWORD *)&v65[0].ulReserved + 24LL) >> 4;
    v18 = *(int *)(*(_QWORD *)&v65[0].ulReserved + 28LL) >> 4;
    v19 = v18 + v4;
    v20 = v16 + 2;
    v21 = v16[2];
    v22 = v3 + v17;
    if ( (v21 & 0x100) != 0 )
    {
      x = (int)v16[21] >> 4;
      y = (int)v16[22] >> 4;
    }
    else
    {
      x = v17 + v16[19];
      y = v18 + v16[20];
    }
  }
  else
  {
    v25 = *((_QWORD *)v61[0] + 10);
    v56[0].x = v3;
    v56[0].y = v4;
    v60 = (unsigned int *)(v25 + 8);
    v54 = *(_DWORD *)(v25 + 8);
    if ( (v54 & 0x200) != 0 )
    {
      v56[1] = *(struct _POINTL *)(v25 + 76);
      EXFORMOBJ::bXform((EXFORMOBJ *)v65, v56, 2uLL);
      x = v56[1].x;
      y = v56[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v65, v56, 1uLL);
      x = *(int *)(v25 + 84) >> 4;
      y = *(int *)(v25 + 88) >> 4;
    }
    v22 = v56[0].x;
    v19 = v56[0].y;
    v21 = v54;
    v20 = v60;
  }
  if ( (unsigned int)(v22 + 134217726) > 0xFFFFFFC || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v26 = v57;
    *v20 = v21 & 0xFFFFFCFF;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 76LL) = v26;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 80LL) = v58;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 84LL) = 16 * v22;
    *(_DWORD *)(*((_QWORD *)v11 + 10) + 88LL) = 16 * v19;
    v27 = *(_DWORD *)DC::eptlOrigin(v61[0]);
    v62 = v27;
    v29 = v27 + x;
    v30 = v27 + v22;
    v31 = *((_DWORD *)DC::eptlOrigin(v28) + 1);
    v34 = v31 + y;
    v35 = v31 + v19;
    v55 = v31;
    if ( v29 + 134217726 <= v33 && v34 + 134217726 <= v33 && v30 + 134217726 <= v33 && v35 + 134217726 <= v33 )
    {
      if ( (int)v29 > v30 )
      {
        v36 = v30;
        LODWORD(v68) = v30;
        v37 = v29 + 1;
      }
      else
      {
        v36 = v29;
        LODWORD(v68) = v29;
        v37 = v30 + 1;
      }
      DWORD2(v68) = v37;
      if ( v34 > v35 )
      {
        v38 = v35;
        DWORD1(v68) = v35;
        v39 = v34 + 1;
      }
      else
      {
        v38 = v34;
        DWORD1(v68) = v34;
        v39 = v35 + 1;
      }
      HIDWORD(v68) = v39;
      if ( (*((_DWORD *)v32 + 9) & 0xE0) != 0 )
      {
        *(_OWORD *)&v56[0].x = v68;
        XDCOBJ::vAccumulate((XDCOBJ *)v61, v32, (struct ERECTL *)v56);
        v37 = DWORD2(v68);
        v36 = v68;
        v32 = v61[0];
        v39 = HIDWORD(v68);
        v38 = DWORD1(v68);
      }
      if ( *((struct PEN **)v32 + 19) != gpPenNull )
      {
        v60 = 0LL;
        if ( v36 >= *((_DWORD *)v32 + 348)
          && v37 <= *((_DWORD *)v32 + 350)
          && v38 >= *((_DWORD *)v32 + 349)
          && v39 <= *((_DWORD *)v32 + 351) )
        {
LABEL_48:
          v42 = (char *)v32 + 1728;
          if ( *((_DWORD *)v32 + 432) == -1 )
          {
            *(_DWORD *)(*((_QWORD *)v32 + 10) + 8LL) |= 2u;
            v32 = v61[0];
          }
          v43 = *((_QWORD *)v32 + 10);
          v44 = *(_DWORD *)(v43 + 8);
          if ( (((unsigned __int8)v44 | *((_BYTE *)v32 + 332)) & 2) != 0 )
          {
            *(_DWORD *)(v43 + 8) = v44 & 0xFFFFFFFD;
            v45 = v66;
            v53 = v66;
            *((_DWORD *)v61[0] + 83) &= ~2u;
            EBRUSHOBJ::vInitBrush(
              v42,
              v61[0],
              *((_QWORD *)v61[0] + 19),
              *((_QWORD *)v61[0] + 12),
              *(_QWORD *)(v45 + 120),
              v53,
              0);
            v32 = v61[0];
          }
          if ( (*((_DWORD *)v32 + 9) & 0xE0) != 0 && (*((_DWORD *)v42 + 32) & 0x100) == 0 )
          {
            *(_OWORD *)&v56[0].x = v68;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v61, v32, (struct ERECTL *)v56);
          }
          v46 = v66;
          ++*(_DWORD *)(v66 + 92);
          if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, char *, _QWORD, int, int, int, __int128 *, int))v64)(
                  v46 + 24,
                  v60,
                  v42,
                  v29,
                  v34,
                  v30,
                  v35,
                  &v68,
                  ((((*(_BYTE *)(*((_QWORD *)v61[0] + 10) + 72LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v61[0] + 10) + 72LL)
                                                                                            - 1) & 0xF)
                                                                                          + 1)) )
          {
            v47 = v61[0];
            v48 = 16 * (v29 - v62);
            *(_DWORD *)(*((_QWORD *)v61[0] + 10) + 8LL) &= ~0x200u;
            *(_DWORD *)(*((_QWORD *)v47 + 10) + 8LL) |= 0x100u;
            *(_DWORD *)(*((_QWORD *)v47 + 10) + 84LL) = v48;
            *(_DWORD *)(*((_QWORD *)v47 + 10) + 88LL) = 16 * (v34 - v55);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v67);
            v3 = v57;
            v4 = v58;
LABEL_57:
            v9 = v63;
LABEL_58:
            v59.x = v3;
            v59.y = v4;
            PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v61, 1);
            if ( v70 )
            {
              if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v65, &v59, 1u) )
              {
                Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
                v51 = v61[0];
                *(_DWORD *)(*((_QWORD *)v61[0] + 10) + 8LL) &= 0xFFFFFCFF;
                *(struct _POINTL *)(*((_QWORD *)v51 + 10) + 76LL) = v59;
                *(_DWORD *)(*((_QWORD *)v51 + 10) + 84LL) = *(_DWORD *)Current.x;
                *(_DWORD *)(*((_QWORD *)v51 + 10) + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
                if ( (*((_DWORD *)v61[0] + 44) & 1) == 0
                  && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v61, v9, v65, 1u) )
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
            goto LABEL_73;
          }
          goto LABEL_64;
        }
        v40 = (char *)v32 + 2184;
        v60 = (unsigned int *)((char *)v32 + 2184);
        v41 = XDCOBJ::prgnEffRao((XDCOBJ *)v61);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v41, (struct ERECTL *)&v68, 0);
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v40 + 4)) )
        {
          v32 = v61[0];
          goto LABEL_48;
        }
      }
LABEL_64:
      v6 = v5;
      goto LABEL_65;
    }
    EngSetLastError(0x57u);
    v49 = v61[0];
    *(_DWORD *)(*((_QWORD *)v61[0] + 10) + 8LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v49 + 10) + 8LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v49 + 10) + 84LL) = 16 * (v29 - v27);
    *(_DWORD *)(*((_QWORD *)v49 + 10) + 88LL) = 16 * (v34 - v55);
  }
LABEL_65:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v67);
LABEL_74:
  DCOBJ::~DCOBJ((DCOBJ *)v61);
  return v6;
}
