/*
 * XREFs of xxxMoveSize @ 0x1C020D52C
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00034B8 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C00091C4 (SlowAppThreadInShellFrame.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C007C75C (xxxWaitMessageEx.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     xxxTranslateMessage @ 0x1C00DA330 (xxxTranslateMessage.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     zzzShowCursor @ 0x1C0100BA0 (zzzShowCursor.c)
 *     bSetDevDragWidth @ 0x1C014E1A0 (bSetDevDragWidth.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 *     ChangeComposableCursor @ 0x1C01E6918 (ChangeComposableCursor.c)
 *     xxxCallMsgFilter @ 0x1C01E7174 (xxxCallMsgFilter.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02049B0 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C0204F7C (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020AB48 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(__int64 a1, int a2, unsigned int a3)
{
  int v6; // r15d
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 *v13; // rdx
  int v14; // ecx
  DWORD LowPart; // eax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  struct tagTHREADINFO *v19; // r14
  _QWORD v20[3]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v21[3]; // [rsp+48h] [rbp-38h] BYREF
  int v22; // [rsp+B8h] [rbp+38h] BYREF

  memset(v21, 0, sizeof(v21));
  v6 = 0;
  result = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_QWORD *)(result + 392) == v8 && !*(_QWORD *)(gptiCurrent + 600LL) )
  {
    v9 = *(_QWORD *)(v8 + 72);
    if ( v9 )
    {
      if ( (*(_WORD *)(v9 + 66) & 0x3FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 88);
        if ( !v9 || (*(_WORD *)(v9 + 66) & 0x3FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        v20[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v20;
        v20[1] = v9;
        ++*(_DWORD *)(v9 + 8);
        xxxSendMessage((struct tagWND *)v9, 0x14Fu, 0LL, 0LL);
        ThreadUnlock1(v11, v10);
      }
    }
    result = Win32AllocPoolWithQuotaZInit(320LL, 1936552789LL);
    v12 = result;
    if ( result )
    {
      *(_QWORD *)(gptiCurrent + 600LL) = result;
      HMAssignmentLock(result, a1);
      *(_DWORD *)(v12 + 180) = *(_DWORD *)(v12 + 180) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v12 + 284) = *(_QWORD *)(gptiCurrent + 692LL);
      AdjustProcessPriorityForDrag((struct tagWND **)v12);
      xxxInitializeMoveSizeData(a1, v12, a2, a3, 0);
      if ( (*(_DWORD *)(v12 + 180) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(a1 + 54) & 4) == 0 )
        bSetDevDragWidth(*gpDispInfo, 2);
      if ( gpqForeground )
      {
        v13 = *(__int64 **)(gpqForeground + 72LL);
        if ( v13 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
          {
            v14 = gptiCurrent != v13[2] ? 0x10 : 0;
            if ( v13[2] == gptiCurrent )
              v13 = (__int64 *)a1;
            xxxWindowEvent(0x80000004, v13, 0, 2, v14 | 0x21);
          }
        }
      }
      xxxWindowEvent(0xAu, (__int64 *)a1, 0, 0, 0);
      xxxWindowEvent(0x19u, (__int64 *)a1, 0, a2, 0);
      xxxDrawDragRectEx((struct tagRECT **)v12, 0LL, 0, (struct tagRECT *)(v12 + 8));
      *(_DWORD *)(gptiCurrent + 448LL) |= 0x10u;
      *((_QWORD *)&v21[1] + 1) = (*(unsigned __int16 *)(v12 + 280) << 16) | *(unsigned __int16 *)(v12 + 276);
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      zzzSetFMouseMoved(LowPart, 0);
      xxxSendMessage((struct tagWND *)a1, 0x231u, 0LL, 0LL);
      xxxCapture(gptiCurrent, (__int64 *)a1, 6);
      zzzShowCursor(1);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        if ( gProtocolType || gbRemoteFxSession )
        {
          v16 = 0;
        }
        else
        {
          ChangeComposableCursor(1);
          v16 = 1;
        }
        *(_DWORD *)(v12 + 180) ^= (*(_DWORD *)(v12 + 180) ^ (v16 << 27)) & 0x8000000;
      }
      while ( (*(_DWORD *)(v12 + 180) & 8) == 0 )
      {
        while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) == a1 )
        {
          if ( (unsigned int)xxxInternalGetMessage(v21, 0LL, 0, 0, 1u, 0) )
          {
            if ( (unsigned int)(DWORD2(v21[0]) - 256) <= 9
              || DWORD2(v21[0]) == 35
              || (unsigned int)(DWORD2(v21[0]) - 512) <= 0xE )
            {
              *(_QWORD *)(v12 + 284) = *(_QWORD *)(gptiCurrent + 692LL);
              if ( !v6 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) & 0x1800000) != 0 )
                {
                  v6 = 2;
                  *(_DWORD *)(v12 + 180) ^= (*(_DWORD *)(v12 + 180) ^ ((*(_DWORD *)(v12 + 180) & 0xFFFF8000) + 0x8000)) & 0x38000;
                }
                else
                {
                  v6 = 1;
                }
              }
              break;
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v21, (unsigned int)(a2 != 9) + 3) )
            {
              xxxTranslateMessage((__int64)v21, 0);
              *(_DWORD *)(gptiCurrent + 448LL) |= 0x8000u;
              xxxDispatchMessage(v21);
              *(_DWORD *)(gptiCurrent + 448LL) &= ~0x8000u;
            }
          }
          else
          {
            if ( (*(_DWORD *)(v12 + 180) & 8) != 0 )
              break;
            if ( gfShellFrameHangResilient
              && (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0
              && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v17 = 5000;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 336LL) > 1u )
                v17 = 200;
              if ( !(unsigned int)xxxWaitMessageEx(0x3C07u, v17, (enum SLEEP_STATUS *)&v22) && !v22 )
                break;
              if ( v22 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 336LL) > 1u )
                {
                  v18 = *(_QWORD *)(gptiCurrent + 424LL);
                  if ( !*(_QWORD *)(v18 + 40) && !*(_QWORD *)(v18 + 48) )
                  {
                    v19 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    LogMDAQueueOp(0xB8u, v22, (__int64)v19, 0);
                    if ( v19 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v19, v22 == 2, 1);
                  }
                }
              }
            }
            else if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
            {
              break;
            }
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) != a1 )
        {
          xxxMS_TrackMove(a1, 256, 0x1BuLL, 1LL, (struct _MOVESIZEDATA *)v12);
          break;
        }
        if ( (*(_DWORD *)(v12 + 180) & 8) != 0 )
        {
          *(_DWORD *)(v12 + 180) &= ~8u;
          break;
        }
        if ( DWORD2(v21[0]) == 35 )
          xxxCallHook(2, 0, 0LL, 5u);
        if ( (*(_DWORD *)(v12 + 180) & 1) != 0
          && !(unsigned int)xxxTrackInitSize(
                              (struct tagWND *)a1,
                              SDWORD2(v21[0]),
                              *(unsigned __int64 *)&v21[1],
                              SDWORD2(v21[1]),
                              (struct _MOVESIZEDATA *)v12) )
        {
          break;
        }
        if ( (*(_DWORD *)(v12 + 180) & 1) == 0 )
          xxxMS_TrackMove(
            a1,
            SDWORD2(v21[0]),
            *(unsigned __int64 *)&v21[1],
            (unsigned __int16)(WORD2(v21[2]) + *(_WORD *)(v12 + 152)) | ((unsigned __int16)(WORD4(v21[2])
                                                                                          + *(_WORD *)(v12 + 156)) << 16),
            (struct _MOVESIZEDATA *)v12);
      }
      DisableDwmSwCursorMoveSize((*(_DWORD *)(v12 + 180) >> 27) & 1);
      *(_DWORD *)(v12 + 180) &= 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct tagWND **)v12);
      if ( (*(_BYTE *)(a1 + 54) & 4) == 0 )
        bSetDevDragWidth(*gpDispInfo, *(_DWORD *)(gpsi + 4024LL) + 3);
      bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 448LL) &= ~0x10u;
      if ( (*(_DWORD *)(v12 + 180) & 0x20) != 0 )
      {
        if ( ghrgnUpdateSave )
        {
          GreDeleteObject(ghrgnUpdateSave);
          ghrgnUpdateSave = 0LL;
          gnUpdateSave = 0;
        }
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 600LL) = 0LL;
      HMAssignmentUnlock(v12);
      Win32FreePool(v12);
      return zzzShowCursor(0);
    }
  }
  return result;
}
