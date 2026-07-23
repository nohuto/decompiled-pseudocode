/*
 * XREFs of PsspDumpObject_Event @ 0x18008AD40
 * Callers:
 *     PsspWalkHandleTable @ 0x18008A7C0 (PsspWalkHandleTable.c)
 * Callees:
 *     NtQueryEvent @ 0x1800A5B80 (NtQueryEvent.c)
 */

NTSTATUS __fastcall PsspDumpObject_Event(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 < 8 )
    return -1073741789;
  else
    return NtQueryEvent(a1, EventBasicInformation, a2, 8u, ReturnLength);
}
