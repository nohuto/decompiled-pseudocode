/*
 * XREFs of PopWiFiInStandbyCallback @ 0x1405C28F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopSnapStandbyNetworkingState @ 0x1405C2938 (PopSnapStandbyNetworkingState.c)
 */

__int64 __fastcall PopWiFiInStandbyCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  if ( a3 == 4 && (unsigned int)*a2 <= 1 )
  {
    v4 = 0;
    PopAcquirePolicyLock();
    dword_14032E898 = *a2;
    PopSnapStandbyNetworkingState();
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
