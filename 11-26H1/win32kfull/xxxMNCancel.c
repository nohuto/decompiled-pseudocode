/*
 * XREFs of xxxMNCancel @ 0x14011F744
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMNButtonUp @ 0x1402375A8 (xxxMNButtonUp.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 *     xxxEndMenu @ 0x140290424 (xxxEndMenu.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxPlayEventSound @ 0x140176A50 (xxxPlayEventSound.c)
 *     xxxMNReleaseCapture @ 0x140178014 (xxxMNReleaseCapture.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  struct tagWND *v9; // rdi
  int v10; // ebx
  unsigned int v11; // eax
  int v13; // [rsp+34h] [rbp-4Ch]
  _QWORD v14[2]; // [rsp+38h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-38h] BYREF
  ULONG_PTR v16[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, *(_QWORD *)a1);
  v13 = **(_DWORD **)v14[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v7 = *(_QWORD *)v14[0];
  **(_DWORD **)v14[0] |= 0x8000u;
  if ( PtiCurrent(v7) == *(struct tagTHREADINFO **)(a1 + 32) && (**(_DWORD **)v14[0] & 0x80000) == 0 )
  {
    **(_DWORD **)v14[0] |= 0x80000u;
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v16, *(_QWORD *)(*(_QWORD *)v14[0] + 16LL));
    xxxMNCloseHierarchy(*(_QWORD *)v14[0], a1);
    xxxMNSelectItem(v14, a1, 0xFFFFFFFFLL);
    v8 = v14[0];
    *(_DWORD *)(a1 + 8) &= ~1u;
    v9 = *(struct tagWND **)(*(_QWORD *)v8 + 8LL);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v9);
    xxxMNReleaseCapture(a1);
    if ( (v13 & 8) != 0 )
    {
      xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v14[0] + 16LL), -4, 0, 0);
      if ( *(_QWORD *)(*(_QWORD *)v14[0] + 16LL) )
        xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)v14[0] + 16LL));
    }
    if ( v9 )
    {
      v10 = -1;
      v11 = (unsigned int)SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v17, -1);
      xxxSendMenuSelect((_DWORD)v9, 0, v11, -1, a1);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v17);
      if ( (v13 & 4) == 0 )
        v10 = (v13 & 1) != 0 ? 0xFFFFFFFD : 0;
      xxxWindowEvent(5u, v9, v10, 0, 0);
      if ( (v13 & 0x800) == 0 )
        xxxSendMessage(v9, 0x212u);
      if ( a2 )
      {
        xxxPlayEventSound(6u);
        *(_DWORD *)(a1 + 24) = v5;
        if ( (v13 & 0x100) == 0 )
          PostTransformableMessage(v9, a2, v5, a4, 1);
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
    }
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v16);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v14);
}
