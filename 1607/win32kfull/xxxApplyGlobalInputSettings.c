/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C00A89E0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00A85CC (xxxSendFocusMessages.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00E7090 (xxxInternalActivateKeyboardLayout.c)
 */

__int64 __fastcall xxxApplyGlobalInputSettings(int a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 80LL) + 16LL);
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
