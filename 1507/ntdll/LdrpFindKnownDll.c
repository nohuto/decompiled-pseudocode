/*
 * XREFs of LdrpFindKnownDll @ 0x18003FFC4
 * Callers:
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     LdrpAllocateUnicodeString @ 0x18003FBC4 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenSection @ 0x180093C70 (NtOpenSection.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindKnownDll(
        UNICODE_STRING *Source,
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v8; // eax
  int UnicodeString; // ebx
  const WCHAR *v10; // rbx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-48h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1248,
      (unsigned int)"LdrpFindKnownDll",
      3,
      (__int64)"DLL name: %wZ\n",
      Source);
  if ( !LdrpKnownDllDirectoryHandle )
  {
LABEL_11:
    UnicodeString = -1073741515;
    goto LABEL_7;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenSection(SectionHandle, 0xFu, &ObjectAttributes);
  UnicodeString = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  UnicodeString = LdrpAllocateUnicodeString(
                    (__int64)Destination,
                    Source->Length + (unsigned int)LdrpKnownDllPath.Length + 2);
  if ( UnicodeString < 0 )
  {
    NtClose(*SectionHandle);
  }
  else
  {
    RtlAppendUnicodeStringToString(Destination, &LdrpKnownDllPath);
    RtlAppendUnicodeToString(Destination, L"\\");
    v10 = (unsigned __int16 *)((char *)Destination->Buffer + Destination->Length);
    RtlAppendUnicodeStringToString(Destination, Source);
    RtlInitUnicodeStringEx(DestinationString, v10);
    UnicodeString = 0;
  }
LABEL_7:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1320,
      (unsigned int)"LdrpFindKnownDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      UnicodeString);
  return (unsigned int)UnicodeString;
}
