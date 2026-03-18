/*
 * XREFs of GetUserEUDCRegistryPath @ 0x1C000EEAC
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C000ED04 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C000F208 (bAddAllFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C028B33C (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUserEUDCRegistryPath(WCHAR *a1)
{
  NTSTATUS appended; // ebx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+30h] [rbp-10h] BYREF

  Destination.Buffer = a1;
  *(_DWORD *)&Destination.Length = 17039360;
  if ( RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\.DEFAULT");
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = RtlAppendUnicodeToString(&Destination, word_1C0327810);
  }
  else
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
      if ( appended >= 0 )
        appended = RtlAppendUnicodeToString(&Destination, word_1C0327810);
    }
    RtlFreeUnicodeString(&KeyPath);
  }
  if ( appended >= 0 && Destination.Length == Destination.MaximumLength )
    return (unsigned int)-1073741789;
  return (unsigned int)appended;
}
