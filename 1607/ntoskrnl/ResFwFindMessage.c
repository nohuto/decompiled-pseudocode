/*
 * XREFs of ResFwFindMessage @ 0x140728410
 * Callers:
 *     BcpFindMessage @ 0x1407D4224 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1404FF964 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_1402FA038
    && *(_QWORD *)qword_1402FA038
    && RtlFindMessage(*(PVOID *)qword_1402FA038, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
