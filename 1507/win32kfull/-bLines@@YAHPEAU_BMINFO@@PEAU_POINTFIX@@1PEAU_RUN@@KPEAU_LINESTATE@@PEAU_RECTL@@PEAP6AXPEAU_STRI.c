/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00D127C
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C00D0EBC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  int v33; // eax
  unsigned int v34; // r9d
  int v35; // eax
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rax
  char *v38; // r8
  int v39; // r14d
  unsigned __int64 v40; // r12
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  FIX v45; // eax
  FIX v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  unsigned __int64 v51; // rtt
  unsigned int v52; // edx
  unsigned int v53; // r11d
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r8
  int v56; // ecx
  int v57; // r12d
  int v58; // r8d
  int v59; // eax
  int v60; // r8d
  unsigned int v61; // r11d
  unsigned int v62; // ecx
  int v63; // eax
  __int64 v64; // rdx
  int v65; // r11d
  int v66; // eax
  __int64 v67; // rdx
  int *v68; // rax
  __int64 v69; // rcx
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
  if ( a1 <= (struct _BMINFO *)&off_1C031D240 )
    goto LABEL_2;
  if ( !(unsigned int)bUMPDSecurityGateEx() )
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
        v45 = x;
        x = v12->x;
        v20 = v45;
        v46 = y;
        y = v12->y;
        v22 = v46;
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
        goto LABEL_44;
      v25 = v22 - y;
      if ( (v25 & 0x80000000) != 0 )
        goto LABEL_44;
      if ( v25 == v24 )
      {
        v23 |= 0x10u;
      }
      else if ( v25 >= v24 )
      {
        v26 = v24;
        v24 = v25;
        v25 = v26;
        LOBYTE(v26) = x;
        LOBYTE(x) = y;
        LOBYTE(y) = v26;
        v23 |= 5u;
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
      if ( (v23 & 0x20) == 0 )
      {
        --v32;
        if ( (((_BYTE)v24 + (_BYTE)v27) & 0xF) != 0 )
        {
          if ( (((_BYTE)v25 + (_BYTE)v28) & 0xF) != 0 )
          {
            v33 = v30 - 8;
            if ( v30 - 8 < 0 )
              v33 = 8 - v30;
            if ( v33 <= v31 )
LABEL_20:
              ++v32;
          }
          else if ( ((v31 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0 )
          {
            goto LABEL_20;
          }
        }
        if ( (v23 & 0x90) != 0x90 )
          goto LABEL_22;
        if ( (((_BYTE)v24 + (_BYTE)v27) & 0xF) != 0 && v30 == v31 + 8 )
          --v32;
        if ( v27 && v28 == v27 + 8 )
        {
          v34 = 0;
        }
        else
        {
LABEL_22:
          v34 = 0;
          if ( v27 )
          {
            if ( v28 )
            {
              v35 = v28 - 8;
              if ( v28 - 8 < 0 )
                v35 = 8 - v28;
              if ( v35 <= v27 )
                v34 = 1;
            }
            else
            {
              v34 = ((v27 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0;
            }
          }
        }
        LODWORD(v36) = 0;
        if ( v16 >= 0 )
          LODWORD(v36) = (unsigned int)v16 >= v24 - (v25 & -v34);
        goto LABEL_30;
      }
      if ( (((_BYTE)v25 + (_BYTE)v28) & 0xF) != 0 )
      {
        v47 = v30 - 8;
        if ( v30 - 8 < 0 )
          v47 = 8 - v30;
        if ( (unsigned int)(v31 + v47) > 0x10 )
LABEL_81:
          ++v32;
      }
      else if ( ((v31 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0 )
      {
        goto LABEL_81;
      }
      if ( (v23 & 0x90) != 0x10 )
        goto LABEL_52;
      if ( (((_BYTE)v25 + (_BYTE)v28) & 0xF) != 0 && v31 == v30 + 8 )
        ++v32;
      if ( !v28 || v27 != v28 + 8 )
      {
LABEL_52:
        v34 = 1;
        v48 = 0LL;
        if ( v28 )
        {
          v49 = v28 - 8;
          if ( v28 - 8 < 0 )
            v49 = 8 - v28;
          if ( (unsigned int)(v27 + v49) <= 0x10 )
            goto LABEL_56;
        }
        else if ( ((v27 - ((v23 & 0x80) != 0) + 8) & 0xFFFFFFF0) == 0 )
        {
          goto LABEL_56;
        }
      }
      v34 = 2;
      v48 = v25;
LABEL_56:
      LODWORD(v36) = 0;
      v50 = v16 + v48;
      if ( v50 >> 32 >= 0 )
      {
        if ( v50 >> 32 > 0 || (unsigned int)v50 >= 2 * v24 - v25 )
          LODWORD(v36) = 2;
        else
          LODWORD(v36) = (unsigned int)v50 >= v24 - v25;
      }
LABEL_30:
      v77 = v36;
      v17 = v34;
      v72 = v34;
      v18 = v32;
      v71 = v32;
      if ( v32 >= (int)v34 )
      {
        if ( (v23 & 0x40) != 0 )
        {
          v15 = v25;
          v73 = v25;
          goto LABEL_33;
        }
        goto LABEL_37;
      }
      v15 = v73;
LABEL_44:
      while ( (v23 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_33:
        v70 = v23 & 0x20;
        if ( (v23 & 0x20) != 0 )
        {
          v34 = v18 - a4->iStop;
          v32 = v18 - a4->iStart;
        }
        else
        {
          v34 = v17 + a4->iStart;
          v32 = v17 + a4->iStop;
        }
        ++a4;
        v25 = v15;
        *((_DWORD *)a6 + 15) = *((_DWORD *)a6 + 16);
        v37 = v16 + v15 * (unsigned __int64)v34;
        if ( v37 >= 0xFFFFFFFF )
          v36 = (v16 + v15 * (unsigned __int64)v34) / v24;
        else
          LODWORD(v36) = (unsigned int)v37 / v24;
LABEL_37:
        if ( (v23 & 0x400) != 0 )
        {
          v52 = *((_DWORD *)a6 + 24);
          v53 = *((_DWORD *)a6 + 25);
          if ( (v23 & 5) != 0 )
          {
            v52 = *((_DWORD *)a6 + 25);
            v53 = *((_DWORD *)a6 + 24);
          }
          if ( v52 == v53 || v25 * (unsigned __int64)v53 <= v24 * (unsigned __int64)v52 )
          {
            *((_DWORD *)a6 + 2) = v52;
            *((_DWORD *)a6 + 3) = 0;
            *((_DWORD *)a6 + 4) = v52;
            v56 = v71 - v72 + 1;
            v57 = v70;
            if ( v70 )
              v58 = v71 - v34 + 1;
            else
              v58 = v34 - v72;
          }
          else
          {
            v54 = v74 + v25 * (unsigned __int64)v71;
            if ( v54 >= 0xFFFFFFFF )
              v55 = (v74 + v25 * (unsigned __int64)v71) / v24;
            else
              LODWORD(v55) = (unsigned int)v54 / v24;
            v52 = v53;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v53;
            *((_DWORD *)a6 + 4) = v53;
            v56 = v55 - v77 + 1;
            v57 = v70;
            if ( v70 )
              v58 = v55 - v36 + 1;
            else
              v58 = v36 - v77;
          }
          v59 = *((_DWORD *)a6 + 15);
          v60 = v59 + v52 * v58;
          v61 = v52 * v56 + v59;
          *((_DWORD *)a6 + 15) = v61;
          v62 = *((_DWORD *)a6 + 14);
          if ( v60 >= v62 )
            v60 %= v62;
          if ( v61 >= v62 )
            *((_DWORD *)a6 + 15) = v61 % v62;
          if ( v57 )
          {
            v60 = -v60;
            if ( v60 < 0 )
              v60 += v62;
            v63 = *((_DWORD *)a6 + 23) == 0;
            v64 = *((_QWORD *)a6 + 9);
          }
          else
          {
            v63 = *((_DWORD *)a6 + 23);
            v64 = *((_QWORD *)a6 + 10);
          }
          *((_DWORD *)a6 + 22) = v63;
          v65 = *((_DWORD *)a6 + 27);
          *((_QWORD *)a6 + 4) = v64 + 4LL * (unsigned int)(v65 - 1);
          *((_QWORD *)a6 + 3) = v64;
          v66 = *((_DWORD *)a6 + 13);
          if ( v60 >= v66 )
          {
            v60 -= v66;
            if ( (v65 & 1) != 0 )
              *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
          }
          v67 = *((_QWORD *)a6 + 3);
          for ( *((_QWORD *)a6 + 5) = v67; ; *((_QWORD *)a6 + 5) = v68 + 1 )
          {
            v68 = (int *)*((_QWORD *)a6 + 5);
            if ( v60 < *v68 )
              break;
            v60 -= *v68;
          }
          v69 = *((_QWORD *)a6 + 5);
          *((_DWORD *)a6 + 12) = *v68 - v60;
          v16 = v74;
          if ( (((_BYTE)v69 - (_BYTE)v67) & 4) != 0 )
            *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
        }
        if ( 2 * v25 > v24 )
        {
          LOWORD(v23) = v23 | 2;
          v80 = v16 - v24;
          v25 = v24 - v25;
          LODWORD(v36) = v34 - v36;
        }
        v38 = v82;
        v39 = v32 - v34 + 1;
        LODWORD(v40) = 0;
        v41 = 0;
        v76 = 0;
        v42 = 0;
        v75 = 0;
        if ( v25 )
        {
          v51 = v80 + v24 * (unsigned __int64)(unsigned int)(v36 + 1);
          v40 = v51 % v25;
          v43 = v51 / v25 - v34 + 1;
          v42 = v24 % v25;
          v41 = v24 / v25;
          v75 = v24 % v25;
          v76 = v24 / v25;
        }
        else
        {
          v43 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v39 -= v43;
          if ( v39 <= 0 )
            break;
          *(_DWORD *)v38 = v43;
          v38 += 4;
          if ( v38 == &v83 )
          {
            _guard_dispatch_icall_fptr();
            v38 = v82;
            v41 = v76;
            v42 = v75;
          }
          v43 = v41;
          LODWORD(v40) = v42 + v40;
          if ( (unsigned int)v40 >= v25 )
          {
            LODWORD(v40) = v40 - v25;
            v43 = v41 + 1;
          }
        }
        *(_DWORD *)v38 = v43 + v39;
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
