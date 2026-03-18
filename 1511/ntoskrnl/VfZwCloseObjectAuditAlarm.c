/*
 * XREFs of VfZwCloseObjectAuditAlarm @ 0x1406D1894
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCloseObjectAuditAlarm(UNICODE_STRING *a1, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString((int)a1, (int)retaddr);
  return pXdvZwCloseObjectAuditAlarm(a1, HandleId, GenerateOnClose);
}
