/*
 * XREFs of PipFreeBindingRequestEntry @ 0x14062B3B4
 * Callers:
 *     PipFreeDependencyEdge @ 0x1401CD0E0 (PipFreeDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x14062AE28 (PipAddRequestToEdge.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingRequestEntry(__int64 a1)
{
  UNICODE_STRING *v2; // rcx

  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v2 = *(UNICODE_STRING **)(a1 + 24);
    if ( v2 )
    {
      RtlFreeAnsiString(v2);
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x53706E50u);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0x53706E50u);
}
