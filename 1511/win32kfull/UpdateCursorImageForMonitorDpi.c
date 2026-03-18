/*
 * XREFs of UpdateCursorImageForMonitorDpi @ 0x1C008823C
 * Callers:
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01DB758 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     GreSetPointer @ 0x1C003B8F4 (GreSetPointer.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0053BE0 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C0053C08 (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
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
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  _DWORD *v17; // rcx
  unsigned int *CurrentCursorFrame; // r9
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned int v21; // r9d

  v2 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v2 )
  {
    v3 = *(_WORD *)(v2 + 152);
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
        || *(int *)(gpqForeground + 328LL) >= 0
        || ((v6 = *(_QWORD *)(gpqForeground + 64LL)) == 0
          ? (v7 = *(_QWORD *)(gpqForeground + 48LL))
          : (v7 = *(_QWORD *)(v6 + 16)),
            !(unsigned int)HasHidTable(v7)
         || ((v8 = *(_QWORD *)(gpqForeground + 64LL)) == 0
           ? (v9 = *(_QWORD *)(gpqForeground + 48LL))
           : (v9 = *(_QWORD *)(v8 + 16)),
             (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 376) + 784LL) + 100LL) & 0x100) == 0)) )
      {
        if ( gpqCursor && *(int *)(gpqCursor + 328LL) >= 0 && *(_QWORD *)(gpqCursor + 320LL) )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) != 0 )
            {
              goto LABEL_33;
            }
          }
          else if ( !IsDPIDWMSysMet(v10)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v16 = 0)
                   : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v16) )
          {
LABEL_33:
            if ( IsDPIDWMSysMet(0x13uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v13 = 0)
                : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v13) )
            {
              v17 = (_DWORD *)(gpsi + 2732LL);
            }
            else
            {
              v17 = (_DWORD *)(gpsi + 1956LL);
            }
LABEL_49:
            if ( *v17 && gpcurPhysCurrent )
            {
              gpcurPhysCurrent = FixupCursorForMonitor(gpcurPhysCurrent);
              CurrentCursorFrame = (unsigned int *)GetCurrentCursorFrame((struct tagCURSOR *)gpcurPhysCurrent);
              gpcurPhysCurrent = (__int64)CurrentCursorFrame;
              v19 = 0;
              v20 = CurrentCursorFrame[20];
              if ( (v20 & 8) != 0 )
                v19 = 8;
              if ( !gbDisableAlpha
                && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == -2147475456
                && (v20 & 0x200) != 0 )
              {
                v19 |= 0x10u;
              }
              if ( gbForceSoftwareCursor == 1 )
                v19 |= 0x20u;
              EtwTraceCursorSize(CurrentCursorFrame[19], CurrentCursorFrame[35], CurrentCursorFrame[36]);
              v21 = gMouseTrails;
              if ( gProtocolType )
                v21 = 0;
              GreSetPointer((HDEV)*gpDispInfo, (struct _CURSINFO *)(gpcurPhysCurrent + 80), v19, v21, 0x32u);
            }
            return;
          }
          v17 = (_DWORD *)(gpsi + 2344LL);
          goto LABEL_49;
        }
      }
    }
  }
}
