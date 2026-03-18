/*
 * XREFs of xxxMNMouseMove @ 0x14000F5A4
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     TrackMouseEvent @ 0x1401CFE54 (TrackMouseEvent.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x140235D08 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x14024D374 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402DA6FC (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402F9B58 (xxxMNUpdateDraggingInfo.c)
 */

__int64 __fastcall xxxMNMouseMove(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rdx
  int v6; // eax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rsi
  int v12; // eax
  struct tagWND *v14; // rbx
  int v15; // ebx
  _QWORD *v16; // rax
  __int64 v17[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v19[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+40h]

  v21 = a3;
  BugCheckParameter3[1] = 0LL;
  v4 = (_QWORD *)*a1;
  BugCheckParameter3[0] = -1LL;
  v20 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, *v4);
  if ( *(_QWORD *)v17[0] != *(_QWORD *)(*(_QWORD *)v17[0] + 64LL)
    || __PAIR64__(SHIWORD(v21), (__int16)a3) == *(_QWORD *)(a2 + 12) )
  {
    goto LABEL_20;
  }
  v6 = SHIWORD(v21);
  *(_DWORD *)(a2 + 12) = (__int16)a3;
  *(_DWORD *)(a2 + 16) = v6;
  v7 = (_QWORD *)xxxMNFindWindowFromPoint(v17, &v20, a3);
  if ( (unsigned int)IsMFMWFPWindow(v7) )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v8);
  v9 = v20;
  if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    xxxMNUpdateDraggingInfo(a2, v7, v20);
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    if ( !v7
      || v7 == (_QWORD *)0xFFFFFFFFLL
      && *(_QWORD *)(*(_QWORD *)v17[0] + 8LL)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL) + 40LL) + 31LL) & 0x20) != 0 )
    {
      goto LABEL_20;
    }
    *(_DWORD *)(a2 + 20) = -1;
  }
  if ( v7 == (_QWORD *)4294967291LL )
  {
    if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      goto LABEL_23;
    xxxMNSwitchToAlternateMenu(v17, a2);
  }
  else if ( v7 != (_QWORD *)0xFFFFFFFFLL )
  {
    if ( v7 )
    {
      v10 = safe_cast_fnid_to_PMENUWND((__int64)v7);
      if ( !(unsigned int)IsWindowBeingDestroyed(v7) && v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 != *(_QWORD *)v17[0] )
        {
          SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v17);
          if ( v11 )
          {
            v17[0] = *(_QWORD *)(v11 + 88);
            ++*(_DWORD *)(v17[0] + 8);
          }
          else
          {
            v17[0] = gSmartObjNullRef;
          }
        }
        v12 = *(_DWORD *)(a2 + 8);
        if ( (v12 & 0x100) != 0 && (v12 & 0x8000) == 0 && (**(_DWORD **)v17[0] & 0x100000) == 0 )
        {
          v19[1] = *v7;
          v19[0] = 0x200000000LL;
          v19[2] = 0LL;
          TrackMouseEvent(v19);
          **(_DWORD **)v17[0] |= 0x100000u;
          xxxSendMessage(v7, 32LL, *v7, 2LL);
        }
        if ( (xxxSendMessage(v7, 485LL, v9, 0LL) & 0x13) == 0x10
          && !xxxSendMessage(v7, 496LL, 0LL, 0LL)
          && *(_QWORD *)(v10 + 8) == *(_QWORD *)v17[0] )
        {
          goto LABEL_26;
        }
      }
      goto LABEL_20;
    }
LABEL_23:
    if ( *(_QWORD *)(*(_QWORD *)v17[0] + 56LL) )
    {
      v14 = *(struct tagWND **)(*(_QWORD *)v17[0] + 56LL);
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v19, (__int64)v14);
      xxxSendMessage(v14, 485LL, 0xFFFFFFFFLL, 0LL);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v14);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v19);
    }
    else
    {
      xxxMNSelectItem(v17, a2, 0xFFFFFFFFLL);
    }
    goto LABEL_20;
  }
  if ( *(_DWORD *)(*(_QWORD *)v17[0] + 80LL) == (_DWORD)v9 )
  {
LABEL_26:
    xxxMNHideNextHierarchy(v17);
    goto LABEL_20;
  }
  v15 = **(_DWORD **)v17[0] & 0x400;
  v16 = (_QWORD *)xxxMNSelectItem(v17, a2, (unsigned int)v9);
  if ( v16 && v16[2] && (*(_DWORD *)(*v16 + 4LL) & 3) == 0 && v15 )
    xxxMNOpenHierarchy(v17, a2);
LABEL_20:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v17);
  return Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>((ULONG_PTR)BugCheckParameter3);
}
