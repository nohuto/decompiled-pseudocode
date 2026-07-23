/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x1800850A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     NtOpenSection @ 0x1800A6B00 (NtOpenSection.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrGetKnownDllSectionHandle(PCWSTR DllName, BOOLEAN KnownDlls32, PHANDLE Section)
{
  HANDLE v6; // rdi
  int inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3659,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      3,
      (__int64)"DLL name: %ws\n",
      DllName);
  if ( KnownDlls32 )
  {
    if ( !UseWOW64 )
      goto LABEL_13;
    v6 = LdrpKnownDllDirectoryHandle32;
  }
  else
  {
    v6 = LdrpKnownDllDirectoryHandle;
  }
  if ( !v6 )
  {
LABEL_13:
    inited = -1073741816;
    goto LABEL_8;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, DllName);
  if ( inited >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v6;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = NtOpenSection(Section, 0xFu, &ObjectAttributes);
  }
LABEL_8:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3712,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      4,
      (__int64)"Status: 0x%08lx\n",
      inited);
  return inited;
}
