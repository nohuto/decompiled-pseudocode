/*
 * XREFs of PdcPoReportButton @ 0x14056DD64
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopChangeCapability @ 0x14056E438 (PopChangeCapability.c)
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
    PopChangeCapability(&unk_140303EA1, v4);
  }
  if ( (a1 & 4) != 0 )
  {
    if ( a2 )
      LOBYTE(v4) = 1;
    else
      v4 = 0LL;
    PopChangeCapability(&unk_140303EA2, v4);
  }
  return PopReleasePolicyLock();
}
