/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C00713F0
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0071410 (RIMRemoveInputOfType.c)
 *     rimCompleteReads @ 0x1C0075A68 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0075B20 (rimIssueReads.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00C937C (RIMDiscoverSpecificDevice.c)
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
