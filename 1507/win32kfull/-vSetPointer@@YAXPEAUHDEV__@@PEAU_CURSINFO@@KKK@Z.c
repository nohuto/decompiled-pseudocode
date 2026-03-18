/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00A08F4
 * Callers:
 *     GreSetPointer @ 0x1C00913EC (GreSetPointer.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0010394 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00A2268 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01C1354 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ?vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025AE00 (-vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C025D1A8 (-SETFLAG@@YAXHAECKK@Z.c)
 *     EngSetPointerShape @ 0x1C0262070 (EngSetPointerShape.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  int v7; // r12d
  HDEV v8; // rsi
  int v10; // eax
  int v11; // r13d
  __int64 v12; // rax
  SURFOBJ *v13; // rcx
  __int64 v14; // rax
  signed __int32 v15; // ett
  signed __int32 v16; // ett
  signed __int32 v17; // ett
  __int64 v18; // rax
  HSURF v19; // rdx
  struct PALETTE *v20; // rdx
  HDEV v21; // rax
  __int64 v22; // rcx
  struct _SURFOBJ *v23; // rdx
  struct _SURFOBJ *v24; // r9
  LONG v25; // eax
  LONG v26; // ecx
  signed int v27; // r8d
  char v28; // r13
  HSURF v29; // rdx
  LONG v30; // edx
  LONG v31; // r9d
  LONG v32; // eax
  LONG v33; // ecx
  RECTL *v34; // rcx
  __int64 v35; // r8
  int v36; // edx
  int v37; // eax
  _DWORD *v38; // r8
  int v39; // r10d
  int v40; // ecx
  int v41; // r13d
  LONG v42; // r9d
  int v43; // r12d
  LONG v44; // r11d
  int v45; // ebx
  int v46; // eax
  char v47; // cl
  unsigned __int8 v48; // al
  __int64 (__fastcall *v49)(SURFOBJ *, _DWORD *, __int64, __int64, int, int, LONG, LONG, RECTL *, int); // r11
  int v50; // r9d
  int v51; // edx
  int v52; // eax
  __int64 v53; // rax
  SURFOBJ *v54; // rcx
  SURFOBJ *v55; // r14
  void (__fastcall *v56)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v57; // rdx
  volatile unsigned int *v58; // rdx
  volatile unsigned int *v59; // rdx
  __int64 v60; // r10
  _DWORD *v61; // rdx
  int v62; // r13d
  SURFOBJ *v63; // r8
  XLATEOBJ *v64; // r9
  SURFOBJ *v65; // rdx
  SURFOBJ *v66; // r10
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  LONG v73; // [rsp+60h] [rbp-A0h]
  int v74; // [rsp+64h] [rbp-9Ch]
  int v75; // [rsp+68h] [rbp-98h]
  SURFOBJ *pso; // [rsp+70h] [rbp-90h]
  char v78; // [rsp+78h] [rbp-88h]
  LONG v79; // [rsp+7Ch] [rbp-84h]
  struct PALETTE *v80; // [rsp+80h] [rbp-80h] BYREF
  RECTL v81; // [rsp+90h] [rbp-70h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-60h]
  __int64 v83; // [rsp+A8h] [rbp-58h]
  __int64 v84; // [rsp+B0h] [rbp-50h]
  int v85; // [rsp+B8h] [rbp-48h]
  __int64 v86; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v87; // [rsp+C8h] [rbp-38h]
  unsigned int v88; // [rsp+CCh] [rbp-34h]
  RECTL v89; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-20h]
  int v91; // [rsp+E8h] [rbp-18h]
  int v92; // [rsp+ECh] [rbp-14h]
  __int64 v93; // [rsp+F0h] [rbp-10h]
  int v94; // [rsp+F8h] [rbp-8h]
  int v95; // [rsp+FCh] [rbp-4h]
  _BYTE v96[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v97; // [rsp+120h] [rbp+20h]
  _BYTE v98[32]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD *v99; // [rsp+148h] [rbp+48h]
  _BYTE v100[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v101; // [rsp+170h] [rbp+70h]
  RECTL v102; // [rsp+180h] [rbp+80h] BYREF

  v5 = 0LL;
  v88 = a4;
  v7 = a3 & 0x10;
  v8 = a1 + 14;
  v10 = *((_DWORD *)a1 + 14);
  v87 = (a3 & 0x20) != 0;
  v11 = 0;
  if ( (v10 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    SURFREF::SURFREF((SURFREF *)v98, *((HSURF *)a2 + 1));
    if ( !DWMSPRITEREF::bValid((DWMSPRITEREF *)v98) || v99[24] != 1 || (v99[15] & 1) != 0 )
      goto LABEL_96;
    v83 = 0LL;
    v82 = 0LL;
    v84 = 0LL;
    v86 = 0LL;
    SURFREF::SURFREF((SURFREF *)v96);
    SURFREF::SURFREF((SURFREF *)v100);
    v18 = *((_QWORD *)a1 + 322);
    v80 = 0LL;
    if ( v18 )
      pso = (SURFOBJ *)(v18 + 24);
    else
      pso = 0LL;
    if ( !*((_QWORD *)a2 + 2) && !*((_QWORD *)a2 + 6) )
      goto LABEL_39;
    v19 = (HSURF)*((_QWORD *)a2 + 6);
    if ( v19 )
    {
      SURFREF::vAltCheckLock((SURFREF *)v96, v19);
      v11 = 1;
    }
    else
    {
      SURFREF::vAltCheckLock((SURFREF *)v96, *((HSURF *)a2 + 2));
    }
    if ( !DWMSPRITEREF::bValid((DWMSPRITEREF *)v96) )
      goto LABEL_39;
    if ( *(_DWORD *)(v97 + 60) != (int)v99[15] >> 1 || *(_DWORD *)(v97 + 56) < v99[14] )
      goto LABEL_95;
    v20 = *(struct PALETTE **)(v97 + 120);
    v80 = v20;
    if ( !v20 )
    {
      v21 = (HDEV)*((_QWORD *)a1 + 5);
      if ( v21 != a1 )
      {
        v20 = (struct PALETTE *)*((_QWORD *)v21 + 229);
        v80 = v20;
      }
    }
    if ( !(unsigned int)bIsCompatible(&v80, v20, v97, a1, 1) )
      goto LABEL_95;
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v86,
                         0LL,
                         0,
                         (__int64)v80,
                         *((_QWORD *)a1 + 229),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0xFFFFFF,
                         0,
                         0) )
    {
      v22 = v97;
      v84 = v86;
      v83 = v97;
    }
    else
    {
LABEL_39:
      v22 = 0LL;
    }
    if ( !*((_DWORD *)a2 + 11) || (*(_DWORD *)a2 & 0x400) != 0 && !v7 || (*(_DWORD *)a2 & 0x400) == 0 && v7 )
    {
      v23 = 0LL;
      if ( v22 )
        v23 = (struct _SURFOBJ *)(v22 + 24);
      v24 = 0LL;
      if ( v99 )
        v24 = (struct _SURFOBJ *)(v99 + 6);
      vProcessCursorShape((HDEV)a2 + 8, v7, v11, v24, v23, v80, (struct _RECTL *)a2 + 2, (HBITMAP *)a2 + 3);
      if ( v7 )
        *(_DWORD *)a2 |= 0x400u;
      else
        *(_DWORD *)a2 &= ~0x400u;
    }
    v25 = *((_DWORD *)a2 + 8);
    v26 = *((_DWORD *)a2 + 10);
    if ( v25 > v26 )
      goto LABEL_95;
    v27 = *((_DWORD *)a2 + 11);
    if ( *((_DWORD *)a2 + 9) > v27 )
      goto LABEL_95;
    v28 = a3 & 0xEF;
    v89.top = *((_DWORD *)a2 + 9);
    v29 = (HSURF)*((_QWORD *)a2 + 3);
    v89.left = v25;
    *(_QWORD *)&v89.right = __PAIR64__(v27, v26);
    v78 = a3 & 0xEF;
    if ( v29 && *((_DWORD *)a1 + 533) > 3u )
      SURFREF::vAltCheckLock((SURFREF *)v100, v29);
    if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v100) )
    {
      v30 = *((_DWORD *)a2 + 8);
      v31 = *((_DWORD *)a2 + 9);
      v32 = *((_DWORD *)a2 + 10);
      v33 = *((_DWORD *)a2 + 11);
      v82 = v101;
      v81.left = v30;
      v81.top = v31;
      v81.right = v32;
      v81.bottom = v33;
      if ( v7 )
      {
        v81.left = v30 + 1;
        v81.top = v31 + 1;
        v81.bottom = v33 + 6;
        v81.right = v32 + 8;
      }
      v91 = *(_DWORD *)(v101 + 56);
      v34 = &v81;
      v92 = *(_DWORD *)(v101 + 60);
      v90 = 0LL;
    }
    else
    {
      if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v96) )
      {
        v36 = *(_DWORD *)(v97 + 56);
        if ( *(_DWORD *)(v35 + 56) < v36 )
          v36 = *(_DWORD *)(v35 + 56);
      }
      else
      {
        v36 = *(_DWORD *)(v35 + 56);
      }
      v34 = &v89;
      v37 = *(int *)(v35 + 60) >> 1;
      v94 = v36;
      v95 = v37;
      v93 = 0LL;
    }
    ERECTL::operator*=(v34);
    v39 = v7 != 0 ? 3 : 0;
    v85 = v39;
    if ( (*(_DWORD *)v8 & 0x400) != 0 )
    {
LABEL_95:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v100);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v96);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v86);
LABEL_96:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v98);
      return;
    }
    v40 = *((__int16 *)a2 + 3);
    v41 = v28 & 0xC | 1;
    v42 = *((_DWORD *)a1 + 20);
    v43 = 0;
    v44 = *((_DWORD *)a1 + 21);
    v45 = 0;
    *((_DWORD *)a1 + 22) = *((__int16 *)a2 + 2);
    v46 = 0;
    *((_DWORD *)a1 + 23) = v40;
    v47 = v88;
    v75 = 0;
    v79 = v42;
    v73 = v44;
    v74 = 1;
    if ( v88 )
    {
      v48 = a5;
      if ( a5 )
      {
        if ( v88 >= 0x10 )
          v47 = 16;
        if ( a5 >= 0xFF )
          v48 = -1;
        v41 |= (v47 & 0xF | (16 * v48)) << 8;
        v46 = 1;
        v75 = 1;
      }
      else
      {
        v46 = 0;
      }
    }
    if ( v87 )
      goto LABEL_111;
    v49 = (__int64 (__fastcall *)(SURFOBJ *, _DWORD *, __int64, __int64, int, int, LONG, LONG, RECTL *, int))*((_QWORD *)a1 + 369);
    if ( v49 && (!v46 || ((_DWORD)a1[538] & 0x200) != 0) )
    {
      if ( !v82 )
      {
        v102 = v89;
        if ( v83 )
          v60 = v83 + 24;
        else
          v60 = 0LL;
        v61 = 0LL;
        if ( v38 )
          v61 = v38 + 6;
        v52 = v49(pso, v61, v60, v84, *((__int16 *)a2 + 2), *((__int16 *)a2 + 3), v42, v73, &v102, v41);
        if ( v52 == 3 )
        {
          if ( *((_QWORD *)a1 + 370) )
            (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 370))(
              pso,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL,
              0LL);
          LOBYTE(v52) = 1;
        }
LABEL_107:
        if ( (v52 & 2) != 0 )
        {
          v43 = 1;
          v74 = 0;
          goto LABEL_84;
        }
LABEL_83:
        v74 = 1;
LABEL_84:
        v45 = ((unsigned __int8)v52 >> 2) & 1;
        if ( !v74 )
        {
          if ( (*(_DWORD *)v8 & 4) != 0 )
          {
            v53 = *((_QWORD *)a1 + 322);
            v54 = 0LL;
            if ( v53 )
              v54 = (SURFOBJ *)(v53 + 24);
            EngSetPointerShape(v54, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
          }
          v55 = pso;
LABEL_90:
          if ( !v43 && (*(_DWORD *)v8 & 2) != 0 )
          {
            v56 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 370);
            if ( v56 )
              v56(v55, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
          }
          SETFLAG(v74, (volatile unsigned int *)a1 + 14, 4u);
          SETFLAG(v43, v57, 2u);
          SETFLAG(v75, v58, 0x100000u);
          SETFLAG(v45, v59, 0x200000u);
          goto LABEL_95;
        }
        v38 = v99;
        v39 = v85;
        v42 = v79;
        goto LABEL_110;
      }
      if ( ((_DWORD)a1[538] & 0x20) != 0 )
      {
        v50 = v39 + *((__int16 *)a2 + 3);
        v51 = v39 + *((__int16 *)a2 + 2);
        v102 = v81;
        v52 = v49(pso, 0LL, v82 + 24, 0LL, v51, v50, v79, v73, &v102, v41 | 0x10u);
        if ( v52 == 3 )
          goto LABEL_83;
        goto LABEL_107;
      }
    }
