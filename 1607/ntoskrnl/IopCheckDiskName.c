/*
 * XREFs of IopCheckDiskName @ 0x14013D11C
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x1407A7560 (IopGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     RtlPrefixString @ 0x1404A79A0 (RtlPrefixString.c)
 *     RtlCharToInteger @ 0x140554A50 (RtlCharToInteger.c)
 */

char __fastcall IopCheckDiskName(const STRING *a1, const STRING *a2, ULONG *a3)
{
  char v6; // bl
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString.Length = 0;
  *a3 = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v6 = 0;
  if ( RtlPrefixString(a1, a2, 0) )
  {
    v6 = 1;
    RtlInitAnsiString(&DestinationString, &a2->Buffer[a1->Length]);
    if ( DestinationString.Length > 0xAu )
    {
      if ( RtlPrefixString(&String1, &DestinationString, 0) )
        RtlCharToInteger((PCSZ)DestinationString.Buffer + 10, 0xAu, a3);
    }
  }
  return v6;
}
