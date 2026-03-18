/*
 * XREFs of RtlCopyLuid @ 0x1404D86F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlCopyLuid(PLUID DestinationLuid, PLUID SourceLuid)
{
  *DestinationLuid = *SourceLuid;
}
