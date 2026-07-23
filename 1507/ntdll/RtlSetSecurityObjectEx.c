/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180047790
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 */

NTSTATUS __cdecl RtlSetSecurityObjectEx(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  int v7; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(
           SecurityInformation,
           SecurityInformation,
           (int)ModificationDescriptor,
           (int)ObjectsSecurityDescriptor,
           AutoInheritFlags,
           v7,
           (__int64)GenericMapping,
           TokenHandle);
}
