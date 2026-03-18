/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00856C0
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00845A0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     GetWindowBordersForDpi @ 0x1C0082C64 (GetWindowBordersForDpi.c)
 *     _HasCaptionIcon @ 0x1C00943D8 (_HasCaptionIcon.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 SysMenu; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // r14d
  __int64 v14; // rcx
  int v15; // ebp
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebp
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // r8
  bool v24; // zf
  __int64 v25; // r14
  int v26; // eax
  int WindowBordersForDpi; // ecx
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // rdx
  __int64 *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  _DWORD *v40; // rax
  int v41; // ecx
  __int64 v42; // r8
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // edx
  __int64 *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  _DWORD *v56; // rcx
  __int64 v57; // rdx
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rbp
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // rax
  __int64 v70; // rax
  int v71; // ecx
  __int64 *v72; // rax
  int v73; // [rsp+98h] [rbp+20h]

  v5 = (int)a3;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  result = 0LL;
  v8 = 0LL;
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  switch ( a2 )
  {
    case -3:
      if ( (*(_BYTE *)(a1 + 55) & 0x40) != 0 )
        return result;
      v25 = *(_QWORD *)(a1 + 192);
      if ( !v25 || (int)a3 < 0 || (unsigned int)a3 > *(_DWORD *)(v25 + 52) )
        return result;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)v25;
      if ( *(_DWORD *)(v25 + 56) && *(_DWORD *)(v25 + 60) )
      {
        if ( !(_DWORD)a3 )
        {
          if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
          {
            v26 = *(unsigned __int16 *)(a1 + 360);
          }
          else if ( *(_DWORD *)(a1 + 344) )
          {
            v26 = *(unsigned __int16 *)(gpsi + 7286LL);
          }
          else
          {
            v26 = 96;
          }
          WindowBordersForDpi = GetWindowBordersForDpi(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48), a3, a4, v26);
          v73 = WindowBordersForDpi;
          if ( (*(_BYTE *)(a1 + 50) & 0x40) == 0 )
          {
            v28 = gpsi;
            v29 = WindowBordersForDpi;
            v30 = *(_DWORD *)(a1 + 112) + *(_DWORD *)(gpsi + 1900LL) * WindowBordersForDpi;
            *(_DWORD *)(a4 + 4) = v30;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v25 + 56) + v30;
LABEL_43:
            *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 116) + v29 * *(_DWORD *)(*(_QWORD *)v28 + 1904LL);
            if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
            {
              v31 = 51LL;
              if ( *(char *)(a1 + 48) >= 0 )
                v31 = 4LL;
              *(_DWORD *)(a4 + 8) += GetSystemMetricsForWindow(a1, v31);
            }
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + *(_DWORD *)(v25 + 60);
            goto LABEL_48;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
            {
              goto LABEL_63;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(v33)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v39 = 0)
                   : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v39) )
          {
LABEL_63:
            if ( (unsigned int)IsDPIDWMSysMet(5LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v36 = 0)
                : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v36) )
            {
              v28 = gpsi;
              v40 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v28 = gpsi;
              v40 = (_DWORD *)(gpsi + 1900LL);
            }
            goto LABEL_79;
          }
          v28 = gpsi;
          v40 = (_DWORD *)(gpsi + 2288LL);
LABEL_79:
          v29 = v73;
          v41 = *(_DWORD *)(a1 + 120) - v73 * *v40;
          *(_DWORD *)(a4 + 12) = v41;
          *(_DWORD *)(a4 + 4) = v41 - *(_DWORD *)(v25 + 56);
          goto LABEL_43;
        }
        v42 = *(_QWORD *)(v25 + 80);
        v43 = 152 * v5;
        if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
        {
          v44 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(v43 + v42 - 80);
          *(_DWORD *)(a4 + 12) = v44;
          *(_DWORD *)(a4 + 4) = v44 - *(_DWORD *)(v43 + v42 - 72);
        }
        else
        {
          v45 = *(_DWORD *)(a1 + 112) + *(_DWORD *)(v43 + v42 - 80);
          *(_DWORD *)(a4 + 4) = v45;
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(v43 + v42 - 72) + v45;
        }
        v46 = *(_DWORD *)(a1 + 116) + *(_DWORD *)(v43 + v42 - 76);
        *(_DWORD *)(a4 + 8) = v46;
        *(_DWORD *)(a4 + 16) = *(_DWORD *)(v43 + v42 - 68) + v46;
      }
LABEL_48:
      v32 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 536LL);
      if ( v32 )
        v23 = *v32;
      else
        v23 = 0LL;
      if ( !v23 )
        return 1LL;
      v24 = (*(_DWORD *)v23 & 6) == 2;
LABEL_29:
      if ( !v24 || *(_QWORD *)(v23 + 8) != a1 )
        return 1LL;
      v47 = *(_DWORD *)(a4 + 40) | 1;
      *(_DWORD *)(a4 + 40) = v47;
      if ( !(_DWORD)v5 )
      {
        *(_DWORD *)(a4 + 40) = v47 | 2;
        return 1LL;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v23 + 64) + 80LL) != (_DWORD)v5 - 1 )
        return 1LL;
      *(_DWORD *)(a4 + 40) = v47 | 2;
      v48 = *(__int64 **)(*(_QWORD *)(v23 + 64) + 24LL);
      if ( v48 )
        v8 = *v48;
