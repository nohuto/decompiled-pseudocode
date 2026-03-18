/*
 * XREFs of xxxMNLoop @ 0x1C0141414
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0006E74 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006EE0 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C000C438 (SlowAppThreadInShellFrame.c)
 *     xxxGetSysMenuHandle @ 0x1C006F540 (xxxGetSysMenuHandle.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     _GetMenuState @ 0x1C00BB5FC (_GetMenuState.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C00DF5E4 (xxxWaitMessageEx.c)
 *     ClientWaitMessageExMPH @ 0x1C00E175C (ClientWaitMessageExMPH.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 *     ClientGetMessageMPH @ 0x1C0104E3C (ClientGetMessageMPH.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     _IsChild @ 0x1C012ED7C (_IsChild.c)
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxMNReleaseCapture @ 0x1C01404F0 (xxxMNReleaseCapture.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxEndMenuLoop @ 0x1C0142C30 (xxxEndMenuLoop.c)
 *     MNFlushDestroyedPopups @ 0x1C0142EA0 (MNFlushDestroyedPopups.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 *     xxxCallMsgFilter @ 0x1C01DDE44 (xxxCallMsgFilter.c)
 */

__int64 __fastcall xxxMNLoop(int *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r12d
  int v11; // eax
  int MessageMPH; // eax
  BOOL v13; // r14d
  int v15; // r8d
  int v16; // eax
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 *v24; // r9
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 SysMenuHandle; // rax
  unsigned int v39; // r10d
  int v40; // eax
  __int64 v41; // rax
  struct tagTHREADINFO *v42; // rax
  __int64 v43; // [rsp+30h] [rbp-50h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h]
  _OWORD v45[3]; // [rsp+48h] [rbp-38h] BYREF
  int v46; // [rsp+B8h] [rbp+38h] BYREF

  memset(v45, 0, sizeof(v45));
  *(_DWORD *)(a2 + 8) |= 4u;
  *(_DWORD *)(a2 + 24) = 0;
  v10 = 1;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 676LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 680LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    if ( (GetKeyState((unsigned int)((*(_BYTE *)a1 & 0x40) != 0) + 1, 1LL, v8, v9) & 0x8000u) != 0LL )
    {
      if ( (*a1 & 8) != 0 || xxxMNStartMenu((unsigned __int8 *)a1, a2, 0xFFFFFFFFLL, v28) )
      {
        if ( (*a1 & 0x40) != 0 )
        {
          *(_QWORD *)&v45[1] = 2LL;
          v32 = a4 != 0 ? 518 : 516;
        }
        else
        {
          *(_QWORD *)&v45[1] = 1LL;
          v32 = a4 != 0 ? 515 : 513;
        }
        DWORD2(v45[0]) = v32;
        v33 = (_QWORD *)*((_QWORD *)a1 + 2);
        *((_QWORD *)&v45[1] + 1) = a3;
        if ( v33 )
          *(_QWORD *)&v45[0] = *v33;
        else
          *(_QWORD *)&v45[0] = 0LL;
        xxxHandleMenuMessages(v45, a2, a1);
        goto LABEL_2;
      }
    }
    else if ( (*a1 & 0x800) == 0 )
    {
      v29 = *((_QWORD *)a1 + 1);
      v43 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v43;
      v44 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 1), 0x212u, (*(_BYTE *)a1 & 0xC) == 8, 0LL, 1);
LABEL_51:
      ThreadUnlock1(v31, v30);
    }
LABEL_19:
    *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
    xxxEndMenuLoop(a2, a1);
    xxxMNReleaseCapture(a2);
    xxxInternalGetMessage((__int64)v45, 0LL, 0x200u, 0x200u, 2u, 0);
    return *(unsigned int *)(a2 + 24);
  }
LABEL_2:
  v11 = *(_DWORD *)(a2 + 8);
  if ( (v11 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v11 & 4) == 0 )
        goto LABEL_19;
      if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
        MessageMPH = ClientGetMessageMPH(v45, 0LL, 0, 0, 2, 0);
      else
        MessageMPH = xxxRealInternalGetMessage((__int64)v45, 0LL, 0, 0, 2u, 0);
      if ( !MessageMPH )
        goto LABEL_7;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_19;
      v15 = *a1;
      if ( (*a1 & 0x8000) != 0 )
        goto LABEL_19;
      if ( (v15 & 8) == 0 )
      {
        v35 = *((_QWORD *)a1 + 1);
        v36 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        if ( v36 != v35 && (!v36 || !(unsigned int)IsChild(v36, v35)) )
          goto LABEL_19;
      }
      if ( (v15 & 1) != 0 )
      {
        v16 = DWORD2(v45[0]);
        if ( DWORD2(v45[0]) != 515 )
          goto LABEL_25;
        if ( (unsigned int)FindNCHit(*((_QWORD *)a1 + 1), SDWORD2(v45[1])) == 2 )
        {
          xxxInternalGetMessage((__int64)v45, 0LL, DWORD2(v45[0]), DWORD2(v45[0]), 1u, 0);
          if ( _bittest(a1, 0xFu) || (*(_DWORD *)(a2 + 8) & 4) == 0 )
            goto LABEL_19;
          v37 = *((_QWORD *)a1 + 1);
          v43 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v43;
          v44 = v37;
          ++*(_DWORD *)(v37 + 8);
          SysMenuHandle = xxxGetSysMenuHandle(v37);
          if ( (GetMenuState(SysMenuHandle, 0xF120u) & 3) == 0 )
            PostMessage(v37, 274LL, v39, 0LL);
          goto LABEL_51;
        }
      }
      v16 = DWORD2(v45[0]);
