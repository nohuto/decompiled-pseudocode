/*
 * XREFs of ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0
 * Callers:
 *     xxxMoveEvent @ 0x1C00F6C78 (xxxMoveEvent.c)
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01D9FE0 (ProcessMouseInput.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C0008428 (AcquireMagInputLock.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     DoNewMouseAccel @ 0x1C00F75FC (DoNewMouseAccel.c)
 *     DoTouchpadAccel @ 0x1C01D0ED0 (DoTouchpadAccel.c)
 *     MagInputTransform @ 0x1C0203834 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C02038FC (MagnificationTransformPoint.c)
 */

void __fastcall GetMouseCoord(
        __int64 a1,
        INT a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        struct tagPOINT *a6,
        struct _SUBPIXELS *a7,
        int a8,
        int a9,
        int a10)
{
  struct _SUBPIXELS *v10; // r15
  int v11; // esi
  int v12; // r13d
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  int *v20; // rcx
  int v21; // r12d
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  int *v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  int *v37; // rcx
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ecx
  LONG v45; // r12d
  struct tagPOINT *v46; // rbx
  int v47; // edx
  unsigned int x_high; // eax
  int v49; // edx
  unsigned int y_high; // eax
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  _DWORD *v56; // rcx
  __int64 v57; // rcx
  int v58; // ecx
  unsigned __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // ecx
  INT v66; // eax
  LONG y; // ecx
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v71; // r8
  struct tagPOINT *v72; // r13
  __int64 v73; // rcx
  __int64 v74; // r12
  __int64 v75; // rcx
  unsigned __int16 v76; // ax
  INT v77; // ebx
  INT v78; // eax
  INT v79; // edx
  INT v80; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // r8d
  int v84; // r10d
  int v85; // eax
  int v86; // eax
  INT a; // [rsp+70h] [rbp+48h] BYREF
  INT v88; // [rsp+78h] [rbp+50h] BYREF
  int v89; // [rsp+80h] [rbp+58h]
  __int64 v90; // [rsp+88h] [rbp+60h]

  v90 = a4;
  v89 = a3;
  v88 = a2;
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
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0 )
        {
          goto LABEL_6;
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
LABEL_6:
        if ( IsDPIDWMSysMet(0x4EuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v16 = 0)
            : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v16) )
        {
          v20 = (int *)(gpsi + 2968LL);
        }
        else
        {
          v20 = (int *)(gpsi + 2192LL);
        }
LABEL_22:
        v21 = *v20;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0 )
          {
            goto LABEL_25;
          }
        }
        else if ( !IsDPIDWMSysMet(v22)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v28 = 0)
                 : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v28) )
        {
LABEL_25:
          if ( IsDPIDWMSysMet(0x4FuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v25 = 0)
              : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v25) )
          {
            v29 = (int *)(gpsi + 2972LL);
          }
          else
          {
            v29 = (int *)(gpsi + 2196LL);
          }
          goto LABEL_79;
        }
        v29 = (int *)(gpsi + 2584LL);
        goto LABEL_79;
      }
      v20 = (int *)(gpsi + 2580LL);
      goto LABEL_22;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) != 0 )
      {
        goto LABEL_44;
      }
    }
    else if ( !IsDPIDWMSysMet(v30)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v36 = 0)
             : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v36) )
    {
LABEL_44:
      if ( IsDPIDWMSysMet(0LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v33 = 0)
          : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v33) )
      {
        v37 = (int *)(gpsi + 2656LL);
      }
      else
      {
        v37 = (int *)(gpsi + 1880LL);
      }
LABEL_60:
      v21 = *v37;
      if ( (unsigned int)IsDPIAbsoluteSysMet(1uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0 )
        {
          goto LABEL_63;
        }
      }
      else if ( !IsDPIDWMSysMet(v38)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v44 = 0)
               : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v44) )
      {
LABEL_63:
        if ( IsDPIDWMSysMet(1uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v41 = 0)
            : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v41) )
        {
          v29 = (int *)(gpsi + 2660LL);
        }
        else
        {
          v29 = (int *)(gpsi + 1884LL);
        }
LABEL_79:
        v45 = a * v21;
        v46 = a6;
        v47 = *v29;
        a6->x = v45;
        if ( v45 < 0 )
        {
          *(_DWORD *)v10 = -(unsigned __int16)-(__int16)v45;
          x_high = -((unsigned int)-v46->x >> 16);
        }
        else
        {
          *(_DWORD *)v10 = (unsigned __int16)v45;
          x_high = HIWORD(v46->x);
        }
        v49 = v88 * v47;
        v46->x = x_high;
        v46->y = v49;
        if ( v49 < 0 )
        {
          *((_DWORD *)v10 + 1) = -(unsigned __int16)-(__int16)v49;
          y_high = -((unsigned int)-v46->y >> 16);
        }
        else
        {
          *((_DWORD *)v10 + 1) = (unsigned __int16)v49;
          y_high = HIWORD(v46->y);
        }
        v46->y = y_high;
        if ( !v12 )
          goto LABEL_126;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x4CuLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0 )
          {
            goto LABEL_98;
          }
        }
        else if ( !IsDPIDWMSysMet(v51)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v55 = 0)
                 : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v55) )
        {
LABEL_98:
          if ( IsDPIDWMSysMet(0x4CuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v58 = 0)
              : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v58) )
          {
            v56 = (_DWORD *)(gpsi + 2960LL);
          }
          else
          {
            v56 = (_DWORD *)(gpsi + 2184LL);
          }
