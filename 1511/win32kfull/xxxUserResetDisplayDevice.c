/*
 * XREFs of xxxUserResetDisplayDevice @ 0x1C014F2F0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     PowerOnGdi @ 0x1C014F210 (PowerOnGdi.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxUserResetDisplayDevice()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    gpqCursor = 0LL;
    zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 3976LL), *(_DWORD *)(gpsi + 3980LL), 2);
    SetPointer(1);
    v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
    v4[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v4;
    v4[1] = v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
    xxxRedrawWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 0LL, 0LL, 645);
    return ThreadUnlock1(v3, v2);
  }
  return result;
}
