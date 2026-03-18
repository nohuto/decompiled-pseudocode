/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215A84
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     xxxSendMinRectMessages @ 0x1C00FF20C (xxxSendMinRectMessages.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0133580 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(
        struct tagPOPUPMENU *a1,
        struct tagITEM *a2,
        __int64 a3,
        int a4,
        int *a5,
        int *a6,
        struct tagMONITOR **a7)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // esi
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  _DWORD *v20; // rcx
  int v21; // r8d
  LONG left; // edi
  int v23; // edi
  unsigned int v24; // r8d
  int v25; // edx
  unsigned int v26; // ecx
  LONG top; // esi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  _DWORD *v41; // rcx
  int v42; // r14d
  LONG v43; // eax
  int v44; // ecx
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // ecx
  _DWORD *v52; // rcx
  int v53; // esi
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ecx
  _DWORD *v61; // rcx
  unsigned __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // ecx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // ecx
  _DWORD *v69; // rcx
  int v70; // ecx
  struct tagMONITOR **v71; // rcx
  unsigned int v73; // [rsp+20h] [rbp-60h]
  int v75; // [rsp+28h] [rbp-58h]
  struct tagRECT v76; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT *v77; // [rsp+40h] [rbp-40h]
  struct tagITEM *v78; // [rsp+48h] [rbp-38h]
  struct tagMONITOR **v79; // [rsp+50h] [rbp-30h]
  int *v80; // [rsp+58h] [rbp-28h]
  int *v81; // [rsp+60h] [rbp-20h]
  __int128 v82; // [rsp+68h] [rbp-18h] BYREF

  v80 = a5;
  v81 = a6;
  v79 = a7;
  v9 = *(_DWORD *)a1;
  v75 = a3;
  v78 = a2;
  v76 = 0LL;
  if ( (v9 & 1) != 0 )
  {
    v10 = *((_QWORD *)a1 + 2);
    v73 = 4;
    v11 = *(unsigned __int8 *)(v10 + 55);
    v82 = 0LL;
    v82 = *(_OWORD *)(v10 + 112);
    v12 = (v11 >> 5) & 1;
    if ( v12 && (unsigned int)IsTrayWindow(v10) )
      xxxSendMinRectMessages(*((unsigned __int64 **)a1 + 2), (__int64)&v82);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0 )
      {
        goto LABEL_8;
      }
    }
    else if ( !IsDPIDWMSysMet(v13)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v19 = 0)
             : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v19) )
    {
LABEL_8:
      if ( IsDPIDWMSysMet(0x28uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v16 = 0)
          : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v16) )
      {
        v20 = (_DWORD *)(gpsi + 2816LL);
      }
      else
      {
        v20 = (_DWORD *)(gpsi + 2040LL);
      }
LABEL_24:
      v21 = v82;
      if ( *v20 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x20) != 0 )
      {
        *(_DWORD *)a1 |= 0x10u;
        if ( v12 )
        {
          left = DWORD2(v82) - v75;
          goto LABEL_33;
        }
        v23 = *((_DWORD *)a2 + 18) + *((_DWORD *)a2 + 20) - v75;
      }
      else
      {
        if ( v12 )
        {
          left = v82;
LABEL_33:
          if ( !v12 )
          {
            v24 = *((_DWORD *)a2 + 18) + v21;
            v25 = *((_DWORD *)a2 + 19) + DWORD1(v82);
            v26 = v24 + *((_DWORD *)a2 + 20);
            *(_QWORD *)&v82 = __PAIR64__(v25, v24);
            DWORD2(v82) = v26;
            HIDWORD(v82) = v25 + *((_DWORD *)a2 + 21);
          }
          v77 = (struct tagRECT *)MonitorFromRect((int *)&v82, 1u);
          MNGetPopupBoundsRect(a1, v77, &v76, 0);
          if ( v12 )
          {
            top = DWORD1(v82) - a4;
            if ( DWORD1(v82) - a4 < v76.top )
              top = HIDWORD(v82);
          }
          else
          {
            top = HIDWORD(v82);
          }
          v28 = *((_QWORD *)a1 + 2);
          if ( left >= v76.right - v75 )
            left = v76.right - v75;
          if ( (*(_BYTE *)(v28 + 50) & 0x40) != 0 )
          {
            left = *(_DWORD *)(v28 + 112) + *(_DWORD *)(v28 + 120) - left - v75;
            if ( left >= v76.right - v75 )
              left = v76.right - v75;
          }
          goto LABEL_97;
        }
        v23 = *((_DWORD *)a2 + 18);
      }
      left = v21 + v23;
      goto LABEL_33;
    }
    v20 = (_DWORD *)(gpsi + 2428LL);
    goto LABEL_24;
  }
  v29 = *((_QWORD *)a1 + 2);
  v30 = *((_QWORD *)a1 + 5);
  left = *(_DWORD *)(v29 + 112) + *((_DWORD *)a2 + 18) + *((_DWORD *)a2 + 20);
  top = *(_DWORD *)(v29 + 116) + *((_DWORD *)a2 + 19);
  v73 = 1;
  if ( (*(_DWORD *)(v30 + 128) & 3) != 0 )
  {
    v31 = *(unsigned int *)(v30 + 120);
    if ( (_DWORD)v31 == -1 || (unsigned int)v31 >= *(_DWORD *)(v30 + 52) )
      v32 = 0LL;
    else
      v32 = *(_QWORD *)(v30 + 80) + 152 * v31;
    top += *(_DWORD *)(GetDPIMetrics(v30, a2, a3) + 68) - *(_DWORD *)(v32 + 76);
  }
  v77 = (struct tagRECT *)MonitorFromWindow(*((_QWORD *)a1 + 2), 1u);
  MNGetPopupBoundsRect(a1, v77, &v76, 0);
  v33 = *((_QWORD *)a1 + 2);
  if ( ((*(unsigned __int8 *)a1 >> 4) & 1) == ((*(unsigned __int8 *)(v33 + 50) >> 6) & 1) )
  {
    v42 = v75;
    goto LABEL_73;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
    {
      goto LABEL_54;
    }
LABEL_65:
    v41 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_70;
  }
  if ( IsDPIDWMSysMet(v34)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_65;
  }
