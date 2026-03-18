/*
 * XREFs of ApiSetLeaveEditionCrit @ 0x1C0077E6C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0075FE4 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 * Callees:
 *     IsLeaveEditionCritSupported_0 @ 0x1C0002CB0 (IsLeaveEditionCritSupported_0.c)
 *     LeaveEditionCrit_0 @ 0x1C0002CB8 (LeaveEditionCrit_0.c)
 */

__int64 ApiSetLeaveEditionCrit()
{
  __int64 result; // rax

  result = IsLeaveEditionCritSupported_0();
  if ( (int)result >= 0 )
    return LeaveEditionCrit_0();
  return result;
}
