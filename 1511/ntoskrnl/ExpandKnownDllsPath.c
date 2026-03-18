/*
 * XREFs of ExpandKnownDllsPath @ 0x14075CCB4
 * Callers:
 *     BuildKnownDlls @ 0x14075C938 (BuildKnownDlls.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpandKnownDllsPath(PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  unsigned __int16 v3; // si
  wchar_t *PoolWithTag; // rax
  unsigned int v6; // ebx

  v3 = NtSystemRoot.Length + Source->Length;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3, 0x74696E49u);
  v6 = 0;
  Destination->Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    Destination->Length = 0;
    Destination->MaximumLength = v3;
    RtlCopyUnicodeString(Destination, &NtSystemRoot);
    RtlAppendUnicodeStringToString(Destination, Source);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
