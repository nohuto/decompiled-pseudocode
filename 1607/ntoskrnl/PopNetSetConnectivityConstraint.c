/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x14057EDF8
 * Callers:
 *     PopNetUpdateStandbyRequest @ 0x14057ED68 (PopNetUpdateStandbyRequest.c)
 *     PopNetConnectivityInStandbyCallback @ 0x140580A18 (PopNetConnectivityInStandbyCallback.c)
 *     PopNetCompliantNicUpdate @ 0x140673748 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140673848 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetUserPresencePredictionNotify @ 0x140673898 (PopNetUserPresencePredictionNotify.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14014B7CC (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // dl
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_1403026A8);
  return v2;
}
