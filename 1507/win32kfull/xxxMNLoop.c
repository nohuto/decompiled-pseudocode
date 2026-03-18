/*
 * XREFs of xxxMNLoop @ 0x1C010B494
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C023D934 (xxxMNKeyFilter.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C000344C (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00034B8 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C00091C4 (SlowAppThreadInShellFrame.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     ClientGetMessageMPH @ 0x1C0067748 (ClientGetMessageMPH.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C007C75C (xxxWaitMessageEx.c)
 *     ClientWaitMessageExMPH @ 0x1C007C85C (ClientWaitMessageExMPH.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     xxxGetSysMenuHandle @ 0x1C0094380 (xxxGetSysMenuHandle.c)
 *     xxxTranslateMessage @ 0x1C00DA330 (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C00FAEF8 (FindNCHit.c)
 *     _IsChild @ 0x1C0100A28 (_IsChild.c)
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     _GetMenuState @ 0x1C0107C3C (_GetMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C010DB8C (xxxMNReleaseCapture.c)
 *     xxxEndMenuLoop @ 0x1C010E5F0 (xxxEndMenuLoop.c)
 *     MNFlushDestroyedPopups @ 0x1C010E670 (MNFlushDestroyedPopups.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 *     xxxCallMsgFilter @ 0x1C01E7174 (xxxCallMsgFilter.c)
 */

