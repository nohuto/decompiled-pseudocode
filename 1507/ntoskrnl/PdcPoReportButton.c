/*
 * XREFs of PdcPoReportButton @ 0x140599008
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 */

__int64 __fastcall PdcPoReportButton(char a1, char a2)
{
  __int64 v4; // rdx

  PopAcquirePolicyLock();
  if ( (a1 & 1) != 0 )
  {
    if ( a2 )
      LOBYTE(v4) = 1;
    else
      v4 = 0LL;
    PopChangeCapability(&PopCapabilities, v4);
  }
  if ( (a1 & 2) != 0 )
  {
    if ( a2 )
      LOBYTE(v4) = 1;
    else
      v4 = 0LL;
    PopChangeCapability(&unk_14032E521, v4);
  }
  if ( (a1 & 4) != 0 )
  {
    if ( a2 )
      LOBYTE(v4) = 1;
    else
      v4 = 0LL;
    PopChangeCapability(&unk_14032E522, v4);
  }
  return PopReleasePolicyLock();
}
