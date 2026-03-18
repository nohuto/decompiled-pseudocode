/*
 * XREFs of ProcessMouseInput @ 0x1C01DA5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C0084F90 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     MonotonicTick @ 0x1C00856E4 (MonotonicTick.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     ?GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C0088738 (-GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     RequestDeviceChange @ 0x1C01E0784 (RequestDeviceChange.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
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
    gMouseProcessMiceInputTime = MonotonicTick();
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
          EnterCrit(0LL, 1LL);
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
      if ( *((int *)a1 + 62) >= 0 )
      {
        result = (void *)gptCursorAsync;
        v5 = (char *)a1 + 412;
        v11 = gptCursorAsync;
        if ( a1 != (struct DEVICEINFO *)-412LL )
        {
          do
          {
            v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v8 = (unsigned __int64)(v5 + 24) & -(__int64)(v5 + 24 < (char *)a1 + *((_QWORD *)a1 + 32) + 412);
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
            result = (void *)0xFFFFF78000000320LL;
          }
          while ( v8 );
        }
      }
    }
  }
  return result;
}
