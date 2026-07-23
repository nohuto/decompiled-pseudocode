/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x14049D884
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 *     LpcpRequestWaitReplyPort @ 0x14049D2A8 (LpcpRequestWaitReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x14049D380 (NtReplyWaitReceivePortEx.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 *     LpcpReplyWaitReplyPort @ 0x14065492C (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
