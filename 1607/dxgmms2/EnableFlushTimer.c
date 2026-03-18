/*
 * XREFs of EnableFlushTimer @ 0x1C00283C4
 * Callers:
 *     FlushTimerCallbackKernelMode @ 0x1C0028630 (FlushTimerCallbackKernelMode.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1C0028670 (FlushWorkItemRoutineKernelMode.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00286E8 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[1] = -1LL;
    v3[0] = 0LL;
    return ExSetTimer(a1, -10000LL * a2, 0LL, v3);
  }
  return result;
}
