/*
 * XREFs of xxxMNCompute @ 0x14000C5FC
 * Callers:
 *     xxxMenuBarCompute @ 0x14000AC68 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14000CF40 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401FAB28 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxSendUAHInitMenuMessage @ 0x14020C434 (xxxSendUAHInitMenuMessage.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 */

__int64 __fastcall xxxMNCompute(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v8; // r12d
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  unsigned int WindowDpiLastNotify; // ebp
  __int64 v16; // r8
  __int64 v17; // rcx
  HDC v18; // rdi
  _QWORD *DpiMetricsForDpi; // rax
  int v20; // ebx
  unsigned int v21; // r13d
  unsigned int v22; // r15d
  __int64 *v23; // r14
  __int64 v24; // r14
  struct tagMENU *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  BOOL v28; // eax
  int v29; // ebx
  __int64 v30; // rcx
  struct tagMENU *v31; // rcx
  _WORD *v32; // rax
  int v33; // ebx
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // r8d
  __int64 v37; // rcx
  int v38; // ebx
  unsigned int v39; // eax
  __int64 *v40; // rcx
  unsigned int v41; // ebx
  struct tagMENU *v43; // rcx
  int v44; // ebx
  unsigned int v45; // ebx
  int v46; // r8d
  __int64 v47; // rcx
  int v48; // r10d
  __int64 v49; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rbx
  int v54; // edx
  unsigned int v55; // r10d
  __int64 *i; // r9
  __int64 v57; // r8
  int v58; // [rsp+40h] [rbp-98h]
  int v59; // [rsp+44h] [rbp-94h]
  int v60; // [rsp+48h] [rbp-90h]
  unsigned int v61; // [rsp+4Ch] [rbp-8Ch]
  int v62; // [rsp+50h] [rbp-88h]
  __int64 v63; // [rsp+58h] [rbp-80h] BYREF
  __int64 DCEx; // [rsp+60h] [rbp-78h]
  _QWORD v65[3]; // [rsp+70h] [rbp-68h] BYREF
  struct tagTHREADINFO *v66; // [rsp+88h] [rbp-50h]
  unsigned int v67; // [rsp+E0h] [rbp+8h]
  int v68; // [rsp+E8h] [rbp+10h]
  unsigned int v69; // [rsp+F0h] [rbp+18h]

  v68 = a2;
  v8 = 0;
  v63 = 0LL;
  v69 = 0;
  v66 = PtiCurrent();
  if ( !a3 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
      goto LABEL_10;
    }
LABEL_9:
    WindowDpiLastNotify = 96;
    goto LABEL_10;
  }
  v12 = *(_QWORD *)(a3 + 40);
  v13 = *(_DWORD *)(v12 + 288) & 0xF;
  if ( v13 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
    goto LABEL_10;
  }
  if ( _bittest((const signed __int32 *)(v12 + 232), 0xAu) )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
    goto LABEL_10;
  }
  if ( !v13 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 488LL);
    if ( v14 )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(v14 + 8) + 64LL) & 1) != 0 )
        goto LABEL_9;
    }
  }
  WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 456LL) + 272LL);
