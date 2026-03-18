/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1404EAC00
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14063918C (PiDevCfgGetKeySecurityDescriptor.c)
 *     SepHasAllAppPackagesPresent @ 0x140694E28 (SepHasAllAppPackagesPresent.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
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
