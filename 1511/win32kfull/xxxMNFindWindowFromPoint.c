/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C0138088
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 *     xxxMNDismissIfOffMenu @ 0x1C02169BC (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     _HasCaptionIcon @ 0x1C00711D8 (_HasCaptionIcon.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetWindowBorders @ 0x1C00CBEDC (GetWindowBorders.c)
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C0138158 (MNItemHitTest.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(int *a1, _DWORD *a2, int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int *v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int *v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // edx
  int WindowBorders; // r15d
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _DWORD *v43; // rbx
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int *v51; // rcx
  int v52; // edx
  int v53; // r8d
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  bool v57; // zf
  __int64 v58; // r8
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  unsigned __int64 v62; // [rsp+20h] [rbp-40h]
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
  v4 = *((_QWORD *)a1 + 3);
  v65 = 0;
  if ( v4 )
  {
    v69[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v69;
    v69[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    v11 = xxxSendMessage(*((struct tagWND **)a1 + 3), 0x1EBu, (unsigned __int64)&v65, a3);
    ThreadUnlock1(v14, v13);
    if ( IsMFMWFPWindow(v11) )
      v11 = HMValidateHandleNoSecure(v15, 1);
    if ( v11 )
    {
      v9 = v65;
      goto LABEL_6;
    }
    LOWORD(a3) = v70;
  }
  if ( (*a1 & 1) == 0 )
  {
    v6 = *((_QWORD *)a1 + 2);
    LODWORD(v62) = (__int16)a3;
    HIDWORD(v62) = SHIWORD(v70);
    if ( PtInRect((_DWORD *)(v6 + 112), v62) )
    {
LABEL_4:
      v63 = __PAIR64__(v7, v8);
      v9 = MNItemHitTest(*((_QWORD *)a1 + 5), v6, __PAIR64__(v7, v8));
      v10 = *a1;
      v65 = v9;
      if ( (v10 & 1) == 0 )
      {
        v11 = v6;
LABEL_6:
        *a2 = v9;
        return v11;
      }
      v11 = 0xFFFFFFFFLL;
      if ( v9 != -1 )
        goto LABEL_6;
      v61 = *((_QWORD *)a1 + 6);
      if ( v61 )
      {
        v9 = MNItemHitTest(v61, v6, v63);
        if ( v9 != -1 )
        {
          v11 = 4294967291LL;
          goto LABEL_6;
        }
      }
    }
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 1);
  if ( !v6 )
    return 0LL;
  v8 = (__int16)a3;
  v7 = SHIWORD(v70);
  HIDWORD(v64) = SHIWORD(v70);
  LODWORD(v64) = v8;
  if ( (*a1 & 4) == 0 )
  {
    if ( (*(_BYTE *)(v6 + 55) & 0x20) == 0 )
      goto LABEL_4;
    return 0LL;
  }
  if ( !(unsigned int)HasCaptionIcon(v6) )
    return 0LL;
  if ( (*(_BYTE *)(v6 + 55) & 0x20) != 0 )
    return -PtInRect((_DWORD *)(v6 + 112), v64);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0 )
    {
      goto LABEL_21;
    }
LABEL_32:
    v23 = (int *)(gpsi + 2388LL);
    goto LABEL_37;
  }
  if ( IsDPIDWMSysMet(v16)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_32;
  }
LABEL_21:
  if ( IsDPIDWMSysMet(0x1EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v19 = 0)
      : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v19) )
  {
    v23 = (int *)(gpsi + 2776LL);
  }
  else
  {
    v23 = (int *)(gpsi + 2000LL);
  }
LABEL_37:
  v67 = *v23;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0 )
    {
      goto LABEL_40;
    }
LABEL_51:
    v31 = (int *)(gpsi + 2392LL);
    goto LABEL_56;
  }
  if ( IsDPIDWMSysMet(v24)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_51;
  }
LABEL_40:
  if ( IsDPIDWMSysMet(0x1FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v27 = 0)
      : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v27) )
  {
    v31 = (int *)(gpsi + 2780LL);
  }
  else
  {
    v31 = (int *)(gpsi + 2004LL);
  }
LABEL_56:
  v32 = *v31;
  v33 = *(_DWORD *)(v6 + 52);
  v34 = *(_DWORD *)(v6 + 48);
  v68 = v32;
  WindowBorders = GetWindowBorders(v33, v34);
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0 )
    {
      goto LABEL_59;
    }
LABEL_70:
    v43 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_75;
  }
  if ( IsDPIDWMSysMet(v36)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_70;
  }
LABEL_59:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v39 = 0)
      : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v39) )
  {
    v43 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v43 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_75:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
    {
      goto LABEL_78;
    }
LABEL_89:
    v51 = (int *)(gpsi + 2288LL);
    goto LABEL_94;
  }
  if ( IsDPIDWMSysMet(v44)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_89;
  }
LABEL_78:
  if ( IsDPIDWMSysMet(5uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v47 = 0)
      : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v47) )
  {
    v51 = (int *)(gpsi + 2676LL);
  }
  else
  {
    v51 = (int *)(gpsi + 1900LL);
  }
LABEL_94:
  v52 = *v51;
  v53 = *(_DWORD *)(v6 + 112);
  v54 = *(_DWORD *)(v6 + 116) + WindowBorders * *v43;
  v68 += v54;
  v55 = v53 + WindowBorders * v52;
  v56 = v55 + v67;
  v66[0] = v55;
  v57 = (*(_BYTE *)(v6 + 50) & 0x40) == 0;
  v67 += v55;
  v66[1] = v54;
  if ( !v57 )
  {
    v67 = v53 + *(_DWORD *)(v6 + 120) - v55;
    v66[0] = v67 - (v56 - v55);
  }
  if ( PtInRect(v66, v64) )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  else
  {
    v59 = *((_QWORD *)a1 + 6);
    if ( !v59 )
      return 0LL;
    v60 = MNItemHitTest(v59, v6, v58);
    if ( v60 == -1 )
      return 0LL;
    *a2 = v60;
    return 4294967291LL;
  }
}
