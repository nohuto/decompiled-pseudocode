/*
 * XREFs of ResFwFindMessage @ 0x1406DC348
 * Callers:
 *     BcpFindMessage @ 0x140788038 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1404A12D4 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_1402D4C38
    && *(_QWORD *)qword_1402D4C38
    && RtlFindMessage(*(PVOID *)qword_1402D4C38, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
