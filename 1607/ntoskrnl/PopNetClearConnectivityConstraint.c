/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x1405805C0
 * Callers:
 *     PopNetUpdateStandbyRequest @ 0x14057E8BC (PopNetUpdateStandbyRequest.c)
 *     PopNetConnectivityInStandbyCallback @ 0x14058056C (PopNetConnectivityInStandbyCallback.c)
 *     PopNetCompliantNicUpdate @ 0x140673664 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140673764 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetUserPresencePredictionNotify @ 0x1406737B4 (PopNetUserPresencePredictionNotify.c)
 * Callees:
 *     <none>
 */

char __fastcall PopNetClearConnectivityConstraint(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140302668);
  return v2;
}
