/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800CFD00
 * Callers:
 *     <none>
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x18006C6C0 (RtlPrefixUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x1800767A0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlNtPathNameToDosPathName(
        ULONG Flags,
        PRTL_UNICODE_STRING_BUFFER Path,
        PULONG Disposition,
        PWSTR *FilePart)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v8; // rbp
  const _UNICODE_STRING *v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int16 v11; // di
  unsigned __int64 v12; // r8
  wchar_t *Buffer; // r9
  int Length; // eax
  wchar_t *v15; // rax
  unsigned __int16 v16; // di
  int v17; // eax

  v4 = 0;
  v8 = 0LL;
  if ( Disposition )
    *Disposition = 0;
  if ( !Path )
    return -1073741811;
  if ( Flags )
    return -1073741811;
  if ( FilePart )
  {
    if ( *FilePart )
    {
      v8 = *FilePart - Path->String.Buffer;
      if ( v8 >= (unsigned __int64)Path->String.Length >> 1 )
        return -1073741811;
    }
  }
  v9 = &RtlpDosDevicesUncPrefix;
  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesUncPrefix, &Path->String, 1u) )
  {
    v9 = &RtlpDosDevicesPrefix;
    if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesPrefix, &Path->String, 1u) )
    {
      v10 = (unsigned __int16 *)&RtlpEmptyString;
      if ( Disposition )
        *Disposition = 3;
      goto LABEL_14;
    }
    if ( !Disposition )
      return v4;
    v17 = RtlDetermineDosPathNameType_Ustr(&Path->String.Length);
    if ( v17 )
    {
      if ( v17 <= 0 )
        return v4;
      if ( v17 <= 2 )
      {
LABEL_30:
        *Disposition = 4;
        return v4;
      }
      if ( v17 != 3 && v17 != 4 && v17 != 5 )
      {
        if ( v17 > 7 )
          return v4;
        goto LABEL_30;
      }
    }
    *Disposition = 1;
    return v4;
  }
  v10 = (unsigned __int16 *)&unk_180109318;
  if ( Disposition )
    *Disposition = 2;
LABEL_14:
  v11 = (*v10 >> 1) + (Path->String.Length >> 1) - (v9->Length >> 1);
  v12 = 2LL * v11 + 2;
  if ( v12 > 0xFFFE )
    return -1073741562;
  if ( (Path == (PRTL_UNICODE_STRING_BUFFER)-16LL || v12 > Path->ByteBuffer.Size)
    && (int)RtlpEnsureBufferSize(0, (__int64)&Path->ByteBuffer, v12) < 0 )
  {
    return -1073741801;
  }
  Buffer = (wchar_t *)Path->ByteBuffer.Buffer;
  Path->String.MaximumLength = Path->ByteBuffer.Size;
  Length = Path->String.Length;
  Path->String.Buffer = Buffer;
  memmove(&Buffer[(unsigned __int64)*v10 >> 1], &Buffer[(unsigned __int64)v9->Length >> 1], Length - v9->Length);
  memmove(Path->String.Buffer, *((const void **)v10 + 1), *v10);
  v15 = Path->String.Buffer;
  v16 = 2 * v11;
  Path->String.Length = v16;
  v15[(unsigned __int64)v16 >> 1] = 0;
  if ( v8 )
    *FilePart = &Path->String.Buffer[v8 + ((unsigned __int64)*v10 >> 1) - ((unsigned __int64)v9->Length >> 1)];
  return v4;
}
