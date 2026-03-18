/*
 * XREFs of xxxMNLoop @ 0x1C0137990
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0001C50 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C0001CBC (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009E1C (SlowAppThreadInShellFrame.c)
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     ClientGetMessageMPH @ 0x1C00563CC (ClientGetMessageMPH.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C005B500 (xxxSleepThread2.c)
 *     xxxGetSysMenuHandle @ 0x1C0071180 (xxxGetSysMenuHandle.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     xxxTranslateMessage @ 0x1C0099414 (xxxTranslateMessage.c)
 *     _GetMenuState @ 0x1C00C663C (_GetMenuState.c)
 *     xxxWaitMessageEx @ 0x1C00CFAA4 (xxxWaitMessageEx.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     ClientWaitMessageExMPH @ 0x1C00D045C (ClientWaitMessageExMPH.c)
 *     FindNCHit @ 0x1C0102F28 (FindNCHit.c)
 *     _IsChild @ 0x1C01115EC (_IsChild.c)
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C01395FC (xxxMNReleaseCapture.c)
 *     xxxEndMenuLoop @ 0x1C013A060 (xxxEndMenuLoop.c)
 *     MNFlushDestroyedPopups @ 0x1C013A0E0 (MNFlushDestroyedPopups.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 *     xxxCallMsgFilter @ 0x1C01E75E4 (xxxCallMsgFilter.c)
 */

__int64 __fastcall xxxMNLoop(int *a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r12d
  int v9; // eax
  int MessageMPH; // eax
  unsigned int v11; // r14d
  int v13; // r8d
  int v14; // eax
  int v15; // esi
  __int64 v16; // rdx
  __int64 *v17; // r9
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 SysMenuHandle; // rax
  unsigned int v31; // r10d
  int v32; // eax
  __int64 v33; // rax
  struct tagTHREADINFO *v34; // rax
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  __int64 v36; // [rsp+38h] [rbp-48h]
  _OWORD v37[3]; // [rsp+48h] [rbp-38h] BYREF
  int v38; // [rsp+B8h] [rbp+38h] BYREF

  memset(v37, 0, sizeof(v37));
  *(_DWORD *)(a2 + 8) |= 4u;
  *(_DWORD *)(a2 + 24) = 0;
  v8 = 1;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 676LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 680LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    if ( (GetKeyState((unsigned int)((*(_BYTE *)a1 & 0x40) != 0) + 1) & 0x8000u) != 0LL )
    {
      if ( (*a1 & 8) != 0 || xxxMNStartMenu((unsigned __int8 *)a1, a2, -1) )
      {
        if ( (*a1 & 0x40) != 0 )
        {
          *(_QWORD *)&v37[1] = 2LL;
          v24 = a4 != 0 ? 518 : 516;
        }
        else
        {
          *(_QWORD *)&v37[1] = 1LL;
          v24 = a4 != 0 ? 515 : 513;
        }
        DWORD2(v37[0]) = v24;
        v25 = (_QWORD *)*((_QWORD *)a1 + 2);
        *((_QWORD *)&v37[1] + 1) = a3;
        if ( v25 )
          *(_QWORD *)&v37[0] = *v25;
        else
          *(_QWORD *)&v37[0] = 0LL;
        xxxHandleMenuMessages(v37, a2, a1);
        goto LABEL_2;
      }
    }
    else if ( (*a1 & 0x800) == 0 )
    {
      v21 = *((_QWORD *)a1 + 1);
      v35 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v35;
      v36 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 1), 0x212u, (*(_BYTE *)a1 & 0xC) == 8, 0LL, 1);
LABEL_51:
      ThreadUnlock1(v23, v22);
    }
LABEL_19:
    *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
    xxxEndMenuLoop(a2, a1);
    xxxMNReleaseCapture(a2);
    xxxInternalGetMessage(v37, 0LL, 0x200u, 0x200u, 2u, 0);
    return *(unsigned int *)(a2 + 24);
  }
LABEL_2:
  v9 = *(_DWORD *)(a2 + 8);
  if ( (v9 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v9 & 4) == 0 )
        goto LABEL_19;
      if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
        MessageMPH = ClientGetMessageMPH(v37, 0LL, 0, 0, 2, 0);
      else
        MessageMPH = xxxRealInternalGetMessage((__int64)v37, 0LL, 0, 0, 2u, 0);
      if ( !MessageMPH )
        goto LABEL_7;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_19;
      v13 = *a1;
      if ( (*a1 & 0x8000) != 0 )
        goto LABEL_19;
      if ( (v13 & 8) == 0 )
      {
        v27 = *((_QWORD *)a1 + 1);
        v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
        if ( v28 != v27 && (!v28 || !(unsigned int)IsChild(v28, v27)) )
          goto LABEL_19;
      }
      if ( (v13 & 1) != 0 )
      {
        v14 = DWORD2(v37[0]);
        if ( DWORD2(v37[0]) != 515 )
          goto LABEL_25;
        if ( (unsigned int)FindNCHit(*((_QWORD *)a1 + 1), SDWORD2(v37[1])) == 2 )
        {
          xxxInternalGetMessage(v37, 0LL, DWORD2(v37[0]), DWORD2(v37[0]), 1u, 0);
          if ( _bittest(a1, 0xFu) || (*(_DWORD *)(a2 + 8) & 4) == 0 )
            goto LABEL_19;
          v29 = *((_QWORD *)a1 + 1);
          v35 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v35;
          v36 = v29;
          ++*(_DWORD *)(v29 + 8);
          SysMenuHandle = xxxGetSysMenuHandle(v29);
          if ( (GetMenuState(SysMenuHandle, 0xF120u) & 3) == 0 )
            PostMessage(v29, 274LL, v31, 0LL);
          goto LABEL_51;
        }
      }
      v14 = DWORD2(v37[0]);
