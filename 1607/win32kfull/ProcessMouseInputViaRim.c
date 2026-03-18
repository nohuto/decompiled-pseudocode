/*
 * XREFs of ProcessMouseInputViaRim @ 0x1C00E0064
 * Callers:
 *     xxxDesktopThread @ 0x1C00DF620 (xxxDesktopThread.c)
 * Callees:
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C00E0434 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     MonotonicTick @ 0x1C00E15A4 (MonotonicTick.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C00E16D4 (FindRimDevBackedDeviceInfo.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01E8A00 (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 */

__int64 __fastcall ProcessMouseInputViaRim(struct _MOUSE_INPUT_DATA *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  struct _MOUSE_INPUT_DATA *v5; // rbx
  BOOL v7; // ebp
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  unsigned __int64 QuadPart; // r14
  __int64 v15; // rsi
  int LastX; // ecx
  USHORT ButtonFlags; // cx
  int v18; // r9d
  int v19; // [rsp+38h] [rbp-90h]
  _QWORD v20[2]; // [rsp+90h] [rbp-38h] BYREF
  struct tagPOINT v21; // [rsp+D0h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a1;
  v7 = a1->UnitId == 0xFFFE;
  result = FindRimDevBackedDeviceInfo(a4, a1->UnitId == 0xFFFE);
  v9 = result;
  if ( result )
  {
    v20[0] = 0LL;
    result = EtwTraceMouseInputApc();
    if ( (*gpsi & 0x2000) == 0 )
    {
      result = MonotonicTick();
      if ( !gptiBlockInput )
      {
        if ( (gdwPUDFlags & 0x100) != 0 )
          ResetAccessibilityCountersOnMouseInput();
        result = (__int64)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
        {
          result = gfade[0];
          if ( (LODWORD(gfade[6]) & 0x80u) != 0 )
          {
            EnterCrit(0LL, 1LL);
            if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
            {
              v11 = LODWORD(gfade[6]);
              if ( (v11 & 0x80u) != 0LL )
              {
                StopFade();
                giSonarRadius = -1;
                if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
                {
                  if ( gbLastVkForSonar )
                    gbLastVkForSonar = 0;
                }
              }
            }
            result = UserSessionSwitchLeaveCrit(v11, v10);
          }
        }
        if ( *(int *)(v9 + 256) >= 0 )
        {
          v12 = (unsigned __int64)v5 + v4;
          v21 = gptCursorAsync;
          do
          {
            if ( v7 )
            {
              v13 = UpconvertTime(v5->ExtraInformation);
              QuadPart = gliQpcFreq.QuadPart * v5->ExtraInformation / 1000;
              v5->ExtraInformation = 0;
            }
            else
            {
              v13 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
            }
            v15 = (unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v12);
            if ( (v5->Flags & 4) != 0 )
            {
              result = RIMRefreshDeviceAttributes(aDeviceTemplate[12], a4);
            }
            else
            {
              if ( (v5->ButtonFlags & 0x2AA) != 0 )
                PoLatencySensitivityHint(0LL);
              LastX = v5->LastX;
              if ( !LastX && !v5->LastY )
                goto LABEL_30;
              GetMouseCoord(
                LastX,
                v5->LastY,
                v5->Flags,
                v13,
                v5->ExtraInformation,
                &v21,
                (struct _SUBPIXELS *)v20,
                v19,
                v7,
                v5->Flags & 0x80);
              if ( !v15
                || v5->ButtonFlags
                || *(_WORD *)(((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v12)) + 4)
                || (result = *(_BYTE *)(((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v12)) + 2) & 1,
                    (v5->Flags & 1) != (_DWORD)result) )
              {
                xxxMoveEventAbsolute(v21.x, v21.y, v5->ExtraInformation, *(void **)v9, v5, v13, QuadPart, v7, 1);
                v21 = gptCursorAsync;
LABEL_30:
                if ( (*(_BYTE *)(v9 + 740) & 1) != 0 )
                {
                  if ( (v5->Buttons & 1) != 0 )
                  {
                    if ( (unsigned int)TPAAPShouldAllowNow(4u, 0, 1, 0LL) )
                    {
                      *(_DWORD *)(v9 + 748) &= ~1u;
                    }
                    else
                    {
                      v5->ButtonFlags &= ~1u;
                      *(_DWORD *)(v9 + 748) |= 1u;
                    }
                  }
                  ButtonFlags = v5->ButtonFlags;
                  if ( (ButtonFlags & 2) != 0 && (*(_DWORD *)(v9 + 748) & 1) != 0 )
                  {
                    v5->ButtonFlags = ButtonFlags & 0xFFFD;
                    *(_DWORD *)(v9 + 748) &= ~1u;
                  }
                }
                if ( !v7 || (v18 = 0, *(_DWORD *)(v9 + 400)) )
                  v18 = 1;
                result = QueueMouseEvent(
                           v5->ButtonFlags,
                           v5->ButtonData,
                           v5->ExtraInformation,
                           gptCursorAsync.x,
                           v13,
                           QuadPart,
                           *(_QWORD *)v9,
                           (__int64)v5,
                           (__int64)v20,
                           v7,
                           ((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v12)) == 0,
                           v7,
                           0,
                           v18,
                           0,
                           0,
                           0LL,
                           v9 + 392);
              }
            }
            v5 = (struct _MOUSE_INPUT_DATA *)((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v12));
          }
          while ( v15 );
        }
      }
    }
  }
  return result;
}
