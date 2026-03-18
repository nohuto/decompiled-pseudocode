/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0
 * Callers:
 *     NtUserGetTitleBarInfo @ 0x1C006EC50 (NtUserGetTitleBarInfo.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00B791C (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetWindowFrameMetricInternal @ 0x1C006F3E4 (GetWindowFrameMetricInternal.c)
 *     MNLookUpItem @ 0x1C006F45C (MNLookUpItem.c)
 *     xxxGetSysMenuHandle @ 0x1C006F540 (xxxGetSysMenuHandle.c)
 *     _HasCaptionIcon @ 0x1C006F598 (_HasCaptionIcon.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2, __int64 a3, __int64 a4)
{
  int v6; // ecx
  unsigned int v7; // r13d
  __int64 v8; // rsi
  int v9; // r12d
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  int v25; // r14d
  int v26; // ebp
  int WindowFrameMetricInternal; // r12d
  __int64 v28; // r15
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // esi
  __int64 SysMenuHandle; // rax
  __int64 v35; // r10
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // r11
  int v39; // ebp
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int8 v42; // dl
  unsigned __int8 v43; // dl
  __int64 CurrentProcessWin32Process; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r11
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v49; // r11
  __int64 v50; // rsi
  int v51; // eax
  __int64 v52; // r11
  __int64 v53; // rsi
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // r11
  __int64 v57; // rsi
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  _DWORD *v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r10
  int v81; // [rsp+50h] [rbp+8h]

  v6 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v6;
  if ( (*((_BYTE *)a1 + 54) & 0xC0) != 0xC0 )
  {
    *((_DWORD *)a2 + 5) = v6 | 0x8000;
    return;
  }
  if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 && (*((_BYTE *)a1 + 40) & 8) == 0 )
  {
    *((_DWORD *)a2 + 5) = v6 | 0x10000;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    return;
  }
  if ( (*((_DWORD *)a1 + 72) & 0x10000000) != 0 )
  {
    v7 = *((unsigned __int16 *)a1 + 178);
  }
  else if ( (*((_DWORD *)a1 + 88) & 0xF) == 0
         && (v46 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v46 + 8) + 244LL) & 1) != 0 )
  {
    v7 = 96;
  }
  else
  {
    v7 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  v8 = 0LL;
  *(_OWORD *)((char *)a2 + 4) = *((_OWORD *)a1 + 7);
  v9 = *((_DWORD *)a1 + 12);
  v81 = *((_DWORD *)a1 + 13);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  if ( *(_DWORD *)(v8 + 552) > 0x9900u )
    v14 = 0;
  else
    v14 = *(_DWORD *)(v8 + 568);
  v15 = 0LL;
  v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v11, v12, v13);
  if ( v16 )
    v15 = *v16;
  if ( (*(_BYTE *)(*(_QWORD *)(v15 + 432) + 224LL) & 8) != 0 )
  {
    v14 &= ~0x2000000u;
  }
  else
  {
    LOBYTE(v21) = 18;
    v22 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v17, v19, v20);
    if ( v22 )
    {
      v24 = *v22;
      if ( *v22 )
      {
        if ( *(_QWORD *)(v24 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v22);
        if ( *(_DWORD *)(v24 + 340) )
        {
          LOBYTE(v21) = *(_DWORD *)(v24 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v23);
          if ( CurrentProcessWin32Process )
            v21 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
    if ( (v21 & 0xF) != 0 )
      v14 |= 0x2000000u;
  }
  v25 = 1;
  if ( (v9 & 0x100) != 0 )
    v26 = 2;
  else
    v26 = (v9 & 0x20000) != 0;
  LOBYTE(v18) = (v81 & 0xC00000) == 0;
  if ( ((unsigned __int8)v18 & ((v9 & 1) == 0)) == 0 )
    ++v26;
  WindowFrameMetricInternal = GetWindowFrameMetricInternal(v18, v14, v7);
  if ( (v81 & 0x40000) != 0
    || WindowFrameMetricInternal > 0
    && ((v81 & 0xC00000) == 12582912 || (v81 & 0x40000) != 0)
    && (v14 & 0x30000000) == 0 )
  {
    if ( (v14 & 0x10000000) != 0 || (v25 = (int)(v7 * *(_DWORD *)(gpsi + 5520LL) + 48) / 96, (v14 & 0x20000000) == 0) )
    {
      v28 = 0LL;
LABEL_28:
      v26 += v25 + WindowFrameMetricInternal;
      goto LABEL_29;
    }
    if ( v7 )
    {
      if ( v7 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v45 = *(_DWORD *)(gpsi + 2248LL);
      }
      else if ( v7 == 96 )
      {
        v45 = *(_DWORD *)(gpsi + 2636LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v7);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v45 = ScaleSystemMetricForDPIWithoutCache(92LL, v7);
        }
        else
        {
          v50 = 112LL * DpiDepSysMetCachePlateauSlot;
          v45 = *(_DWORD *)(v49 + v50 + 3152);
          if ( v45 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v7);
            v28 = 0LL;
            v45 = *(_DWORD *)(v50 + gpsi + 3152);
            if ( v45 == -1 )
              v45 = 0;
            goto LABEL_69;
          }
        }
      }
    }
    else
    {
      if ( (v14 & 0x2000000) != 0 )
        v47 = gpsi + 1880LL;
      else
        v47 = gpsi + 2268LL;
      v45 = *(_DWORD *)(v47 + 368);
    }
    v28 = 0LL;
LABEL_69:
    v25 += v45;
    goto LABEL_28;
  }
  v28 = 0LL;
LABEL_29:
  v29 = v26 * *(_DWORD *)(gpsi + 1900LL);
  v30 = -(v26 * *(_DWORD *)(gpsi + 1904LL));
  *((_DWORD *)a2 + 2) += v26 * *(_DWORD *)(gpsi + 1904LL);
  v31 = -v29;
  *((_DWORD *)a2 + 1) -= v31;
  *((_DWORD *)a2 + 3) += v31;
  *((_DWORD *)a2 + 4) += v30;
  if ( *((char *)a1 + 48) >= 0 )
  {
    if ( v7 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v32 = *(_DWORD *)(gpsi + 1896LL);
      goto LABEL_32;
    }
    if ( v7 == 96 )
    {
      v32 = *(_DWORD *)(gpsi + 2284LL);
      goto LABEL_32;
    }
    v55 = GetDpiDepSysMetCachePlateauSlot(v7);
    if ( v55 != -1 )
    {
      v57 = 112LL * v55;
      v32 = *(_DWORD *)(v57 + v56 + 3052);
      if ( v32 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v7);
        v32 = *(_DWORD *)(v57 + gpsi + 3052);
        if ( v32 == -1 )
          v32 = 0;
      }
      goto LABEL_32;
    }
    v54 = 4LL;
LABEL_122:
    v32 = ScaleSystemMetricForDPIWithoutCache(v54, v7);
    goto LABEL_32;
  }
  if ( v7 == *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    v32 = *(_DWORD *)(gpsi + 2084LL);
    goto LABEL_32;
  }
  if ( v7 == 96 )
  {
    v32 = *(_DWORD *)(gpsi + 2472LL);
    goto LABEL_32;
  }
  v51 = GetDpiDepSysMetCachePlateauSlot(v7);
  if ( v51 == -1 )
  {
    v54 = 51LL;
    goto LABEL_122;
  }
  v53 = 112LL * v51 + 3124;
  v32 = *(_DWORD *)(v52 + v53);
  if ( v32 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v7);
    v32 = *(_DWORD *)(v53 + gpsi);
    if ( v32 == -1 )
      v32 = 0;
  }
