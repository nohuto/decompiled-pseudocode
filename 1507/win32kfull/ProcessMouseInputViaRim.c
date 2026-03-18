/*
 * XREFs of ProcessMouseInputViaRim @ 0x1C012D104
 * Callers:
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 * Callees:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     MonotonicTick @ 0x1C004B514 (MonotonicTick.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C012D4DC (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C012D508 (FindRimDevBackedDeviceInfo.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F23EC (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 */

void __fastcall ProcessMouseInputViaRim(struct _MOUSE_INPUT_DATA *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  struct _MOUSE_INPUT_DATA *v5; // rbx
  BOOL v7; // r14d
  __int64 RimDevBackedDeviceInfo; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // r15
  unsigned __int64 QuadPart; // rbp
  __int64 v14; // rsi
  int LastX; // ecx
  USHORT ButtonFlags; // cx
  unsigned int v17; // r9d
  int v18; // [rsp+38h] [rbp-90h]
  _QWORD v19[2]; // [rsp+90h] [rbp-38h] BYREF
  struct tagPOINT v20; // [rsp+D0h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a1;
  v7 = a1->UnitId == 0xFFFE;
  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, a1->UnitId == 0xFFFE);
  if ( RimDevBackedDeviceInfo )
  {
    v19[0] = 0LL;
    EtwTraceMouseInputApc();
    if ( (*gpsi & 0x2000) == 0 )
    {
      gqwMouseProcessMiceInputTime = MonotonicTick();
      if ( !gptiBlockInput )
      {
        if ( (gdwPUDFlags & 0x100) != 0 )
          ResetAccessibilityCountersOnMouseInput();
        if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 && (gfade[12] & 0x80u) != 0 )
        {
          EnterCrit(1LL);
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            v10 = gfade[12];
            if ( (v10 & 0x80u) != 0LL )
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
          UserSessionSwitchLeaveCrit(v10, v9);
        }
        if ( *(int *)(RimDevBackedDeviceInfo + 256) >= 0 )
        {
          v11 = (unsigned __int64)v5 + v4;
          v20 = gptCursorAsync;
          do
          {
            if ( v7 )
            {
              v12 = UpconvertTime(v5->ExtraInformation);
              QuadPart = gliQpcFreq.QuadPart * (unsigned __int64)v5->ExtraInformation / 0x3E8;
              v5->ExtraInformation = 0;
            }
            else
            {
              v12 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
            }
            v14 = (unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v11);
            if ( (v5->Flags & 4) != 0 )
            {
              RIMRefreshDeviceAttributes(aDeviceTemplate[13], a4);
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
                v12,
                v5->ExtraInformation,
                &v20,
                (struct _SUBPIXELS *)v19,
                v18,
                v7,
                v5->Flags & 0x80);
              if ( !v14
                || v5->ButtonFlags
                || *(_WORD *)(((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v11)) + 4)
                || (v5->Flags & 1) != (*(_BYTE *)(((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v11))
                                                + 2) & 1) )
              {
                xxxMoveEventAbsolute(
                  v20.x,
                  v20.y,
                  v5->ExtraInformation,
                  *(void **)RimDevBackedDeviceInfo,
                  v5,
                  v12,
                  QuadPart,
                  v7,
                  1);
                v20 = gptCursorAsync;
LABEL_30:
                if ( (*(_BYTE *)(RimDevBackedDeviceInfo + 676) & 1) != 0 )
                {
                  if ( (v5->Buttons & 1) != 0 )
                  {
                    if ( (unsigned int)TPAAPShouldAllowNow(4u, 0, 1, 0LL) )
                    {
                      *(_DWORD *)(RimDevBackedDeviceInfo + 684) &= ~1u;
                    }
                    else
                    {
                      v5->ButtonFlags &= ~1u;
                      *(_DWORD *)(RimDevBackedDeviceInfo + 684) |= 1u;
                    }
                  }
                  ButtonFlags = v5->ButtonFlags;
                  if ( (ButtonFlags & 2) != 0 && (*(_DWORD *)(RimDevBackedDeviceInfo + 684) & 1) != 0 )
                  {
                    v5->ButtonFlags = ButtonFlags & 0xFFFD;
                    *(_DWORD *)(RimDevBackedDeviceInfo + 684) &= ~1u;
                  }
                }
                if ( !v7 || (v17 = 0, *(_DWORD *)(RimDevBackedDeviceInfo + 392)) )
                  v17 = 1;
                QueueMouseEvent(
                  v5->ButtonFlags,
                  v5->ButtonData,
                  v5->ExtraInformation,
                  *(_QWORD *)&gptCursorAsync,
                  v12,
                  QuadPart,
                  *(_QWORD *)RimDevBackedDeviceInfo,
                  (__int64)v5,
                  v19,
                  v7,
                  ((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v11)) == 0,
                  v7,
                  0,
                  v17,
                  0,
                  0,
                  0LL,
                  (__int64 *)(RimDevBackedDeviceInfo + 384));
              }
            }
            v5 = (struct _MOUSE_INPUT_DATA *)((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v11));
          }
          while ( v14 );
        }
      }
    }
  }
}
