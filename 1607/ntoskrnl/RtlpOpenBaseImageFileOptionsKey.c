/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1404D3228
 * Callers:
 *     RtlpOpenImageFileOptionsKey @ 0x1404D3154 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14055E260 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  NTSTATUS result; // eax
  ULONG v4; // edx
  bool v5; // zf
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_140329CB0;
  KeyHandle = (HANDLE)qword_140329CB0;
  if ( qword_140329CB0 )
    goto LABEL_2;
  v4 = 576;
  v5 = KeGetCurrentThread()->PreviousMode == 1;
  ObjectAttributes.Length = 48;
  if ( v5 )
    v4 = 1600;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1402575D0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = v4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_140329CB0, (signed __int64)KeyHandle, 0LL) )
    {
      ZwClose(KeyHandle);
      v1 = (HANDLE)qword_140329CB0;
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
