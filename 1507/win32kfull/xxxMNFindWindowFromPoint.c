/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C010BDD0
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0216B58 (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GetWindowBorders @ 0x1C004F1E0 (GetWindowBorders.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     _HasCaptionIcon @ 0x1C00943D8 (_HasCaptionIcon.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     IsMFMWFPWindow @ 0x1C010BDAC (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C010C5B0 (MNItemHitTest.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(int *a1, _DWORD *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  int *v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  int *v31; // rcx
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int WindowBorders; // esi
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  _DWORD *v43; // rbx
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  _DWORD *v51; // rcx
  int v52; // edx
  int v53; // eax
  int v54; // esi
  int v55; // eax
  int v56; // esi
  int v57; // ecx
  bool v58; // zf
  __int64 v59; // rcx
  int v60; // eax
  int v61; // ecx
  __int64 v62; // rcx
  unsigned __int64 v63; // [rsp+20h] [rbp-40h]
  unsigned __int64 v64; // [rsp+20h] [rbp-40h]
  int v65; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v66[2]; // [rsp+30h] [rbp-30h] BYREF
  int v67; // [rsp+38h] [rbp-28h]
  int v68; // [rsp+3Ch] [rbp-24h]
  _QWORD v69[3]; // [rsp+40h] [rbp-20h] BYREF
  int v70; // [rsp+A0h] [rbp+40h]

  v70 = a3;
  *a2 = 0;
  v5 = *((_QWORD *)a1 + 3);
  v65 = 0;
  if ( v5 )
  {
    v69[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v69;
    v69[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    v6 = xxxSendMessage(*((struct tagWND **)a1 + 3), 0x1EBu, (unsigned __int64)&v65, a3);
    ThreadUnlock1(v8, v7);
    if ( IsMFMWFPWindow(v6) )
    {
      v10 = HMValidateHandleNoSecure(v9, 1);
      v6 = v10;
      if ( !v10 )
      {
LABEL_10:
        LOWORD(a3) = v70;
        goto LABEL_11;
      }
      v11 = safe_cast_fnid_to_PMENUWND(v10);
      if ( !v11 )
        return 0LL;
      v12 = *(_QWORD *)(v11 + 376);
      if ( !v12 || !*(_QWORD *)(v12 + 40) )
        return 0LL;
    }
    if ( v6 )
    {
      v14 = v65;
      goto LABEL_109;
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( (*a1 & 1) != 0 )
  {
    v15 = *((_QWORD *)a1 + 1);
    if ( !v15 )
      return 0LL;
    HIDWORD(v63) = SHIWORD(v70);
    LODWORD(v63) = (__int16)a3;
    if ( (*a1 & 4) != 0 )
    {
      if ( !(unsigned int)HasCaptionIcon(v15) )
        return 0LL;
      if ( (*(_BYTE *)(v15 + 55) & 0x20) != 0 )
        return -PtInRect((_DWORD *)(v15 + 112), v63);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0 )
        {
          goto LABEL_20;
        }
      }
      else if ( !IsDPIDWMSysMet(v16)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v22 = 0)
               : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v22) )
      {
LABEL_20:
        if ( IsDPIDWMSysMet(0x1EuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v19 = 0)
            : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v19) )
        {
          v23 = (int *)(gpsi + 2776LL);
        }
        else
        {
          v23 = (int *)(gpsi + 2000LL);
        }
LABEL_36:
        v67 = *v23;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0 )
          {
            goto LABEL_39;
          }
        }
        else if ( !IsDPIDWMSysMet(v24)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v30 = 0)
                 : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v30) )
        {
LABEL_39:
          if ( IsDPIDWMSysMet(0x1FuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v27 = 0)
              : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v27) )
          {
            v31 = (int *)(gpsi + 2780LL);
          }
          else
          {
            v31 = (int *)(gpsi + 2004LL);
          }
LABEL_55:
          v32 = *v31;
          v33 = *(_DWORD *)(v15 + 52);
          v34 = *(_DWORD *)(v15 + 48);
          v68 = v32;
          WindowBorders = GetWindowBorders(v33, v34);
          if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0 )
            {
              goto LABEL_58;
            }
          }
          else if ( !IsDPIDWMSysMet(v36)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v42 = 0)
                   : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v42) )
          {
LABEL_58:
            if ( IsDPIDWMSysMet(6uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v39 = 0)
                : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v39) )
            {
              v43 = (_DWORD *)(gpsi + 2680LL);
            }
            else
            {
              v43 = (_DWORD *)(gpsi + 1904LL);
            }
LABEL_74:
            if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
              {
                goto LABEL_77;
              }
            }
            else if ( !IsDPIDWMSysMet(v44)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v50 = 0)
                     : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                       !v50) )
            {
LABEL_77:
              if ( IsDPIDWMSysMet(5uLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v47 = 0)
                  : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v47) )
              {
                v51 = (_DWORD *)(gpsi + 2676LL);
              }
              else
              {
                v51 = (_DWORD *)(gpsi + 1900LL);
              }
LABEL_93:
              v52 = *(_DWORD *)(v15 + 112);
              v53 = WindowBorders * *v43;
              v54 = *v51 * WindowBorders;
              v55 = *(_DWORD *)(v15 + 116) + v53;
              v68 += v55;
              v56 = v52 + v54;
              v57 = v56 + v67;
              v66[0] = v56;
              v58 = (*(_BYTE *)(v15 + 50) & 0x40) == 0;
              v67 += v56;
              v66[1] = v55;
              if ( !v58 )
              {
                v67 = v52 + *(_DWORD *)(v15 + 120) - v56;
                v66[0] = v67 - (v57 - v56);
              }
              if ( PtInRect(v66, v63) )
              {
                *a2 = 0;
                return 0xFFFFFFFFLL;
              }
              v59 = *((_QWORD *)a1 + 6);
              if ( v59 )
              {
                v60 = MNItemHitTest(v59, v15);
                if ( v60 != -1 )
                {
                  *a2 = v60;
                  return 4294967291LL;
                }
              }
              return 0LL;
            }
            v51 = (_DWORD *)(gpsi + 2288LL);
            goto LABEL_93;
          }
          v43 = (_DWORD *)(gpsi + 2292LL);
          goto LABEL_74;
        }
        v31 = (int *)(gpsi + 2392LL);
        goto LABEL_55;
      }
      v23 = (int *)(gpsi + 2388LL);
      goto LABEL_36;
    }
    if ( (*(_BYTE *)(v15 + 55) & 0x20) != 0 )
      return 0LL;
  }
  else
  {
    v15 = *((_QWORD *)a1 + 2);
    LODWORD(v64) = (__int16)a3;
    HIDWORD(v64) = SHIWORD(v70);
    if ( !PtInRect((_DWORD *)(v15 + 112), v64) )
      return 0LL;
  }
  v14 = MNItemHitTest(*((_QWORD *)a1 + 5), v15);
  v61 = *a1;
  v65 = v14;
  if ( (v61 & 1) == 0 )
  {
    v6 = v15;
    goto LABEL_109;
  }
  v6 = 0xFFFFFFFFLL;
  if ( v14 == -1 )
  {
    v62 = *((_QWORD *)a1 + 6);
    if ( v62 )
    {
      v14 = MNItemHitTest(v62, v15);
      if ( v14 != -1 )
      {
        v6 = 4294967291LL;
        goto LABEL_109;
      }
    }
    return 0LL;
  }
LABEL_109:
  *a2 = v14;
  return v6;
}
