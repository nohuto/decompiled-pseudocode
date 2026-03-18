/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013BD04
 * Callers:
 *     NtGdiLineTo @ 0x1C013BC60 (NtGdiLineTo.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C013C228 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027B610 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  unsigned int v4; // ebx
  LONG v5; // r12d
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
  char *v42; // r15
  __int64 v43; // r8
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rsi
  DC *v48; // rcx
  int v49; // r14d
  int v50; // esi
  DC *v51; // rcx
  int v52; // esi
  struct _POINTFIX Current; // rax
  DC *v54; // r9
  __int64 v55; // [rsp+28h] [rbp-D8h]
  DC *v56[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+60h] [rbp-A0h]
  struct _POINTL v58[2]; // [rsp+70h] [rbp-90h] BYREF
  LONG v59; // [rsp+80h] [rbp-80h]
  LONG v60; // [rsp+84h] [rbp-7Ch]
  unsigned int *v61; // [rsp+88h] [rbp-78h]
  struct _POINTL v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+98h] [rbp-68h]
  LINEATTRS *v64; // [rsp+A0h] [rbp-60h]
  BOOL (__stdcall *v65)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+A8h] [rbp-58h]
  struct _XFORMOBJ v66[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-40h]
  _BYTE v68[80]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v69; // [rsp+120h] [rbp+20h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+30h] BYREF
  __int64 v71; // [rsp+138h] [rbp+38h]

  v3 = a2;
  v59 = a2;
  v60 = a3;
  v4 = 0;
  v5 = a3;
  v56[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)v56, a1);
  if ( v56[0] )
  {
    if ( (*((_DWORD *)v56[0] + 9) & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      v6 = 0;
LABEL_77:
      XDCOBJ::vUnlockFast((XDCOBJ *)v56);
      return v6;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v66, (struct XDCOBJ *)v56, 0x204u);
    v7 = v56[0];
    v8 = *((_QWORD *)v56[0] + 10);
    v9 = (LINEATTRS *)((char *)v56[0] + 184);
    v64 = (LINEATTRS *)((char *)v56[0] + 184);
    v10 = *(_DWORD *)(v8 + 8);
    if ( (v10 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v56[0], *(_QWORD *)(v8 + 16));
      v7 = v56[0];
    }
    if ( (v10 & 0x2000) != 0 )
    {
      GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 10) + 24LL));
      v7 = v56[0];
    }
    if ( (v9->fl & 0xB) != 0
      || (*((_DWORD *)v7 + 44) & 1) != 0
      || (*(_DWORD *)(*(_QWORD *)&v66[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 10) + 68LL) == 2 )
    {
LABEL_60:
      v62.x = v3;
      v62.y = v5;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, v56, 1);
      if ( v71 )
      {
        if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v66, &v62, 1u) )
        {
          Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
          v54 = v56[0];
          *(_DWORD *)(*((_QWORD *)v56[0] + 10) + 8LL) &= 0xFFFFFCFF;
          *(struct _POINTL *)(*((_QWORD *)v54 + 10) + 76LL) = v62;
          *(_DWORD *)(*((_QWORD *)v54 + 10) + 84LL) = *(_DWORD *)Current.x;
          *(_DWORD *)(*((_QWORD *)v54 + 10) + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
          if ( (*((_DWORD *)v56[0] + 44) & 1) == 0
            && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v56, v9, v66, 1u) )
          {
            v6 = 0;
          }
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
      goto LABEL_77;
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v68, (struct XDCOBJ *)v56, 0);
    v11 = v56[0];
    v12 = *((_QWORD *)v56[0] + 6);
    if ( (v68[24] & 1) == 0 )
    {
      v6 = XDCOBJ::bFullScreen((XDCOBJ *)v56);
      goto LABEL_37;
    }
    v13 = *((_QWORD *)v56[0] + 64);
    v67 = v13;
    if ( !v13 )
      goto LABEL_56;
    v14 = *(_DWORD *)(v13 + 112);
    if ( (v14 & 0x100) != 0 )
    {
      v15 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v12 + 2968);
    }
    else
    {
      if ( *(_WORD *)(v13 + 100) || (v14 & 0x20) != 0 )
        goto LABEL_56;
      v15 = EngLineTo;
    }
    v65 = v15;
    if ( v15 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&v66[0].ulReserved + 32LL) & 2) != 0 )
      {
        v16 = (_DWORD *)*((_QWORD *)v56[0] + 10);
        v17 = *(int *)(*(_QWORD *)&v66[0].ulReserved + 24LL) >> 4;
        v18 = *(int *)(*(_QWORD *)&v66[0].ulReserved + 28LL) >> 4;
        v19 = v18 + v5;
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
        v47 = *((_QWORD *)v56[0] + 10);
        v58[0].x = v3;
        v58[0].y = v5;
        v61 = (unsigned int *)(v47 + 8);
        v57 = *(_DWORD *)(v47 + 8);
        if ( (v57 & 0x200) != 0 )
        {
          v58[1] = *(struct _POINTL *)(v47 + 76);
          EXFORMOBJ::bXform((EXFORMOBJ *)v66, v58);
          x = v58[1].x;
          y = v58[1].y;
        }
        else
        {
          EXFORMOBJ::bXform((EXFORMOBJ *)v66, v58);
          x = *(int *)(v47 + 84) >> 4;
          y = *(int *)(v47 + 88) >> 4;
        }
        v22 = v58[0].x;
        v19 = v58[0].y;
        v21 = v57;
        v20 = v61;
      }
      if ( (unsigned int)(v22 + 134217726) > 0xFFFFFFC || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
      {
        EngSetLastError(0x57u);
      }
      else
      {
        v25 = v59;
        *v20 = v21 & 0xFFFFFCFF;
        *(_DWORD *)(*((_QWORD *)v11 + 10) + 76LL) = v25;
        *(_DWORD *)(*((_QWORD *)v11 + 10) + 80LL) = v60;
        *(_DWORD *)(*((_QWORD *)v11 + 10) + 84LL) = 16 * v22;
        *(_DWORD *)(*((_QWORD *)v11 + 10) + 88LL) = 16 * v19;
        v26 = *(_DWORD *)DC::eptlOrigin(v56[0]);
        v63 = v26;
        v28 = v26 + x;
        v29 = v26 + v22;
        v30 = *((_DWORD *)DC::eptlOrigin(v27) + 1);
        v33 = v30 + y;
        v34 = v30 + v19;
        v57 = v30;
        if ( v28 + 134217726 <= v32 && v33 + 134217726 <= v32 && v29 + 134217726 <= v32 && v34 + 134217726 <= v32 )
        {
          if ( (int)v28 > v29 )
          {
            v35 = v29;
            LODWORD(v69) = v29;
            v36 = v28 + 1;
          }
          else
          {
            v35 = v28;
            LODWORD(v69) = v28;
            v36 = v29 + 1;
          }
          DWORD2(v69) = v36;
          if ( v33 > v34 )
          {
            v37 = v34;
            DWORD1(v69) = v34;
            v38 = v33 + 1;
          }
          else
          {
            v37 = v33;
            DWORD1(v69) = v33;
            v38 = v34 + 1;
          }
          HIDWORD(v69) = v38;
          if ( (*((_DWORD *)v31 + 9) & 0xE0) != 0 )
          {
            *(_OWORD *)&v58[0].x = v69;
            XDCOBJ::vAccumulate((XDCOBJ *)v56, v31, (struct ERECTL *)v58);
            v36 = DWORD2(v69);
            v35 = v69;
            v31 = v56[0];
            v38 = HIDWORD(v69);
            v37 = DWORD1(v69);
          }
          if ( *((struct PEN **)v31 + 19) == gpPenNull )
            goto LABEL_37;
          v61 = 0LL;
          if ( v35 < *((_DWORD *)v31 + 348)
            || v36 > *((_DWORD *)v31 + 350)
            || v37 < *((_DWORD *)v31 + 349)
            || v38 > *((_DWORD *)v31 + 351) )
          {
            v39 = (char *)v31 + 2160;
            v61 = (unsigned int *)((char *)v31 + 2160);
            v40 = XDCOBJ::prgnEffRao((XDCOBJ *)v56);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v39, v40, (struct ERECTL *)&v69, 0);
            if ( (unsigned int)ERECTL::bEmpty((ERECTL *)(v39 + 4)) )
            {
LABEL_37:
              XDCOBJ::vUnlockFast((XDCOBJ *)v56);
              v4 = v6;
LABEL_38:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
              return v4;
            }
            v31 = v56[0];
          }
          v42 = (char *)v31 + 1704;
          if ( *((_DWORD *)v31 + 426) == -1 )
          {
            *(_DWORD *)(*((_QWORD *)v31 + 10) + 8LL) |= 2u;
            v31 = v56[0];
          }
          v43 = *((_QWORD *)v31 + 10);
          v44 = *(_DWORD *)(v43 + 8);
          if ( (((unsigned __int8)v44 | *((_BYTE *)v31 + 332)) & 2) != 0 )
          {
            *(_DWORD *)(v43 + 8) = v44 & 0xFFFFFFFD;
            v45 = v67;
            v55 = v67;
            *((_DWORD *)v56[0] + 83) &= ~2u;
            EBRUSHOBJ::vInitBrush(
              v42,
              v56[0],
              *((_QWORD *)v56[0] + 19),
              *((_QWORD *)v56[0] + 12),
              *(_QWORD *)(v45 + 120),
              v55,
              0);
            v31 = v56[0];
          }
          if ( (*((_DWORD *)v31 + 9) & 0xE0) != 0 && (*((_DWORD *)v42 + 32) & 0x100) == 0 )
          {
            *(_OWORD *)&v58[0].x = v69;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v56, v31, (struct _RECTL *)v58);
          }
          v46 = v67;
          ++*(_DWORD *)(v67 + 92);
          if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, _QWORD, int, int, int, __int128 *, int))v65)(
                 v46 + 24,
                 v61,
                 v42,
                 v28,
                 v33,
                 v29,
                 v34,
                 &v69,
                 ((((*(_BYTE *)(*((_QWORD *)v56[0] + 10) + 72LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v56[0] + 10) + 72LL)
                                                                                           - 1) & 0xF)
                                                                                         + 1)) )
          {
            goto LABEL_37;
          }
          v48 = v56[0];
          v49 = 16 * (v28 - v63);
          v50 = 16 * (v33 - v57);
          *(_DWORD *)(*((_QWORD *)v56[0] + 10) + 8LL) &= ~0x200u;
          *(_DWORD *)(*((_QWORD *)v48 + 10) + 8LL) |= 0x100u;
          *(_DWORD *)(*((_QWORD *)v48 + 10) + 84LL) = v49;
          *(_DWORD *)(*((_QWORD *)v48 + 10) + 88LL) = v50;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
          v3 = v59;
          v5 = v60;
LABEL_57:
          v9 = v64;
          goto LABEL_60;
        }
        EngSetLastError(0x57u);
        v51 = v56[0];
        v52 = v33 - v57;
        *(_DWORD *)(*((_QWORD *)v56[0] + 10) + 8LL) &= ~0x200u;
        *(_DWORD *)(*((_QWORD *)v51 + 10) + 8LL) |= 0x100u;
        *(_DWORD *)(*((_QWORD *)v51 + 10) + 84LL) = 16 * (v28 - v26);
        *(_DWORD *)(*((_QWORD *)v51 + 10) + 88LL) = 16 * v52;
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)v56);
      goto LABEL_38;
    }
LABEL_56:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
    goto LABEL_57;
  }
  v6 = 0;
  EngSetLastError(6u);
  return v6;
}
