/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01194CC
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0119440 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C0119F80 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A0FC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C011A120 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v6; // eax
  int v7; // r13d
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  int *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ebx
  int v25; // r12d
  int *v26; // rcx
  int *v27; // rdx
  int v28; // ebx
  struct tagSBCALC *v29; // r8
  __int64 v30; // r13
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  _DWORD *v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  _DWORD *v46; // rcx
  unsigned int v47; // edi
  int v48; // edx
  unsigned int v49; // r9d
  int v50; // r8d
  unsigned int v51; // r9d
  unsigned __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ecx
  _DWORD *v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  _DWORD *v67; // rcx
  __int64 v68; // rbx
  int v69; // [rsp+30h] [rbp-71h]
  RECT v70; // [rsp+38h] [rbp-69h] BYREF
  int v71; // [rsp+48h] [rbp-59h]
  int v72; // [rsp+4Ch] [rbp-55h]
  int TextColor; // [rsp+50h] [rbp-51h]
  struct tagSBCALC *v74; // [rsp+58h] [rbp-49h]
  struct tagWND *v75; // [rsp+60h] [rbp-41h]
  HBRUSH ColorObjects; // [rsp+68h] [rbp-39h]
  _QWORD v77[6]; // [rsp+70h] [rbp-31h] BYREF
  int v78; // [rsp+A0h] [rbp-1h] BYREF
  int v79; // [rsp+A4h] [rbp+3h] BYREF
  LONG v80; // [rsp+A8h] [rbp+7h]
  LONG v81; // [rsp+ACh] [rbp+Bh]

  v6 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v74 = a2;
  v71 = a4;
  v75 = a1;
  v7 = v6 / 2;
  v8 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v72 = v8;
  if ( v7 > 0 && v8 > 0 )
  {
    if ( a4 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
        {
          goto LABEL_7;
        }
      }
      else if ( !IsDPIDWMSysMet(v9)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v15 = 0)
               : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v15) )
      {
LABEL_7:
        if ( IsDPIDWMSysMet(0x14uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v12 = 0)
            : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v12) )
        {
          v16 = (int *)(gpsi + 2736LL);
        }
        else
        {
          v16 = (int *)(gpsi + 1960LL);
        }
        goto LABEL_42;
      }
      v16 = (int *)(gpsi + 2348LL);
      goto LABEL_42;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0 )
      {
        goto LABEL_26;
      }
    }
    else if ( !IsDPIDWMSysMet(v17)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v23 = 0)
             : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v23) )
    {
LABEL_26:
      if ( IsDPIDWMSysMet(0x15uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v20 = 0)
          : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v20) )
      {
        v16 = (int *)(gpsi + 2740LL);
      }
      else
      {
        v16 = (int *)(gpsi + 1964LL);
      }
LABEL_42:
      v24 = *v16;
      v25 = -1;
      DCOBJ::DCOBJ((DCOBJ *)v77, a3);
      if ( v77[0] )
        v25 = *(_DWORD *)(*(_QWORD *)(v77[0] + 80LL) + 36LL);
      DCOBJ::~DCOBJ((DCOBJ *)v77);
      TextColor = GreGetTextColor(a3);
      ColorObjects = xxxGetColorObjects(v75, a3);
      v26 = &v78;
      if ( v7 > v24 )
        v7 = v24;
      v27 = &v79;
      v28 = v71;
      v69 = v7;
      if ( !v71 )
      {
        v26 = &v79;
        v27 = &v78;
      }
      v29 = v74;
      *v26 = *((_DWORD *)v74 + 6);
      *v27 = *((_DWORD *)v29 + 4);
      v26[2] = *((_DWORD *)v29 + 7);
      v27[2] = *((_DWORD *)v29 + 5);
      v30 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 3840LL));
      if ( v28 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
          {
            goto LABEL_52;
          }
        }
        else if ( !IsDPIDWMSysMet(v31)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v37 = 0)
                 : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v37) )
        {
LABEL_52:
          if ( IsDPIDWMSysMet(0x14uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v34 = 0)
              : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v34) )
          {
            v38 = (_DWORD *)(gpsi + 2736LL);
          }
          else
          {
            v38 = (_DWORD *)(gpsi + 1960LL);
          }
