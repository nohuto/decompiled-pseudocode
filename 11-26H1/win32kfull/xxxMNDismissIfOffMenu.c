/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1402D9808
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     GetThreadpGlobalPopupMenu @ 0x14000F544 (GetThreadpGlobalPopupMenu.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsModalMenuStarted @ 0x1402AA3F8 (IsModalMenuStarted.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 ThreadpGlobalPopupMenu; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v11[2]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+50h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, 0LL);
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v4 + 20) >= 0
    && *(char *)(v4 + 19) >= 0
    && (unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16))
    && (ThreadpGlobalPopupMenu = GetThreadpGlobalPopupMenu(v5),
        SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v11, ThreadpGlobalPopupMenu),
        *v11[0])
    && *(_QWORD *)(*v11[0] + 8)
    && (v7 = xxxMNFindWindowFromPoint(v11, &v13, a2), v8 = *(_QWORD *)(a1 + 40), *(char *)(v8 + 20) >= 0)
    && *(char *)(v8 + 19) >= 0
    && !v7
    && (v9 = GetThreadpGlobalPopupMenu(*(_QWORD *)(a1 + 16)),
        SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v11, v9),
        *v11[0])
    && *(_QWORD *)(*v11[0] + 8) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(*v11[0] + 8));
    xxxSendMessage(*(struct tagWND **)(*v11[0] + 8), 0x1Fu);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v11);
    return 1LL;
  }
  else
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v11);
    return 0LL;
  }
}