LABEL_32:
  v33 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 4) = v33 + v32;
  if ( (*((_BYTE *)a1 + 54) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
  {
    if ( (*((_BYTE *)a1 + 50) & 0x40) == 0 )
    {
      *((_DWORD *)a2 + 1) += *((_DWORD *)a2 + 4) - v33 - *(_DWORD *)(gpsi + 1904LL);
      goto LABEL_36;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60) & 0xF) != 0 )
        goto LABEL_125;
    }
    else if ( !IsDPIDWMSysMet(v59)
           || (W32GetCurrentThreadDpiAwarenessContext(v72, v71, v73) & 0xF) != 0
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v74, v75, v76) + 408)
           || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1) == 0 )
    {
LABEL_125:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v62, v61, v63) & 0xF) == 1
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 408)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1) != 0 )
      {
        v70 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v70 = (_DWORD *)(gpsi + 1904LL);
      }
      goto LABEL_136;
    }
    v70 = (_DWORD *)(gpsi + 2292LL);
LABEL_136:
    *((_DWORD *)a2 + 3) += *v70 + *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 4);
  }
LABEL_36:
  if ( ((*((_BYTE *)a1 + 45) >> 1) & (unsigned __int8)~(*((_BYTE *)a1 + 54) >> 3) & 1) == 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 85LL) & 2) == 0 )
    {
      SysMenuHandle = xxxGetSysMenuHandle(a1);
      v35 = SysMenuHandle;
      if ( SysMenuHandle )
      {
        v36 = *(_DWORD *)(SysMenuHandle + 52);
        v37 = 0LL;
        if ( v36 )
        {
          v38 = *(_QWORD *)(v35 + 80);
          v39 = 0;
          if ( v36 > 0 )
          {
            do
            {
              v40 = *(_QWORD *)(v38 + 16);
              if ( v40 )
              {
                if ( *(_DWORD *)(v38 + 8) == 61536 )
                {
                  v37 = v35;
                  v28 = v38;
                }
                v41 = MNLookUpItem(v40, 61536LL, 0LL, 0LL);
                if ( v41 )
                  goto LABEL_45;
              }
              else if ( *(_DWORD *)(v38 + 8) == 61536 )
              {
                v41 = v38;
                goto LABEL_142;
              }
              ++v39;
              v38 += 152LL;
            }
            while ( v39 < *(_DWORD *)(v35 + 52) );
            if ( !v37 )
              goto LABEL_143;
            v41 = v28;
LABEL_142:
            if ( v41 )
            {
LABEL_45:
              if ( (*(_DWORD *)(v41 + 4) & 3) == 0 )
                goto LABEL_46;
              goto LABEL_85;
            }
          }
        }
LABEL_143:
        v41 = MNLookUpItem(v35, 32864LL, 0LL, 0LL);
        if ( v41 )
          goto LABEL_45;
        v41 = MNLookUpItem(v80, 49264LL, 0LL, 0LL);
        if ( v41 )
          goto LABEL_45;
      }
    }
