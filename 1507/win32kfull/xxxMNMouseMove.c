/*
 * XREFs of xxxMNMouseMove @ 0x1C010BB60
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     TrackMouseEvent @ 0x1C00797F8 (TrackMouseEvent.c)
 *     xxxMNButtonDown @ 0x1C01065E0 (xxxMNButtonDown.c)
 *     ?xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z @ 0x1C01074EC (-xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C010BDAC (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C010BDD0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02158C4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0217754 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BB60 (xxxMNUpdateDraggingInfo.c)
 */

void __fastcall xxxMNMouseMove(struct tagPOPUPMENU *a1, struct tagMENUSTATE *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 *v10; // r8
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  struct tagPOPUPMENU *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h]
  char v20[4]; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+3Ch] [rbp-14h]
  unsigned __int64 v22; // [rsp+40h] [rbp-10h]
  unsigned int v23; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 == *((struct tagPOPUPMENU **)a1 + 8) && __PAIR64__(SWORD1(a3), (__int16)a3) != *(_QWORD *)((char *)a2 + 12) )
  {
    *((_DWORD *)a2 + 3) = (__int16)a3;
    *((_DWORD *)a2 + 4) = SWORD1(a3);
    v5 = xxxMNFindWindowFromPoint(a1, &v23, a3);
    v9 = IsMFMWFPWindow(v5, v6, v7, v8);
    v10 = (__int64 *)gptiCurrent;
    if ( v9 )
    {
      v18 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v18;
      v19 = v5;
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
    }
    if ( (*((_DWORD *)a2 + 2) & 0x8000) != 0 )
    {
      xxxMNUpdateDraggingInfo(a2, v5, v23);
      v10 = (__int64 *)gptiCurrent;
    }
    if ( *((_DWORD *)a2 + 5) == 1 )
    {
      if ( !v5 || v5 == 0xFFFFFFFFLL && (*(_BYTE *)(*((_QWORD *)a1 + 1) + 55LL) & 0x20) != 0 )
        return;
      *((_DWORD *)a2 + 5) = -1;
    }
    if ( v5 == 4294967291LL )
    {
      if ( (*((_DWORD *)a2 + 2) & 8) != 0 )
      {
        xxxMNSwitchToAlternateMenu(a1);
LABEL_17:
        xxxMNButtonDown(a1, (__int64)a2, v23, 0);
        return;
      }
    }
    else
    {
      if ( v5 == 0xFFFFFFFFLL )
        goto LABEL_17;
      if ( v5 )
      {
        v11 = safe_cast_fnid_to_PMENUWND(v5);
        if ( !(unsigned int)IsWindowBeingDestroyed(v5) && v11 )
        {
          v14 = *((_DWORD *)a2 + 2);
          v15 = *(struct tagPOPUPMENU **)(v11 + 376);
          if ( (v14 & 0x100) != 0 && (v14 & 0x8000) == 0 && (*(_DWORD *)v15 & 0x100000) == 0 )
          {
            v22 = *(_QWORD *)v5;
            v21 = 2;
            TrackMouseEvent((__int64)v20);
            *(_DWORD *)v15 |= 0x100000u;
            xxxSendMessage((struct tagWND *)v5, 0x20u, *(_QWORD *)v5, 2LL);
          }
          if ( (xxxSendMessage((struct tagWND *)v5, 0x1E5u, v23, 0LL) & 0x13) == 0x10
            && !xxxSendMessage((struct tagWND *)v5, 0x1F0u, 0LL, 0LL)
            && *(struct tagPOPUPMENU **)(v11 + 376) == v15 )
          {
            xxxMNHideNextHierarchy(v15);
          }
        }
        goto LABEL_31;
      }
    }
    v16 = *((_QWORD *)a1 + 7);
    if ( v16 )
    {
      v17 = *v10;
      v18 = *(_QWORD *)(*v10 + 376);
      *(_QWORD *)(v17 + 376) = &v18;
      v19 = v16;
      ++*(_DWORD *)(v16 + 8);
      xxxSendMessage((struct tagWND *)v16, 0x1E5u, 0xFFFFFFFFuLL, 0LL);
      MNSetTimerToAutoDismiss(a2, (struct tagWND *)v16);
LABEL_31:
      ThreadUnlock1(v13, v12);
      return;
    }
    xxxMNSelectItem(a1);
  }
}
