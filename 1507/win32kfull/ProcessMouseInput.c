/*
 * XREFs of ProcessMouseInput @ 0x1C01D9FE0
 * Callers:
 *     <none>
 * Callees:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     MonotonicTick @ 0x1C004B514 (MonotonicTick.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C012D4DC (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     RequestDeviceChange @ 0x1C01E0174 (RequestDeviceChange.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F23EC (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 */

void *__fastcall ProcessMouseInput(struct DEVICEINFO *a1)
{
  void *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char *v5; // rbx
  unsigned __int64 v6; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v8; // rsi
  __int16 v9; // cx
  int v10; // [rsp+38h] [rbp-80h]
  struct tagPOINT v11; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v12; // [rsp+D0h] [rbp+18h] BYREF

  v12 = 0LL;
  EtwTraceMouseInputApc();
  result = (void *)gpsi;
  if ( (*gpsi & 0x2000) == 0 )
  {
    gqwMouseProcessMiceInputTime = MonotonicTick();
    result = (void *)gptiBlockInput;
    if ( !gptiBlockInput )
    {
      if ( (gdwPUDFlags & 0x100) != 0 )
        ResetAccessibilityCountersOnMouseInput();
      result = gpdwCPUserPreferencesMask;
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        result = *(void **)gfade;
        if ( (gfade[12] & 0x80u) != 0 )
        {
          EnterCrit(1LL);
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            v4 = gfade[12];
            if ( (v4 & 0x80u) != 0LL )
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
          result = (void *)UserSessionSwitchLeaveCrit(v4, v3);
        }
      }
      if ( *((int *)a1 + 64) >= 0 )
      {
        result = (void *)gptCursorAsync;
        v5 = (char *)a1 + 412;
        v11 = gptCursorAsync;
        if ( a1 != (struct DEVICEINFO *)-412LL )
        {
          do
          {
            v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v8 = (unsigned __int64)(v5 + 24) & -(__int64)(v5 + 24 < (char *)a1 + *((_QWORD *)a1 + 33) + 412);
            if ( (v5[2] & 4) != 0 )
            {
              RequestDeviceChange(a1);
            }
            else
            {
              if ( (*((_WORD *)v5 + 2) & 0x2AA) != 0 )
                PoLatencySensitivityHint(0LL);
              if ( !*(_QWORD *)(v5 + 12) )
                goto LABEL_25;
              GetMouseCoord(
                *((unsigned int *)v5 + 3),
                *((_DWORD *)v5 + 4),
                *((unsigned __int16 *)v5 + 1),
                v6,
                *((unsigned int *)v5 + 5),
                &v11,
                (struct _SUBPIXELS *)&v12,
                v10,
                0,
                *((_WORD *)v5 + 1) & 0x80);
              if ( !v8 || *((_WORD *)v5 + 2) || *(_WORD *)(v8 + 4) || (v5[2] & 1) != (*(_BYTE *)(v8 + 2) & 1) )
              {
                xxxMoveEventAbsolute(
                  v11.x,
                  v11.y,
                  *((unsigned int *)v5 + 5),
                  *(void **)a1,
                  (struct _MOUSE_INPUT_DATA *)v5,
                  v6,
                  PerformanceCounter.QuadPart,
                  0,
                  1);
                v11 = gptCursorAsync;
LABEL_25:
                if ( (*((_BYTE *)a1 + 676) & 1) != 0 )
                {
                  if ( (v5[4] & 1) != 0 )
                  {
                    if ( (unsigned int)TPAAPShouldAllowNow(4u, 0, 1, 0LL) )
                    {
                      *((_DWORD *)a1 + 171) &= ~1u;
                    }
                    else
                    {
                      *((_WORD *)v5 + 2) &= ~1u;
                      *((_DWORD *)a1 + 171) |= 1u;
                    }
                  }
                  v9 = *((_WORD *)v5 + 2);
                  if ( (v9 & 2) != 0 && (*((_DWORD *)a1 + 171) & 1) != 0 )
                  {
                    *((_WORD *)v5 + 2) = v9 & 0xFFFD;
                    *((_DWORD *)a1 + 171) &= ~1u;
                  }
                }
                QueueMouseEvent(
                  *((_WORD *)v5 + 2),
                  *((_WORD *)v5 + 3),
                  *((unsigned int *)v5 + 5),
                  *(_QWORD *)&gptCursorAsync,
                  v6,
                  PerformanceCounter.QuadPart,
                  *(_QWORD *)a1,
                  (__int64)v5,
                  &v12,
                  0,
                  v8 == 0,
                  0,
                  0,
                  1u,
                  0,
                  0,
                  0LL,
                  0LL);
              }
            }
            v5 = (char *)v8;
            result = (void *)0xFFFFF78000000004LL;
          }
          while ( v8 );
        }
      }
    }
  }
  return result;
}
