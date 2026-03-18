/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0070B50
 * Callers:
 *     NtUserGetTitleBarInfo @ 0x1C0070920 (NtUserGetTitleBarInfo.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00C7B60 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GetWindowFrameMetricInternal @ 0x1C0070F40 (GetWindowFrameMetricInternal.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0070F8C (GetAppCompatFlags2WithDPIAware.c)
 *     GetResizeBorderWidthInternal @ 0x1C007102C (GetResizeBorderWidthInternal.c)
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 *     xxxGetSysMenuHandle @ 0x1C0071180 (xxxGetSysMenuHandle.c)
 *     _HasCaptionIcon @ 0x1C00711D8 (_HasCaptionIcon.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int AppCompatFlags2WithDPIAware; // r15d
  int v10; // esi
  int WindowFrameMetricInternal; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  int v17; // esi
  __int64 SysMenuHandle; // rax
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r11
  int v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r10

  v4 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v4;
  if ( (*((_BYTE *)a1 + 54) & 0xC0) != 0xC0 )
  {
    *((_DWORD *)a2 + 5) = v4 | 0x8000;
    return;
  }
  if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 && (*((_BYTE *)a1 + 40) & 8) == 0 )
  {
    *((_DWORD *)a2 + 5) = v4 | 0x10000;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    return;
  }
  *(_OWORD *)((char *)a2 + 4) = *((_OWORD *)a1 + 7);
  v5 = *((_DWORD *)a1 + 12);
  v6 = *((_DWORD *)a1 + 13);
  v7 = 0LL;
  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  if ( (v5 & 0x100) != 0 )
  {
    v10 = 2;
  }
  else
  {
    v8 = 1LL;
    v10 = (v5 & 0x20000) != 0;
  }
  LOBYTE(v8) = (v6 & 0xC00000) == 0;
  if ( ((unsigned __int8)v8 & ((v5 & 1) == 0)) == 0 )
    ++v10;
  WindowFrameMetricInternal = GetWindowFrameMetricInternal(v8, AppCompatFlags2WithDPIAware, 0LL);
  if ( (v6 & 0x40000) != 0
    || WindowFrameMetricInternal > 0
    && ((v6 & 0xC00000) == 12582912 || (v6 & 0x40000) != 0)
    && (AppCompatFlags2WithDPIAware & 0x30000000) == 0 )
  {
    v10 += WindowFrameMetricInternal + GetResizeBorderWidthInternal(AppCompatFlags2WithDPIAware, 0LL);
  }
  v12 = v10 * *(_DWORD *)(gpsi + 1904LL);
  v13 = -(v10 * *(_DWORD *)(gpsi + 1900LL));
  *((_DWORD *)a2 + 1) += v10 * *(_DWORD *)(gpsi + 1900LL);
  v14 = -v12;
  *((_DWORD *)a2 + 3) += v13;
  *((_DWORD *)a2 + 2) -= v14;
  *((_DWORD *)a2 + 4) += v14;
  if ( *((char *)a1 + 48) >= 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gpsi) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
    {
      v16 = (_DWORD *)(gpsi + 1896LL);
    }
    else
    {
      v16 = (_DWORD *)(gpsi + 2284LL);
    }
    goto LABEL_13;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(51LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0 )
    {
      goto LABEL_60;
    }
LABEL_68:
    v16 = (_DWORD *)(gpsi + 2472LL);
    goto LABEL_13;
  }
  if ( (unsigned int)IsDPIDWMSysMet(v28)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1) != 0 )
  {
    goto LABEL_68;
  }
LABEL_60:
  if ( (unsigned int)IsDPIDWMSysMet(51LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1) != 0 )
  {
    v16 = (_DWORD *)(gpsi + 2860LL);
  }
  else
  {
    v16 = (_DWORD *)(gpsi + 2084LL);
  }
LABEL_13:
  v17 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 4) = v17 + *v16;
  if ( (*((_BYTE *)a1 + 54) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
  {
    if ( (*((_BYTE *)a1 + 50) & 0x40) == 0 )
    {
      *((_DWORD *)a2 + 1) += *((_DWORD *)a2 + 4) - v17 - *(_DWORD *)(gpsi + 1904LL);
      goto LABEL_17;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
      {
        goto LABEL_76;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v33)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) != 0
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1) == 0 )
    {
LABEL_76:
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1) != 0 )
      {
        v36 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v36 = (_DWORD *)(gpsi + 1904LL);
      }
      goto LABEL_88;
    }
    v36 = (_DWORD *)(gpsi + 2292LL);
