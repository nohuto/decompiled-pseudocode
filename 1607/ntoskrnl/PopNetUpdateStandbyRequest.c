/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x14057ED68
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140086B90 (RtlCheckTokenMembership.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x14057EDF8 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140580A6C (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  NTSTATUS v2; // ebx
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  if ( !PopNetBIServiceSid )
    return (unsigned int)-1073741823;
  v2 = RtlCheckTokenMembership(0LL, PopNetBIServiceSid, &IsMember);
  if ( v2 >= 0 )
  {
    if ( !IsMember )
      return (unsigned int)-1073741790;
    PopAcquirePolicyLock();
    if ( PopNetBIRequestActive )
    {
      if ( !a1 )
      {
LABEL_6:
        PopNetBIRequestActive = a1;
        if ( a1 )
          PopNetSetConnectivityConstraint(5LL);
        else
          PopNetClearConnectivityConstraint(5LL);
        goto LABEL_8;
      }
    }
    else if ( a1 )
    {
      goto LABEL_6;
    }
    v2 = -1073741811;
LABEL_8:
    PopReleasePolicyLock();
  }
  return (unsigned int)v2;
}
