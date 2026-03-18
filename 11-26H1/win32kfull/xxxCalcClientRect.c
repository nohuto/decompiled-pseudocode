/*
 * XREFs of xxxCalcClientRect @ 0x1400333BC
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserUpdateClientRect @ 0x1402C07F0 (NtUserUpdateClientRect.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x14000AC68 (xxxMenuBarCompute.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetCaptionHeight @ 0x140032E38 (GetCaptionHeight.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall xxxCalcClientRect(struct tagWND *a1, _DWORD *a2, int a3)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  char v7; // dl
  int v8; // esi
  int v9; // r13d
  _DWORD *v10; // rax
  int v11; // r12d
  int v12; // r14d
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rax
  int v16; // ebx
  int v17; // esi
  int v18; // r13d
  __int64 v19; // rdx
  _DWORD *v20; // rax
  int v21; // r12d
  int v22; // r14d
  int v23; // eax
  int v24; // r12d
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // ebx
  int v28; // r12d
  int v29; // r13d
  _DWORD *v30; // rax
  int v31; // r15d
  int v32; // r14d
  int v33; // eax
  int v34; // r15d
  int WindowBordersWithDpiAwareness; // eax
  signed int v36; // r15d
  int v37; // r13d
  signed int v38; // ebx
  int v39; // r12d
  int v40; // r14d
  int v41; // r14d
  __int64 v42; // rcx
  __int64 v44; // rsi
  __int64 v45; // rsi
  struct tagTHREADINFO *v46; // rax
  void *v47; // rax
  void *v48; // rax
  void *v49; // rax
  int v50; // esi
  __int64 v51; // rdx
  int v52; // r13d
  __int64 v53; // rdx
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // ebx
  int v57; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // r12d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+30h] [rbp-48h]
  __int128 v63; // [rsp+38h] [rbp-40h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-30h] BYREF
  __int64 v65; // [rsp+50h] [rbp-28h]
  __int64 v66; // [rsp+58h] [rbp-20h] BYREF
  __int64 v67; // [rsp+60h] [rbp-18h] BYREF
  __int64 v68; // [rsp+68h] [rbp-10h]
  char v69; // [rsp+C0h] [rbp+48h]

  v4 = PtiCurrent();
  v66 = gSmartObjNullRef;
  v67 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v67;
  v5 = *((_QWORD *)a1 + 5);
  v68 = 0LL;
  v6 = *(_DWORD *)(v5 + 28);
  v7 = *(_BYTE *)(v5 + 16);
  v8 = *(_DWORD *)(v5 + 24);
  v9 = *(_DWORD *)(v5 + 232);
  *(_BYTE *)(v5 + 16) = v7 & 0xF0;
  v69 = v7 & 0xF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_5;
  v10 = (_DWORD *)*((_QWORD *)a1 + 5);
  v11 = v10[7];
  v12 = v8 ^ v10[6];
  v13 = v9 ^ v10[58];
  v14 = v6 ^ v11;
  if ( !v14 )
  {
    if ( v12 )
      goto LABEL_39;
    if ( !v13 )
      goto LABEL_5;
  }
  if ( (v14 & 0xB9CF0000) != 0 )
  {
LABEL_36:
    DirtyVisRgnTrackers(a1);
    v47 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v47);
    goto LABEL_37;
  }
LABEL_39:
  if ( (v12 & 0x4E27A9) != 0 || (v13 & 0x372C0) != 0 )
    goto LABEL_36;
LABEL_37:
  if ( (v14 & 0x1C40000) != 0 || (v12 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_5:
  v15 = *((_QWORD *)a1 + 5);
  v16 = *(_DWORD *)(v15 + 28);
  v17 = *(_DWORD *)(v15 + 24);
  v18 = *(_DWORD *)(v15 + 232);
  *(_BYTE *)(v15 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_9;
  v20 = (_DWORD *)*((_QWORD *)a1 + 5);
  v21 = v20[7];
  v19 = (unsigned int)v20[58];
  v22 = v17 ^ v20[6];
  v23 = v18 ^ v20[58];
  v24 = v16 ^ v21;
  if ( !v24 )
  {
    if ( v22 )
      goto LABEL_46;
    if ( !v23 )
      goto LABEL_9;
  }
  if ( (v24 & 0xB9CF0000) != 0 )
  {
LABEL_43:
    DirtyVisRgnTrackers(a1);
    v48 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v48);
    goto LABEL_44;
  }
LABEL_46:
  if ( (v22 & 0x4E27A9) != 0 || (v23 & 0x372C0) != 0 )
    goto LABEL_43;
LABEL_44:
  if ( (v24 & 0x1C40000) != 0 || (v22 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_9:
  v25 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v25 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
    goto LABEL_22;
  }
  v62 = HIDWORD(*(_QWORD *)a2);
  v26 = HIDWORD(*(_QWORD *)a2);
  v63 = *(_OWORD *)a2;
  if ( (*(_BYTE *)(v25 + 30) & 0xC0) == 0xC0 )
  {
    v27 = *(_DWORD *)(v25 + 28);
    v28 = *(_DWORD *)(v25 + 24);
    v29 = *(_DWORD *)(v25 + 232);
    *(_BYTE *)(v25 + 16) |= 8u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_15:
      v26 = DWORD1(v63) + GetCaptionHeight((__int64)a1);
      goto LABEL_16;
    }
    v30 = (_DWORD *)*((_QWORD *)a1 + 5);
    v31 = v30[7];
    v32 = v28 ^ v30[6];
    v33 = v29 ^ v30[58];
    v34 = v27 ^ v31;
    if ( !v34 )
    {
      if ( v32 )
      {
LABEL_53:
        if ( (v32 & 0x4E27A9) == 0 && (v33 & 0x372C0) == 0 )
        {
LABEL_51:
          if ( (v34 & 0x1C40000) != 0 || (v32 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(a1, 1LL);
          goto LABEL_15;
        }
LABEL_50:
        DirtyVisRgnTrackers(a1);
        v49 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v49);
        goto LABEL_51;
      }
      if ( !v33 )
        goto LABEL_15;
    }
    if ( (v34 & 0xB9CF0000) != 0 )
      goto LABEL_50;
    goto LABEL_53;
  }
LABEL_16:
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v19, 0, 0);
  v36 = v63 + WindowBordersWithDpiAwareness;
  v37 = DWORD2(v63) - WindowBordersWithDpiAwareness;
  LODWORD(v63) = v63 + WindowBordersWithDpiAwareness;
  v38 = v26 + WindowBordersWithDpiAwareness;
  DWORD2(v63) -= WindowBordersWithDpiAwareness;
  v39 = HIDWORD(v63) - WindowBordersWithDpiAwareness;
  DWORD1(v63) = v38;
  v40 = WindowBordersWithDpiAwareness;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v44 = *((_QWORD *)a1 + 21);
    v68 = 0LL;
    if ( v44 != *(_QWORD *)v66 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v66);
      if ( v44 )
      {
        v66 = *(_QWORD *)(v44 + 152);
        ++*(_DWORD *)(v66 + 8);
      }
      else
      {
        v66 = gSmartObjNullRef;
      }
    }
    if ( v68 || *(_QWORD *)v66 )
    {
      SetOrClrWF(1LL, a1, 1LL, 1LL);
      if ( !a3 )
      {
        v45 = v68;
        if ( !v68 )
          v45 = *(_QWORD *)v66;
        v46 = PtiCurrent();
        Win32HM_LockIntoThread<0>((__int64)v46, v45, &BugCheckParameter3);
        *(_DWORD *)(*(_QWORD *)(v45 + 40) + 40LL) |= 0x200u;
        v38 += xxxMenuBarCompute((__int64)&v66, (__int64)a1, v38 - (int)v62, v40, v37 - v36);
        DWORD1(v63) = v38;
        *(_DWORD *)(*(_QWORD *)(v65 + 40) + 40LL) &= ~0x200u;
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(&BugCheckParameter3);
      }
    }
  }
  v41 = v39;
  if ( v38 >= v39 )
    v41 = v38;
  HIDWORD(v63) = v41;
  if ( v36 < v37 )
  {
    if ( v38 < v39 )
    {
      v50 = v37;
      DWORD2(v63) = v37;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 2) != 0 )
      {
        DWORD2(v63) = v37;
        if ( v37 - v36 >= 4 )
        {
          DWORD2(v63) = v37;
          if ( v41 - v38 >= 4 )
          {
            SetOrClrWF(1LL, a1, 1040LL, 1LL);
            v36 += 2;
            v50 = v37 - 2;
            v38 += 2;
            *(_QWORD *)&v63 = __PAIR64__(v38, v36);
            v41 -= 2;
            DWORD2(v63) = v37 - 2;
            HIDWORD(v63) = v41;
          }
        }
      }
      v51 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v51 + 30) & 0x10) != 0
        && ((v57 = *(_DWORD *)(v51 + 288) & 0xF, v57 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v51 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v51 + 232) & 0x400) == 0
          ? (v57
          || (v61 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) == 0
          || (*(_DWORD *)(**(_QWORD **)(v61 + 8) + 64LL) & 1) == 0
           ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL))
           : (WindowDpiLastNotify = 96))
          : (WindowDpiLastNotify = GetWindowDpiLastNotify(a1)),
            DpiDependentMetric = GetDpiDependentMetric(1, WindowDpiLastNotify),
            v41 - v38 > DpiDependentMetric) )
      {
        SetOrClrWF(1LL, a1, 4LL, 1LL);
        v52 = a3;
        if ( !a3 )
          HIDWORD(v63) = v41 - DpiDependentMetric;
      }
      else
      {
        v52 = a3;
      }
      v53 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v53 + 30) & 0x20) != 0 )
      {
        v54 = *(_DWORD *)(v53 + 288) & 0xF;
        if ( v54 == 3 )
        {
          v55 = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v53 + 232) & 0x400) != 0 )
        {
          v55 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v54
               && (v60 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 64LL) & 1) != 0 )
        {
          v55 = 96;
        }
        else
        {
          v55 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
        }
        v56 = GetDpiDependentMetric(0, v55);
        if ( v50 - v36 >= v56 )
        {
          SetOrClrWF(1LL, a1, 2LL, 1LL);
          if ( !v52 )
          {
            if ( ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL)) & 0x40) != 0 )
              LODWORD(v63) = v56 + v36;
            else
              DWORD2(v63) = v50 - v56;
          }
        }
      }
    }
  }
  else
  {
    DWORD2(v63) = v36;
  }
  *(_OWORD *)a2 = v63;
LABEL_22:
  v42 = *((_QWORD *)a1 + 5);
  if ( v69 != (*(_BYTE *)(v42 + 16) & 0xF) && *(char *)(v42 + 23) < 0 )
    xxxWindowEvent(0x8004u, 1);
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v66);
}
