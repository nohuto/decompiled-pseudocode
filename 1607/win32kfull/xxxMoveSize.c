/*
 * XREFs of xxxMoveSize @ 0x1C0204D60
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006EE0 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C000C438 (SlowAppThreadInShellFrame.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     bSetDevDragWidth @ 0x1C00BAF04 (bSetDevDragWidth.c)
 *     zzzSetFMouseMoved @ 0x1C00DC310 (zzzSetFMouseMoved.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C00DF5E4 (xxxWaitMessageEx.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 *     zzzShowCursor @ 0x1C0132E80 (zzzShowCursor.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 *     ChangeComposableCursor @ 0x1C01DD530 (ChangeComposableCursor.c)
 *     xxxCallMsgFilter @ 0x1C01DDE44 (xxxCallMsgFilter.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC010 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C01FC62C (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0201038 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0201088 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0202188 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // rax
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD v27[3]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v28[7]; // [rsp+48h] [rbp-38h] BYREF
  int v29; // [rsp+B8h] [rbp+38h] BYREF

  memset(v28, 0, 0x30uLL);
  v6 = 0;
  result = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(result + 384) == v8 && !*(_QWORD *)(gptiCurrent + 592LL) )
  {
    v9 = *(_QWORD *)(v8 + 80);
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
        v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v27;
        v27[1] = v9;
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
        v13 = *(__int64 **)(gpqForeground + 80LL);
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
      xxxDrawDragRectEx((struct _MOVESIZEDATA *)v12, 0LL, 0LL, (LONG *)(v12 + 8));
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x10u;
      v28[3] = (*(unsigned __int16 *)(v12 + 280) << 16) | *(unsigned __int16 *)(v12 + 276);
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
        while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) == a1 )
        {
          if ( (unsigned int)xxxInternalGetMessage((__int64)v28, 0LL, 0, 0, 1u, 0) )
          {
            if ( (unsigned int)(LODWORD(v28[1]) - 256) <= 9
              || LODWORD(v28[1]) == 35
              || (unsigned int)(LODWORD(v28[1]) - 512) <= 0xE )
            {
              *(_QWORD *)(v12 + 284) = *(_QWORD *)(gptiCurrent + 684LL);
              if ( !v6 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x1800000) != 0 )
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
            if ( !(unsigned int)xxxCallMsgFilter((int *)v28, (unsigned int)(a2 != 9) + 3) )
            {
              xxxTranslateMessage((__int64)v28, 0LL, v17, v18);
              *(_DWORD *)(gptiCurrent + 440LL) |= 0x8000u;
              xxxDispatchMessage(v28, v19, v20, v21);
              *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000u;
            }
          }
          else
          {
            if ( (*(_DWORD *)(v12 + 180) & 8) != 0 )
              break;
            if ( gfShellFrameHangResilient
              && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0
              && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v22 = 5000;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) > 1u )
                v22 = 200;
              if ( !(unsigned int)xxxWaitMessageEx(0x3C07u, v22, (enum SLEEP_STATUS *)&v29) && !v29 )
                break;
              if ( v29 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) > 1u )
                {
                  v23 = *(_QWORD *)(gptiCurrent + 416LL);
                  if ( !*(_QWORD *)(v23 + 40) && !*(_QWORD *)(v23 + 48) )
                  {
                    v24 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v24 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v24, v29 == 2, 1);
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
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 )
        {
          xxxMS_TrackMove(a1, 256, 27LL, 1LL, (struct _MOVESIZEDATA *)v12);
          break;
        }
        if ( (*(_DWORD *)(v12 + 180) & 8) != 0 )
        {
          *(_DWORD *)(v12 + 180) &= ~8u;
          break;
        }
        if ( LODWORD(v28[1]) == 35 )
          xxxCallHook(2u, 0LL, 0LL, 5u);
        if ( (*(_DWORD *)(v12 + 180) & 1) != 0
          && !(unsigned int)xxxTrackInitSize((struct tagWND *)a1, v28[1], v28[2], v28[3], (struct _MOVESIZEDATA *)v12) )
        {
          break;
        }
        if ( (*(_DWORD *)(v12 + 180) & 1) == 0 )
          xxxMS_TrackMove(
            a1,
            v28[1],
            v28[2],
            (unsigned __int16)(WORD2(v28[4]) + *(_WORD *)(v12 + 152)) | ((unsigned __int16)(LOWORD(v28[5])
                                                                                          + *(_WORD *)(v12 + 156)) << 16),
            (struct _MOVESIZEDATA *)v12);
      }
      xxxReportMoveSizeCompletionToShell((const struct tagRECT *)v12);
      DisableDwmSwCursorMoveSize((*(_DWORD *)(v12 + 180) >> 27) & 1);
      *(_DWORD *)(v12 + 180) &= 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct tagWND **)v12);
      if ( (*(_BYTE *)(a1 + 54) & 4) == 0 )
        bSetDevDragWidth(*gpDispInfo, *(_DWORD *)(gpsi + 5416LL) + 3);
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
      Win32FreePool(v12, v25, v26);
      return zzzShowCursor(0);
    }
  }
  return result;
}
