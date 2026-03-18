/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x14008B6DC
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNDismissIfOffMenu @ 0x1402D9808 (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x14008B510 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  LONG v3; // edi
  __int16 v4; // bx
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  LONG v16; // r15d
  int v17; // r12d
  __int64 v18; // rcx
  int v19; // edx
  unsigned int WindowDpiLastNotify; // r14d
  int DpiDependentMetric; // edi
  int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  int WindowBordersForDpi; // eax
  __int64 v26; // r8
  int v27; // r11d
  LONG v28; // r9d
  int v29; // ecx
  int v30; // edi
  int v31; // edx
  __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-58h]
  struct tagPOINT v34; // [rsp+38h] [rbp-50h]
  struct tagPOINT v35; // [rsp+38h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-48h] BYREF

  v3 = SHIWORD(a3);
  *a2 = 0;
  v4 = a3;
  v33 = 0;
  if ( *(_QWORD *)(**a1 + 24) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(**a1 + 24));
    v8 = xxxSendMessage(*(struct tagWND **)(**a1 + 24), 0x1EBu);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    LOBYTE(v11) = IsMFMWFPWindow(v8);
    if ( v11 )
    {
      v13 = HMValidateHandleNoSecure(v12, 1);
      v8 = v13;
      if ( v13 )
      {
        v14 = safe_cast_fnid_to_PMENUWND(v13);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            if ( *(_QWORD *)(v15 + 40) )
              goto LABEL_5;
          }
        }
        return 0LL;
      }
    }
    else if ( v8 )
    {
      goto LABEL_5;
    }
  }
  v7 = **a1;
  if ( (*(_DWORD *)v7 & 1) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    v34.x = v4;
    v34.y = v3;
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*(_QWORD *)(v8 + 40) + 88LL, v34) )
      goto LABEL_4;
    return 0LL;
  }
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
    return 0LL;
  v16 = v3;
  v17 = v4;
  v35.x = v4;
  v35.y = v3;
  if ( (*(_DWORD *)**a1 & 4) == 0 )
  {
    if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) == 0 )
    {
LABEL_4:
      v35.x = v4;
      v35.y = v3;
      v33 = MNItemHitTest(*(struct tagMENU **)(**a1 + 40), (struct tagWND *)v8, v35);
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
LABEL_5:
        v9 = v33;
LABEL_6:
        *a2 = v9;
        return v8;
      }
      v9 = v33;
      if ( v33 != -1 )
      {
        v8 = 0xFFFFFFFFLL;
        goto LABEL_6;
      }
      if ( !*(_QWORD *)(**a1 + 48) )
        return 0LL;
      goto LABEL_34;
    }
    return 0LL;
  }
  if ( !(unsigned int)HasCaptionIcon(v8) )
    return 0LL;
  v18 = *(_QWORD *)(v8 + 40);
  if ( (*(_BYTE *)(v18 + 31) & 0x20) != 0 )
  {
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v18 + 88, v35) )
      return 0LL;
  }
  else
  {
    v19 = *(_DWORD *)(v18 + 288) & 0xF;
    if ( v19 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v18 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v18 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v8);
    }
    else if ( !v19
           && (v32 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v32 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 456LL) + 272LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(12, WindowDpiLastNotify);
    v22 = GetDpiDependentMetric(13, WindowDpiLastNotify);
    WindowBordersForDpi = GetWindowBordersForDpi(
                            *(_DWORD *)(*(_QWORD *)(v8 + 40) + 28LL),
                            *(_DWORD *)(*(_QWORD *)(v8 + 40) + 24LL),
                            v23,
                            v24,
                            WindowDpiLastNotify);
    v26 = *(_QWORD *)(v8 + 40);
    v27 = *(_DWORD *)(v26 + 88);
    v28 = WindowBordersForDpi + *(_DWORD *)(v26 + 92);
    v29 = v27 + WindowBordersForDpi;
    v30 = v27 + WindowBordersForDpi + DpiDependentMetric;
    v31 = v30;
    if ( (*(_BYTE *)(v26 + 26) & 0x40) != 0 )
    {
      v31 = *(_DWORD *)(v26 + 96) - WindowBordersForDpi;
      v29 = v27 + *(_DWORD *)(v26 + 96) - v30;
    }
    if ( v16 >= v22 + v28 || v17 >= v31 || v16 < v28 || v17 < v29 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
LABEL_34:
        v9 = MNItemHitTest(*(struct tagMENU **)(**a1 + 48), (struct tagWND *)v8, v35);
        if ( v9 != -1 )
        {
          v8 = 4294967291LL;
          goto LABEL_6;
        }
        return 0LL;
      }
      return 0LL;
    }
    *a2 = 0;
  }
  return 0xFFFFFFFFLL;
}
