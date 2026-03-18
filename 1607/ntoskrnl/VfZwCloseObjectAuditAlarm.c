/*
 * XREFs of VfZwCloseObjectAuditAlarm @ 0x14071DA3C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCloseObjectAuditAlarm(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(a1, (int)retaddr);
  LOBYTE(v6) = a3;
  return pXdvZwCloseObjectAuditAlarm(a1, a2, v6);
}
