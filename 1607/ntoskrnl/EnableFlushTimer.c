/*
 * XREFs of EnableFlushTimer @ 0x1400F8C24
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140085234 (InsertEventEntryInLookUpTable.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1400AD574 (FlushWorkItemRoutineKernelMode.c)
 *     FlushTimerCallbackKernelMode @ 0x1400B3A30 (FlushTimerCallbackKernelMode.c)
 * Callees:
 *     ExSetTimer @ 0x1400F7AB0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall EnableFlushTimer(ULONG_PTR a1, unsigned int a2)
{
  _BOOL8 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[1] = -1LL;
    v3[0] = 0LL;
    return ExSetTimer(a1, -10000LL * a2, 0LL, (__int64)v3);
  }
  return result;
}
