/*
 * XREFs of xxxMNSelectItem @ 0x140120634
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNButtonDown @ 0x14024D270 (xxxMNButtonDown.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402DA6FC (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402D91A0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402D938C (MNSetTimerToCloseHierarchy.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  _QWORD v26[2]; // [rsp+38h] [rbp-69h] BYREF
  ULONG_PTR v27[2]; // [rsp+48h] [rbp-59h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v29; // [rsp+68h] [rbp-39h]
  __int64 v30[2]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v31; // [rsp+80h] [rbp-21h]
  ULONG_PTR v32[2]; // [rsp+88h] [rbp-19h] BYREF
  ULONG_PTR v33[2]; // [rsp+98h] [rbp-9h] BYREF
  ULONG_PTR v34[2]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 *v35[4]; // [rsp+B8h] [rbp+17h] BYREF
  int v36; // [rsp+108h] [rbp+67h]

  v4 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v30);
  v6 = 0LL;
  if ( *(_DWORD *)(**a1 + 80) == (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      v6 = 96 * v4 + *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL);
    goto LABEL_5;
  }
  v8 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  v9 = v8;
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v8 )
    goto LABEL_5;
  MNAnimate((__int64 *)a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v10 = *(_QWORD *)(**a1 + 40);
  v31 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v30, v10);
  v12 = v31;
  if ( !v31 )
    v12 = *(_QWORD *)v30[0];
  v13 = PtiCurrent(v11);
  Win32HM_LockIntoThread<1>((__int64)v13, v12, (__int64 *)v34);
  v14 = **a1;
  v15 = *(_QWORD *)(v14 + 8);
  v36 = v15;
  v16 = PtiCurrent(v14);
  Win32HM_LockIntoThread<1>((__int64)v16, v15, (__int64 *)v33);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v21 = *(_QWORD *)(v9 + 8);
    if ( v21 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, v21);
      FindTimer(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v26[0] &= ~0x4000u;
      if ( (**(_DWORD **)v26[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v26[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v26[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v26[0] + 84LL) )
      {
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(BugCheckParameter3, *(_QWORD *)(*(_QWORD *)v26[0] + 40LL));
        v22 = v29;
        v15 = *(_QWORD *)(*(_QWORD *)v26[0] + 8LL);
        if ( !v29 )
          v22 = *(_QWORD *)BugCheckParameter3[0];
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v32, v22);
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v27, v15);
        if ( *(_DWORD *)(*(_QWORD *)v26[0] + 80LL) != -1 )
          xxxMNInvertItem(
            (unsigned int)v26,
            (unsigned int)BugCheckParameter3,
            *(_DWORD *)(*(_QWORD *)v26[0] + 80LL),
            v15,
            0);
        *(_DWORD *)(*(_QWORD *)v26[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v26[0] + 84LL);
        xxxMNInvertItem(
          (unsigned int)v26,
          (unsigned int)BugCheckParameter3,
          *(_DWORD *)(*(_QWORD *)v26[0] + 84LL),
          v15,
          1);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v27);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v32);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)BugCheckParameter3);
        LODWORD(v15) = v36;
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v23 = **a1;
      v27[1] = *(_QWORD *)(v23 + 16);
      v27[0] = *(_QWORD *)(v23 + 64) + 56LL;
      HMAssignmentLock(v27, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v26);
    }
  }
  v17 = **a1;
  if ( *(int *)(v17 + 80) >= 0 )
  {
    if ( *(_QWORD *)(v17 + 24) )
    {
      if ( (*(_DWORD *)**a1 & 1) != 0 )
        xxxMNCloseHierarchy(**a1, a2);
      else
        MNSetTimerToCloseHierarchy(a1);
    }
    goto LABEL_15;
  }
  v18 = *(_DWORD *)(v17 + 80);
  if ( v18 == -3 || v18 == -4 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
LABEL_15:
    xxxMNInvertItem((_DWORD)a1, (unsigned int)v30, *(_DWORD *)(**a1 + 80), v15, 0);
  }
  *(_DWORD *)(**a1 + 80) = v4;
  if ( (_DWORD)v4 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v19 = (*(_BYTE *)**a1 >> 1) & 2 | 0xFFFFFFFD;
    else
      v19 = -4;
    xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v19, 0, 0);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v33);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v34);
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_5;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, 0LL);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v20 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v24 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v24 || (v20 = *(_QWORD *)(v24 + 8)) == 0 )
      {
LABEL_50:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v26);
        goto LABEL_5;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v26, v20);
    if ( *(_QWORD *)v26[0] && *(_QWORD *)(*(_QWORD *)v26[0] + 8LL) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
        BugCheckParameter3,
        *(_QWORD *)(*(_QWORD *)v26[0] + 8LL));
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v27, *(_QWORD *)(*(_QWORD *)v26[0] + 16LL));
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v32, *(_QWORD *)(*(_QWORD *)v26[0] + 40LL));
      v25 = *(_DWORD *)(*(_QWORD *)v26[0] + 80LL);
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v35, *(_QWORD *)(*(_QWORD *)v26[0] + 40LL));
      xxxSendMenuSelect(
        *(struct tagWND **)(*(_QWORD *)v26[0] + 8LL),
        *(struct tagWND **)(*(_QWORD *)v26[0] + 16LL),
        v35,
        v25,
        a2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v35);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v32);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v27);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
    goto LABEL_50;
  }
  *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
    xxxMNDoScroll(a1, (unsigned int)v4, 1LL);
  v6 = xxxMNInvertItem((_DWORD)a1, (unsigned int)v30, v4, v15, 1);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v33);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v34);
LABEL_5:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v30);
  return v6;
}
