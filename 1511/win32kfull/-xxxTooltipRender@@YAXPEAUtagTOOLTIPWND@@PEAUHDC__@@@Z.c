/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GetDPIMETRICSForDpi @ 0x1C0015CB8 (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(struct tagTOOLTIPWND *a1, HDC a2)
{
  char *DPIMETRICSForDpi; // rax
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // ebx
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const WCHAR *SourceString; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  LONG *v31; // rdi
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  _DWORD *v39; // rcx
  unsigned __int16 *v40; // r8
  __int64 v41; // rax
  RECT v42; // [rsp+50h] [rbp-58h] BYREF

  if ( *((_QWORD *)a1 + 52) )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi(*((unsigned __int16 *)a1 + 180));
    GreSelectFont((__int64)a2, *((_QWORD *)DPIMETRICSForDpi + 3));
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 3660LL));
    v5 = -*((_DWORD *)a1 + 32);
    v6 = -*((_DWORD *)a1 + 33);
    v7 = *(_DWORD *)(gpsi + 3664LL);
    v42.left = 0;
    v42.right = v5 + *((_DWORD *)a1 + 34);
    v42.top = v6 + *((_DWORD *)a1 + 33);
    v42.bottom = v6 + *((_DWORD *)a1 + 35);
    if ( v7 == (unsigned int)GreGetNearestColor(a2, v7) )
    {
      GreSetBkColor(a2, v7);
      v8 = 2;
    }
    else
    {
      FillRect(a2, &v42, *(HBRUSH *)(gpsi + 3888LL));
      GreSetBkMode(a2, 1);
      v8 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) == 0 )
        {
          goto LABEL_8;
        }
      }
      else if ( IsDPIDWMSysMet(v10)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_8;
      }
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      }
LABEL_8:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) == 0 )
        {
LABEL_11:
          SourceString = (const WCHAR *)*((_QWORD *)a1 + 52);
          v17 = -1LL;
          do
            ++v17;
          while ( SourceString[v17] );
          xxxClientExtTextOutW((int)a2, (__int64)&v42, SourceString, v17);
          return;
        }
      }
      else if ( IsDPIDWMSysMet(v13)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_11;
      }
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      }
      goto LABEL_11;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0 )
      {
        goto LABEL_47;
      }
    }
    else if ( !IsDPIDWMSysMet(v24)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v30 = 0)
             : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v30) )
    {
LABEL_47:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v27 = 0)
          : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v27) )
      {
        v31 = (LONG *)(gpsi + 2680LL);
      }
      else
      {
        v31 = (LONG *)(gpsi + 1904LL);
      }
LABEL_63:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0 )
        {
          goto LABEL_66;
        }
      }
      else if ( !IsDPIDWMSysMet(v32)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v38 = 0)
               : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v38) )
      {
LABEL_66:
        if ( IsDPIDWMSysMet(5uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v35 = 0)
            : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v35) )
        {
          v39 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v39 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_82;
      }
      v39 = (_DWORD *)(gpsi + 2288LL);
LABEL_82:
      v40 = (unsigned __int16 *)*((_QWORD *)a1 + 52);
      v41 = -1LL;
      do
        ++v41;
      while ( v40[v41] );
      GreExtTextOutWInternal(a2, 2 * *v39, *v31, v8, &v42, v40, v41, 0LL, 0LL, 0);
      return;
    }
    v31 = (LONG *)(gpsi + 2292LL);
    goto LABEL_63;
  }
}
