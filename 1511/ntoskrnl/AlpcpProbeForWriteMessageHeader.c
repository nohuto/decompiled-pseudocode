/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x14042338C
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1404234B0 (NtReplyWaitReceivePortEx.c)
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     LpcpRequestWaitReplyPort @ 0x1404AAC20 (LpcpRequestWaitReplyPort.c)
 *     LpcpReplyWaitReplyPort @ 0x14061F5A4 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall AlpcpProbeForWriteMessageHeader(ULONG64 a1, int a2)
{
  char result; // al

  if ( (a2 & 0xC0000000) == 0x80000000 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    result = *(_BYTE *)(a1 + 23);
    *(_BYTE *)(a1 + 23) = result;
  }
  else
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    result = *(_BYTE *)(a1 + 39);
    *(_BYTE *)(a1 + 39) = result;
  }
  return result;
}
