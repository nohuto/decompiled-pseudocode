/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C007D5E0
 * Callers:
 *     rimCompleteReads @ 0x1C000F0AC (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C000F190 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C007D4D0 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00CA27C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 != 2 )
    return (a1 & 0x3C) != 0 ? 2 : 0;
  return result;
}
