/*
 * XREFs of ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00D45D4
 * Callers:
 *     QueryFontReg @ 0x1C00D449C (QueryFontReg.c)
 *     bSetFntCacheReg @ 0x1C00D4550 (bSetFntCacheReg.c)
 *     vGetJpn98FixPitch @ 0x1C00D4640 (vGetJpn98FixPitch.c)
 *     bFntCacheDisabled @ 0x1C00D4698 (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0x1C00D47E0 (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0x1C00D4858 (vGetLastBootTimeStatus.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03788F0 (InitializeDefaultFamilyFonts.c)
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
