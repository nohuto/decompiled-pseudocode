/*
 * XREFs of VfZwAccessCheckAndAuditAlarm @ 0x1406D0F98
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAccessCheckAndAuditAlarm(
        UNICODE_STRING *a1,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        UNICODE_STRING *a3,
        UNICODE_STRING *GenericMapping,
        PSECURITY_DESCRIPTOR SecurityDescriptora,
        PACCESS_MASK GrantedAccess,
        GENERIC_MAPPING *GenericMappinga,
        PBOOLEAN GenerateOnClose,
        ACCESS_MASK *GrantedAccessa,
        NTSTATUS *a10,
        BOOLEAN *GenerateOnClosea)
{
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString((int)a1, (int)retaddr);
    ViZwCheckUnicodeString((int)a3, (int)retaddr);
    ViZwCheckUnicodeString((int)GenericMapping, (int)retaddr);
    ViZwCheckVirtualAddress((int)SecurityDescriptora, (int)retaddr);
    ViZwCheckVirtualAddress((int)GenericMappinga, (int)retaddr);
    ViZwCheckVirtualAddress((int)GrantedAccessa, (int)retaddr);
    ViZwCheckVirtualAddress((int)GenerateOnClosea, (int)retaddr);
  }
  return pXdvZwAccessCheckAndAuditAlarm(
           a1,
           SecurityDescriptor,
           a3,
           GenericMapping,
           SecurityDescriptora,
           (ACCESS_MASK)GrantedAccess,
           GenericMappinga,
           (BOOLEAN)GenerateOnClose,
           GrantedAccessa,
           a10,
           GenerateOnClosea);
}
