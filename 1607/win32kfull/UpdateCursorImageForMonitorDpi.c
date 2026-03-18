/*
 * XREFs of UpdateCursorImageForMonitorDpi @ 0x1C00DB460
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01D315C (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C005C8F4 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C005C91C (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 *     GreSetPointer @ 0x1C005DA90 (GreSetPointer.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall UpdateCursorImageForMonitorDpi(unsigned __int16 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // cx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  _DWORD *v36; // rcx
  unsigned int *CurrentCursorFrame; // r9
  unsigned int v38; // ebx
  __int64 v39; // r9

  v2 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v2 )
  {
    v3 = *(_WORD *)(v2 + 154);
    v4 = 48;
    if ( v3 >= 0x90u )
    {
      if ( v3 >= 0xC0u )
        v5 = v3 >= 0x120u ? (v3 < 0x180u ? 96 : 128) : 64;
      else
        v5 = 48;
    }
    else
    {
      v5 = 32;
    }
    if ( a1 >= 0x90u )
    {
      if ( a1 >= 0xC0u )
      {
        if ( a1 >= 0x120u )
          v4 = a1 < 0x180u ? 96 : 128;
        else
          v4 = 64;
      }
    }
    else
    {
      v4 = 32;
    }
    if ( v5 != v4 )
    {
      if ( !gpqForeground
        || *(int *)(gpqForeground + 336LL) >= 0
        || ((v6 = *(_QWORD *)(gpqForeground + 72LL)) == 0
          ? (v7 = *(_QWORD *)(gpqForeground + 56LL))
          : (v7 = *(_QWORD *)(v6 + 16)),
            !(unsigned int)HasHidTable(v7)
         || ((v8 = *(_QWORD *)(gpqForeground + 72LL)) == 0
           ? (v9 = *(_QWORD *)(gpqForeground + 56LL))
           : (v9 = *(_QWORD *)(v8 + 16)),
             (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 376) + 776LL) + 100LL) & 0x100) == 0)) )
      {
        if ( gpqCursor && *(int *)(gpqCursor + 336LL) >= 0 && *(_QWORD *)(gpqCursor + 328LL) )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) != 0 )
              goto LABEL_32;
          }
          else if ( !IsDPIDWMSysMet(v11)
                 || (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
                   ? (v35 = 0)
                   : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v32,
                                                                  v33,
                                                                  v34)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v35) )
          {
LABEL_32:
            if ( IsDPIDWMSysMet(0x13uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
                ? (v24 = 0)
                : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v21,
                                                               v22,
                                                               v23)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v24) )
            {
              v36 = (_DWORD *)(gpsi + 2732LL);
            }
            else
            {
              v36 = (_DWORD *)(gpsi + 1956LL);
            }
LABEL_47:
            if ( *v36 && gpcurPhysCurrent )
            {
              gpcurPhysCurrent = FixupCursorForMonitor(gpcurPhysCurrent);
              CurrentCursorFrame = (unsigned int *)GetCurrentCursorFrame((struct tagCURSOR *)gpcurPhysCurrent);
              gpcurPhysCurrent = (__int64)CurrentCursorFrame;
              v38 = 0;
              if ( (CurrentCursorFrame[20] & 8) != 0 )
                v38 = 8;
              if ( !gbDisableAlpha
                && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == -2147475456
                && (CurrentCursorFrame[20] & 0x200) != 0 )
              {
                v38 |= 0x10u;
              }
              if ( gbForceSoftwareCursor == 1 )
                v38 |= 0x20u;
              EtwTraceCursorSize(CurrentCursorFrame[19], CurrentCursorFrame[35], CurrentCursorFrame[36]);
              v39 = (unsigned int)gMouseTrails;
              if ( gProtocolType )
                v39 = 0LL;
              GreSetPointer((HDEV)*gpDispInfo, (struct _CURSINFO *)(gpcurPhysCurrent + 80), v38, v39, 0x32u);
            }
            return;
          }
          v36 = (_DWORD *)(gpsi + 2344LL);
          goto LABEL_47;
        }
      }
    }
  }
}
