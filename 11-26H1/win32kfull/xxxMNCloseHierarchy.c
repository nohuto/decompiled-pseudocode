/*
 * XREFs of xxxMNCloseHierarchy @ 0x140248D60
 * Callers:
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x140290424 (xxxEndMenu.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402D8F04 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rbx
  struct tagTHREADINFO *v4; // rax
  struct tagMENUWND *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct tagWND *v8; // rsi
  int v9; // ebx
  _QWORD v11[2]; // [rsp+38h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp+7h] BYREF
  ULONG_PTR v13[2]; // [rsp+58h] [rbp+17h] BYREF
  ULONG_PTR v14[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 *v15[4]; // [rsp+78h] [rbp+37h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, a1);
  MNAnimate((__int64 *)a2, 0LL);
  if ( (**(_DWORD **)v11[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v11[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v11[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v11[0] &= ~0x4000u;
    }
    v3 = *(struct tagWND **)(*(_QWORD *)v11[0] + 24LL);
    if ( v3 )
    {
      v4 = PtiCurrent(*(_QWORD *)v11[0]);
      Win32HM_LockIntoThread<0>((__int64)v4, (__int64)v3, BugCheckParameter3);
      xxxSendMessage(v3, 0x1E4u);
      if ( (*(_DWORD *)(a2 + 8) & 0x104) == 0x104 && (**(_DWORD **)v11[0] & 1) == 0 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v13, *(_QWORD *)(*(_QWORD *)v11[0] + 16LL));
        xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v11[0] + 16LL), 0, 0, 1, 0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v13);
      }
      xxxWindowEvent(7u, v3, -4, 0, 0);
      if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v3) )
        {
          v5 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v3);
          if ( v5 )
            xxxMNDestroyHandler(v5);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v11[0] + 24LL);
      **(_DWORD **)v11[0] &= ~0x20u;
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    }
    v6 = *(_QWORD *)v11[0];
    if ( (**(_DWORD **)v11[0] & 1) != 0 )
    {
      HMAssignmentUnlock(v6 + 56);
    }
    else
    {
      BugCheckParameter3[1] = *(_QWORD *)(v6 + 16);
      BugCheckParameter3[0] = *(_QWORD *)(*(_QWORD *)v11[0] + 64LL) + 56LL;
      HMAssignmentLock(BugCheckParameter3, 0LL);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v11[0] + 80LL) != -1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v11[0] + 64LL);
      v8 = *(struct tagWND **)(v7 + 8);
      if ( v8 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v14, *(_QWORD *)(v7 + 8));
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
          BugCheckParameter3,
          *(_QWORD *)(*(_QWORD *)v11[0] + 16LL));
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
          v13,
          *(_QWORD *)(*(_QWORD *)v11[0] + 40LL));
        v9 = *(_DWORD *)(*(_QWORD *)v11[0] + 80LL);
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15, *(_QWORD *)(*(_QWORD *)v11[0] + 40LL));
        xxxSendMenuSelect(v8, *(struct tagWND **)(*(_QWORD *)v11[0] + 16LL), v15, v9, a2);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v15);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v13);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v14);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v11);
}
