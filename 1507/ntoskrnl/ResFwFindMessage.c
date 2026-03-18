/*
 * XREFs of ResFwFindMessage @ 0x14075F390
 * Callers:
 *     BcpFindMessage @ 0x1407FDBF0 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140463394 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_140323D78
    && *(_QWORD *)qword_140323D78
    && RtlFindMessage(*(PVOID *)qword_140323D78, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
