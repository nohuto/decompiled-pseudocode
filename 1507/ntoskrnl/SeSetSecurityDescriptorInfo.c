/*
 * XREFs of SeSetSecurityDescriptorInfo @ 0x1404CF374
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404CF3B0 (ObSetSecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140550548 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfo(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             (__int64)Object,
             *SecurityInformation,
             (__int64)ModificationDescriptor,
             (__int64 *)ObjectsSecurityDescriptor,
             0,
             PoolType,
             GenericMapping);
  else
    return -1073741609;
}
