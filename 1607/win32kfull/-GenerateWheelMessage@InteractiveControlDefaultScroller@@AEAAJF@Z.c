/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z @ 0x1C023F438
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C023F780 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C023F834 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2)
{
  __int64 v3; // rdx
  BOOL v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v14[2]; // [rsp+98h] [rbp+17h] BYREF
  __int16 v15; // [rsp+A8h] [rbp+27h] BYREF
  int v16; // [rsp+AAh] [rbp+29h]
  __int16 v17; // [rsp+AEh] [rbp+2Dh]
  __int64 v18; // [rsp+B0h] [rbp+2Fh]
  __int64 v19; // [rsp+B8h] [rbp+37h]

  v3 = *((_QWORD *)this + 6);
  v5 = *((_DWORD *)this + 16) == 2;
  if ( a2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 384LL);
    if ( v6 && (*(_DWORD *)(v6 + 340) & 0x2000000) != 0 && (v7 = *(_QWORD *)(v6 + 88)) != 0 )
    {
      v8 = *(_OWORD *)(v7 + 128);
    }
    else
    {
      v8 = *(_OWORD *)(v3 + 112);
      v7 = v3;
    }
    v14[1] = *((_QWORD *)&v8 + 1);
    LODWORD(v14[0]) = v8 + (DWORD2(v8) - (int)v8) / 2;
    HIDWORD(v14[0]) = DWORD1(v8) + (HIDWORD(v8) - DWORD1(v8)) / 2;
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v7);
    LogicalToPhysicalDPIPoint(v14, v14, MonitorFlagsFromWindow, 0LL);
    if ( !v5 || (unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
    {
      v15 = 0;
      v16 = 67109120;
      v17 = a2;
      v18 = 0LL;
      v19 = 0LL;
      UserSessionSwitchLeaveCrit(v11, v10);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      QueueMouseEvent(
        1024,
        a2,
        HIDWORD(v19),
        v14[0],
        (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
        PerformanceCounter.QuadPart,
        0LL,
        (__int64)&v15,
        0LL,
        0,
        1,
        1,
        0,
        1u,
        0,
        0,
        0LL,
        0LL);
      if ( v5 )
        ProcessQueuedMouseEvents();
      EnterCrit(0LL, 1LL);
    }
    if ( v5 )
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 61), 0);
  }
  return 0LL;
}
