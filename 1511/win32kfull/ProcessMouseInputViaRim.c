/*
 * XREFs of ProcessMouseInputViaRim @ 0x1C014F024
 * Callers:
 *     xxxDesktopThread @ 0x1C00CFAE0 (xxxDesktopThread.c)
 * Callees:
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C0084F90 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     MonotonicTick @ 0x1C00856E4 (MonotonicTick.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     ?GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C0088738 (-GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C014F184 (FindRimDevBackedDeviceInfo.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 */

void __fastcall ProcessMouseInputViaRim(struct _MOUSE_INPUT_DATA *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  struct _MOUSE_INPUT_DATA *v5; // rbx
  BOOL v7; // r14d
  __int64 RimDevBackedDeviceInfo; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r15
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  USHORT ButtonFlags; // cx
  unsigned int v16; // r9d
  int v17; // [rsp+38h] [rbp-90h]
  _QWORD v18[2]; // [rsp+90h] [rbp-38h] BYREF
  struct tagPOINT v19; // [rsp+D0h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a1;
  v7 = a1->UnitId == 0xFFFE;
  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, a1->UnitId == 0xFFFE);
  if ( RimDevBackedDeviceInfo )
  {
    v18[0] = 0LL;
    EtwTraceMouseInputApc();
    if ( (*gpsi & 0x2000) == 0 )
    {
      gMouseProcessMiceInputTime = MonotonicTick();
      if ( !gptiBlockInput )
      {
        if ( (gdwPUDFlags & 0x100) != 0 )
          ResetAccessibilityCountersOnMouseInput();
        if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 && (gfade[12] & 0x80u) != 0 )
        {
          EnterCrit(0LL, 1LL);
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            v14 = gfade[12];
            if ( (v14 & 0x80u) != 0LL )
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
          UserSessionSwitchLeaveCrit(v14, v13);
        }
        if ( *(int *)(RimDevBackedDeviceInfo + 248) >= 0 )
        {
          v9 = (unsigned __int64)v5 + v4;
          v19 = gptCursorAsync;
          do
          {
            if ( v7 )
            {
              LODWORD(v10) = v5->ExtraInformation;
              PerformanceCounter.QuadPart = gliQpcFreq.QuadPart * (unsigned int)v10 / 1000;
              v5->ExtraInformation = 0;
            }
            else
            {
              v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
            }
            v12 = (unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v9);
            if ( (v5->Flags & 4) != 0 )
            {
              RIMRefreshDeviceAttributes(aDeviceTemplate[13], a4);
            }
            else
            {
              if ( (v5->ButtonFlags & 0x2AA) != 0 )
                PoLatencySensitivityHint(0LL);
              if ( !*(_QWORD *)&v5->LastX )
                goto LABEL_31;
              GetMouseCoord(
                (unsigned int)v5->LastX,
                v5->LastY,
                v5->Flags,
                v10,
                v5->ExtraInformation,
                &v19,
                (struct _SUBPIXELS *)v18,
                v17,
                v7,
                v5->Flags & 0x80);
              if ( !v12
                || v5->ButtonFlags
                || *(_WORD *)(((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v9)) + 4)
                || (v5->Flags & 1) != (*(_BYTE *)(((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v9))
                                                + 2) & 1) )
              {
                xxxMoveEventAbsolute(
                  v19.x,
                  v19.y,
                  v5->ExtraInformation,
                  *(void **)RimDevBackedDeviceInfo,
                  v5,
                  v10,
                  PerformanceCounter.QuadPart,
                  v7,
                  1);
                v19 = gptCursorAsync;
LABEL_31:
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
                if ( !v7 || (v16 = 0, *(_DWORD *)(RimDevBackedDeviceInfo + 384)) )
                  v16 = 1;
                QueueMouseEvent(
                  v5->ButtonFlags,
                  v5->ButtonData,
                  v5->ExtraInformation,
                  *(_QWORD *)&gptCursorAsync,
                  v10,
                  PerformanceCounter.QuadPart,
                  *(_QWORD *)RimDevBackedDeviceInfo,
                  (__int64)v5,
                  v18,
                  v7,
                  ((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v9)) == 0,
                  v7,
                  0,
                  v16,
                  0,
                  0,
                  0LL,
                  (__int64 *)(RimDevBackedDeviceInfo + 376));
              }
            }
            v5 = (struct _MOUSE_INPUT_DATA *)((unsigned __int64)&v5[1] & -(__int64)((unsigned __int64)&v5[1] < v9));
          }
          while ( v12 );
        }
      }
    }
  }
}