LABEL_25:
      if ( v14 == 513 || v14 == 516 || v14 == 161 || v14 == 164 )
      {
        v15 = 1;
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 440LL) |= 0x200000u;
        v15 = 0;
        if ( !(unsigned int)xxxInternalGetMessage(v37, 0LL, DWORD2(v37[0]), DWORD2(v37[0]), 1u, 0) )
        {
          v32 = *(_DWORD *)(gptiCurrent + 440LL);
          if ( (v32 & 0x200000) != 0 )
          {
            *(_DWORD *)(gptiCurrent + 440LL) = v32 & 0xFFDFFFFF;
LABEL_7:
            if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*a1 & 0x8000) != 0 )
              goto LABEL_19;
            if ( (*a1 & 0x20000) != 0 )
            {
              MNFlushDestroyedPopups(a1);
              *a1 &= ~0x20000u;
            }
            if ( v8 )
            {
              v16 = *((_QWORD *)a1 + 1);
              if ( v16 )
              {
                v35 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v35;
                v36 = v16;
                ++*(_DWORD *)(v16 + 8);
                v17 = (__int64 *)*((_QWORD *)a1 + 7);
                if ( v17 )
                  v18 = *v17;
                else
                  v18 = 0LL;
                xxxSendMessage(*((struct tagWND **)a1 + 1), 0x121u, 2uLL, v18);
                ThreadUnlock1(v20, v19);
              }
              v8 = 0;
            }
            else
            {
              v11 = *(_QWORD *)(a2 + 96) != 0LL;
              if ( gfShellFrameHangResilient || (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
              {
                v38 = 0;
                if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
                  ClientWaitMessageExMPH(15615LL, v11);
                else
                  xxxSleepThread2(0x3CFFu, v11, 1, 0, (enum SLEEP_STATUS *)&v38);
                if ( gfShellFrameHangResilient )
                {
                  if ( (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) != 0
                    && *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 336LL) > 1u )
                  {
                    v33 = *(_QWORD *)(gptiCurrent + 416LL);
                    if ( !*(_QWORD *)(v33 + 40)
                      && !*(_QWORD *)(v33 + 48)
                      && !IsAdaptiveQueueDetachExempted(gptiCurrent)
                      && v38 )
                    {
                      v34 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                      if ( v34 )
                        TryDetachShellFrame(gptiCurrent, v34, v38 == 2, 0LL);
                    }
                  }
                }
              }
              else
              {
                xxxWaitMessageEx(0x3CFFu, v11, 0LL);
              }
            }
            goto LABEL_17;
          }
        }
        *(_DWORD *)(gptiCurrent + 440LL) &= ~0x200000u;
      }
      if ( (unsigned int)xxxCallMsgFilter(v37, 2LL) )
      {
        if ( v15 )
          xxxInternalGetMessage(v37, 0LL, DWORD2(v37[0]), DWORD2(v37[0]), 1u, 0);
LABEL_39:
        v8 = 1;
        goto LABEL_17;
      }
      if ( !(unsigned int)xxxHandleMenuMessages(v37, a2, a1) )
      {
        xxxTranslateMessage((__int64)v37, 0);
        xxxDispatchMessage(v37);
      }
      if ( (((*(_DWORD *)(a2 + 8) & 4) != 0) & !_bittest(a1, 0xFu)) == 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) & 0x40) != 0 )
      {
        goto LABEL_19;
      }
      if ( DWORD2(v37[0]) != 275 )
      {
        if ( DWORD2(v37[0]) != 280 )
        {
          if ( DWORD2(v37[0]) == 15 )
            goto LABEL_17;
          goto LABEL_39;
        }
        goto LABEL_7;
      }
LABEL_17:
      v9 = *(_DWORD *)(a2 + 8);
    }
  }
  xxxMNReleaseCapture(a2);
  v26 = *(_DWORD *)(a2 + 8);
  if ( (v26 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v26 & 0xFDFFFFFF;
  }
  return 0LL;
}
