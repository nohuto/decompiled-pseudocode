/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00740E0
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C0074460 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     _HasCaptionIcon @ 0x1C00711D8 (_HasCaptionIcon.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetWindowBordersForDpi @ 0x1C00761EC (GetWindowBordersForDpi.c)
 *     xxxGetSysMenu @ 0x1C00C67E0 (xxxGetSysMenu.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 SysMenu; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  int v13; // r14d
  unsigned int v14; // edx
  unsigned int v15; // edx
  __int64 *v16; // r8
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // r14
  int v20; // eax
  int WindowBordersForDpi; // ecx
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // ecx
  unsigned int v25; // edx
  __int64 *v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  _DWORD *v34; // rax
  int v35; // ecx
  __int64 v36; // r8
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // edx
  __int64 *v42; // rcx
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  _DWORD *v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rax
  __int64 v62; // rax
  int v63; // ecx
  __int64 *v64; // rax
  int v65; // [rsp+88h] [rbp+20h]

  v5 = a3;
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
      v19 = *(_QWORD *)(a1 + 192);
      if ( !v19 || a3 < 0 || (unsigned int)a3 > *(_DWORD *)(v19 + 52) )
        return result;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)v19;
      if ( *(_DWORD *)(v19 + 56) && *(_DWORD *)(v19 + 60) )
      {
        if ( !a3 )
        {
          if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
          {
            v20 = *(unsigned __int16 *)(a1 + 360);
          }
          else if ( *(_DWORD *)(a1 + 344) )
          {
            v20 = *(unsigned __int16 *)(gpsi + 7286LL);
          }
          else
          {
            v20 = 96;
          }
          WindowBordersForDpi = GetWindowBordersForDpi(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48), 0, a4, v20);
          v65 = WindowBordersForDpi;
          if ( (*(_BYTE *)(a1 + 50) & 0x40) == 0 )
          {
            v22 = gpsi;
            v23 = WindowBordersForDpi;
            v24 = *(_DWORD *)(a1 + 112) + *(_DWORD *)(gpsi + 1900LL) * WindowBordersForDpi;
            *(_DWORD *)(a4 + 4) = v24;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v19 + 56) + v24;
LABEL_37:
            *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 116) + v23 * *(_DWORD *)(*(_QWORD *)v22 + 1904LL);
            if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
            {
              v25 = 51;
              if ( *(char *)(a1 + 48) >= 0 )
                v25 = 4;
              *(_DWORD *)(a4 + 8) += GetSystemMetricsForWindow(a1, v25);
            }
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + *(_DWORD *)(v19 + 60);
            goto LABEL_42;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0 )
            {
              goto LABEL_58;
            }
          }
          else if ( !IsDPIDWMSysMet(v27)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v33 = 0)
                   : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v33) )
          {
LABEL_58:
            if ( IsDPIDWMSysMet(5uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v30 = 0)
                : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v30) )
            {
              v22 = gpsi;
              v34 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v22 = gpsi;
              v34 = (_DWORD *)(gpsi + 1900LL);
            }
            goto LABEL_74;
          }
          v22 = gpsi;
          v34 = (_DWORD *)(gpsi + 2288LL);
LABEL_74:
          v23 = v65;
          v35 = *(_DWORD *)(a1 + 120) - v65 * *v34;
          *(_DWORD *)(a4 + 12) = v35;
          *(_DWORD *)(a4 + 4) = v35 - *(_DWORD *)(v19 + 56);
          goto LABEL_37;
        }
        v36 = *(_QWORD *)(v19 + 80);
        v37 = 152 * v5;
        if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
        {
          v38 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(v37 + v36 - 80);
          *(_DWORD *)(a4 + 12) = v38;
          *(_DWORD *)(a4 + 4) = v38 - *(_DWORD *)(v37 + v36 - 72);
        }
        else
        {
          v39 = *(_DWORD *)(a1 + 112) + *(_DWORD *)(v37 + v36 - 80);
          *(_DWORD *)(a4 + 4) = v39;
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(v37 + v36 - 72) + v39;
        }
        v40 = *(_DWORD *)(a1 + 116) + *(_DWORD *)(v37 + v36 - 76);
        *(_DWORD *)(a4 + 8) = v40;
        *(_DWORD *)(a4 + 16) = *(_DWORD *)(v37 + v36 - 68) + v40;
      }
LABEL_42:
      v26 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 528LL);
      if ( v26 )
        v17 = *v26;
      else
        v17 = 0LL;
      if ( !v17 )
        return 1LL;
      v18 = (*(_DWORD *)v17 & 6) == 2;
