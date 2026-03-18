/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C010471C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0104838 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall zzzApplyShadow(struct tagWND *a1, __m128i *a2)
{
  __int32 v2; // eax
  HDC CompatibleDC; // rax
  __int64 v6; // rdi
  HBITMAP WindowShadow; // rsi
  LONG v8; // edx
  LONG v9; // ecx
  int v10; // eax
  bool v11; // zf
  BOOL v12; // ebx
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  struct tagPOINT v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  struct tagSIZE v17; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_DWORD *)a1 + 86);
  v16 = 0LL;
  a2[21].m128i_i32[2] = v2;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  v6 = (__int64)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  WindowShadow = GenerateWindowShadow(a1, CompatibleDC);
  if ( !WindowShadow )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  v8 = *((_DWORD *)a1 + 28);
  v9 = *((_DWORD *)a1 + 29);
  v10 = *((_DWORD *)a1 + 30) - v8;
  v15.x = v8;
  v15.y = v9;
  v17.cx = v10 + 5;
  v11 = (*((_BYTE *)a1 + 50) & 0x40) == 0;
  v17.cy = *((_DWORD *)a1 + 31) - v9 + 5;
  if ( !v11 )
    v15.x = v8 - 5;
  LODWORD(v14) = 33488896;
  ++gdwDeferWinEvent;
  v12 = (int)zzzUpdateLayeredWindow(a2, 0LL, &v15, &v17, v6, (__int64)&v16, 0, (__int64)&v14, 2u, 0LL) >= 0;
  GreDeleteDC(v6);
  GreDeleteObject(WindowShadow);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return v12;
}
