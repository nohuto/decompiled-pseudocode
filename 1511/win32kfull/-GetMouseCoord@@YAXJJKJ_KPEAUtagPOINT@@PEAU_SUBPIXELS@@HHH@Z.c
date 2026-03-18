/*
 * XREFs of ?GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C0088738
 * Callers:
 *     xxxMoveEvent @ 0x1C0088630 (xxxMoveEvent.c)
 *     ProcessMouseInputViaRim @ 0x1C014F024 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01DA5F0 (ProcessMouseInput.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C0009F50 (AcquireMagInputLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     DoNewMouseAccel @ 0x1C00FD5FC (DoNewMouseAccel.c)
 *     DoTouchpadAccel @ 0x1C01D2B2C (DoTouchpadAccel.c)
 *     MagInputTransform @ 0x1C0203BD4 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C0203C9C (MagnificationTransformPoint.c)
 */

void __fastcall GetMouseCoord(
        __int64 a1,
        INT a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        struct tagPOINT *a6,
        struct _SUBPIXELS *a7,
        int a8,
        int a9,
        int a10)
{
  struct _SUBPIXELS *v10; // r12
  int v11; // ebx
  int v12; // r13d
  __int64 v13; // rcx
  _BOOL8 v14; // rcx
  int *v15; // rcx
  int v16; // r15d
  __int64 v17; // rcx
  _BOOL8 v18; // rcx
  int *v19; // rcx
  LONG v20; // r15d
  struct tagPOINT *v21; // rbx
  int v22; // edx
  unsigned int x_high; // eax
  int v24; // edx
  unsigned int y_high; // eax
  __int64 v26; // rcx
  _BOOL8 v27; // rcx
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  _BOOL8 v30; // rcx
  INT v31; // eax
  LONG y; // ecx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPOINT *v34; // r13
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rcx
  unsigned __int16 v38; // ax
  INT v39; // ebx
  INT v40; // eax
  INT v41; // edx
  INT v42; // eax
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  unsigned __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  int *v54; // rcx
  unsigned __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // r8
  int v64; // ecx
  int v65; // edx
  int v66; // r8d
  int v67; // r9d
  int v68; // edx
  int v69; // edx
  INT a; // [rsp+70h] [rbp+48h] BYREF
  INT v71; // [rsp+78h] [rbp+50h] BYREF
  int v72; // [rsp+80h] [rbp+58h]
  int v73; // [rsp+88h] [rbp+60h]

  v73 = a4;
  v72 = a3;
  v71 = a2;
  a = a1;
  v10 = a7;
  v11 = a4;
  *(_QWORD *)a7 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v12 = a3 & 2;
    if ( (a3 & 2) != 0 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0 )
        {
LABEL_9:
          v15 = (int *)(gpsi + 2580LL);
LABEL_10:
          v16 = *v15;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) == 0 )
            {
LABEL_16:
              v19 = (int *)(gpsi + 2584LL);
              goto LABEL_17;
            }
          }
          else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) == 0 )
          {
            v18 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1;
            if ( v18 )
              goto LABEL_16;
          }
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v44 = 0)
              : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v44) )
          {
            v19 = (int *)(gpsi + 2972LL);
          }
          else
          {
            v19 = (int *)(gpsi + 2196LL);
          }
LABEL_17:
          v20 = a * v16;
          v21 = a6;
          v22 = *v19;
          a6->x = v20;
          if ( v20 < 0 )
          {
            *(_DWORD *)v10 = -(unsigned __int16)-(__int16)v20;
            x_high = -((unsigned int)-v21->x >> 16);
          }
          else
          {
            *(_DWORD *)v10 = (unsigned __int16)v20;
            x_high = HIWORD(v21->x);
          }
          v24 = v71 * v22;
          v21->x = x_high;
          v21->y = v24;
          if ( v24 < 0 )
          {
            *((_DWORD *)v10 + 1) = -(unsigned __int16)-(__int16)v24;
            y_high = -((unsigned int)-v21->y >> 16);
          }
          else
          {
            *((_DWORD *)v10 + 1) = (unsigned __int16)v24;
            y_high = HIWORD(v21->y);
          }
          v21->y = y_high;
          if ( !v12 )
            goto LABEL_37;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4CuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) == 0 )
            {
LABEL_28:
              v28 = (_DWORD *)(gpsi + 2572LL);
              goto LABEL_29;
            }
          }
          else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) == 0 )
          {
            v27 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1;
            if ( v27 )
              goto LABEL_28;
          }
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v45 = 0)
              : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v45) )
          {
            v28 = (_DWORD *)(gpsi + 2960LL);
          }
          else
          {
            v28 = (_DWORD *)(gpsi + 2184LL);
          }
