/*
 * XREFs of ProbeForRead_0 @ 0x140298384
 * Callers:
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x1403E211C (RtlCopyToUserFromUser.c)
 *     RtlReadUCharFromUser @ 0x1403E2190 (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1403E2240 (RtlReadUShortFromUser.c)
 *     RtlSetUserMemory @ 0x1403E227C (RtlSetUserMemory.c)
 *     RtlWriteUCharToUser @ 0x1403E22DC (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1403E23B0 (RtlWriteUShortToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