LABEL_25:
      if ( v16 == 513 || v16 == 516 || v16 == 161 || v16 == 164 )
      {
        v17 = 1;
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 440LL) |= 0x200000u;
        v17 = 0;
        if ( !(unsigned int)xxxInternalGetMessage((__int64)v45, 0LL, DWORD2(v45[0]), DWORD2(v45[0]), 1u, 0) )
        {
          v40 = *(_DWORD *)(gptiCurrent + 440LL);
          if ( (v40 & 0x200000) != 0 )
          {
            *(_DWORD *)(gptiCurrent + 440LL) = v40 & 0xFFDFFFFF;
LABEL_7:
            if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*a1 & 0x8000) != 0 )
              goto LABEL_19;
            if ( (*a1 & 0x20000) != 0 )
            {
              MNFlushDestroyedPopups(a1);
              *a1 &= ~0x20000u;
            }
            if ( v10 )
            {
              v23 = *((_QWORD *)a1 + 1);
              if ( v23 )
              {
                v43 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v43;
                v44 = v23;
                ++*(_DWORD *)(v23 + 8);
                v24 = (__int64 *)*((_QWORD *)a1 + 7);
                if ( v24 )
                  v25 = *v24;
                else
                  v25 = 0LL;
                xxxSendMessage(*((struct tagWND **)a1 + 1), 0x121u, 2uLL, v25);
                ThreadUnlock1(v27, v26);
              }
              v10 = 0;
            }
            else
            {
              v13 = *(_QWORD *)(a2 + 96) != 0LL;
              if ( gfShellFrameHangResilient || (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
              {
                v46 = 0;
                if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
                  ClientWaitMessageExMPH(15615LL, v13);
                else
                  xxxSleepThread2(0x3CFFu, v13, 1, 0, (enum SLEEP_STATUS *)&v46);
                if ( gfShellFrameHangResilient )
                {
                  if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0
                    && *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) > 1u )
                  {
                    v41 = *(_QWORD *)(gptiCurrent + 416LL);
                    if ( !*(_QWORD *)(v41 + 40)
                      && !*(_QWORD *)(v41 + 48)
                      && !IsAdaptiveQueueDetachExempted(gptiCurrent)
                      && v46 )
                    {
                      v42 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                      if ( v42 )
                        TryDetachShellFrame(gptiCurrent, v42, v46 == 2, 0LL);
                    }
                  }
                }
              }
              else
              {
                xxxWaitMessageEx(0x3CFFu, v13, 0LL);
              }
            }
            goto LABEL_17;
          }
        }
        *(_DWORD *)(gptiCurrent + 440LL) &= ~0x200000u;
      }
      if ( (unsigned int)xxxCallMsgFilter(v45, 2LL) )
      {
        if ( v17 )
          xxxInternalGetMessage((__int64)v45, 0LL, DWORD2(v45[0]), DWORD2(v45[0]), 1u, 0);
LABEL_39:
        v10 = 1;
        goto LABEL_17;
      }
      if ( !(unsigned int)xxxHandleMenuMessages(v45, a2, a1) )
      {
        xxxTranslateMessage((__int64)v45, 0LL, v18, v19);
        xxxDispatchMessage(v45, v20, v21, v22);
      }
      if ( (((*(_DWORD *)(a2 + 8) & 4) != 0) & !_bittest(a1, 0xFu)) == 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x40) != 0 )
      {
        goto LABEL_19;
      }
      if ( DWORD2(v45[0]) != 275 )
      {
        if ( DWORD2(v45[0]) != 280 )
        {
          if ( DWORD2(v45[0]) == 15 )
            goto LABEL_17;
          goto LABEL_39;
        }
        goto LABEL_7;
      }
LABEL_17:
      v11 = *(_DWORD *)(a2 + 8);
    }
  }
  xxxMNReleaseCapture(a2);
  v34 = *(_DWORD *)(a2 + 8);
  if ( (v34 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v34 & 0xFDFFFFFF;
  }
  return 0LL;
}
