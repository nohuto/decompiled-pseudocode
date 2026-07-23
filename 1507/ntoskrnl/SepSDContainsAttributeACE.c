/*
 * XREFs of SepSDContainsAttributeACE @ 0x1406D7ED8
 * Callers:
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400459A0 (RtlFindAceByType.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140501210 (RtlGetSaclSecurityDescriptor.c)
 */

bool __fastcall SepSDContainsAttributeACE(void *a1)
{
  char v1; // bl
  PACL Acl; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v4; // [rsp+48h] [rbp+10h] BYREF
  BOOLEAN v5; // [rsp+50h] [rbp+18h] BYREF
  ULONG Index; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  Acl = 0LL;
  v4 = 0;
  Index = 0;
  if ( RtlGetSaclSecurityDescriptor(a1, &v4, &Acl, &v5) >= 0 && v4 )
    return RtlFindAceByType(Acl, 0x12u, &Index) != 0LL;
  return v1;
}
