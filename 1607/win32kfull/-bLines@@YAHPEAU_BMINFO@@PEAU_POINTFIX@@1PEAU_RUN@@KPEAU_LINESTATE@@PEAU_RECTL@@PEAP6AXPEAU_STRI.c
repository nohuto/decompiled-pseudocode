/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C014517C
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0144E70 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bLines(
        struct _BMINFO *a1,
        struct _POINTFIX *a2,
        struct _POINTFIX *a3,
        struct _RUN *a4,
        unsigned int a5,
        struct _LINESTATE *a6,
        struct _RECTL *a7,
        void (**a8)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *),
        unsigned int a9,
        unsigned int *a10,
        int a11,
        struct _W32KCDD_ENG_CALLBACKS *a12)
{
  struct _POINTFIX *v12; // r14
  struct _POINTFIX *v13; // rdi
  __int64 v14; // r12
  unsigned int v15; // edx
  signed int v16; // ecx
  FIX x; // r8d
  FIX v18; // r15d
  int y; // r9d
  int v20; // edi
  unsigned int v21; // esi
  unsigned int v22; // r15d
  unsigned int v23; // edi
  unsigned int v24; // eax
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  __int64 v28; // r12
  int v29; // r11d
  int v30; // r10d
  signed int v31; // r14d
  unsigned int v32; // r10d
  unsigned __int64 v33; // r9
  char *v34; // r8
  int v35; // r14d
  unsigned __int64 v36; // r12
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  FIX v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned int v45; // r9d
  unsigned __int64 v46; // rax
  unsigned int v47; // edx
  unsigned int v48; // r11d
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r8
  int v51; // ecx
  int v52; // r12d
  int v53; // r8d
  int v54; // r8d
  unsigned int v55; // r11d
  unsigned int v56; // ecx
  int v57; // eax
  __int64 v58; // rdx
  int v59; // r11d
  int v60; // eax
  __int64 v61; // rdx
  int *v62; // rax
  __int64 v63; // rcx
  unsigned __int64 v64; // rtt
  int v65; // [rsp+20h] [rbp-2D8h]
  unsigned int v66; // [rsp+28h] [rbp-2D0h]
  unsigned int v67; // [rsp+30h] [rbp-2C8h]
  int v68; // [rsp+40h] [rbp-2B8h]
  __int64 v69; // [rsp+48h] [rbp-2B0h]
  unsigned int v70; // [rsp+50h] [rbp-2A8h]
  int v71; // [rsp+54h] [rbp-2A4h]
  int v72; // [rsp+64h] [rbp-294h]
  struct _RUN *v73; // [rsp+70h] [rbp-288h]
  struct _POINTFIX *v74; // [rsp+78h] [rbp-280h]
  __int64 v75; // [rsp+88h] [rbp-270h]
  struct _POINTFIX *v76; // [rsp+E8h] [rbp-210h]
  _BYTE v77[400]; // [rsp+10Ch] [rbp-1ECh] BYREF
  char v78; // [rsp+29Ch] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v79; // [rsp+2A0h] [rbp-58h]
  unsigned int *v80; // [rsp+2A8h] [rbp-50h]

