/*
 * XREFs of xxxMNMouseMove @ 0x1C0138358
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     TrackMouseEvent @ 0x1C00C7FCC (TrackMouseEvent.c)
 *     xxxMNButtonDown @ 0x1C0133690 (xxxMNButtonDown.c)
 *     ?xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z @ 0x1C013459C (-xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0215774 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C02175B8 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BD30 (xxxMNUpdateDraggingInfo.c)
 */

void __fastcall xxxMNMouseMove(struct tagPOPUPMENU *a1, struct tagMENUSTATE *a2, int a3)
{
  __int64 v5; // rbx
  BOOL v6; // eax
  __int64 *v7; // r8
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagPOPUPMENU *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  char v16[4]; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+3Ch] [rbp-14h]
  unsigned __int64 v18; // [rsp+40h] [rbp-10h]
  unsigned int v19; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 == *((struct tagPOPUPMENU **)a1 + 8) && __PAIR64__(SHIWORD(a3), (__int16)a3) != *(_QWORD *)((char *)a2 + 12) )
  {
    *((_DWORD *)a2 + 3) = (__int16)a3;
    *((_DWORD *)a2 + 4) = SHIWORD(a3);
    v5 = xxxMNFindWindowFromPoint((int *)a1, &v19, a3);
    v6 = IsMFMWFPWindow(v5);
    v7 = (__int64 *)gptiCurrent;
    if ( v6 )
    {
      v14 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v14;
      v15 = v5;
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
    }
    if ( (*((_DWORD *)a2 + 2) & 0x8000) != 0 )
    {
      xxxMNUpdateDraggingInfo(a2, v5, v19);
      v7 = (__int64 *)gptiCurrent;
    }
    if ( *((_DWORD *)a2 + 5) != 1 )
    {
LABEL_9:
      if ( v5 == 4294967291LL )
      {
        if ( (*((_DWORD *)a2 + 2) & 8) == 0 )
          goto LABEL_31;
        xxxMNSwitchToAlternateMenu(a1);
      }
      else if ( v5 != 0xFFFFFFFFLL )
      {
        if ( v5 )
        {
          v8 = safe_cast_fnid_to_PMENUWND(v5);
          if ( !(unsigned int)IsWindowBeingDestroyed(v5) && v8 )
          {
            v11 = *(struct tagPOPUPMENU **)(v8 + 376);
            if ( (*((_DWORD *)a2 + 2) & 0x8100) == 0x100 && (*(_DWORD *)v11 & 0x100000) == 0 )
            {
              v18 = *(_QWORD *)v5;
              v17 = 2;
              TrackMouseEvent((__int64)v16);
              *(_DWORD *)v11 |= 0x100000u;
              xxxSendMessage((struct tagWND *)v5, 0x20u, *(_QWORD *)v5, 2LL);
            }
            if ( (xxxSendMessage((struct tagWND *)v5, 0x1E5u, v19, 0LL) & 0x13) == 0x10
              && !xxxSendMessage((struct tagWND *)v5, 0x1F0u, 0LL, 0LL)
              && *(struct tagPOPUPMENU **)(v8 + 376) == v11 )
            {
              xxxMNHideNextHierarchy(v11);
            }
          }
LABEL_16:
          ThreadUnlock1(v10, v9);
          return;
        }
LABEL_31:
        v12 = *((_QWORD *)a1 + 7);
        if ( !v12 )
        {
          xxxMNSelectItem(a1);
          return;
        }
        v13 = *v7;
        v14 = *(_QWORD *)(*v7 + 368);
        *(_QWORD *)(v13 + 368) = &v14;
        v15 = v12;
        ++*(_DWORD *)(v12 + 8);
        xxxSendMessage((struct tagWND *)v12, 0x1E5u, 0xFFFFFFFFuLL, 0LL);
        MNSetTimerToAutoDismiss(a2, (struct tagWND *)v12);
        goto LABEL_16;
      }
      xxxMNButtonDown(a1, (__int64)a2, v19, 0);
      return;
    }
    if ( v5 && (v5 != 0xFFFFFFFFLL || (*(_BYTE *)(*((_QWORD *)a1 + 1) + 55LL) & 0x20) == 0) )
    {
      *((_DWORD *)a2 + 5) = -1;
      goto LABEL_9;
    }
  }
}
