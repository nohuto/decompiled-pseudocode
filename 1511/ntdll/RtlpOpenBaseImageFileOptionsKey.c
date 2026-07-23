/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x18007CFD8
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x18007CE90 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007CF18 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180146220;
  KeyHandle = (HANDLE)qword_180146220;
  if ( qword_180146220 )
    goto LABEL_2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180102A30;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180146220, (signed __int64)KeyHandle, 0LL) )
    {
      NtClose(KeyHandle);
      v1 = (HANDLE)qword_180146220;
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
