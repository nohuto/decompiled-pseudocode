/*
 * XREFs of PopWiFiInStandbyCallback @ 0x14054B42C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopSnapStandbyNetworkingState @ 0x14054B474 (PopSnapStandbyNetworkingState.c)
 */

__int64 __fastcall PopWiFiInStandbyCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  if ( a3 == 4 && (unsigned int)*a2 <= 1 )
  {
    v4 = 0;
    PopAcquirePolicyLock();
    dword_1402DE2D8 = *a2;
    PopSnapStandbyNetworkingState();
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
