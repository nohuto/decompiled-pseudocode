/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x14057E8BC
 * Callers:
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400852A4 (RtlCheckTokenMembership.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x14057E94C (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x1405805C0 (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h]

  if ( !PopNetBIServiceSid )
    return (unsigned int)-1073741823;
  v2 = RtlCheckTokenMembership(0LL, (void *)PopNetBIServiceSid);
  if ( v2 >= 0 )
  {
    if ( !v4 )
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
