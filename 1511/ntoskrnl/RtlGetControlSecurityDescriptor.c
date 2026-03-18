/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1404BF950
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140515DF8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     SepHasAllAppPackagesPresent @ 0x1406556E4 (SepHasAllAppPackagesPresent.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  *Control = *((_WORD *)SecurityDescriptor + 1);
  return 0;
}
