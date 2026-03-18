/*
 * XREFs of SeSetSecurityDescriptorInfoEx @ 0x1406550A4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfoEx(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             (__int64)Object,
             *SecurityInformation,
             (__int64)ModificationDescriptor,
             (__int64 *)ObjectsSecurityDescriptor,
             AutoInheritFlags,
             PoolType,
             (__int64)GenericMapping);
  else
    return -1073741609;
}
