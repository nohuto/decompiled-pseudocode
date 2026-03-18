/*
 * XREFs of MNDrawArrow @ 0x1C023EF28
 * Callers:
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     xxxMNSetTop @ 0x1C0217528 (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBD44 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall MNDrawArrow(HDC a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  HDC DCEx; // rbp
  unsigned __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  int *v17; // rcx
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r14d
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  int *v36; // rcx
  int v37; // edi
  unsigned int v38; // esi
  int v39; // edx
  int v40; // ebx
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  _DWORD *v48; // rbx
  struct tagDPIMETRICS *DPIMETRICS; // rax
  int v50; // edi
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // ecx
  _QWORD *v58; // rax
  __int64 v59; // rax
  RECT v60; // [rsp+20h] [rbp-38h] BYREF

  result = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_DWORD *)(result + 128) & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v5, 0LL, 66561LL);
    v10 = IsDPIAbsoluteSysMet(7uLL);
    if ( v10 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) != 0 )
      {
        goto LABEL_8;
      }
    }
    else if ( !IsDPIDWMSysMet(v9)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v16 = 0)
             : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v16) )
    {
LABEL_8:
      if ( IsDPIDWMSysMet(7uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v13 = 0)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v13) )
      {
        v17 = (int *)(gpsi + 2684LL);
      }
      else
      {
        v17 = (int *)(gpsi + 1908LL);
      }
LABEL_24:
      v18 = *v17;
      v19 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 40LL);
      if ( (int)v19 >= 0 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v20 = 0LL)
            : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !(_DWORD)v20 || *(_WORD *)(gpsi + 7286LL) == 96) )
        {
          v21 = gpsi + 4260LL;
        }
        else
        {
          v21 = gpsi + 5748LL;
        }
        v22 = *(_DWORD *)(v21 + 1016) + v18;
LABEL_55:
        if ( a3 == -3 )
        {
          if ( v10 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
            {
              goto LABEL_59;
            }
          }
          else if ( !IsDPIDWMSysMet(7uLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v35 = 0)
                   : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v35) )
          {
LABEL_59:
            if ( IsDPIDWMSysMet(7uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v32 = 0)
                : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v32) )
            {
              v36 = (int *)(gpsi + 2684LL);
            }
            else
            {
              v36 = (int *)(gpsi + 1908LL);
            }
            goto LABEL_75;
          }
          v36 = (int *)(gpsi + 2296LL);
LABEL_75:
          v37 = *v36;
          v38 = 65;
          v39 = 2;
          v40 = 8;
          goto LABEL_96;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x4000) != 0 )
          {
            goto LABEL_79;
          }
        }
        else if ( !IsDPIDWMSysMet(v41)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v47 = 0)
                 : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v47) )
        {
LABEL_79:
          if ( IsDPIDWMSysMet(8uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v44 = 0)
              : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v44) )
          {
            v48 = (_DWORD *)(gpsi + 2688LL);
          }
          else
          {
            v48 = (_DWORD *)(gpsi + 1912LL);
          }
          goto LABEL_95;
        }
        v48 = (_DWORD *)(gpsi + 2300LL);
LABEL_95:
        DPIMETRICS = GetDPIMETRICS((struct tagWND *)v5);
        v50 = *(_DWORD *)(v5 + 124) - *(_DWORD *)(v5 + 116);
        v38 = 68;
        v37 = v50 - *((_DWORD *)DPIMETRICS + 17) - *v48;
        v39 = 3;
        v40 = 16;
LABEL_96:
        v51 = *(_QWORD *)(a2 + 40);
        if ( (*(_DWORD *)(v51 + 128) & 3) == v39 )
        {
          v38 += 2;
          v40 |= 0x100u;
        }
        if ( !*(_QWORD *)(v51 + 112) )
        {
          BitBltSysBmp(DCEx, v22, v37, v38);
          result = BitBltSysBmp(DCEx, v22, v37, v38);
LABEL_121:
          if ( !a1 )
            return _ReleaseDC(DCEx);
          return result;
        }
        v60.top = v37;
        v60.left = v22;
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v53 = 0)
            : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !v53) )
        {
          v54 = (_QWORD *)gpsi;
        }
        else
        {
          v54 = (_QWORD *)gpsi;
          if ( *(_WORD *)(gpsi + 7286LL) != 96 )
          {
            v55 = gpsi + 5748LL;
            goto LABEL_109;
          }
        }
        v55 = *v54 + 4260LL;
LABEL_109:
        v60.right = v22 + *(_DWORD *)(v55 + 1048);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process((unsigned int)v60.right) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v57 = 0)
            : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !v57) )
        {
          v58 = (_QWORD *)gpsi;
        }
        else
        {
          v58 = (_QWORD *)gpsi;
          if ( *(_WORD *)(gpsi + 7286LL) != 96 )
          {
            v59 = gpsi + 5748LL;
LABEL_119:
            v60.bottom = v37 + *(_DWORD *)(v59 + 1052);
            result = DrawFrameControl(DCEx, &v60, 2, v40 | 0x800u);
            goto LABEL_121;
          }
        }
        v59 = *v58 + 4260LL;
        goto LABEL_119;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0 )
        {
          goto LABEL_38;
        }
      }
      else if ( !IsDPIDWMSysMet(v23)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v29 = 0)
               : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v29) )
      {
LABEL_38:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v26 = 0)
            : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v26) )
        {
          v20 = gpsi + 2836LL;
        }
        else
        {
          v20 = gpsi + 2060LL;
        }
        goto LABEL_54;
      }
      v20 = gpsi + 2448LL;
LABEL_54:
      v22 = v18 + 2 * *(_DWORD *)v20;
      goto LABEL_55;
    }
    v17 = (int *)(gpsi + 2296LL);
    goto LABEL_24;
  }
  return result;
}