LABEL_10:
  if ( a2 != *(_QWORD *)(**a1 + 80) )
  {
    v51 = *a1;
    v65[1] = a2;
    v65[0] = *v51 + 80;
    HMAssignmentLock(v65, 0LL);
  }
  if ( a7 )
    v69 = *a7;
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    return 0LL;
  v60 = *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1;
  if ( v60 )
  {
    v69 = 0;
  }
  else if ( a2 )
  {
    *(_DWORD *)(**a1 + 64) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 3
    || a3
    && PtiCurrent()
    && *((_QWORD *)PtiCurrent() + 61)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 61) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v16 = 65539LL;
    v17 = a3;
  }
  else
  {
    v17 = 0LL;
    v16 = 3LL;
  }
  DCEx = _GetDCEx(v17, 0LL, v16);
  v18 = (HDC)DCEx;
  DpiMetricsForDpi = (_QWORD *)GetDpiMetricsForDpi(WindowDpiLastNotify);
  v65[0] = GreSelectFont(DCEx, *DpiMetricsForDpi);
  v61 = 0;
  v59 = 0;
  v67 = 0;
  if ( (unsigned int)IsInsideUserApiHook() && a2 )
    xxxSendUAHInitMenuMessage(a2, a1, DCEx);
  v20 = 0;
  v58 = a5;
  v21 = a4;
  v22 = 0;
  v62 = 0;
  *(_DWORD *)(**a1 + 72) = 0;
  v23 = a1[2];
  if ( !v23 )
    v23 = (__int64 *)**a1;
  if ( *(_DWORD *)(v23[5] + 44) )
    v24 = v23[11];
  else
    v24 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    goto LABEL_59;
  while ( v24 )
  {
    v25 = (struct tagMENU *)a1[2];
    if ( !v25 )
      v25 = (struct tagMENU *)**a1;
    v26 = MNIsOwnerDrawItem(v25, (struct tagITEM *)v24);
    v27 = *(_QWORD *)v24;
    if ( (**(_DWORD **)v24 & 0x800) == 0 || v26 && *((_WORD *)v66 + 332) >= 0x400u )
    {
      v28 = *(_QWORD *)(v27 + 96) && *(_QWORD *)(v24 + 24);
      v62 = v28 | v20;
      v29 = v60;
      xxxMNItemSize(
        (struct tagMENU ***)a1,
        v68,
        WindowDpiLastNotify,
        v18,
        (struct tagITEM *)v24,
        v60,
        (unsigned int *)&v63);
      v30 = (__int64)a1[2];
      if ( !v30 )
        v30 = **a1;
      if ( !MNIspItemValid(v30, v24) )
        break;
      *(_QWORD *)(*(_QWORD *)v24 + 72LL) = v63;
      if ( !v60 && (!*(_QWORD *)(*(_QWORD *)v24 + 96LL) || *(_QWORD *)(v24 + 24)) )
      {
        v31 = (struct tagMENU *)a1[2];
        if ( !v31 )
          v31 = (struct tagMENU *)**a1;
        if ( !(unsigned int)MNIsUAHMenu(v31) )
          *(_DWORD *)(*(_QWORD *)v24 + 72LL) += 2 * *(_DWORD *)(GetDpiMetricsForDpi(WindowDpiLastNotify) + 8);
      }
    }
    else
    {
      *(_DWORD *)(v27 + 72) = 0;
      v29 = v60;
      *(_DWORD *)(*(_QWORD *)v24 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
    }
    if ( v69 && *(_DWORD *)(*(_QWORD *)v24 + 76LL) < v69 )
      *(_DWORD *)(*(_QWORD *)v24 + 76LL) = v69;
    if ( !v22 )
      v8 = *(_DWORD *)(*(_QWORD *)v24 + 76LL);
    if ( v29 )
    {
      v44 = **(_DWORD **)v24 & 0x60;
      if ( v44 || *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v22 + 1 )
      {
        v46 = v59;
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v22 + 1 && *(_DWORD *)(*(_QWORD *)v24 + 72LL) > v59 )
          v46 = *(_DWORD *)(*(_QWORD *)v24 + 72LL);
        xxxMNRecalcTabStrings((_DWORD)v18, (_DWORD)a1, v67, v22 + (v44 == 0), v46, v58);
        v47 = (__int64)a1[2];
        if ( !v47 )
          v47 = **a1;
        if ( !MNIspItemValid(v47, v24) )
          break;
        if ( v44 )
        {
          v21 = a4;
          v41 = v22;
          v58 = v48 + 4;
          v67 = v22;
          v59 = *(_DWORD *)(*(_QWORD *)v24 + 72LL);
          if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v22 + 1 )
          {
            xxxMNRecalcTabStrings((_DWORD)v18, (_DWORD)a1, v22, v22 + 1, *(_DWORD *)(*(_QWORD *)v24 + 72LL), v48 + 4);
            v52 = (__int64)a1[2];
            if ( !v52 )
              v52 = **a1;
            if ( !MNIspItemValid(v52, v24) )
              goto LABEL_58;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v22 + 1 )
          *(_DWORD *)(**a1 + 64) = v48;
      }
      v45 = v61;
      *(_DWORD *)(*(_QWORD *)v24 + 64LL) = v58;
      *(_DWORD *)(*(_QWORD *)v24 + 68LL) = v21;
      v37 = *(_QWORD *)v24;
      v21 += *(_DWORD *)(*(_QWORD *)v24 + 76LL);
      if ( v61 < v21 )
        v45 = v21;
      v61 = v45;
    }
    else
    {
      v32 = *(_WORD **)(v24 + 24);
      if ( v32 && *v32 == 8 )
      {
        v43 = (struct tagMENU *)a1[2];
        if ( !v43 )
          v43 = (struct tagMENU *)**a1;
        if ( !(unsigned int)MNIsUAHMenu(v43) )
          *(_DWORD *)(*(_QWORD *)v24 + 72LL) -= *(_DWORD *)(GetDpiMetricsForDpi(WindowDpiLastNotify) + 8);
      }
      if ( (**(_DWORD **)v24 & 0x60) != 0
        || (v33 = *(_DWORD *)(*(_QWORD *)v24 + 72LL),
            v34 = **a1,
            v35 = GetDpiMetricsForDpi(WindowDpiLastNotify),
            v36 = v58,
            v58 + v33 + *(_DWORD *)(v35 + 8) > (unsigned int)(*(_DWORD *)(v34 + 64) + a5))
        && v22 )
      {
        v21 += v8;
        v36 = a5;
        v8 = *(_DWORD *)(*(_QWORD *)v24 + 76LL);
      }
      v18 = (HDC)DCEx;
      *(_DWORD *)(*(_QWORD *)v24 + 68LL) = v21;
      *(_DWORD *)(*(_QWORD *)v24 + 64LL) = v36;
      v37 = *(_QWORD *)v24;
      v58 = *(_DWORD *)(*(_QWORD *)v24 + 72LL) + v36;
    }
    v38 = v59;
    if ( v59 < *(_DWORD *)(v37 + 72) )
      v38 = *(_DWORD *)(v37 + 72);
    v39 = *(_DWORD *)(v37 + 76);
    v59 = v38;
    if ( v8 != v39 )
    {
      if ( v8 < v39 )
        v8 = *(_DWORD *)(v37 + 76);
      if ( v60 )
        goto LABEL_54;
      v69 = v8;
LABEL_53:
      v61 = v8 + v21;
      goto LABEL_54;
    }
    if ( !v60 )
      goto LABEL_53;
LABEL_54:
    v40 = a1[2];
    ++v22;
    if ( !v40 )
      v40 = (__int64 *)**a1;
    v24 = MNGetpItemFromIndex(v40, v22);
    v20 = v62;
    if ( v22 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      break;
  }
  v41 = v67;
LABEL_58:
  if ( !v62 || v41 )
  {
LABEL_59:
    *(_DWORD *)(**a1 + 72) = 0;
    goto LABEL_60;
  }
  v49 = **a1;
  if ( *(int *)(*(_QWORD *)(v49 + 40) + 40LL) >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v49 + 40) + 40LL) & 0x4000000) == 0 )
    {
      *(_DWORD *)(**a1 + 72) += *(__int16 *)(GetOemBitmapInfo(63LL) + 4) + 2;
      goto LABEL_61;
    }
    v53 = **a1;
    if ( *(_DWORD *)(v53 + 72) <= (unsigned int)*(__int16 *)(GetOemBitmapInfo(63LL) + 4) )
      v54 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
    else
      v54 = *(_DWORD *)(**a1 + 72);
    *(_DWORD *)(**a1 + 72) = v54;
    *(_DWORD *)(**a1 + 72) += 2;
LABEL_60:
    v41 = v67;
    goto LABEL_61;
  }
  *(_DWORD *)(v49 + 72) += 2;
LABEL_61:
  if ( *(_DWORD *)(**a1 + 72) )
    *(_DWORD *)(**a1 + 72) += 2;
  if ( v41 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      if ( (***(_DWORD ***)(**a1 + 88) & 0x4000) != 0 )
      {
        v55 = 0;
        for ( i = *(__int64 **)(**a1 + 88);
              v55 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL);
              *(_DWORD *)(v57 + 64) = *(_DWORD *)(**a1 + 64) - *(_DWORD *)(v57 + 72) - *(_DWORD *)(v57 + 64) )
        {
          ++v55;
          v57 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFont(v18, v65[0]);
  _ReleaseDC(v18);
  *(_DWORD *)(**a1 + 68) = v61 - a4;
  if ( a7 )
    *a7 = v69;
  return *(unsigned int *)(**a1 + 68);
}
