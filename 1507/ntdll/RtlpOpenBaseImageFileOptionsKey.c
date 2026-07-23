/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180071308
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x1800711C0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKey @ 0x180071248 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180147190;
  KeyHandle = (HANDLE)qword_180147190;
  if ( qword_180147190 )
    goto LABEL_2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801028F0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180147190, (signed __int64)KeyHandle, 0LL) )
    {
      NtClose(KeyHandle);
      v1 = (HANDLE)qword_180147190;
    }
    else
    {
      v1 = KeyHandle;
    }
LABEL_2:
    *a1 = v1;
    return 0;
  }
  return result;
}
