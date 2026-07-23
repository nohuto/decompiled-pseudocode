/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x180071248
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x1800711C0 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x1800CBDF0 (RtlOpenImageFileOptionsKey.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180071308 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  int v6; // edx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int16 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpOpenBaseImageFileOptionsKey(&v13);
  if ( result >= 0 )
  {
    v6 = *a1;
    v7 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v7 - 2) == 92 )
          break;
        v7 -= 2LL;
        v6 -= 2;
      }
      while ( v6 );
    }
    v8 = *a1 - v6;
    v11 = v7;
    v10 = v8;
    if ( (unsigned __int16)v8 == v8 )
    {
      ObjectAttributes.RootDirectory = v13;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = NtOpenKey(a3, 9u, &ObjectAttributes);
      if ( result >= 0 )
        return RtlpProcessIFEOKeyFilter(a3, v9, a1);
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
