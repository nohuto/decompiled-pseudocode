/*
 * XREFs of UpdateCursorImageForMonitorDpi @ 0x1C0040B44
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01DB158 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00909C0 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C00909E8 (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 *     GreSetPointer @ 0x1C00913EC (GreSetPointer.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall UpdateCursorImageForMonitorDpi(unsigned __int16 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // cx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  _DWORD *v16; // rcx
  unsigned int *CurrentCursorFrame; // r9
  unsigned int v18; // ebx
  unsigned int v19; // edx
  unsigned int v20; // r9d

  result = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( result )
  {
    v3 = *(_WORD *)(result + 152);
    result = 48LL;
    if ( v3 >= 0x90u )
    {
      if ( v3 >= 0xC0u )
        v4 = v3 >= 0x120u ? (v3 < 0x180u ? 96 : 128) : 64;
      else
        v4 = 48;
    }
    else
    {
      v4 = 32;
    }
    if ( a1 >= 0x90u )
    {
      if ( a1 >= 0xC0u )
      {
        if ( a1 >= 0x120u )
          result = a1 < 0x180u ? 96 : 128;
        else
          result = 64LL;
      }
    }
    else
    {
      result = 32LL;
    }
    if ( v4 != (_DWORD)result )
    {
      if ( !gpqForeground
        || *(int *)(gpqForeground + 328LL) >= 0
        || ((v5 = *(_QWORD *)(gpqForeground + 64LL)) == 0
          ? (v6 = *(_QWORD *)(gpqForeground + 48LL))
          : (v6 = *(_QWORD *)(v5 + 16)),
            !(unsigned int)HasHidTable(v6)
         || ((v7 = *(_QWORD *)(gpqForeground + 64LL)) == 0
           ? (v8 = *(_QWORD *)(gpqForeground + 48LL))
           : (v8 = *(_QWORD *)(v7 + 16)),
             result = *(_QWORD *)(v8 + 384),
             (*(_DWORD *)(*(_QWORD *)(result + 784) + 100LL) & 0x100) == 0)) )
      {
        result = gpqCursor;
        if ( gpqCursor )
        {
          if ( *(int *)(gpqCursor + 328LL) >= 0 && *(_QWORD *)(gpqCursor + 320LL) )
          {
            if ( (unsigned int)IsDPIAbsoluteSysMet(19LL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
              {
                goto LABEL_33;
              }
            }
            else if ( !(unsigned int)IsDPIDWMSysMet(v9)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v15 = 0)
                     : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                       !v15) )
            {
LABEL_33:
              if ( (unsigned int)IsDPIDWMSysMet(19LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v12 = 0)
                  : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v12) )
              {
                result = gpsi;
                v16 = (_DWORD *)(gpsi + 2732LL);
              }
              else
              {
                result = gpsi;
                v16 = (_DWORD *)(gpsi + 1956LL);
              }
LABEL_49:
              if ( *v16 && gpcurPhysCurrent )
              {
                gpcurPhysCurrent = FixupCursorForMonitor(gpcurPhysCurrent);
                CurrentCursorFrame = (unsigned int *)GetCurrentCursorFrame((struct tagCURSOR *)gpcurPhysCurrent);
                gpcurPhysCurrent = (__int64)CurrentCursorFrame;
                v18 = 0;
                v19 = CurrentCursorFrame[20];
                if ( (v19 & 8) != 0 )
                  v18 = 8;
                if ( !gbDisableAlpha
                  && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == -2147475456
                  && (v19 & 0x200) != 0 )
                {
                  v18 |= 0x10u;
                }
                if ( gbForceSoftwareCursor == 1 )
                  v18 |= 0x20u;
                EtwTraceCursorSize(CurrentCursorFrame[19], CurrentCursorFrame[35], CurrentCursorFrame[36]);
                v20 = gMouseTrails;
                if ( gProtocolType )
                  v20 = 0;
                return GreSetPointer((HDEV)*gpDispInfo, (struct _CURSINFO *)(gpcurPhysCurrent + 80), v18, v20, 0x32u);
              }
              return result;
            }
            result = gpsi;
            v16 = (_DWORD *)(gpsi + 2344LL);
            goto LABEL_49;
          }
        }
      }
    }
  }
  return result;
}
