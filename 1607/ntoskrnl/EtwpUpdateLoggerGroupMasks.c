/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x140496220
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpStopLoggerInstance @ 0x1404945E0 (EtwpStopLoggerInstance.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpGetFlagExtension @ 0x1404960B4 (EtwpGetFlagExtension.c)
 *     EtwpUpdateGroupMasks @ 0x1404962BC (EtwpUpdateGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  unsigned __int16 *FlagExtension; // rax
  int v6; // eax
  _DWORD v7[8]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !a2 )
    return EtwpUpdateGroupMasks(a1, v7);
  FlagExtension = EtwpGetFlagExtension(a2, 1);
  if ( !FlagExtension )
  {
    v6 = v7[0];
    if ( *(int *)(a2 + 72) >= 0 )
      v6 = *(_DWORD *)(a2 + 72);
    v7[0] = v6;
    return EtwpUpdateGroupMasks(a1, v7);
  }
  if ( (unsigned __int16)(4 * *FlagExtension - 4) <= 0x20u )
  {
    memmove(v7, FlagExtension + 2, (unsigned __int16)(4 * *FlagExtension - 4));
    return EtwpUpdateGroupMasks(a1, v7);
  }
  return 3221225485LL;
}