LABEL_68:
          if ( v69 != *v38 )
          {
LABEL_90:
            v47 = a5;
            v70.left = v78;
            v70.right = v80;
            v70.top = v79;
            v70.bottom = v79 + v69;
            DrawFrameControl(a3, &v70, 3, (a5 & 1) << 8);
            v70.bottom = v81;
            v51 = ((a5 & 2) << 7) | 1;
            v70.top = v81 - v69;
LABEL_134:
            DrawFrameControl(a3, &v70, 3, v51);
            goto LABEL_135;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) != 0 )
            {
              goto LABEL_72;
            }
          }
          else if ( !IsDPIDWMSysMet(v39)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v45 = 0)
                   : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v45) )
          {
LABEL_72:
            if ( IsDPIDWMSysMet(2uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v42 = 0)
                : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v42) )
            {
              v46 = (_DWORD *)(gpsi + 2664LL);
            }
            else
            {
              v46 = (_DWORD *)(gpsi + 1888LL);
            }
LABEL_88:
            if ( v72 == *v46 )
            {
              v47 = a5;
              BitBltSysBmp(a3, v78, v79, (a5 & 1) != 0 ? 49 : 46);
              v48 = v78;
              v49 = (a5 & 2) != 0 ? 53 : 50;
              v50 = v81 - v69;
LABEL_132:
              BitBltSysBmp(a3, v48, v50, v49);
LABEL_135:
              v68 = GreSelectBrush(a3, v30);
              DrawThumb2(v75, v74, a3, ColorObjects, v71, v47);
              GreSelectBrush(a3, v68);
              GreSetBkColor(a3, v25);
              GreSetTextColor(a3, TextColor);
              return;
            }
            goto LABEL_90;
          }
          v46 = (_DWORD *)(gpsi + 2276LL);
          goto LABEL_88;
        }
        v38 = (_DWORD *)(gpsi + 2348LL);
        goto LABEL_68;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0 )
        {
          goto LABEL_94;
        }
      }
      else if ( !IsDPIDWMSysMet(v52)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v58 = 0)
               : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v58) )
      {
LABEL_94:
        if ( IsDPIDWMSysMet(0x15uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v55 = 0)
            : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v55) )
        {
          v59 = (_DWORD *)(gpsi + 2740LL);
        }
        else
        {
          v59 = (_DWORD *)(gpsi + 1964LL);
        }
LABEL_110:
        if ( v69 != *v59 )
        {
LABEL_133:
          v47 = a5;
          v70.top = v79;
          v70.bottom = v81;
          v70.left = v78;
          v70.right = v78 + v69;
          DrawFrameControl(a3, &v70, 3, ((a5 & 1) << 8) | 2);
          v70.right = v80;
          v51 = ((a5 & 2) << 7) | 3;
          v70.left = v80 - v69;
          goto LABEL_134;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0 )
          {
            goto LABEL_114;
          }
        }
        else if ( !IsDPIDWMSysMet(v60)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v66 = 0)
                 : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v66) )
        {
LABEL_114:
          if ( IsDPIDWMSysMet(3uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v63 = 0)
              : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v63) )
          {
            v67 = (_DWORD *)(gpsi + 2668LL);
          }
          else
          {
            v67 = (_DWORD *)(gpsi + 1892LL);
          }
LABEL_130:
          if ( v72 == *v67 )
          {
            v47 = a5;
            BitBltSysBmp(a3, v78, v79, (a5 & 1) != 0 ? 61 : 58);
            v50 = v79;
            v49 = (a5 & 2) != 0 ? 57 : 54;
            v48 = v80 - v69;
            goto LABEL_132;
          }
          goto LABEL_133;
        }
        v67 = (_DWORD *)(gpsi + 2280LL);
        goto LABEL_130;
      }
      v59 = (_DWORD *)(gpsi + 2352LL);
      goto LABEL_110;
    }
    v16 = (int *)(gpsi + 2352LL);
    goto LABEL_42;
  }
}
