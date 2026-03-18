/*
 * XREFs of ViDeadlockCheckStackLimits @ 0x140750B4C
 * Callers:
 *     ViDeadlockCanProceed @ 0x1407507C0 (ViDeadlockCanProceed.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 */

ULONG ViDeadlockCheckStackLimits()
{
  ULONG result; // eax
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v1 = (unsigned __int64)&v1;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v2, (__int64)&v3) )
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  result = v1;
  if ( v1 < v2 || (result = v1, v1 > v3) )
  {
    if ( VfVerifyMode > 2 )
    {
      result = ViStackSwitchAlreadyReported;
      if ( !ViStackSwitchAlreadyReported )
      {
        result = DbgPrintEx(0x5Du, 0, "DVRF: Driver switched stacks using an unsupported method!\n");
        ViStackSwitchAlreadyReported = 1;
      }
    }
  }
  return result;
}
