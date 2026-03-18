/*
 * XREFs of xxxEndMenuLoop @ 0x14028CF70
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x140269B80 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxEndMenu @ 0x140290424 (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  BOOL v5; // edi
  struct tagWND *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, a2);
  v3 = *(_QWORD *)v11[0];
  if ( (**(_DWORD **)v11[0] & 8) != 0 )
  {
    v3 = *(_QWORD *)v11[0];
    if ( (**(_DWORD **)v11[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0, 0, 0LL);
    v4 = (_DWORD *)(a1 + 8);
  }
  else
  {
    v4 = (_DWORD *)(a1 + 8);
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
        BugCheckParameter3,
        *(_QWORD *)(*(_QWORD *)v11[0] + 8LL));
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v11[0] + 8LL), 0);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
    if ( (*v4 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*v4 & 0x100) != 0 )
  {
    v5 = 0;
    if ( *(_QWORD *)(*(_QWORD *)v11[0] + 8LL) )
    {
      v6 = *(struct tagWND **)(*(_QWORD *)v11[0] + 8LL);
      v7 = *((_QWORD *)v6 + 2);
      v8 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v11[0], v3) + 18928);
      v9 = *(_QWORD *)(v7 + 464);
      if ( v9 == v8 )
        v5 = *(_QWORD *)(v9 + 128) == (_QWORD)v6;
      if ( v5 != ((*(unsigned __int8 *)(*((_QWORD *)v6 + 5) + 16LL) >> 6) & 1) )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v6);
        xxxDWP_DoNCActivate(v6, !v5 + 1, 1LL);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v11);
}
