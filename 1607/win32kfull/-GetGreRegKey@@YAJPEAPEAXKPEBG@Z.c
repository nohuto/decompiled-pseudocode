/*
 * XREFs of ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00BBF64
 * Callers:
 *     QueryFontReg @ 0x1C00BBE2C (QueryFontReg.c)
 *     bSetFntCacheReg @ 0x1C00BBEE0 (bSetFntCacheReg.c)
 *     vGetJpn98FixPitch @ 0x1C00BBFD0 (vGetJpn98FixPitch.c)
 *     bFntCacheDisabled @ 0x1C00BC028 (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0x1C00BC858 (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0x1C00BC8D0 (vGetLastBootTimeStatus.c)
 *     InitializeDefaultFamilyFonts @ 0x1C037D90C (InitializeDefaultFamilyFonts.c)
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
