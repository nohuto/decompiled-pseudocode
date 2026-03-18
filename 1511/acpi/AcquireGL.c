/*
 * XREFs of AcquireGL @ 0x1C0017278
 * Callers:
 *     ParseAcquire @ 0x1C0014C50 (ParseAcquire.c)
 *     AccFieldUnit @ 0x1C0016BC0 (AccFieldUnit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall AcquireGL(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax

  v1 = 0;
  if ( ghGlobalLock )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(__int64), __int64))ghGlobalLock)(
           5LL,
           0LL,
           qword_1C005AAA8,
           RestartCtxtCallback,
           a1 + 328);
    v1 = v2;
    if ( v2 == 259 )
    {
      return 32772;
    }
    else if ( v2 )
    {
      v1 = -1072431086;
      LogError(3222536210LL);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
    }
  }
  return v1;
}
