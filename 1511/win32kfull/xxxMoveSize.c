/*
 * XREFs of xxxMoveSize @ 0x1C020DCC8
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0001CBC (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009E1C (SlowAppThreadInShellFrame.c)
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     zzzSetFMouseMoved @ 0x1C008BF80 (zzzSetFMouseMoved.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     xxxTranslateMessage @ 0x1C0099414 (xxxTranslateMessage.c)
 *     xxxWaitMessageEx @ 0x1C00CFAA4 (xxxWaitMessageEx.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     bSetDevDragWidth @ 0x1C00D8C24 (bSetDevDragWidth.c)
 *     zzzShowCursor @ 0x1C0111C50 (zzzShowCursor.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 *     ChangeComposableCursor @ 0x1C01E6DA8 (ChangeComposableCursor.c)
 *     xxxCallMsgFilter @ 0x1C01E75E4 (xxxCallMsgFilter.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0204D30 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C0205330 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209F54 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209FA4 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020B08C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
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
  LARGE_INTEGER PerformanceCounter; // rax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  struct tagTHREADINFO *v19; // rax
  _QWORD v20[3]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v21[3]; // [rsp+48h] [rbp-38h] BYREF
  int v22; // [rsp+B8h] [rbp+38h] BYREF

  memset(v21, 0, sizeof(v21));
  v6 = 0;
  result = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(result + 384) == v8 && !*(_QWORD *)(gptiCurrent + 592LL) )
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
        v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v20;
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
      *(_QWORD *)(gptiCurrent + 592LL) = result;
      HMAssignmentLock(result, a1);
      *(_DWORD *)(v12 + 180) = *(_DWORD *)(v12 + 180) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v12 + 284) = *(_QWORD *)(gptiCurrent + 684LL);
      AdjustProcessPriorityForDrag((struct tagWND **)v12);
      xxxInitializeMoveSizeData(a1, v12, a2, a3, 0);
      if ( (*(_DWORD *)(v12 + 180) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(a1 + 54) & 4) == 0 )
        bSetDevDragWidth(*gpDispInfo, 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v12);
      if ( gpqForeground )
      {
        v13 = *(__int64 **)(gpqForeground + 72LL);
        if ( v13 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
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
      xxxDrawDragRectEx((_DWORD *)v12, 0LL, 0, (struct tagRECT *)(v12 + 8));
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x10u;
      *((_QWORD *)&v21[1] + 1) = (*(unsigned __int16 *)(v12 + 280) << 16) | *(unsigned __int16 *)(v12 + 276);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      zzzSetFMouseMoved(PerformanceCounter.QuadPart, 0LL);
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
        while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) == a1 )
        {
          if ( (unsigned int)xxxInternalGetMessage(v21, 0LL, 0, 0, 1u, 0) )
          {
            if ( (unsigned int)(DWORD2(v21[0]) - 256) <= 9
              || DWORD2(v21[0]) == 35
              || (unsigned int)(DWORD2(v21[0]) - 512) <= 0xE )
            {
              *(_QWORD *)(v12 + 284) = *(_QWORD *)(gptiCurrent + 684LL);
              if ( !v6 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) & 0x1800000) != 0 )
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
              *(_DWORD *)(gptiCurrent + 440LL) |= 0x8000u;
              xxxDispatchMessage(v21);
              *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000u;
            }
          }
          else
          {
            if ( (*(_DWORD *)(v12 + 180) & 8) != 0 )
              break;
            if ( gfShellFrameHangResilient
              && (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) != 0
              && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v17 = 5000;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 336LL) > 1u )
                v17 = 200;
              if ( !(unsigned int)xxxWaitMessageEx(0x3C07u, v17, (enum SLEEP_STATUS *)&v22) && !v22 )
                break;
              if ( v22 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 336LL) > 1u )
                {
                  v18 = *(_QWORD *)(gptiCurrent + 416LL);
                  if ( !*(_QWORD *)(v18 + 40) && !*(_QWORD *)(v18 + 48) )
                  {
                    v19 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
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
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) != a1 )
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
          xxxCallHook(2u, 0LL, 0LL, 5u);
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
      xxxReportMoveSizeCompletionToShell((const struct tagRECT *)v12);
      DisableDwmSwCursorMoveSize((*(_DWORD *)(v12 + 180) >> 27) & 1);
      *(_DWORD *)(v12 + 180) &= 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct tagWND **)v12);
      if ( (*(_BYTE *)(a1 + 54) & 4) == 0 )
        bSetDevDragWidth(*gpDispInfo, *(_DWORD *)(gpsi + 4024LL) + 3);
      bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
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
      *(_QWORD *)(gptiCurrent + 592LL) = 0LL;
      HMAssignmentUnlock(v12);
      Win32FreePool(v12);
      return zzzShowCursor(0);
    }
  }
  return result;
}
