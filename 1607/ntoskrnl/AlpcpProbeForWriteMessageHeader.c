/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x1404B34A4
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404B26D4 (AlpcpProcessConnectionRequest.c)
 *     LpcpRequestWaitReplyPort @ 0x1404B2EC8 (LpcpRequestWaitReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x1404B2FA0 (NtReplyWaitReceivePortEx.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404B3100 (AlpcpReceiveLegacyMessage.c)
 *     LpcpReplyWaitReplyPort @ 0x140654848 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  char result; // al

  if ( (a2 & 0xC0000000) == 0x80000000 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    result = *(_BYTE *)(a1 + 23);
    *(_BYTE *)(a1 + 23) = result;
  }
  else
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    result = *(_BYTE *)(a1 + 39);
    *(_BYTE *)(a1 + 39) = result;
  }
  return result;
}
