/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1404ADFC4
 * Callers:
 *     RtlpOpenImageFileOptionsKey @ 0x1404ADEF0 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14051F04C (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  NTSTATUS result; // eax
  ULONG v4; // edx
  bool v5; // zf
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_140306F90;
  KeyHandle = (HANDLE)qword_140306F90;
  if ( qword_140306F90 )
    goto LABEL_2;
  v4 = 576;
  v5 = KeGetCurrentThread()->PreviousMode == 1;
  ObjectAttributes.Length = 48;
  if ( v5 )
    v4 = 1600;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_14023D578;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = v4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_140306F90, (signed __int64)KeyHandle, 0LL) )
    {
      ZwClose(KeyHandle);
      v1 = (HANDLE)qword_140306F90;
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
