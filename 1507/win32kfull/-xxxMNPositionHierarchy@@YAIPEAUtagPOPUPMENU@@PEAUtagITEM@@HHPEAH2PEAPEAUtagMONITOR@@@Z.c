/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     xxxSendMinRectMessages @ 0x1C00F95D8 (xxxSendMinRectMessages.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01064D0 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  __int64 v21; // r8
  LONG left; // edi
  int v23; // edi
  int v24; // edx
  int v25; // ecx
  LONG top; // esi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  _DWORD *v40; // rcx
  int v41; // r14d
  LONG v42; // eax
  int v43; // ecx
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  _DWORD *v51; // rcx
  int v52; // esi
  unsigned __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // ecx
  _DWORD *v60; // rcx
  unsigned __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  _DWORD *v68; // rcx
  int v69; // ecx
  struct tagMONITOR **v70; // rcx
  unsigned int v72; // [rsp+20h] [rbp-60h]
  int v74; // [rsp+28h] [rbp-58h]
  struct tagRECT v75; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT *v76; // [rsp+40h] [rbp-40h]
  struct tagITEM *v77; // [rsp+48h] [rbp-38h]
  struct tagMONITOR **v78; // [rsp+50h] [rbp-30h]
  int *v79; // [rsp+58h] [rbp-28h]
  int *v80; // [rsp+60h] [rbp-20h]
  __int128 v81; // [rsp+68h] [rbp-18h] BYREF

  v79 = a5;
  v80 = a6;
  v78 = a7;
  v9 = *(_DWORD *)a1;
  v74 = a3;
  v77 = a2;
  v75 = 0LL;
  if ( (v9 & 1) != 0 )
  {
    v10 = *((_QWORD *)a1 + 2);
    v72 = 4;
    v11 = *(unsigned __int8 *)(v10 + 55);
    v81 = 0LL;
    v81 = *(_OWORD *)(v10 + 112);
    v12 = (v11 >> 5) & 1;
    if ( v12 && (unsigned int)IsTrayWindow(v10) )
      xxxSendMinRectMessages(*((unsigned __int64 **)a1 + 2), (struct _LARGE_STRING *)&v81);
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
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v19 = 0)
             : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v19) )
    {
LABEL_8:
      if ( IsDPIDWMSysMet(0x28uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v16 = 0)
          : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v16) )
      {
        v20 = (_DWORD *)(gpsi + 2816LL);
      }
      else
      {
        v20 = (_DWORD *)(gpsi + 2040LL);
      }