LABEL_54:
  if ( IsDPIDWMSysMet(7uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v37 = 0)
      : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v37) )
  {
    v41 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v41 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_70:
  v33 = *((_QWORD *)a1 + 2);
  v42 = v75;
  v43 = *v41 + *(_DWORD *)(v33 + 112) - v75;
  if ( v43 >= v76.left )
  {
    v44 = 2;
    left = v43;
    v73 = 2;
    goto LABEL_74;
  }
LABEL_73:
  v44 = 1;
LABEL_74:
  if ( left + v42 <= v76.right )
    goto LABEL_95;
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0 )
    {
      goto LABEL_78;
    }
  }
  else if ( !IsDPIDWMSysMet(v45)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v51 = 0)
           : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v51) )
  {
LABEL_78:
    if ( IsDPIDWMSysMet(7uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v48 = 0)
        : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v48) )
    {
      v52 = (_DWORD *)(gpsi + 2684LL);
    }
    else
    {
      v52 = (_DWORD *)(gpsi + 1908LL);
    }
    goto LABEL_94;
  }
  v52 = (_DWORD *)(gpsi + 2296LL);
LABEL_94:
  v33 = *((_QWORD *)a1 + 2);
  left = *v52 + *(_DWORD *)(v33 + 112) - v42;
  v44 = 2;
  v73 = 2;
LABEL_95:
  if ( (*(_BYTE *)(v33 + 50) & 0x40) != 0 )
    v73 = v44 ^ 3;
LABEL_97:
  if ( top + a4 <= v76.bottom )
    goto LABEL_145;
  v53 = top - a4;
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x4000) != 0 )
      {
        goto LABEL_123;
      }
    }
    else if ( !IsDPIDWMSysMet(v62)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v68 = 0)
             : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v68) )
    {
LABEL_123:
      if ( IsDPIDWMSysMet(8uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v65 = 0)
          : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v65) )
      {
        v69 = (_DWORD *)(gpsi + 2688LL);
      }
      else
      {
        v69 = (_DWORD *)(gpsi + 1912LL);
      }
      goto LABEL_139;
    }
    v69 = (_DWORD *)(gpsi + 2300LL);
LABEL_139:
    top = *((_DWORD *)v78 + 21) + 2 * *v69 + v53;
    goto LABEL_140;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x37uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0 )
    {
      goto LABEL_102;
    }
  }
  else if ( !IsDPIDWMSysMet(v54)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v60 = 0)
           : (v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v60) )
  {
LABEL_102:
    if ( IsDPIDWMSysMet(0x37uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v57 = 0)
        : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v57) )
    {
      v61 = (_DWORD *)(gpsi + 2876LL);
    }
    else
    {
      v61 = (_DWORD *)(gpsi + 2100LL);
    }
    goto LABEL_118;
  }
  v61 = (_DWORD *)(gpsi + 2488LL);
LABEL_118:
  top = v53 - *v61;
  if ( top < v76.top )
  {
    v70 = a4;
LABEL_144:
    top = v76.bottom - v70;
    goto LABEL_145;
  }
  v73 = 8;
LABEL_140:
  v70 = a4;
  if ( top < v76.top || top + a4 > v76.bottom )
    goto LABEL_144;
LABEL_145:
  if ( left <= v76.left )
    left = v76.left;
  v71 = v79;
  if ( top <= v76.top )
    top = v76.top;
  *v80 = left;
  *v81 = top;
  if ( v71 )
    *v71 = (struct tagMONITOR *)v77;
  return v73;
}