LABEL_161:
      *(_QWORD *)(a4 + 32) = v8;
      return 1LL;
    case -1:
      if ( (*(_BYTE *)(a1 + 54) & 8) == 0 )
        return result;
      SysMenu = xxxGetSysMenu(a1, 0LL);
      if ( SysMenu && (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(SysMenu + 52) )
      {
        *(_QWORD *)(a4 + 24) = *(_QWORD *)SysMenu;
        if ( !(unsigned int)HasCaptionIcon(a1) )
        {
LABEL_25:
          v22 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 536LL);
          if ( v22 )
            v23 = *v22;
          else
            v23 = 0LL;
          if ( !v23 )
            return 1LL;
          v24 = (*(_BYTE *)v23 & 6) == 6;
          goto LABEL_29;
        }
        if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
        {
          v12 = *(unsigned __int16 *)(a1 + 360);
        }
        else if ( *(_DWORD *)(a1 + 344) )
        {
          v12 = *(unsigned __int16 *)(gpsi + 7286LL);
        }
        else
        {
          v12 = 96;
        }
        v13 = GetWindowBordersForDpi(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48), v10, v11, v12);
        if ( (*(_BYTE *)(a1 + 50) & 0x40) == 0 )
        {
          v15 = IsDPIDWMSysMet(5LL);
          if ( !v15
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v14 = 0LL)
              : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                !(_DWORD)v14) )
          {
            if ( v15
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v58 = 0)
                : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v58) )
            {
              v16 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v16 = (_DWORD *)(gpsi + 1900LL);
            }
          }
          else
          {
            v16 = (_DWORD *)(gpsi + 2288LL);
          }
          v17 = 52LL;
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 112) + v13 * *v16;
          if ( *(char *)(a1 + 48) >= 0 )
            v17 = 30LL;
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + GetSystemMetricsForWindow(a1, v17);
LABEL_19:
          v19 = IsDPIDWMSysMet(6LL);
          if ( !v19
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v18 = 0LL)
              : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                !(_DWORD)v18) )
          {
            if ( v19
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v59 = 0)
                : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v59) )
            {
              v20 = (_DWORD *)(gpsi + 2680LL);
            }
            else
            {
              v20 = (_DWORD *)(gpsi + 1904LL);
            }
          }
          else
          {
            v20 = (_DWORD *)(gpsi + 2292LL);
          }
          v21 = 53LL;
          *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 116) + v13 * *v20;
          if ( *(char *)(a1 + 48) >= 0 )
            v21 = 31LL;
          *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + GetSystemMetricsForWindow(a1, v21);
          goto LABEL_25;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0 )
          {
            goto LABEL_95;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v49)
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
LABEL_95:
          if ( (unsigned int)IsDPIDWMSysMet(5LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v52 = 0)
              : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v52) )
          {
            v56 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v56 = (_DWORD *)(gpsi + 1900LL);
          }
          goto LABEL_111;
        }
        v56 = (_DWORD *)(gpsi + 2288LL);
LABEL_111:
        v57 = 52LL;
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(a1 + 120) - v13 * *v56;
        if ( *(char *)(a1 + 48) >= 0 )
          v57 = 30LL;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - GetSystemMetricsForWindow(a1, v57);
        goto LABEL_19;
      }
      return 0LL;
    case -4:
      _InterlockedIncrement(&glSendMessage);
      v60 = xxxSendTransformableMessageTimeout((struct tagWND *)a1, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      v61 = ValidateHmenu(v60);
      if ( v61 && (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(v61 + 52) )
      {
        *(_QWORD *)(a4 + 24) = v60;
        if ( (_DWORD)v5 )
        {
          v62 = *(_QWORD *)(v61 + 80);
          v63 = 152 * v5;
          if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
          {
            v64 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(v63 + v62 - 80);
            *(_DWORD *)(a4 + 12) = v64;
            *(_DWORD *)(a4 + 4) = v64 - *(_DWORD *)(v63 + v62 - 72);
          }
          else
          {
            v65 = *(_DWORD *)(v63 + v62 - 80) + *(_DWORD *)(a1 + 128);
            *(_DWORD *)(a4 + 4) = v65;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v63 + v62 - 72) + v65;
          }
          v66 = *(_DWORD *)(v63 + v62 - 76) + *(_DWORD *)(a1 + 132);
          *(_DWORD *)(a4 + 8) = v66;
          *(_DWORD *)(a4 + 16) = *(_DWORD *)(v63 + v62 - 68) + v66;
        }
        else
        {
          *(_OWORD *)(a4 + 4) = *(_OWORD *)(a1 + 128);
        }
        v67 = safe_cast_fnid_to_PMENUWND(a1);
        if ( !v67 )
          return 1LL;
        v68 = *(_QWORD *)(v67 + 376);
        if ( !v68 )
          return 1LL;
        v69 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 536LL);
        v70 = v69 ? *v69 : 0LL;
        if ( *(_QWORD *)(v68 + 64) != v70 )
          return 1LL;
        v71 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v71;
        if ( !(_DWORD)v5 )
        {
          *(_DWORD *)(a4 + 40) = v71 | 2;
          return 1LL;
        }
        if ( (_DWORD)v5 != *(_DWORD *)(v68 + 80) + 1 )
          return 1LL;
        *(_DWORD *)(a4 + 40) = v71 | 2;
        v72 = *(__int64 **)(v68 + 24);
        if ( v72 )
          v8 = *v72;
        goto LABEL_161;
      }
      return 0LL;
  }
  return result;
}
