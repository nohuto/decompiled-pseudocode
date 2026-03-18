/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C013DBC0
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C013D8AC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
  unsigned int *v14; // r9
  unsigned int v15; // r10d
  __int64 v16; // r12
  unsigned int v17; // ecx
  signed int v18; // eax
  FIX x; // edx
  FIX v20; // r15d
  FIX y; // r8d
  int v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // r15d
  unsigned int v25; // ebx
  unsigned int v26; // eax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r12
  int v30; // r9d
  int v31; // r10d
  signed int v32; // r14d
  unsigned int v33; // r9d
  unsigned __int64 v34; // r10
  char *v35; // r8
  int v36; // r14d
  unsigned __int64 v37; // r12
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  FIX v42; // eax
  FIX v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  unsigned __int64 v50; // rax
  unsigned int v51; // edx
  unsigned int v52; // r11d
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r8
  int v55; // ecx
  int v56; // r12d
  int v57; // r8d
  int v58; // eax
  int v59; // r8d
  unsigned int v60; // r11d
  unsigned int v61; // ecx
  int v62; // eax
  __int64 v63; // rdx
  int v64; // r11d
  int v65; // eax
  __int64 v66; // rdx
  int *v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rtt
  int v70; // [rsp+20h] [rbp-2D8h]
  unsigned int v71; // [rsp+24h] [rbp-2D4h]
  unsigned int v72; // [rsp+30h] [rbp-2C8h]
  unsigned int v73; // [rsp+34h] [rbp-2C4h]
  __int64 v74; // [rsp+38h] [rbp-2C0h]
  int v75; // [rsp+40h] [rbp-2B8h]
  int v76; // [rsp+54h] [rbp-2A4h]
  int v77; // [rsp+68h] [rbp-290h]
  struct _POINTFIX *v79; // [rsp+78h] [rbp-280h]
  __int64 v80; // [rsp+98h] [rbp-260h]
  struct _POINTFIX *v81; // [rsp+E0h] [rbp-218h]
  _BYTE v82[400]; // [rsp+10Ch] [rbp-1ECh] BYREF
  char v83; // [rsp+29Ch] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v84; // [rsp+2A0h] [rbp-58h]
  unsigned int *v85; // [rsp+2A8h] [rbp-50h]

  v12 = a3;
  v79 = a3;
  v14 = a10;
  if ( a1 <= (struct _BMINFO *)&off_1C031EDD0 )
    goto LABEL_2;
  if ( !bUMPDSecurityGateEx() )
  {
    v14 = a10;
LABEL_2:
    v81 = &v12[a5];
    v15 = 0;
    v73 = 0;
    v16 = 0LL;
    v74 = 0LL;
    v80 = 0LL;
    v17 = 0;
    v72 = 0;
    v77 = 0;
    v18 = 0;
    v71 = 0;
    v84 = a12;
    v85 = v14;
    while ( 1 )
    {
      x = a2->x;
      v20 = v12->x;
      y = a2->y;
      v22 = v12->y;
      v23 = a9;
      if ( v12->x < x )
      {
        v42 = x;
        x = v12->x;
        v20 = v42;
        v43 = y;
        y = v12->y;
        v22 = v43;
        v23 = a9 | 0x20;
        v18 = v71;
      }
      if ( v22 < y )
      {
        y = -y;
        v22 = -v22;
        v23 |= 8u;
      }
      v24 = v20 - x;
      if ( (v24 & 0x80000000) != 0 )
        goto LABEL_29;
      v25 = v22 - y;
      if ( (v25 & 0x80000000) != 0 )
        goto LABEL_29;
      if ( v25 >= v24 )
      {
        if ( v25 == v24 )
        {
          v23 |= 0x10u;
        }
        else
        {
          v26 = v24;
          v24 = v25;
          v25 = v26;
          LOBYTE(v26) = x;
          LOBYTE(x) = y;
          LOBYTE(y) = v26;
          v23 |= 5u;
        }
      }
      v23 |= gaflRound[(v23 >> 2) & 7];
      v27 = x & 0xF;
      v28 = y & 0xF;
      v29 = (int)v24 * (__int64)(v28 + 8) - v27 * (__int64)(int)v25;
      if ( (v23 & 0x8000) != 0 )
        --v29;
      v16 = v29 >> 4;
      v74 = v16;
      v80 = ~v16;
      v30 = ((_BYTE)v25 + (_BYTE)v28) & 0xF;
      v31 = ((_BYTE)v24 + (_BYTE)v27) & 0xF;
      v32 = (v24 + v27) >> 4;
      v70 = v23 & 0x20;
      if ( (v23 & 0x20) != 0 )
      {
        if ( (((_BYTE)v25 + (_BYTE)v28) & 0xF) == 0 )
        {
          if ( ((v31 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) == 0 )
            goto LABEL_34;
LABEL_51:
          ++v32;
          goto LABEL_34;
        }
        v46 = v30 - 8;
        if ( v30 - 8 < 0 )
          v46 = 8 - v30;
        if ( (unsigned int)(v31 + v46) > 0x10 )
          goto LABEL_51;
LABEL_34:
        if ( (v23 & 0x90) != 0x10 )
          goto LABEL_35;
        if ( (((_BYTE)v25 + (_BYTE)v28) & 0xF) != 0 && v31 == v30 + 8 )
          ++v32;
        if ( !v28 || v27 != v28 + 8 )
        {
LABEL_35:
          v33 = 1;
          v44 = 0LL;
          if ( v28 )
          {
            v47 = v28 - 8;
            if ( v28 - 8 < 0 )
              v47 = 8 - v28;
            if ( (unsigned int)(v27 + v47) <= 0x10 )
              goto LABEL_37;
          }
          else if ( ((v27 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) == 0 )
          {
            goto LABEL_37;
          }
        }
        v33 = 2;
        v44 = v25;
LABEL_37:
        LODWORD(v34) = 0;
        v45 = v16 + v44;
        if ( v45 >> 32 >= 0 )
        {
          if ( v45 >> 32 > 0 || (unsigned int)v45 >= 2 * v24 - v25 )
            LODWORD(v34) = 2;
          else
            LODWORD(v34) = (unsigned int)v45 >= v24 - v25;
        }
        goto LABEL_20;
      }
      --v32;
      if ( (((_BYTE)v24 + (_BYTE)v27) & 0xF) != 0 )
      {
        if ( (((_BYTE)v25 + (_BYTE)v28) & 0xF) != 0 )
        {
          v48 = v30 - 8;
          if ( v30 - 8 < 0 )
            v48 = 8 - v30;
          if ( v48 > v31 )
            goto LABEL_16;
        }
        else if ( ((v31 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) == 0 )
        {
          goto LABEL_16;
        }
        ++v32;
      }
LABEL_16:
      if ( (v23 & 0x90) != 0x90 )
        goto LABEL_17;
      if ( (((_BYTE)v24 + (_BYTE)v27) & 0xF) != 0 && v30 == v31 + 8 )
        --v32;
      if ( v27 && v28 == v27 + 8 )
      {
        v33 = 0;
      }
      else
      {
LABEL_17:
        v33 = 0;
        if ( v27 )
        {
          if ( v28 )
          {
            v49 = v28 - 8;
            if ( v28 - 8 < 0 )
              v49 = 8 - v28;
            if ( v49 <= v27 )
              v33 = 1;
          }
          else
          {
            v33 = ((v27 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0;
          }
        }
      }
      LODWORD(v34) = 0;
      if ( v16 >= 0 )
        LODWORD(v34) = (unsigned int)v16 >= v24 - (v25 & -v33);
LABEL_20:
      v77 = v34;
      v17 = v33;
      v72 = v33;
      v18 = v32;
      v71 = v32;
      if ( v32 >= (int)v33 )
      {
        if ( (v23 & 0x40) != 0 )
        {
          v15 = v25;
          v73 = v25;
          goto LABEL_86;
        }
        goto LABEL_22;
      }
      v15 = v73;
LABEL_29:
      while ( (v23 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_86:
        v70 = v23 & 0x20;
        if ( (v23 & 0x20) != 0 )
        {
          v33 = v18 - a4->iStop;
          v32 = v18 - a4->iStart;
        }
        else
        {
          v33 = v17 + a4->iStart;
          v32 = v17 + a4->iStop;
        }
        ++a4;
        v25 = v15;
        *((_DWORD *)a6 + 15) = *((_DWORD *)a6 + 16);
        v50 = v16 + v15 * (unsigned __int64)v33;
        if ( v50 >= 0xFFFFFFFF )
          v34 = (v16 + v15 * (unsigned __int64)v33) / v24;
        else
          LODWORD(v34) = (unsigned int)v50 / v24;
LABEL_22:
        if ( (v23 & 0x400) != 0 )
        {
          v51 = *((_DWORD *)a6 + 24);
          v52 = *((_DWORD *)a6 + 25);
          if ( (v23 & 5) != 0 )
          {
            v51 = *((_DWORD *)a6 + 25);
            v52 = *((_DWORD *)a6 + 24);
          }
          if ( v51 == v52 || v25 * (unsigned __int64)v52 <= v24 * (unsigned __int64)v51 )
          {
            *((_DWORD *)a6 + 2) = v51;
            *((_DWORD *)a6 + 3) = 0;
            *((_DWORD *)a6 + 4) = v51;
            v55 = v71 - v72 + 1;
            v56 = v70;
            if ( v70 )
              v57 = v71 - v33 + 1;
            else
              v57 = v33 - v72;
          }
          else
          {
            v53 = v74 + v25 * (unsigned __int64)v71;
            if ( v53 >= 0xFFFFFFFF )
              v54 = (v74 + v25 * (unsigned __int64)v71) / v24;
            else
              LODWORD(v54) = (unsigned int)v53 / v24;
            v51 = v52;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v52;
            *((_DWORD *)a6 + 4) = v52;
            v55 = v54 - v77 + 1;
            v56 = v70;
            if ( v70 )
              v57 = v54 - v34 + 1;
            else
              v57 = v34 - v77;
          }
          v58 = *((_DWORD *)a6 + 15);
          v59 = v58 + v51 * v57;
          v60 = v51 * v55 + v58;
          *((_DWORD *)a6 + 15) = v60;
          v61 = *((_DWORD *)a6 + 14);
          if ( v59 >= v61 )
            v59 %= v61;
          if ( v60 >= v61 )
            *((_DWORD *)a6 + 15) = v60 % v61;
          if ( v56 )
          {
            v59 = -v59;
            if ( v59 < 0 )
              v59 += v61;
            v62 = *((_DWORD *)a6 + 23) == 0;
            v63 = *((_QWORD *)a6 + 9);
          }
          else
          {
            v62 = *((_DWORD *)a6 + 23);
            v63 = *((_QWORD *)a6 + 10);
          }
          *((_DWORD *)a6 + 22) = v62;
          v64 = *((_DWORD *)a6 + 27);
          *((_QWORD *)a6 + 4) = v63 + 4LL * (unsigned int)(v64 - 1);
          *((_QWORD *)a6 + 3) = v63;
          v65 = *((_DWORD *)a6 + 13);
          if ( v59 >= v65 )
          {
            v59 -= v65;
            if ( (v64 & 1) != 0 )
              *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
          }
          v66 = *((_QWORD *)a6 + 3);
          for ( *((_QWORD *)a6 + 5) = v66; ; *((_QWORD *)a6 + 5) = v67 + 1 )
          {
            v67 = (int *)*((_QWORD *)a6 + 5);
            if ( v59 < *v67 )
              break;
            v59 -= *v67;
          }
          v68 = *((_QWORD *)a6 + 5);
          *((_DWORD *)a6 + 12) = *v67 - v59;
          v16 = v74;
          if ( (((_BYTE)v68 - (_BYTE)v66) & 4) != 0 )
            *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
        }
        if ( 2 * v25 > v24 )
        {
          LOWORD(v23) = v23 | 2;
          v80 = v16 - v24;
          v25 = v24 - v25;
          LODWORD(v34) = v33 - v34;
        }
        v35 = v82;
        v36 = v32 - v33 + 1;
        LODWORD(v37) = 0;
        v38 = 0;
        v76 = 0;
        v39 = 0;
        v75 = 0;
        if ( v25 )
        {
          v69 = v80 + v24 * (unsigned __int64)(unsigned int)(v34 + 1);
          v37 = v69 % v25;
          v40 = v69 / v25 - v33 + 1;
          v39 = v24 % v25;
          v38 = v24 / v25;
          v75 = v24 % v25;
          v76 = v24 / v25;
        }
        else
        {
          v40 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v36 -= v40;
          if ( v36 <= 0 )
            break;
          *(_DWORD *)v35 = v40;
          v35 += 4;
          if ( v35 == &v83 )
          {
            _guard_dispatch_icall_fptr();
            v35 = v82;
            v38 = v76;
            v39 = v75;
          }
          v40 = v38;
          LODWORD(v37) = v39 + v37;
          if ( (unsigned int)v37 >= v25 )
          {
            LODWORD(v37) = v37 - v25;
            v40 = v38 + 1;
          }
        }
        *(_DWORD *)v35 = v40 + v36;
        _guard_dispatch_icall_fptr();
        v16 = v74;
        v18 = v71;
        v17 = v72;
        v15 = v73;
      }
      a2 = v79;
      v12 = v79 + 1;
      v79 = v12;
      if ( v12 >= v81 )
        return 1LL;
    }
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
