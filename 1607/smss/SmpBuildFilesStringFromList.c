/*
 * XREFs of SmpBuildFilesStringFromList @ 0x14000A250
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400099F0 (SmpCreatePagingFiles.c)
 *     SmpRecordCreatedPageFiles @ 0x140009B78 (SmpRecordCreatedPageFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpBuildFilesStringFromList(const UNICODE_STRING **a1, struct _UNICODE_STRING *a2)
{
  const UNICODE_STRING *v3; // rcx
  unsigned int v5; // edx
  int Length; // eax
  WCHAR *Heap; // rax
  const UNICODE_STRING *i; // rsi

  v3 = *a1;
  v5 = 2;
  if ( v3 != (const UNICODE_STRING *)a1 )
  {
    do
    {
      Length = v3[1].Length;
      v3 = *(const UNICODE_STRING **)&v3->Length;
      v5 += Length + 2;
    }
    while ( v3 != (const UNICODE_STRING *)a1 );
    if ( v5 > 0xFFFF )
      return 3221225473LL;
  }
  a2->MaximumLength = v5;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
  a2->Buffer = Heap;
  if ( !Heap )
    return 3221225495LL;
  a2->Length = 0;
  for ( i = *a1; i != (const UNICODE_STRING *)a1; i = *(const UNICODE_STRING **)&i->Length )
  {
    RtlAppendUnicodeStringToString(a2, i + 1);
    a2->Length += 2;
  }
  a2->Buffer[(unsigned __int64)a2->Length >> 1] = 0;
  a2->Length += 2;
  return 0LL;
}
