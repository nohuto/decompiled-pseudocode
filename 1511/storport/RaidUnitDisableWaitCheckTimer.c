/*
 * XREFs of RaidUnitDisableWaitCheckTimer @ 0x1C0034230
 * Callers:
 *     RaUnitSetQOSIoctl @ 0x1C0032864 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0023B80 (RaidAdapterDisableQosWaitTimeoutCheck.c)
 */

__int64 __fastcall RaidUnitDisableWaitCheckTimer(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2560), 0, 1);
  if ( (_DWORD)result == 1 )
    return RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  return result;
}
