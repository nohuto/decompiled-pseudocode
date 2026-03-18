/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C005EC64
 * Callers:
 *     GreSetPointer @ 0x1C005DA90 (GreSetPointer.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     EngSetPointerShape @ 0x1C00D6CF0 (EngSetPointerShape.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00FA7BC (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C010E6EC (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01BF500 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  int v6; // r12d
  HDEV v7; // rsi
  int v10; // r13d
  int v11; // eax
  __int64 v12; // rax
  SURFOBJ *v13; // rcx
  __int64 v14; // rax
  volatile unsigned int v15; // ett
  volatile unsigned int v16; // ett
  volatile unsigned int v17; // ett
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _SURFOBJ *v22; // rdx
  struct _SURFOBJ *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  struct PALETTE *v26; // rax
  HDEV v27; // rcx
  int inited; // eax
  signed int v29; // eax
  LONG v30; // r8d
  LONG v31; // r9d
  char v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r9
  LONG v35; // edx
  LONG v36; // r10d
  LONG v37; // eax
  LONG v38; // ecx
  __int64 *v39; // rdx
  RECTL *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // ecx
  int v44; // eax
  _DWORD *v45; // r8
  int v46; // r10d
  int v47; // ecx
  int v48; // r13d
  LONG v49; // r9d
  int v50; // r12d
  LONG v51; // r11d
  int v52; // ebx
  int v53; // eax
  char v54; // cl
  unsigned __int8 v55; // al
  __int64 (__fastcall *v56)(SURFOBJ *, _DWORD *, __int64, __int64, int, int, LONG, LONG, RECTL *, int); // r11
  int v57; // r9d
  int v58; // edx
  int v59; // eax
  __int64 v60; // rax
  SURFOBJ *v61; // rcx
  SURFOBJ *v62; // r14
  void (__fastcall *v63)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v64; // rdx
  volatile unsigned int *v65; // rdx
  volatile unsigned int *v66; // rdx
  __int64 v67; // r10
  _DWORD *v68; // rdx
  int v69; // r13d
  SURFOBJ *v70; // r8
  XLATEOBJ *v71; // r9
  SURFOBJ *v72; // rdx
  SURFOBJ *v73; // r10
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  LONG v80; // [rsp+60h] [rbp-A0h]
  int v81; // [rsp+64h] [rbp-9Ch]
  char v83; // [rsp+68h] [rbp-98h]
  int v84; // [rsp+6Ch] [rbp-94h]
  SURFOBJ *pso; // [rsp+70h] [rbp-90h]
  LONG v86; // [rsp+78h] [rbp-88h]
  struct PALETTE *v87; // [rsp+80h] [rbp-80h] BYREF
  RECTL v88; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v89; // [rsp+A0h] [rbp-60h]
  BOOL v90; // [rsp+A4h] [rbp-5Ch]
  int v91; // [rsp+A8h] [rbp-58h]
  __int64 v92; // [rsp+B0h] [rbp-50h]
  __int64 v93; // [rsp+B8h] [rbp-48h]
  __int64 v94; // [rsp+C0h] [rbp-40h]
  __int64 v95; // [rsp+C8h] [rbp-38h] BYREF
  RECTL v96; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-20h] BYREF
  int v98; // [rsp+E8h] [rbp-18h]
  int v99; // [rsp+ECh] [rbp-14h]
  __int64 v100; // [rsp+F0h] [rbp-10h] BYREF
  int v101; // [rsp+F8h] [rbp-8h]
  int v102; // [rsp+FCh] [rbp-4h]
  _BYTE v103[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v104; // [rsp+120h] [rbp+20h]
  _BYTE v105[32]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD *v106; // [rsp+148h] [rbp+48h]
  _BYTE v107[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v108; // [rsp+170h] [rbp+70h]
  RECTL v109; // [rsp+180h] [rbp+80h] BYREF

  v5 = 0LL;
  v89 = a4;
  v6 = a3 & 0x10;
  v7 = a1 + 14;
  v90 = (a3 & 0x20) != 0;
  v10 = 0;
  v11 = *((_DWORD *)a1 + 14);
  if ( (v11 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    SURFREF::SURFREF((SURFREF *)v105, *((HSURF *)a2 + 1));
    if ( !DWMSPRITEREF::bValid((DWMSPRITEREF *)v105) || v106[24] != 1 || (v106[15] & 1) != 0 )
      goto LABEL_97;
    v93 = 0LL;
    v92 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    SURFREF::SURFREF((SURFREF *)v103);
    SURFREF::SURFREF((SURFREF *)v107);
    v19 = *((_QWORD *)a1 + 322);
    v87 = 0LL;
    if ( v19 )
      pso = (SURFOBJ *)(v19 + 24);
    else
      pso = 0LL;
    if ( *((_QWORD *)a2 + 2) || *((_QWORD *)a2 + 6) )
    {
      v24 = *((_QWORD *)a2 + 6);
      LOBYTE(v18) = 5;
      if ( v24 )
      {
        v25 = HmgShareLockCheck(v24, v18);
        v10 = 1;
      }
      else
      {
        v25 = HmgShareLockCheck(*((_QWORD *)a2 + 2), v18);
      }
      v104 = v25;
      if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v103) )
      {
        if ( *(_DWORD *)(v20 + 60) != (int)v106[15] >> 1 || *(_DWORD *)(v20 + 56) < v106[14] )
          goto LABEL_96;
        v26 = *(struct PALETTE **)(v20 + 120);
        v87 = v26;
        if ( !v26 )
        {
          v27 = (HDEV)*((_QWORD *)a1 + 5);
          if ( v27 != a1 )
          {
            v26 = (struct PALETTE *)*((_QWORD *)v27 + 229);
            v87 = v26;
          }
        }
        if ( !(unsigned int)bIsCompatible(&v87, v26, v20, a1, 1) )
          goto LABEL_96;
        inited = EXLATEOBJ::bInitXlateObj(
                   &v95,
                   0LL,
                   0,
                   (__int64)v87,
                   *((_QWORD *)a1 + 229),
                   (__int64)ppalDefault,
                   (__int64)ppalDefault,
                   0,
                   0xFFFFFF,
                   0,
                   0);
        v20 = v104;
        if ( inited )
        {
          v21 = v104;
          v94 = v95;
          v93 = v104;
LABEL_29:
          if ( !*((_DWORD *)a2 + 11) || (*(_DWORD *)a2 & 0x400) != 0 && !v6 || (*(_DWORD *)a2 & 0x400) == 0 && v6 )
          {
            v22 = 0LL;
            if ( v21 )
              v22 = (struct _SURFOBJ *)(v21 + 24);
            v23 = 0LL;
            if ( v106 )
              v23 = (struct _SURFOBJ *)(v106 + 6);
            vProcessCursorShape((HDEV)a2 + 8, v6, v10, v23, v22, v87, (struct _RECTL *)a2 + 2, (HBITMAP *)a2 + 3);
            v20 = v104;
            if ( v6 )
              *(_DWORD *)a2 |= 0x400u;
            else
              *(_DWORD *)a2 &= ~0x400u;
          }
          v29 = *((_DWORD *)a2 + 8);
          if ( v29 > *((_DWORD *)a2 + 10) )
            goto LABEL_96;
          v30 = *((_DWORD *)a2 + 9);
          v31 = *((_DWORD *)a2 + 11);
          if ( v30 > v31 )
            goto LABEL_96;
          v32 = a3 & 0xEF;
          v96.right = *((_DWORD *)a2 + 10);
          v33 = *((_QWORD *)a2 + 3);
          *(_QWORD *)&v96.left = __PAIR64__(v30, v29);
          v96.bottom = v31;
          v83 = a3 & 0xEF;
          if ( v33 && *((_DWORD *)a1 + 533) > 3u )
          {
            LOBYTE(v20) = 5;
            v108 = HmgShareLockCheck(v33, v20);
          }
          if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v107) )
          {
            v35 = *((_DWORD *)a2 + 8);
            v36 = *((_DWORD *)a2 + 9);
            v37 = *((_DWORD *)a2 + 10);
            v38 = *((_DWORD *)a2 + 11);
            v88.left = v35;
            v88.top = v36;
            v88.right = v37;
            v88.bottom = v38;
            v92 = v34;
            if ( v6 )
            {
              v88.left = v35 + 1;
              v88.top = v36 + 1;
              v88.bottom = v38 + 6;
              v88.right = v37 + 8;
            }
            v39 = &v97;
            v98 = *(_DWORD *)(v34 + 56);
            v40 = &v88;
            v99 = *(_DWORD *)(v34 + 60);
            v97 = 0LL;
          }
          else
          {
            if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v103) )
            {
              v43 = *(_DWORD *)(v41 + 56);
              if ( *(_DWORD *)(v42 + 56) < v43 )
                v43 = *(_DWORD *)(v42 + 56);
            }
            else
            {
              v43 = *(_DWORD *)(v42 + 56);
            }
            v39 = &v100;
            v44 = *(int *)(v42 + 60) >> 1;
            v101 = v43;
            v40 = &v96;
            v102 = v44;
            v100 = 0LL;
          }
          ERECTL::operator*=(v40, v39);
          v46 = v6 != 0 ? 3 : 0;
          v91 = v46;
          if ( (*(_DWORD *)v7 & 0x400) != 0 )
            goto LABEL_96;
          v47 = *((__int16 *)a2 + 3);
          v48 = v32 & 0xC | 1;
          v49 = *((_DWORD *)a1 + 20);
          v50 = 0;
          v51 = *((_DWORD *)a1 + 21);
          v52 = 0;
          *((_DWORD *)a1 + 22) = *((__int16 *)a2 + 2);
          v53 = 0;
          *((_DWORD *)a1 + 23) = v47;
          v54 = v89;
          v84 = 0;
          v86 = v49;
          v80 = v51;
          v81 = 1;
          if ( v89 )
          {
            v55 = a5;
            if ( a5 )
            {
              if ( v89 >= 0x10 )
                v54 = 16;
              if ( a5 >= 0xFF )
                v55 = -1;
              v48 |= (v54 & 0xF | (16 * v55)) << 8;
              v53 = 1;
              v84 = 1;
            }
            else
            {
              v53 = 0;
            }
          }
          if ( v90 )
            goto LABEL_112;
          v56 = (__int64 (__fastcall *)(SURFOBJ *, _DWORD *, __int64, __int64, int, int, LONG, LONG, RECTL *, int))*((_QWORD *)a1 + 368);
          if ( v56 && (!v53 || ((_DWORD)a1[538] & 0x200) != 0) )
          {
            if ( !v92 )
            {
              v109 = v96;
              if ( v93 )
                v67 = v93 + 24;
              else
                v67 = 0LL;
              v68 = 0LL;
              if ( v45 )
                v68 = v45 + 6;
              v59 = v56(pso, v68, v67, v94, *((__int16 *)a2 + 2), *((__int16 *)a2 + 3), v49, v80, &v109, v48);
              if ( v59 == 3 )
              {
                if ( *((_QWORD *)a1 + 369) )
                  (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 369))(
                    pso,
                    0xFFFFFFFFLL,
                    0xFFFFFFFFLL,
                    0LL);
                LOBYTE(v59) = 1;
              }
LABEL_108:
              if ( (v59 & 2) != 0 )
              {
                v50 = 1;
                v81 = 0;
                goto LABEL_85;
              }
LABEL_84:
              v81 = 1;
LABEL_85:
              v52 = ((unsigned __int8)v59 >> 2) & 1;
              if ( !v81 )
              {
                if ( (*(_DWORD *)v7 & 4) != 0 )
                {
                  v60 = *((_QWORD *)a1 + 322);
                  v61 = 0LL;
                  if ( v60 )
                    v61 = (SURFOBJ *)(v60 + 24);
                  EngSetPointerShape(v61, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
                }
                v62 = pso;
LABEL_91:
                if ( !v50 && (*(_DWORD *)v7 & 2) != 0 )
                {
                  v63 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 369);
                  if ( v63 )
                    v63(v62, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                }
                SETFLAG(v81, (volatile unsigned int *)v7, 4u);
                SETFLAG(v50, v64, 2u);
                SETFLAG(v84, v65, 0x100000u);
                SETFLAG(v52, v66, 0x200000u);
LABEL_96:
                SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v107);
                SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v103);
                EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v95);
LABEL_97:
                SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v105);
                return;
              }
              v45 = v106;
              v46 = v91;
              v49 = v86;
              goto LABEL_111;
            }
            if ( ((_DWORD)a1[538] & 0x20) != 0 )
            {
              v57 = v46 + *((__int16 *)a2 + 3);
              v58 = v46 + *((__int16 *)a2 + 2);
              v109 = v88;
              v59 = v56(pso, 0LL, v92 + 24, 0LL, v58, v57, v86, v80, &v109, v48 | 0x10u);
              if ( v59 == 3 )
                goto LABEL_84;
              goto LABEL_108;
            }
          }
