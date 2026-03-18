/*
 * XREFs of AMLIGetNSObjectNotifyFlag @ 0x1C0020C54
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C0072068 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNotifyFlag(__int64 a1)
{
  return (*(unsigned __int8 *)(*(_QWORD *)a1 + 56LL) >> 4) & 1;
}