LABEL_23:
      if ( !v18 || *(_QWORD *)(v17 + 8) != a1 )
        return 1LL;
      v41 = *(_DWORD *)(a4 + 40) | 1;
      *(_DWORD *)(a4 + 40) = v41;
      if ( !(_DWORD)v5 )
      {
        *(_DWORD *)(a4 + 40) = v41 | 2;
        return 1LL;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v17 + 64) + 80LL) != (_DWORD)v5 - 1 )
        return 1LL;
      *(_DWORD *)(a4 + 40) = v41 | 2;
      v42 = *(__int64 **)(*(_QWORD *)(v17 + 64) + 24LL);
      if ( v42 )
        v8 = *v42;
LABEL_129:
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
LABEL_19:
          v16 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 528LL);
          if ( v16 )
            v17 = *v16;
          else
            v17 = 0LL;
          if ( !v17 )
            return 1LL;
          v18 = (*(_BYTE *)v17 & 6) == 6;
          goto LABEL_23;
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
          v14 = 52;
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 112) + v13 * *(_DWORD *)(gpsi + 1900LL);
          if ( *(char *)(a1 + 48) >= 0 )
            v14 = 30;
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + GetSystemMetricsForWindow(a1, v14);
LABEL_16:
          v15 = 53;
          *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 116) + v13 * *(_DWORD *)(gpsi + 1904LL);
          if ( *(char *)(a1 + 48) >= 0 )
            v15 = 31;
          *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + GetSystemMetricsForWindow(a1, v15);
          goto LABEL_19;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0 )
          {
            goto LABEL_89;
          }
        }
        else if ( !IsDPIDWMSysMet(v43)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v49 = 0)
                 : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v49) )
        {
LABEL_89:
          if ( IsDPIDWMSysMet(5uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v46 = 0)
              : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v46) )
          {
            v50 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v50 = (_DWORD *)(gpsi + 1900LL);
          }
          goto LABEL_105;
        }
        v50 = (_DWORD *)(gpsi + 2288LL);
LABEL_105:
        v51 = 52;
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(a1 + 120) - v13 * *v50;
        if ( *(char *)(a1 + 48) >= 0 )
          v51 = 30;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - GetSystemMetricsForWindow(a1, v51);
        goto LABEL_16;
      }
      return 0LL;
    case -4:
      _InterlockedIncrement(&glSendMessage);
      v52 = xxxSendTransformableMessageTimeout((struct tagWND *)a1, 481LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      v53 = ValidateHmenu(v52);
      if ( v53 && (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(v53 + 52) )
      {
        *(_QWORD *)(a4 + 24) = v52;
        if ( (_DWORD)v5 )
        {
          v54 = *(_QWORD *)(v53 + 80);
          v55 = 152 * v5;
          if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
          {
            v56 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(v55 + v54 - 80);
            *(_DWORD *)(a4 + 12) = v56;
            *(_DWORD *)(a4 + 4) = v56 - *(_DWORD *)(v55 + v54 - 72);
          }
          else
          {
            v57 = *(_DWORD *)(v55 + v54 - 80) + *(_DWORD *)(a1 + 128);
            *(_DWORD *)(a4 + 4) = v57;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v55 + v54 - 72) + v57;
          }
          v58 = *(_DWORD *)(v55 + v54 - 76) + *(_DWORD *)(a1 + 132);
          *(_DWORD *)(a4 + 8) = v58;
          *(_DWORD *)(a4 + 16) = *(_DWORD *)(v55 + v54 - 68) + v58;
        }
        else
        {
          *(_OWORD *)(a4 + 4) = *(_OWORD *)(a1 + 128);
        }
        v59 = safe_cast_fnid_to_PMENUWND(a1);
        if ( !v59 )
          return 1LL;
        v60 = *(_QWORD *)(v59 + 376);
        if ( !v60 )
          return 1LL;
        v61 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 528LL);
        v62 = v61 ? *v61 : 0LL;
        if ( *(_QWORD *)(v60 + 64) != v62 )
          return 1LL;
        v63 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v63;
        if ( !(_DWORD)v5 )
        {
          *(_DWORD *)(a4 + 40) = v63 | 2;
          return 1LL;
        }
        if ( (_DWORD)v5 != *(_DWORD *)(v60 + 80) + 1 )
          return 1LL;
        *(_DWORD *)(a4 + 40) = v63 | 2;
        v64 = *(__int64 **)(v60 + 24);
        if ( v64 )
          v8 = *v64;
        goto LABEL_129;
      }
      return 0LL;
  }
  return result;
}
