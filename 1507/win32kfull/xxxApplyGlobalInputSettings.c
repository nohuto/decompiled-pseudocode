/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C0046CF8
 * Callers:
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 */

__int64 __fastcall xxxApplyGlobalInputSettings(int a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 72LL) + 16LL);
  result = *(unsigned int *)(v2 + 448);
  if ( (result & 1) == 0 && *(_QWORD *)(v2 + 704) )
  {
    if ( a1 || v2 != gptiCurrent )
    {
      return PostEventMessageEx(v2, gpqForeground, 18, 0, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      result = gspklGlobalActive;
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 400LL) )
        {
          v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v6;
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
