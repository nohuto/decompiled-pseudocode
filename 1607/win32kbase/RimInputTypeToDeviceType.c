/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C00106C0
 * Callers:
 *     rimCompleteReads @ 0x1C00108C8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0010984 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C007D9C0 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00DA62C (RIMDiscoverSpecificDevice.c)
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
