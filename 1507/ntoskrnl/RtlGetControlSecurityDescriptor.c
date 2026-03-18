/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1405575CC
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     SepHasAllAppPackagesPresent @ 0x1406D7590 (SepHasAllAppPackagesPresent.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
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
