/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x14058056C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x14057E94C (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x1405805C0 (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopNetConnectivityInStandbyCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  if ( a3 == 4 && (unsigned int)*a2 <= 1 )
  {
    v4 = 0;
    PopAcquirePolicyLock();
    dword_140303E58 = *a2;
    if ( dword_140303E58 )
      PopNetClearConnectivityConstraint(1LL);
    else
      PopNetSetConnectivityConstraint(1);
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
