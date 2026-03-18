/*
 * XREFs of xxxMNMouseMove @ 0x1C0142A74
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     TrackMouseEvent @ 0x1C010A7AC (TrackMouseEvent.c)
 *     xxxMNButtonDown @ 0x1C013ED74 (xxxMNButtonDown.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     ?xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z @ 0x1C01412E8 (-xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C020E5DC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0210154 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0233768 (xxxMNUpdateDraggingInfo.c)
 */

void __fastcall xxxMNMouseMove(__int64 a1, __int64 a2, int a3)
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

  if ( a1 == *(_QWORD *)(a1 + 64) && __PAIR64__(SHIWORD(a3), (__int16)a3) != *(_QWORD *)(a2 + 12) )
  {
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = SHIWORD(a3);
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
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    {
      xxxMNUpdateDraggingInfo(a2, v5, v19);
      v7 = (__int64 *)gptiCurrent;
    }
    if ( *(_DWORD *)(a2 + 20) == 1 )
    {
      if ( !v5 || v5 == 0xFFFFFFFFLL && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 55LL) & 0x20) != 0 )
        return;
      *(_DWORD *)(a2 + 20) = -1;
    }
    if ( v5 == 4294967291LL )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
        goto LABEL_30;
      xxxMNSwitchToAlternateMenu(a1, a2);
    }
    else if ( v5 != 0xFFFFFFFFLL )
    {
      if ( v5 )
      {
        v8 = safe_cast_fnid_to_PMENUWND(v5);
        if ( !(unsigned int)IsWindowBeingDestroyed(v5) && v8 )
        {
          v11 = *(struct tagPOPUPMENU **)(v8 + 360);
          if ( (*(_DWORD *)(a2 + 8) & 0x8100) == 0x100 && (*(_DWORD *)v11 & 0x100000) == 0 )
          {
            v18 = *(_QWORD *)v5;
            v17 = 2;
            TrackMouseEvent((__int64)v16);
            *(_DWORD *)v11 |= 0x100000u;
            xxxSendMessage((struct tagWND *)v5, 0x20u, *(_QWORD *)v5, 2LL);
          }
          if ( (xxxSendMessage((struct tagWND *)v5, 0x1E5u, v19, 0LL) & 0x13) == 0x10
            && !xxxSendMessage((struct tagWND *)v5, 0x1F0u, 0LL, 0LL)
            && *(struct tagPOPUPMENU **)(v8 + 360) == v11 )
          {
            xxxMNHideNextHierarchy(v11);
          }
        }
        goto LABEL_17;
      }
LABEL_30:
      v12 = *(_QWORD *)(a1 + 56);
      if ( !v12 )
      {
        xxxMNSelectItem((struct tagPOPUPMENU *)a1, a2, 0xFFFFFFFF);
        return;
      }
      v13 = *v7;
      v14 = *(_QWORD *)(*v7 + 368);
      *(_QWORD *)(v13 + 368) = &v14;
      v15 = v12;
      ++*(_DWORD *)(v12 + 8);
      xxxSendMessage((struct tagWND *)v12, 0x1E5u, 0xFFFFFFFFuLL, 0LL);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, (struct tagWND *)v12);
LABEL_17:
      ThreadUnlock1(v10, v9);
      return;
    }
    xxxMNButtonDown((struct tagPOPUPMENU *)a1, a2, v19, 0);
  }
}
