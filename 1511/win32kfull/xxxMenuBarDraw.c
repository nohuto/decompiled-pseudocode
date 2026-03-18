/*
 * XREFs of xxxMenuBarDraw @ 0x1C0241E10
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C0013EA8 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     GetCaptionHeight @ 0x1C00757A8 (GetCaptionHeight.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C023EB74 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(__int64 a1, HDC a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  unsigned int *v16; // rcx
  int CaptionHeight; // eax
  unsigned int v19; // esi
  unsigned int v20; // r14d
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // r12d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // rcx
  int *v33; // rax
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  int *v46; // rcx
  int v47; // ebx
  __int64 v48; // rcx
  unsigned int v49; // ebx
  __int64 v50; // [rsp+30h] [rbp-50h] BYREF
  __int64 v51; // [rsp+38h] [rbp-48h]
  _DWORD v52[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v53; // [rsp+58h] [rbp-28h]
  unsigned int v54; // [rsp+60h] [rbp-20h]
  int v55; // [rsp+64h] [rbp-1Ch]
  int v56; // [rsp+68h] [rbp-18h]
  int v57; // [rsp+6Ch] [rbp-14h]
  __int64 v58; // [rsp+70h] [rbp-10h]
  int v59; // [rsp+B0h] [rbp+30h]

  v59 = 0;
  v5 = *(_QWORD *)(a1 + 192);
  if ( !v5 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
      {
        goto LABEL_5;
      }
    }
    else if ( !IsDPIDWMSysMet(v9)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v15 = 0)
             : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v15) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v12 = 0)
          : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v12) )
      {
        v16 = (unsigned int *)(gpsi + 2680LL);
      }
      else
      {
        v16 = (unsigned int *)(gpsi + 1904LL);
      }
      return *v16;
    }
    v16 = (unsigned int *)(gpsi + 2292LL);
    return *v16;
  }
  if ( (*(_BYTE *)(a1 + 40) & 0x40) != 0 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) == gpqForeground
    || (GetAppCompatFlags2(0x400u) & 0x80u) != 0LL )
  {
    *(_DWORD *)(v5 + 40) &= ~0x10u;
  }
  else
  {
    *(_DWORD *)(v5 + 40) |= 0x10u;
  }
  *(_DWORD *)(v5 + 40) |= 0x200u;
  v50 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v50;
  v51 = v5;
  ++*(_DWORD *)(v5 + 8);
  CaptionHeight = GetCaptionHeight(a1);
  v19 = *(_DWORD *)(a1 + 120) - 2 * a3 - *(_DWORD *)(a1 + 112);
  v20 = a4 + CaptionHeight;
  if ( a1 != *(_QWORD *)(v5 + 72) || !*(_DWORD *)(v5 + 56) || !*(_DWORD *)(v5 + 60) )
    xxxMenuBarCompute((struct tagMENU *)v5, a1, v20, a3, *(_DWORD *)(a1 + 120) - 2 * a3 - *(_DWORD *)(a1 + 112));
  if ( *(_DWORD *)(v5 + 56) > v19
    || (int)(v20 + *(_DWORD *)(v5 + 60)) > *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) - a4 )
  {
    GreLockVisRgn(*gpDispInfo);
    v59 = 1;
    GreIntersectVisRect(
      a2,
      *(_DWORD *)(a1 + 112) + a3,
      *(unsigned int *)(a1 + 116),
      a3 + *(_DWORD *)(a1 + 112) + v19,
      *(_DWORD *)(a1 + 124) - a4);
    GreUnlockVisRgn(*gpDispInfo);
  }
  v21 = *(_DWORD *)(v5 + 56);
  v22 = *(_DWORD *)(v5 + 60);
  v52[0] = a3;
  v52[1] = v20;
  v52[2] = v21;
  v23 = *(_QWORD *)(v5 + 112);
  v52[3] = v22;
  if ( !v23 )
  {
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      v23 = *(_QWORD *)(gpsi + 3936LL);
    else
      v23 = *(_QWORD *)(gpsi + 3728LL);
  }
  v53 = v23;
  v54 = a3;
  v55 = v22 + v20;
  v56 = v21;
  v25 = IsDPIAbsoluteSysMet(6uLL);
  if ( v25 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0 )
    {
      goto LABEL_41;
    }
LABEL_52:
    v32 = gpsi;
    v33 = (int *)(gpsi + 2292LL);
    goto LABEL_57;
  }
  if ( IsDPIDWMSysMet(v24)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_52;
  }
LABEL_41:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v28 = 0)
      : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v28) )
  {
    v32 = gpsi;
    v33 = (int *)(gpsi + 2680LL);
  }
  else
  {
    v32 = gpsi;
    v33 = (int *)(gpsi + 1904LL);
  }
LABEL_57:
  v34 = (*(_BYTE *)(a1 + 49) & 3) == 0;
  v57 = *v33;
  if ( v34 || (*(_BYTE *)(a1 + 44) & 8) != 0 )
    v35 = *(_QWORD *)(v32 + 3744);
  else
    v35 = *(_QWORD *)(v32 + 3816);
  v58 = v35;
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v52, 2u);
  if ( (*(_BYTE *)(a1 + 49) & 3) == 0 || (*(_BYTE *)(a1 + 44) & 8) != 0 )
    v36 = *(_QWORD *)(gpsi + 3744LL);
  else
    v36 = *(_QWORD *)(gpsi + 3816LL);
  v37 = GreSelectBrush(a2, v36);
  xxxMenuDraw(a2, v5, 0LL);
  GreSelectBrush(a2, v37);
  if ( v59 )
    RecalcDCVisRgn(a2);
  if ( v25 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0 )
    {
      goto LABEL_70;
    }
  }
  else if ( !IsDPIDWMSysMet(6uLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v45 = 0)
           : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v45) )
  {
LABEL_70:
    if ( IsDPIDWMSysMet(6uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v42 = 0)
        : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v42) )
    {
      v46 = (int *)(gpsi + 2680LL);
    }
    else
    {
      v46 = (int *)(gpsi + 1904LL);
    }
    goto LABEL_86;
  }
  v46 = (int *)(gpsi + 2292LL);
LABEL_86:
  v47 = *v46;
  v48 = v51;
  v49 = *(_DWORD *)(v5 + 60) + v47;
  *(_DWORD *)(v51 + 40) &= ~0x200u;
  ThreadUnlock1(v48, v40);
  return v49;
}