LABEL_29:
          v21->x += *v28;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4DuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) == 0 )
            {
LABEL_35:
              v19 = (int *)(gpsi + 2576LL);
LABEL_36:
              v21->y += *v19;
LABEL_37:
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) == 0 )
              {
                LogicalToPhysicalDPIPoint(v21, v21, 0LL, 0LL);
                v31 = EngMulDiv(v21->x - *(_DWORD *)(gpsi + 2184LL), 0xFFFF, *(_DWORD *)(gpsi + 2192LL));
                y = v21->y;
                a = v31;
                v71 = EngMulDiv(y - *(_DWORD *)(gpsi + 2188LL), 0xFFFF, *(_DWORD *)(gpsi + 2196LL));
              }
              idyRemainder = 0;
              idxRemainder = 0;
              if ( !a9 || (v72 & 0x20) != 0 )
              {
                AcquireMagInputLock();
                v62 = MagInputTransform();
                if ( v62 && PtInRect((_DWORD *)(v62 + 16), (unsigned __int64)*v21) )
                  MagnificationTransformPoint(v63, v21);
                _InterlockedExchange64(&gpMagInputLock, 0LL);
              }
              *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd) = a | 0xFFFF0000;
              *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 1) = v71 | 0xFFFF0000;
              *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 2) = v73;
              goto LABEL_42;
            }
          }
          else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) == 0 )
          {
            v30 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1;
            if ( v30 )
              goto LABEL_35;
          }
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v46 = 0)
              : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v46) )
          {
            v19 = (int *)(gpsi + 2964LL);
          }
          else
          {
            v19 = (int *)(gpsi + 2188LL);
          }
          goto LABEL_36;
        }
      }
      else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0 )
      {
        v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1;
        if ( v14 )
          goto LABEL_9;
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v43 = 0)
          : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v43) )
      {
        v15 = (int *)(gpsi + 2968LL);
      }
      else
      {
        v15 = (int *)(gpsi + 2192LL);
      }
      goto LABEL_10;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0 )
      {
        goto LABEL_90;
      }
    }
    else if ( !IsDPIDWMSysMet(v47)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v53 = 0)
             : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v53) )
    {
LABEL_90:
      if ( IsDPIDWMSysMet(0LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v50 = 0)
          : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v50) )
      {
        v54 = (int *)(gpsi + 2656LL);
      }
      else
      {
        v54 = (int *)(gpsi + 1880LL);
      }
LABEL_106:
      v16 = *v54;
      if ( (unsigned int)IsDPIAbsoluteSysMet(1uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) != 0 )
        {
          goto LABEL_109;
        }
      }
      else if ( !IsDPIDWMSysMet(v55)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v61 = 0)
               : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v61) )
      {
LABEL_109:
        if ( IsDPIDWMSysMet(1uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v58 = 0)
            : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v58) )
        {
          v19 = (int *)(gpsi + 2660LL);
        }
        else
        {
          v19 = (int *)(gpsi + 1884LL);
        }
        goto LABEL_17;
      }
      v19 = (int *)(gpsi + 2272LL);
      goto LABEL_17;
    }
    v54 = (int *)(gpsi + 2268LL);
    goto LABEL_106;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v34 = a6;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x4000) == 0 )
  {
    v36 = MonitorFromPoint((unsigned __int64)*a6, 0x20u);
    if ( v36 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0 )
      {
        v38 = *(_WORD *)(gpsi + 7286LL);
      }
      else
      {
        v38 = 96;
      }
      v39 = v38;
      v40 = EngMulDiv(a, *(unsigned __int16 *)(v36 + 152), v38);
      v41 = *(unsigned __int16 *)(v36 + 152);
      a = v40;
      v42 = EngMulDiv(v71, v41, v39);
      v11 = v73;
      v71 = v42;
    }
  }
  if ( gMouseSpeed )
  {
    if ( a10 )
      DoTouchpadAccel(&a, &v71);
    else
      DoNewMouseAccel(&a, &v71, v10);
  }
  else
  {
    if ( gMouseSensitivity == 10 )
    {
      *(_DWORD *)v10 = rand() % 0x10000;
      v69 = rand() % 0x10000;
    }
    else
    {
      if ( a )
      {
        v64 = idxRemainder + a * gMouseSensitivityFactor;
        v65 = v64 % 256;
        a = v64 / 256;
        v66 = v64 % 256;
        idxRemainder = v64 % 256;
        if ( v64 < 0 && v65 > 0 )
        {
          ++a;
          v66 = v65 - 256;
          idxRemainder = v65 - 256;
        }
      }
      else
      {
        v66 = idxRemainder;
      }
      if ( v71 )
      {
        v67 = idyRemainder + v71 * gMouseSensitivityFactor;
        v68 = v67 % 256;
        v71 = v67 / 256;
        idyRemainder = v67 % 256;
        if ( v67 < 0 && v68 > 0 )
        {
          ++v71;
          v68 -= 256;
          idyRemainder = v68;
        }
      }
      else
      {
        v68 = idyRemainder;
      }
      *(_DWORD *)v10 = v66 << 8;
      v69 = v68 << 8;
    }
    *((_DWORD *)v10 + 1) = v69;
  }
  v34->x += a;
  v34->y += v71;
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd) = LOWORD(v34->x) | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 1) = LOWORD(v34->y) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL)
                                                                                              - 1) << 16);
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 2) = v11;
LABEL_42:
  *((_QWORD *)&gaptMouse + 3 * (unsigned int)gptInd + 2) = a5;
  gptInd = ((_BYTE)gptInd + 1) & 0x3F;
}