__int64 __fastcall xxxMNLoop(int *a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r12d
  int v9; // eax
  int MessageMPH; // eax
  unsigned int v11; // esi
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
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 SysMenuHandle; // rax
  unsigned int v34; // r10d
  int v35; // eax
  __int64 v36; // rax
  struct tagTHREADINFO *v37; // rsi
  __int64 v38; // [rsp+30h] [rbp-50h] BYREF
  __int64 v39; // [rsp+38h] [rbp-48h]
  _OWORD v40[3]; // [rsp+48h] [rbp-38h] BYREF
  int v41; // [rsp+B8h] [rbp+38h] BYREF

  memset(v40, 0, sizeof(v40));
  *(_DWORD *)(a2 + 8) |= 4u;
  *(_DWORD *)(a2 + 24) = 0;
  v8 = 1;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 684LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 688LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    if ( (GetKeyState((unsigned int)((*(_BYTE *)a1 & 0x40) != 0) + 1) & 0x8000u) != 0LL )
    {
      if ( (*a1 & 8) != 0 || xxxMNStartMenu((unsigned __int8 *)a1, a2, -1) )
      {
        if ( (*a1 & 0x40) != 0 )
        {
          *(_QWORD *)&v40[1] = 2LL;
          v24 = a4 != 0 ? 518 : 516;
        }
        else
        {
          *(_QWORD *)&v40[1] = 1LL;
          v24 = a4 != 0 ? 515 : 513;
        }
        DWORD2(v40[0]) = v24;
        v25 = (_QWORD *)*((_QWORD *)a1 + 2);
        *((_QWORD *)&v40[1] + 1) = a3;
        if ( v25 )
          *(_QWORD *)&v40[0] = *v25;
        else
          *(_QWORD *)&v40[0] = 0LL;
        xxxHandleMenuMessages(v40, a2, a1);
        goto LABEL_2;
      }
    }
    else if ( (*a1 & 0x800) == 0 )
    {
      v21 = *((_QWORD *)a1 + 1);
      v38 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v38;
      v39 = v21;
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
    xxxInternalGetMessage(v40, 0LL, 0x200u, 0x200u, 2u, 0);
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
      if ( *(int *)(*(_QWORD *)(gptiCurrent + 408LL) + 16LL) > 0 )
        MessageMPH = ClientGetMessageMPH(v40, 0LL, 0, 0, 2, 0);
      else
        MessageMPH = xxxRealInternalGetMessage((__int64)v40, 0LL, 0, 0, 2u, 0);
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
        v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
        if ( v28 != v27 && (!v28 || !(unsigned int)IsChild(v28, v27)) )
          goto LABEL_19;
      }
      if ( (v13 & 1) != 0 )
      {
        v14 = DWORD2(v40[0]);
        if ( DWORD2(v40[0]) != 515 )
          goto LABEL_25;
        if ( (unsigned int)FindNCHit(*((_QWORD *)a1 + 1), SDWORD2(v40[1])) == 2 )
        {
          xxxInternalGetMessage(v40, 0LL, DWORD2(v40[0]), DWORD2(v40[0]), 1u, 0);
          v31 = *(unsigned int *)(a2 + 8);
          if ( _bittest(a1, 0xFu) || (v31 & 4) == 0 )
            goto LABEL_19;
          v32 = *((_QWORD *)a1 + 1);
          v38 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v38;
          v39 = v32;
          ++*(_DWORD *)(v32 + 8);
          SysMenuHandle = xxxGetSysMenuHandle(v32, v31, v29, v30);
          if ( (GetMenuState(SysMenuHandle, 0xF120u) & 3) == 0 )
            PostMessage(v32, 0x112u, v34, 0LL);
          goto LABEL_51;
        }
      }
      v14 = DWORD2(v40[0]);
LABEL_25:
      if ( v14 == 513 || v14 == 516 || v14 == 161 || v14 == 164 )
      {
        v15 = 1;
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 448LL) |= 0x200000u;
        v15 = 0;
        if ( !(unsigned int)xxxInternalGetMessage(v40, 0LL, DWORD2(v40[0]), DWORD2(v40[0]), 1u, 0) )
        {
          v35 = *(_DWORD *)(gptiCurrent + 448LL);
          if ( (v35 & 0x200000) != 0 )
          {
            *(_DWORD *)(gptiCurrent + 448LL) = v35 & 0xFFDFFFFF;
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
                v38 = *(_QWORD *)(gptiCurrent + 376LL);
                *(_QWORD *)(gptiCurrent + 376LL) = &v38;
                v39 = v16;
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
                v41 = 0;
                if ( *(int *)(*(_QWORD *)(gptiCurrent + 408LL) + 16LL) > 0 )
                  ClientWaitMessageExMPH(15615LL, v11);
                else
                  xxxSleepThread2(0x3CFFu, v11, 1, 0, (enum SLEEP_STATUS *)&v41);
                if ( gfShellFrameHangResilient )
                {
                  if ( (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0
                    && *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 336LL) > 1u )
                  {
                    v36 = *(_QWORD *)(gptiCurrent + 424LL);
                    if ( !*(_QWORD *)(v36 + 40)
                      && !*(_QWORD *)(v36 + 48)
                      && !IsAdaptiveQueueDetachExempted(gptiCurrent)
                      && v41 )
                    {
                      v37 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                      LogMDAQueueOp(0xE2u, v41, (__int64)v37, 0);
                      if ( v37 )
                        TryDetachShellFrame(gptiCurrent, v37, v41 == 2, 0LL);
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
        *(_DWORD *)(gptiCurrent + 448LL) &= ~0x200000u;
      }
      if ( (unsigned int)xxxCallMsgFilter(v40, 2LL) )
      {
        if ( v15 )
          xxxInternalGetMessage(v40, 0LL, DWORD2(v40[0]), DWORD2(v40[0]), 1u, 0);
LABEL_39:
        v8 = 1;
        goto LABEL_17;
      }
      if ( !(unsigned int)xxxHandleMenuMessages(v40, a2, a1) )
      {
        xxxTranslateMessage((__int64)v40, 0);
        xxxDispatchMessage(v40);
      }
      if ( (((*(_DWORD *)(a2 + 8) & 4) != 0) & !_bittest(a1, 0xFu)) == 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) & 0x40) != 0 )
      {
        goto LABEL_19;
      }
      if ( DWORD2(v40[0]) != 275 )
      {
        if ( DWORD2(v40[0]) != 280 )
        {
          if ( DWORD2(v40[0]) == 15 )
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