LABEL_111:
          v51 = v80;
LABEL_112:
          v69 = v83 & 0x40 | v48;
          if ( v92 )
          {
            v70 = (SURFOBJ *)(v92 + 24);
            fl = v69 | 0x10;
            prcl = &v88;
            y = v51;
            x = v49;
            v71 = 0LL;
            yHot = v46 + *((__int16 *)a2 + 3);
            v72 = 0LL;
            xHot = v46 + *((__int16 *)a2 + 2);
          }
          else
          {
            v73 = 0LL;
            if ( v93 )
              v73 = (SURFOBJ *)(v93 + 24);
            v72 = 0LL;
            if ( v45 )
              v72 = (SURFOBJ *)(v45 + 6);
            fl = v69;
            prcl = &v96;
            v70 = v73;
            y = v51;
            x = v49;
            v71 = (XLATEOBJ *)v94;
            yHot = *((__int16 *)a2 + 3);
            xHot = *((__int16 *)a2 + 2);
          }
          v62 = pso;
          EngSetPointerShape(pso, v72, v70, v71, xHot, yHot, x, y, prcl, fl);
          goto LABEL_91;
        }
      }
    }
    else
    {
      v20 = v104;
    }
    v21 = 0LL;
    goto LABEL_29;
  }
  if ( (v11 & 4) != 0 )
  {
    v12 = *((_QWORD *)a1 + 322);
    v13 = 0LL;
    if ( v12 )
      v13 = (SURFOBJ *)(v12 + 24);
    EngSetPointerShape(v13, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
  }
  if ( (*(_DWORD *)v7 & 2) != 0 && *((_QWORD *)a1 + 369) )
  {
    v14 = *((_QWORD *)a1 + 322);
    if ( v14 )
      v5 = v14 + 24;
    (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD))a1 + 369))(v5, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  _m_prefetchw(v7);
  do
    v15 = *(_DWORD *)v7;
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)v7, *(_DWORD *)v7 & 0xFFFFFFFD, *(_DWORD *)v7) );
  _m_prefetchw(v7);
  do
    v16 = *(_DWORD *)v7;
  while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)v7, *(_DWORD *)v7 & 0xFFFFFFFB, *(_DWORD *)v7) );
  _m_prefetchw(v7);
  do
    v17 = *(_DWORD *)v7;
  while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)v7, *(_DWORD *)v7 & 0xFFEFFFFF, *(_DWORD *)v7) );
}
