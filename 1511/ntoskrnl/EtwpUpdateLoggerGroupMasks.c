/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x1405001FC
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpGetFlagExtension @ 0x1404CABB4 (EtwpGetFlagExtension.c)
 *     EtwpUpdateGroupMasks @ 0x140500298 (EtwpUpdateGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  unsigned __int16 *FlagExtension; // rax
  int v6; // edx
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
