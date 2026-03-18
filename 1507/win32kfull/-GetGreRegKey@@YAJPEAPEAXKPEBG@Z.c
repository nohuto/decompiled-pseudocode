/*
 * XREFs of ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C013D80C
 * Callers:
 *     vGetLastBootTimeStatus @ 0x1C013CC68 (vGetLastBootTimeStatus.c)
 *     bServicingStackModifiedFonts @ 0x1C013CCD4 (bServicingStackModifiedFonts.c)
 *     vGetJpn98FixPitch @ 0x1C013D250 (vGetJpn98FixPitch.c)
 *     bFntCacheDisabled @ 0x1C013D2A8 (bFntCacheDisabled.c)
 *     QueryFontReg @ 0x1C013D6D4 (QueryFontReg.c)
 *     bSetFntCacheReg @ 0x1C013D788 (bSetFntCacheReg.c)
 *     InitializeDefaultFamilyFonts @ 0x1C0378A6C (InitializeDefaultFamilyFonts.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GetGreRegKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, PCWSTR SourceString)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