LABEL_24:
      v21 = (unsigned int)v81;
      if ( *v20 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x20) != 0 )
      {
        *(_DWORD *)a1 |= 0x10u;
        if ( v12 )
        {
          left = DWORD2(v81) - v74;
          goto LABEL_33;
        }
        v23 = *((_DWORD *)a2 + 18) + *((_DWORD *)a2 + 20) - v74;
      }
      else
      {
        if ( v12 )
        {
          left = v81;
LABEL_33:
          if ( !v12 )
          {
            v21 = (unsigned int)(*((_DWORD *)a2 + 18) + v21);
            v24 = *((_DWORD *)a2 + 19) + DWORD1(v81);
            v25 = v21 + *((_DWORD *)a2 + 20);
            *(_QWORD *)&v81 = __PAIR64__(v24, v21);
            DWORD2(v81) = v25;
            HIDWORD(v81) = v24 + *((_DWORD *)a2 + 21);
          }
          v76 = (struct tagRECT *)MonitorFromRect((int *)&v81, 1LL, v21);
          MNGetPopupBoundsRect(a1, v76, &v75, 0);
          if ( v12 )
          {
            top = DWORD1(v81) - a4;
            if ( DWORD1(v81) - a4 < v75.top )
              top = HIDWORD(v81);
          }
          else
          {
            top = HIDWORD(v81);
          }
          v27 = *((_QWORD *)a1 + 2);
          if ( left >= v75.right - v74 )
            left = v75.right - v74;
          if ( (*(_BYTE *)(v27 + 50) & 0x40) != 0 )
          {
            left = *(_DWORD *)(v27 + 112) + *(_DWORD *)(v27 + 120) - left - v74;
            if ( left >= v75.right - v74 )
              left = v75.right - v74;
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
  v28 = *((_QWORD *)a1 + 2);
  v29 = *((_QWORD *)a1 + 5);
  left = *(_DWORD *)(v28 + 112) + *((_DWORD *)a2 + 18) + *((_DWORD *)a2 + 20);
  top = *(_DWORD *)(v28 + 116) + *((_DWORD *)a2 + 19);
  v72 = 1;
  if ( (*(_DWORD *)(v29 + 128) & 3) != 0 )
  {
    v30 = *(unsigned int *)(v29 + 120);
    if ( (_DWORD)v30 == -1 || (unsigned int)v30 >= *(_DWORD *)(v29 + 52) )
      v31 = 0LL;
    else
      v31 = *(_QWORD *)(v29 + 80) + 152 * v30;
    top += *(_DWORD *)(GetDPIMetrics(v29, a2, a3) + 68) - *(_DWORD *)(v31 + 76);
  }
  v76 = (struct tagRECT *)MonitorFromWindow(*((_QWORD *)a1 + 2), 1LL, a3);
  MNGetPopupBoundsRect(a1, v76, &v75, 0);
  v32 = *((_QWORD *)a1 + 2);
  if ( ((*(unsigned __int8 *)a1 >> 4) & 1) == ((*(unsigned __int8 *)(v32 + 50) >> 6) & 1) )
  {
    v41 = v74;
    goto LABEL_73;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
    {
      goto LABEL_54;
    }
LABEL_65:
    v40 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_70;
  }
  if ( IsDPIDWMSysMet(v33)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_65;
  }
LABEL_54:
  if ( IsDPIDWMSysMet(7uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v36 = 0)
      : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v36) )
  {
    v40 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v40 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_70:
  v32 = *((_QWORD *)a1 + 2);
  v41 = v74;
  v42 = *v40 + *(_DWORD *)(v32 + 112) - v74;
  if ( v42 >= v75.left )
  {
    v43 = 2;
    left = v42;
    v72 = 2;
    goto LABEL_74;
  }
LABEL_73:
  v43 = 1;
LABEL_74:
  if ( left + v41 <= v75.right )
    goto LABEL_95;
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
    {
      goto LABEL_78;
    }
  }
  else if ( !IsDPIDWMSysMet(v44)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v50 = 0)
           : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v50) )
  {
LABEL_78:
    if ( IsDPIDWMSysMet(7uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v47 = 0)
        : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v47) )
    {
      v51 = (_DWORD *)(gpsi + 2684LL);
    }
    else
    {
      v51 = (_DWORD *)(gpsi + 1908LL);
    }
    goto LABEL_94;
  }
  v51 = (_DWORD *)(gpsi + 2296LL);
LABEL_94:
  v32 = *((_QWORD *)a1 + 2);
  left = *v51 + *(_DWORD *)(v32 + 112) - v41;
  v43 = 2;
  v72 = 2;
LABEL_95:
  if ( (*(_BYTE *)(v32 + 50) & 0x40) != 0 )
    v72 = v43 ^ 3;
LABEL_97:
  if ( top + a4 <= v75.bottom )
    goto LABEL_145;
  v52 = top - a4;
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x4000) != 0 )
      {
        goto LABEL_123;
      }
    }
    else if ( !IsDPIDWMSysMet(v61)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v67 = 0)
             : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v67) )
    {
LABEL_123:
      if ( IsDPIDWMSysMet(8uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v64 = 0)
          : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v64) )
      {
        v68 = (_DWORD *)(gpsi + 2688LL);
      }
      else
      {
        v68 = (_DWORD *)(gpsi + 1912LL);
      }
      goto LABEL_139;
    }
    v68 = (_DWORD *)(gpsi + 2300LL);
LABEL_139:
    top = *((_DWORD *)v77 + 21) + 2 * *v68 + v52;
    goto LABEL_140;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x37uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) != 0 )
    {
      goto LABEL_102;
    }
  }
  else if ( !IsDPIDWMSysMet(v53)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v59 = 0)
           : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v59) )
  {
LABEL_102:
    if ( IsDPIDWMSysMet(0x37uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v56 = 0)
        : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v56) )
    {
      v60 = (_DWORD *)(gpsi + 2876LL);
    }
    else
    {
      v60 = (_DWORD *)(gpsi + 2100LL);
    }
    goto LABEL_118;
  }
  v60 = (_DWORD *)(gpsi + 2488LL);
LABEL_118:
  top = v52 - *v60;
  if ( top < v75.top )
  {
    v69 = a4;
LABEL_144:
    top = v75.bottom - v69;
    goto LABEL_145;
  }
  v72 = 8;
LABEL_140:
  v69 = a4;
  if ( top < v75.top || top + a4 > v75.bottom )
    goto LABEL_144;
LABEL_145:
  if ( left <= v75.left )
    left = v75.left;
  v70 = v78;
  if ( top <= v75.top )
    top = v75.top;
  *v79 = left;
  *v80 = top;
  if ( v70 )
    *v70 = (struct tagMONITOR *)v76;
  return v72;
}
