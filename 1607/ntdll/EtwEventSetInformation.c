/*
 * XREFs of EtwEventSetInformation @ 0x18002A170
 * Callers:
 *     CentennialIssueTracker_EnsureRegistration @ 0x180009310 (CentennialIssueTracker_EnsureRegistration.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180087720 (LdrpResReportResourceAccessInternalInitOnce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventSetInformation(__int64 a1, int a2, __int64 a3, int a4)
{
  int v4; // edx

  if ( a2 )
  {
    v4 = a2 - 2;
    if ( !v4 )
    {
      if ( a3 && (unsigned int)(a4 - 3) <= 0xFFFC )
        return EtwpSetProviderTraits(a1, a3, (unsigned __int16)a4);
      return 87LL;
    }
    if ( v4 != 1 )
      return 50LL;
    if ( a3 && a4 == 1 )
      return EtwpUseDescriptorType(a1, a3);
    return 87LL;
  }
  if ( a4 )
    return 87LL;
  return EtwpTrackProviderBinary();
}
