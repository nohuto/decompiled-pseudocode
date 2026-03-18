/*
 * XREFs of MyRegOpenKeyForRead @ 0x1C0057FB4
 * Callers:
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C00577A8 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C005791C (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C00579D8 (ReadTestOverrideValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0057AA4 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C0057D64 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MyRegOpenKeyForRead(__int64 a1, const WCHAR *a2, void **a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
}
