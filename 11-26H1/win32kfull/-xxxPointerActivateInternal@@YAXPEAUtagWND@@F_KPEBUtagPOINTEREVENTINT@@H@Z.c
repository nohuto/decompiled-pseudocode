/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C
 * Callers:
 *     EditionPointerActivate @ 0x140137730 (EditionPointerActivate.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     GetThreadpGlobalPopupMenu @ 0x14000F544 (GetThreadpGlobalPopupMenu.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140038250 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14008C0D8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14008FCC0 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendPointerMessageWorker @ 0x140137038 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1401379D8 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     IsMessageOnlyWindow @ 0x14019D910 (IsMessageOnlyWindow.c)
 *     IsModalMenuStarted @ 0x1402AA3F8 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1402D9808 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(struct tagWND *a1, __int16 a2, __int64 a3, struct tagPOINT *a4)
{
  __int16 v6; // bx
  char v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  const struct tagWND *v11; // rcx
  __int64 TopLevelWindow; // rax
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 ThreadpGlobalPopupMenu; // rax
  const struct tagWND *v21; // r9
  unsigned int v22; // ebx
  _QWORD v23[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v25[2]; // [rsp+60h] [rbp-10h] BYREF
  struct tagPOINT v27; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a2;
  if ( a4[22].x )
  {
    v8 = 1;
    goto LABEL_3;
  }
  v8 = 0;
  if ( !(unsigned int)IsIndependentInputWindow(a1) )
  {
LABEL_3:
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v11, v10) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      v13 = (__int64 *)TopLevelWindow;
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v9 + 128) )
        {
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v25, TopLevelWindow);
          v14 = *(_QWORD *)(v9 + 112);
          if ( v14 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v14 + 16)) )
          {
            v27 = a4[5];
            ThreadpGlobalPopupMenu = GetThreadpGlobalPopupMenu(v19);
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, ThreadpGlobalPopupMenu);
            v21 = *(const struct tagWND **)(v9 + 112);
            if ( (*(_DWORD *)(*((_QWORD *)v21 + 5) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v23[0]
                && *(_QWORD *)(*(_QWORD *)v23[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23[0] + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(
                  *(const struct tagWND **)(*(_QWORD *)v23[0] + 16LL),
                  (int *)&v27,
                  0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v27, &v27, 0LL, v21);
            }
            v22 = LOWORD(v27.x) | (LOWORD(v27.y) << 16);
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
              BugCheckParameter3,
              *(_QWORD *)(v9 + 112));
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 112), v22);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v23);
            v6 = a2;
          }
          if ( !v8 )
          {
            v15 = xxxSendPointerMessageWorker((__int64)a1, 587LL, a3, *v13, 0LL, 177);
            if ( v15 == 1
              || v15 != 3
              && xxxQueryLegacyActivation(a1, (struct tagWND *)v13, v6, (const struct tagPOINTEREVENTINT *)a4) == 1 )
            {
              xxxActivateWindowWithOptions(v13, 3LL, 49LL, 1LL, 0);
            }
          }
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v25);
        }
      }
    }
    return;
  }
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v17 = (__int64)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner && !(unsigned int)IsMessageOnlyWindow(CompositionInputWindowUIOwner) )
  {
    v18 = GetTopLevelWindow(v17);
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(v18 + 16),
      *(struct tagQ **)(*(_QWORD *)(v18 + 16) + 464LL),
      6u,
      0LL,
      0,
      0LL,
      *(_QWORD *)v18,
      0LL);
  }
}
