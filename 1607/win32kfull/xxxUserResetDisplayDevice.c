/*
 * XREFs of xxxUserResetDisplayDevice @ 0x1C0154CD0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     PowerOnGdi @ 0x1C0154B90 (PowerOnGdi.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
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
    EtwTracexxxUserResetDisplayDeviceBegin(0xFFFFFFFFLL);
    gpqCursor = 0LL;
    zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 5368LL), *(_DWORD *)(gpsi + 5372LL), 2);
    SetPointer(1);
    v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
    v4[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v4;
    v4[1] = v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
    xxxRedrawWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 0LL, 0LL, 645);
    ThreadUnlock1(v3, v2);
    return EtwTracexxxUserResetDisplayDeviceEnd(0xFFFFFFFFLL);
  }
  return result;
}
