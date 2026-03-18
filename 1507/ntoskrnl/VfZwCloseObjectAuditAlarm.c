/*
 * XREFs of VfZwCloseObjectAuditAlarm @ 0x14075545C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCloseObjectAuditAlarm(UNICODE_STRING *a1, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString((int)a1, (int)retaddr);
  return pXdvZwCloseObjectAuditAlarm(a1, HandleId, GenerateOnClose);
}