LABEL_106:
          v46->x += *v56;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4DuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) != 0 )
            {
              goto LABEL_109;
            }
          }
          else if ( !IsDPIDWMSysMet(v59)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v65 = 0)
                   : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v65) )
          {
LABEL_109:
            if ( IsDPIDWMSysMet(0x4DuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v62 = 0)
                : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v62) )
            {
              v29 = (int *)(gpsi + 2964LL);
            }
            else
            {
              v29 = (int *)(gpsi + 2188LL);
            }
            goto LABEL_125;
          }
          v29 = (int *)(gpsi + 2576LL);
LABEL_125:
          v46->y += *v29;
LABEL_126:
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0 )
          {
            LogicalToPhysicalDPIPoint(v46, v46, 0LL, 0LL);
            v66 = EngMulDiv(v46->x - *(_DWORD *)(gpsi + 2184LL), 0xFFFF, *(_DWORD *)(gpsi + 2192LL));
            y = v46->y;
            a = v66;
            v88 = EngMulDiv(y - *(_DWORD *)(gpsi + 2188LL), 0xFFFF, *(_DWORD *)(gpsi + 2196LL));
          }
          idyRemainder = 0;
          idxRemainder = 0;
          if ( !a9 || (v89 & 0x20) != 0 )
          {
            AcquireMagInputLock();
            v68 = MagInputTransform();
            if ( v68 && PtInRect((_DWORD *)(v68 + 16), (unsigned __int64)*v46) )
              MagnificationTransformPoint(v69, v46);
            _InterlockedExchange64(&gpMagInputLock, 0LL);
          }
          *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd) = a | 0xFFFF0000;
          *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 1) = v88 | 0xFFFF0000;
          *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 2) = v90;
          goto LABEL_161;
        }
        v56 = (_DWORD *)(gpsi + 2572LL);
        goto LABEL_106;
      }
      v29 = (int *)(gpsi + 2272LL);
      goto LABEL_79;
    }
    v37 = (int *)(gpsi + 2268LL);
    goto LABEL_60;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v72 = a6;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x4000) == 0 )
  {
    v74 = MonitorFromPoint((__int64)*a6, 32LL, v71);
    if ( v74 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x4000) != 0 )
      {
        v76 = *(_WORD *)(gpsi + 7286LL);
      }
      else
      {
        v76 = 96;
      }
      v77 = v76;
      v78 = EngMulDiv(a, *(unsigned __int16 *)(v74 + 152), v76);
      v79 = *(unsigned __int16 *)(v74 + 152);
      a = v78;
      v80 = EngMulDiv(v88, v79, v77);
      v11 = v90;
      v88 = v80;
    }
  }
  if ( gMouseSpeed )
  {
    if ( a10 )
      DoTouchpadAccel(&a, &v88, v71);
    else
      DoNewMouseAccel(&a, &v88, v10);
  }
  else
  {
    if ( gMouseSensitivity == 10 )
    {
      *(_DWORD *)v10 = rand() % 0x10000;
      v86 = rand() % 0x10000;
    }
    else
    {
      if ( a )
      {
        v81 = idxRemainder + a * gMouseSensitivityFactor;
        v82 = v81 % 256;
        a = v81 / 256;
        v83 = v81 % 256;
        idxRemainder = v81 % 256;
        if ( v81 < 0 && v82 > 0 )
        {
          ++a;
          v83 = v82 - 256;
          idxRemainder = v82 - 256;
        }
      }
      else
      {
        v83 = idxRemainder;
      }
      if ( v88 )
      {
        v84 = idyRemainder + v88 * gMouseSensitivityFactor;
        v85 = v84 % 256;
        v88 = v84 / 256;
        idyRemainder = v84 % 256;
        if ( v84 < 0 && v85 > 0 )
        {
          ++v88;
          v85 -= 256;
          idyRemainder = v85;
        }
      }
      else
      {
        v85 = idyRemainder;
      }
      *(_DWORD *)v10 = v83 << 8;
      v86 = v85 << 8;
    }
    *((_DWORD *)v10 + 1) = v86;
  }
  v72->x += a;
  v72->y += v88;
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd) = LOWORD(v72->x) | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 1) = LOWORD(v72->y) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL)
                                                                                              - 1) << 16);
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 2) = v11;
LABEL_161:
  *((_QWORD *)&gaptMouse + 3 * (unsigned int)gptInd + 2) = a5;
  gptInd = ((_BYTE)gptInd + 1) & 0x3F;
}