LABEL_110:
    v44 = v73;
LABEL_111:
    v62 = v78 & 0x40 | v41;
    if ( v82 )
    {
      v63 = (SURFOBJ *)(v82 + 24);
      fl = v62 | 0x10;
      prcl = &v81;
      y = v44;
      x = v42;
      v64 = 0LL;
      yHot = v39 + *((__int16 *)a2 + 3);
      v65 = 0LL;
      xHot = v39 + *((__int16 *)a2 + 2);
    }
    else
    {
      v66 = 0LL;
      if ( v83 )
        v66 = (SURFOBJ *)(v83 + 24);
      v65 = 0LL;
      if ( v38 )
        v65 = (SURFOBJ *)(v38 + 6);
      fl = v62;
      prcl = &v89;
      v63 = v66;
      y = v44;
      x = v42;
      v64 = (XLATEOBJ *)v84;
      yHot = *((__int16 *)a2 + 3);
      xHot = *((__int16 *)a2 + 2);
    }
    v55 = pso;
    EngSetPointerShape(pso, v65, v63, v64, xHot, yHot, x, y, prcl, fl);
    goto LABEL_90;
  }
  if ( (v10 & 4) != 0 )
  {
    v12 = *((_QWORD *)a1 + 322);
    v13 = 0LL;
    if ( v12 )
      v13 = (SURFOBJ *)(v12 + 24);
    EngSetPointerShape(v13, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
  }
  if ( (*(_DWORD *)v8 & 2) != 0 && *((_QWORD *)a1 + 370) )
  {
    v14 = *((_QWORD *)a1 + 322);
    if ( v14 )
      v5 = v14 + 24;
    (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD))a1 + 370))(v5, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  _m_prefetchw(v8);
  do
    v15 = *(_DWORD *)v8;
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFFFFFFD, *(_DWORD *)v8) );
  _m_prefetchw(v8);
  do
    v16 = *(_DWORD *)v8;
  while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFFFFFFB, *(_DWORD *)v8) );
  _m_prefetchw(v8);
  do
    v17 = *(_DWORD *)v8;
  while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFEFFFFF, *(_DWORD *)v8) );
}
