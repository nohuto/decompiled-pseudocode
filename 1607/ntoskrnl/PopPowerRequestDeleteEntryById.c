/*
 * XREFs of PopPowerRequestDeleteEntryById @ 0x140503854
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 */

char __fastcall PopPowerRequestDeleteEntryById(int a1)
{
  PVOID v1; // rax
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v4 = a1;
  v1 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v1 )
    LOBYTE(v1) = RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, v1);
  return (char)v1;
}