LABEL_85:
    *((_DWORD *)a2 + 10) |= 1u;
LABEL_46:
    if ( (*((_BYTE *)a1 + 45) & 0x10) != 0 )
      *((_DWORD *)a2 + 10) |= 8u;
    goto LABEL_48;
  }
  *((_DWORD *)a2 + 10) |= 0x8000u;
LABEL_48:
  v42 = *((_BYTE *)a1 + 54);
  if ( ((*((_BYTE *)a1 + 45) >> 1) & (unsigned __int8)~(v42 >> 3) & 1) != 0 )
  {
    *((_DWORD *)a2 + 8) |= 0x8000u;
  }
  else
  {
    if ( (v42 & 1) == 0 )
    {
      if ( (v42 & 2) != 0 )
        *((_DWORD *)a2 + 8) |= 1u;
      else
        *((_DWORD *)a2 + 8) |= 0x8000u;
    }
    if ( (*((_BYTE *)a1 + 45) & 0x20) != 0 )
      *((_DWORD *)a2 + 8) |= 8u;
  }
  v43 = *((_BYTE *)a1 + 54);
  if ( ((*((_BYTE *)a1 + 45) >> 1) & (unsigned __int8)~(v43 >> 3) & 1) != 0 )
  {
    *((_DWORD *)a2 + 7) |= 0x8000u;
  }
  else
  {
    if ( (v43 & 2) == 0 )
    {
      if ( (v43 & 1) != 0 )
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
