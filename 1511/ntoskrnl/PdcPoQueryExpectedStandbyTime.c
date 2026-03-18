/*
 * XREFs of PdcPoQueryExpectedStandbyTime @ 0x140637838
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 */

char __fastcall PdcPoQueryExpectedStandbyTime(unsigned __int64 *a1, _BYTE *a2)
{
  unsigned __int64 v2; // rbx
  char result; // al

  v2 = 0LL;
  if ( (unsigned int)(PopPdcLastCsEnterReason - 5) <= 1 || PopPdcLastCsEnterReason == 12 )
  {
    PopAcquirePolicyLock();
    if ( dword_1402DEAC8 >= (unsigned int)dword_1402DEACC )
    {
      if ( !dword_1402DEACC )
        v2 = -1LL;
    }
    else
    {
      v2 = (unsigned int)PopIdleScanInterval + (unsigned __int64)(unsigned int)(dword_1402DEACC - dword_1402DEAC8);
    }
    PopReleasePolicyLock();
  }
  result = PopWdiCurrentScenarioInstanceId;
  *a2 = PopWdiCurrentScenarioInstanceId;
  *a1 = v2;
  return result;
}
