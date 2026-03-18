/*
 * XREFs of DesktopAllocInternal @ 0x140150424
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     DesktopAlloc @ 0x14012D510 (DesktopAlloc.c)
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x140150318 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1401503F0 (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

PVOID __fastcall DesktopAllocInternal(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  PVOID Heap; // rbx
  bool v7; // di
  unsigned int *v8; // rcx
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct tagTHREADINFO *v13; // rax

  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 136), 0, a2);
  if ( !Heap )
  {
    v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v8 = &WPP_RECORDER_INITIALIZED;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        8,
        10,
        (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
    }
    if ( a4 )
    {
      v13 = PtiCurrent((__int64)v8);
      *(_QWORD *)(*((_QWORD *)v13 + 64) + 224LL) |= 0x2000uLL;
    }
  }
  return Heap;
}
