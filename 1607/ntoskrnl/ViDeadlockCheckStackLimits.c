/*
 * XREFs of ViDeadlockCheckStackLimits @ 0x1407150A8
 * Callers:
 *     ViDeadlockCanProceed @ 0x140714D14 (ViDeadlockCanProceed.c)
 * Callees:
 *     IoGetStackLimits @ 0x14004EEE0 (IoGetStackLimits.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 */

ULONG ViDeadlockCheckStackLimits()
{
  ULONG result; // eax
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v1 = (unsigned __int64)&v1;
  IoGetStackLimits(&v2, &v3);
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
