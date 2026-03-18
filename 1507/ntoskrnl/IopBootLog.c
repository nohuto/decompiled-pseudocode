/*
 * XREFs of IopBootLog @ 0x140572968
 * Callers:
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     IopOpenRegistryKey @ 0x140539BE4 (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x140670F04 (IopBootLogToFile.c)
 */

void __fastcall IopBootLog(PCUNICODE_STRING Source, char a2)
{
  const UNICODE_STRING *v4; // rdx
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rdi
  ULONG Data; // [rsp+20h] [rbp-E0h]
  ULONG Dataa; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Sourcea; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[256]; // [rsp+70h] [rbp-90h] BYREF
  char v14; // [rsp+270h] [rbp+170h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)&v14;
  if ( qword_14077E018 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_14077E018[4], 1u);
    v4 = qword_14077E018;
    if ( !a2 )
      v4 = qword_14077E018 + 1;
    RtlCopyUnicodeString(&DestinationString, v4);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&Sourcea, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length = Length;
      DestinationString.Buffer[(unsigned __int64)Length >> 1] = 0;
    }
    ++LODWORD(qword_14077E018[10].Buffer);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlCreateUnicodeString(&UnicodeString, pszDest);
    RtlInitUnicodeString(&ValueName, &word_1405C95F0);
    if ( BYTE4(qword_14077E018[10].Buffer) )
    {
      IopBootLogToFile(&DestinationString);
    }
    else
    {
      LOBYTE(Data) = 1;
      if ( IopOpenRegistryKey(
             (HANDLE *)&DestinationString,
             0LL,
             &CmRegistryMachineSystemCurrentControlSetControlBootLog,
             0xF003Fu,
             Data) >= 0 )
      {
        LOBYTE(Dataa) = 1;
        if ( IopOpenRegistryKey(
               (HANDLE *)&Sourcea,
               *(void **)&DestinationString.Length,
               &UnicodeString,
               0xF003Fu,
               Dataa) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Buffer, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    RtlFreeAnsiString(&UnicodeString);
    ExReleaseResourceLite((PERESOURCE)&qword_14077E018[4]);
  }
}
