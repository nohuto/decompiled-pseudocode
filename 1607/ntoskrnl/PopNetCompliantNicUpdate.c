/*
 * XREFs of PopNetCompliantNicUpdate @ 0x140673748
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x14066FFD0 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14014B7CC (PopQueueWorkItem.c)
 */

char __fastcall PopNetCompliantNicUpdate(char a1, unsigned int a2)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // zf

  v2 = PopIgnoreCsComplianceCheck;
  if ( !_bittest(&v2, a2) )
  {
    LOBYTE(v2) = 0;
    if ( a1 )
    {
      v2 = ++PopNetCompliantNicCount;
      if ( a2 == 2 )
        PopNetCompliantMbnPresent = 1;
      if ( v2 == 1 )
      {
        LOBYTE(v2) = PopNetClearConnectivityConstraint(6);
        return v2;
      }
      v4 = a2 == 2;
    }
    else
    {
      if ( !PopNetCompliantNicCount )
        return v2;
      v3 = --PopNetCompliantNicCount;
      if ( a2 == 2 )
        PopNetCompliantMbnPresent = 0;
      if ( !v3 )
      {
        LOBYTE(v2) = PopNetSetConnectivityConstraint(6);
        return v2;
      }
      if ( a2 != 2 )
        return v2;
      v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
      v4 = v2 == 2;
    }
    if ( v4 )
      LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_1403026A8);
  }
  return v2;
}
