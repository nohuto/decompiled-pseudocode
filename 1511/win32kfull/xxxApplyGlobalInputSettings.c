/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C00812CC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0098598 (xxxInternalActivateKeyboardLayout.c)
 */

__int64 __fastcall xxxApplyGlobalInputSettings(int a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 72LL) + 16LL);
  result = *(unsigned int *)(v2 + 440);
  if ( (result & 1) == 0 && *(_QWORD *)(v2 + 696) )
  {
    if ( a1 || v2 != gptiCurrent )
    {
      return PostEventMessageEx(v2, gpqForeground, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      result = gspklGlobalActive;
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 392LL) )
        {
          v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v6;
          v6[1] = gspklGlobalActive;
          ++*(_DWORD *)(gspklGlobalActive + 8LL);
          xxxInternalActivateKeyboardLayout(gspklGlobalActive, 0LL, 0LL);
          return ThreadUnlock1(v5, v4);
        }
      }
    }
  }
  return result;
}