LABEL_88:
    *((_DWORD *)a2 + 3) += *((_DWORD *)a2 + 2) + *v36 - *((_DWORD *)a2 + 4);
  }
LABEL_17:
  if ( ((*((_BYTE *)a1 + 45) >> 1) & (unsigned __int8)~(*((_BYTE *)a1 + 54) >> 3) & 1) == 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 85LL) & 2) == 0 )
    {
      SysMenuHandle = xxxGetSysMenuHandle(a1);
      v19 = SysMenuHandle;
      if ( SysMenuHandle )
      {
        v20 = *(_DWORD *)(SysMenuHandle + 52);
        v21 = 0LL;
        if ( v20 )
        {
          v22 = *(_QWORD *)(v19 + 80);
          v23 = 0;
          if ( v20 > 0 )
          {
            do
            {
              v24 = *(_QWORD *)(v22 + 16);
              if ( v24 )
              {
                if ( *(_DWORD *)(v22 + 8) == 61536 )
                {
                  v21 = v19;
                  v7 = v22;
                }
                v25 = MNLookUpItem(v24, 61536LL, 0LL, 0LL);
                if ( v25 )
                  goto LABEL_26;
              }
              else if ( *(_DWORD *)(v22 + 8) == 61536 )
              {
                v25 = v22;
                goto LABEL_94;
              }
              ++v23;
              v22 += 152LL;
            }
            while ( v23 < *(_DWORD *)(v19 + 52) );
            if ( !v21 )
              goto LABEL_95;
            v25 = v7;
LABEL_94:
            if ( v25 )
            {
LABEL_26:
              if ( (*(_DWORD *)(v25 + 4) & 3) == 0 )
                goto LABEL_27;
              goto LABEL_56;
            }
          }
        }
LABEL_95:
        v25 = MNLookUpItem(v19, 32864LL, 0LL, 0LL);
        if ( v25 )
          goto LABEL_26;
        v25 = MNLookUpItem(v39, 49264LL, 0LL, 0LL);
        if ( v25 )
          goto LABEL_26;
      }
    }
LABEL_56:
    *((_DWORD *)a2 + 10) |= 1u;
LABEL_27:
    if ( (*((_BYTE *)a1 + 45) & 0x10) != 0 )
      *((_DWORD *)a2 + 10) |= 8u;
    goto LABEL_29;
  }
  *((_DWORD *)a2 + 10) |= 0x8000u;
LABEL_29:
  v26 = *((_BYTE *)a1 + 54);
  if ( ((*((_BYTE *)a1 + 45) >> 1) & (unsigned __int8)~(v26 >> 3) & 1) != 0 )
  {
    *((_DWORD *)a2 + 8) |= 0x8000u;
  }
  else
  {
    if ( (v26 & 1) == 0 )
    {
      if ( (v26 & 2) != 0 )
        *((_DWORD *)a2 + 8) |= 1u;
      else
        *((_DWORD *)a2 + 8) |= 0x8000u;
    }
    if ( (*((_BYTE *)a1 + 45) & 0x20) != 0 )
      *((_DWORD *)a2 + 8) |= 8u;
  }
  v27 = *((_BYTE *)a1 + 54);
  if ( ((*((_BYTE *)a1 + 45) >> 1) & (unsigned __int8)~(v27 >> 3) & 1) != 0 )
  {
    *((_DWORD *)a2 + 7) |= 0x8000u;
  }
  else
  {
    if ( (v27 & 2) == 0 )
    {
      if ( (v27 & 1) != 0 )
        *((_DWORD *)a2 + 7) |= 1u;
      else
        *((_DWORD *)a2 + 7) |= 0x8000u;
    }
    if ( (*((_BYTE *)a1 + 45) & 0x40) != 0 )
      *((_DWORD *)a2 + 7) |= 8u;
  }
  if ( ((*((_BYTE *)a1 + 49) >> 2) & ((*((_BYTE *)a1 + 54) & 3) == 0)) != 0 )
  {
    if ( *((char *)a1 + 45) < 0 )
      *((_DWORD *)a2 + 9) |= 8u;
  }
  else
  {
    *((_DWORD *)a2 + 9) |= 0x8000u;
  }
  *((_DWORD *)a2 + 6) = 0x8000;
}
