/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x18007F100
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x18007F070 (RtlQueryImageFileExecutionOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x180090F30 (RtlOpenImageFileOptionsKey.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2AA0 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007F1C8 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F250 (RtlpProcessIFEOKeyFilter.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, ACCESS_MASK a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  __int16 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpOpenBaseImageFileOptionsKey(&v13);
  if ( result >= 0 )
  {
    v7 = *a1;
    v8 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v8 - 2) == 92 )
          break;
        v8 -= 2LL;
        v7 -= 2;
      }
      while ( v7 );
    }
    v9 = *a1 - v7;
    v11 = v8;
    v10 = v9;
    if ( (unsigned __int16)v9 == v9 )
    {
      ObjectAttributes.RootDirectory = v13;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = NtOpenKey(a3, a2, &ObjectAttributes);
      if ( result >= 0 )
        return RtlpProcessIFEOKeyFilter(a3, a2, a1);
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