  v73 = a4;
  v12 = a3;
  v74 = a3;
  v13 = a2;
  if ( a1 <= (struct _BMINFO *)&off_1C03209C0
    || !bUMPDSecurityGateEx((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4) )
  {
    v76 = &v12[a5];
    v70 = 0;
    v14 = 0LL;
    v69 = 0LL;
    v75 = 0LL;
    v15 = 0;
    v67 = 0;
    v71 = 0;
    v16 = 0;
    v66 = 0;
    v79 = a12;
    v80 = a10;
    while ( 1 )
    {
      x = v13->x;
      v18 = v12->x;
      y = v13->y;
      v20 = v12->y;
      v21 = a9;
      if ( v12->x < x )
      {
        v41 = x;
        x = v12->x;
        v18 = v41;
        v42 = y;
        y = v12->y;
        v20 = v42;
        v21 = a9 | 0x20;
      }
      if ( v20 < y )
      {
        y = -y;
        v20 = -v20;
        v21 |= 8u;
      }
      v22 = v18 - x;
      if ( (v22 & 0x80000000) != 0 )
        goto LABEL_29;
      v23 = v20 - y;
      if ( (v23 & 0x80000000) != 0 )
        goto LABEL_29;
      if ( v23 >= v22 )
      {
        if ( v23 == v22 )
        {
          v21 |= 0x10u;
        }
        else
        {
          v24 = v22;
          v22 = v23;
          v23 = v24;
          LOBYTE(v24) = x;
          LOBYTE(x) = y;
          LOBYTE(y) = v24;
          v21 |= 5u;
        }
      }
      v21 |= gaflRound[(v21 >> 2) & 7];
      v25 = x & 0xF;
      v26 = y & 0xF;
      v27 = v26 + 8;
      v28 = (int)v22 * (__int64)(v26 + 8) - v25 * (__int64)(int)v23;
      if ( (v21 & 0x8000) != 0 )
        --v28;
      v14 = v28 >> 4;
      v69 = v14;
      v75 = ~v14;
      v29 = ((_BYTE)v23 + (_BYTE)v26) & 0xF;
      v30 = ((_BYTE)v22 + (_BYTE)v25) & 0xF;
      v31 = (v22 + v25) >> 4;
      v65 = v21 & 0x20;
      if ( (v21 & 0x20) == 0 )
      {
        --v31;
        if ( (((_BYTE)v22 + (_BYTE)v25) & 0xF) == 0 )
          goto LABEL_16;
        if ( (((_BYTE)v23 + (_BYTE)v26) & 0xF) != 0 )
        {
          if ( (int)abs32(v29 - 8) <= v30 )
            goto LABEL_62;
        }
        else if ( ((v30 - ((v21 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0 )
        {
LABEL_62:
          ++v31;
        }
LABEL_16:
        if ( (v21 & 0x90) != 0x90 )
          goto LABEL_17;
        if ( (((_BYTE)v22 + (_BYTE)v25) & 0xF) != 0 && v29 == v30 + 8 )
          --v31;
        if ( v25 && v26 == v25 + 8 )
        {
          v32 = 0;
        }
        else
        {
LABEL_17:
          v32 = 0;
          if ( v25 )
          {
            if ( v26 )
              v32 = (int)abs32(v26 - 8) <= v25;
            else
              v32 = ((v25 - ((v21 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0;
          }
        }
        LODWORD(v33) = 0;
        if ( v14 >= 0 )
          LODWORD(v33) = (unsigned int)v14 >= v22 - (v23 & -v32);
        goto LABEL_20;
      }
      if ( (((_BYTE)v23 + (_BYTE)v26) & 0xF) != 0 )
        break;
      if ( ((v30 - ((v21 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0 )
        goto LABEL_41;
LABEL_34:
      if ( (v21 & 0x90) != 0x10 )
        goto LABEL_35;
      if ( (((_BYTE)v23 + (_BYTE)v26) & 0xF) != 0 && v30 == v29 + 8 )
        ++v31;
      if ( !v26 || v25 != v27 )
      {
LABEL_35:
        v32 = 1;
        v43 = 0LL;
        if ( v26 )
        {
          if ( v25 + abs32(v26 - 8) <= 0x10 )
            goto LABEL_37;
        }
        else if ( ((v25 - ((v21 & 0x80) != 0) + 8) & 0xFFFFFFF0) == 0 )
        {
          goto LABEL_37;
        }
      }
      v32 = 2;
      v43 = v23;
LABEL_37:
      LODWORD(v33) = 0;
      v44 = v14 + v43;
      if ( v44 >> 32 >= 0 )
      {
        if ( v44 >> 32 > 0 || (unsigned int)v44 >= 2 * v22 - v23 )
          LODWORD(v33) = 2;
        else
          LODWORD(v33) = (unsigned int)v44 >= v22 - v23;
      }
LABEL_20:
      v71 = v33;
      v15 = v32;
      v67 = v32;
      v16 = v31;
      v66 = v31;
      if ( v31 >= (int)v32 )
      {
        if ( (v21 & 0x40) != 0 )
        {
          v45 = v23;
          v70 = v23;
          goto LABEL_76;
        }
        goto LABEL_22;
      }
LABEL_29:
      while ( (v21 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
        v45 = v70;
LABEL_76:
        v65 = v21 & 0x20;
        if ( (v21 & 0x20) != 0 )
        {
          v32 = v16 - v73->iStop;
          v31 = v16 - v73->iStart;
        }
        else
        {
          v32 = v15 + v73->iStart;
          v31 = v15 + v73->iStop;
        }
        ++v73;
        v23 = v45;
        *((_DWORD *)a6 + 15) = *((_DWORD *)a6 + 16);
        v46 = v14 + v45 * (unsigned __int64)v32;
        if ( v46 >= 0xFFFFFFFF )
          v33 = (v14 + v45 * (unsigned __int64)v32) / v22;
        else
          LODWORD(v33) = (unsigned int)v46 / v22;
LABEL_22:
        if ( (v21 & 0x400) != 0 )
        {
          v47 = *((_DWORD *)a6 + 24);
          v48 = *((_DWORD *)a6 + 25);
          if ( (v21 & 5) != 0 )
          {
            v47 = *((_DWORD *)a6 + 25);
            v48 = *((_DWORD *)a6 + 24);
          }
          if ( v47 == v48 || v23 * (unsigned __int64)v48 <= v22 * (unsigned __int64)v47 )
          {
            *((_DWORD *)a6 + 2) = v47;
            *((_DWORD *)a6 + 3) = 0;
            *((_DWORD *)a6 + 4) = v47;
            v51 = v66 - v67 + 1;
            v52 = v65;
            if ( v65 )
              v53 = v66 - v32 + 1;
            else
              v53 = v32 - v67;
          }
          else
          {
            v49 = v69 + v23 * (unsigned __int64)v66;
            if ( v49 >= 0xFFFFFFFF )
              v50 = (v69 + v23 * (unsigned __int64)v66) / v22;
            else
              LODWORD(v50) = (unsigned int)v49 / v22;
            v47 = v48;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v48;
            *((_DWORD *)a6 + 4) = v48;
            v51 = v50 - v71 + 1;
            v52 = v65;
            if ( v65 )
              v53 = v50 - v33 + 1;
            else
              v53 = v33 - v71;
          }
          v54 = *((_DWORD *)a6 + 15) + v47 * v53;
          *((_DWORD *)a6 + 15) += v47 * v51;
          v55 = *((_DWORD *)a6 + 15);
          v56 = *((_DWORD *)a6 + 14);
          if ( v54 >= v56 )
            v54 %= v56;
          if ( v55 >= v56 )
            *((_DWORD *)a6 + 15) = v55 % v56;
          if ( v52 )
          {
            v54 = -v54;
            if ( v54 < 0 )
              v54 += v56;
            v57 = *((_DWORD *)a6 + 23) == 0;
            v58 = *((_QWORD *)a6 + 9);
          }
          else
          {
            v57 = *((_DWORD *)a6 + 23);
            v58 = *((_QWORD *)a6 + 10);
          }
          *((_DWORD *)a6 + 22) = v57;
          v59 = *((_DWORD *)a6 + 27);
          *((_QWORD *)a6 + 4) = v58 + 4LL * (unsigned int)(v59 - 1);
          *((_QWORD *)a6 + 3) = v58;
          v60 = *((_DWORD *)a6 + 13);
          if ( v54 >= v60 )
          {
            v54 -= v60;
            if ( (v59 & 1) != 0 )
              *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
          }
          v61 = *((_QWORD *)a6 + 3);
          for ( *((_QWORD *)a6 + 5) = v61; ; *((_QWORD *)a6 + 5) = v62 + 1 )
          {
            v62 = (int *)*((_QWORD *)a6 + 5);
            if ( v54 < *v62 )
              break;
            v54 -= *v62;
          }
          v63 = *((_QWORD *)a6 + 5);
          *((_DWORD *)a6 + 12) = *v62 - v54;
          v14 = v69;
          if ( (((_BYTE)v63 - (_BYTE)v61) & 4) != 0 )
            *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
        }
        if ( 2 * v23 > v22 )
        {
          LOWORD(v21) = v21 | 2;
          v75 = v14 - v22;
          v23 = v22 - v23;
          LODWORD(v33) = v32 - v33;
        }
        v34 = v77;
        v35 = v31 - v32 + 1;
        LODWORD(v36) = 0;
        v37 = 0;
        v72 = 0;
        v38 = 0;
        v68 = 0;
        if ( v23 )
        {
          v64 = v75 + v22 * (unsigned __int64)(unsigned int)(v33 + 1);
          v36 = v64 % v23;
          v39 = v64 / v23 - v32 + 1;
          v38 = v22 % v23;
          v37 = v22 / v23;
          v68 = v22 % v23;
          v72 = v22 / v23;
        }
        else
        {
          v39 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v35 -= v39;
          if ( v35 <= 0 )
            break;
          *(_DWORD *)v34 = v39;
          v34 += 4;
          if ( v34 == &v78 )
          {
            _guard_dispatch_icall_fptr();
            v34 = v77;
            v37 = v72;
            v38 = v68;
          }
          v39 = v37;
          LODWORD(v36) = v38 + v36;
          if ( (unsigned int)v36 >= v23 )
          {
            LODWORD(v36) = v36 - v23;
            v39 = v37 + 1;
          }
        }
        *(_DWORD *)v34 = v39 + v35;
        _guard_dispatch_icall_fptr();
        v14 = v69;
        v16 = v66;
        v15 = v67;
      }
      v13 = v74;
      v12 = v74 + 1;
      v74 = v12;
      if ( v12 >= v76 )
        return 1LL;
    }
    v27 = v26 + 8;
    if ( v30 + abs32(v29 - 8) <= 0x10 )
      goto LABEL_34;
LABEL_41:
    ++v31;
    goto LABEL_34;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
