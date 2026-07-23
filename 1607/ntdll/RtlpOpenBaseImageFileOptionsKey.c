/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x18007F1C8
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x18007F070 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007F100 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180153360;
  Handle = (HANDLE)qword_180153360;
  if ( !qword_180153360 )
  {
    v4.Length = 48;
    v4.RootDirectory = 0LL;
    v4.Attributes = 576;
    v4.ObjectName = (PUNICODE_STRING)&unk_180108780;
    *(_OWORD *)&v4.SecurityDescriptor = 0LL;
    result = NtOpenKey(&Handle, 9u, &v4);
    if ( result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&qword_180153360, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_180153360;
    }
    else
    {
      v1 = Handle;
    }
  }
  *a1 = v1;
  return 0;
}
