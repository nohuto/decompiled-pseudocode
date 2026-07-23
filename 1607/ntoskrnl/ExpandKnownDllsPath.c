/*
 * XREFs of ExpandKnownDllsPath @ 0x1407A38A0
 * Callers:
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
