/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012F714
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F830 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
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
  int v14; // [rsp+80h] [rbp+30h] BYREF
  struct tagPOINT v15; // [rsp+88h] [rbp+38h] BYREF
  int v16; // [rsp+90h] [rbp+40h] BYREF
  int v17; // [rsp+94h] [rbp+44h]
  struct tagSIZE v18; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_DWORD *)a1 + 86);
  v16 = 0;
  v17 = 0;
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
  v18.cx = v10 + 5;
  v11 = (*((_BYTE *)a1 + 50) & 0x40) == 0;
  v18.cy = *((_DWORD *)a1 + 31) - v9 + 5;
  if ( !v11 )
    v15.x = v8 - 5;
  v14 = 33488896;
  ++gdwDeferWinEvent;
  v12 = (int)zzzUpdateLayeredWindow(a2, 0LL, &v15, &v18, v6, (__int64)&v16, 0, (__int64)&v14, 2u, 0LL) >= 0;
  GreDeleteDC(v6);
  GreDeleteObject(WindowShadow);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return v12;
}
