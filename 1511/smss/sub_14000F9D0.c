/*
 * XREFs of sub_14000F9D0 @ 0x14000F9D0
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     sub_14000F4FC @ 0x14000F4FC (sub_14000F4FC.c)
 */

__int64 sub_14000F9D0()
{
  struct _UNICODE_STRING *Heap; // rax
  struct _UNICODE_STRING *v1; // rbx
  WCHAR *v3; // rax
  PVOID **v4; // rax

  Heap = (struct _UNICODE_STRING *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x60uLL);
  v1 = Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap[1].MaximumLength = 40;
  v3 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, 0x28uLL);
  v1[1].Buffer = v3;
  if ( !v3 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
    return 3221225495LL;
  }
  RtlInitUnicodeString(v1 + 2, 0LL);
  RtlAppendUnicodeToString(v1 + 1, L"\\??\\?:\\pagefile.sys");
  v1[1].Buffer[4] = 63;
  HIDWORD(v1[5].Buffer) |= 6u;
  sub_14000F4FC();
  v4 = (PVOID **)qword_140020450;
  ++dword_14002044C;
  *(_QWORD *)&v1->Length = qword_140020450;
  v1->Buffer = (PWSTR)&qword_140020450;
  if ( v4[1] != &qword_140020450 )
    __fastfail(3u);
  v4[1] = (PVOID *)v1;
  qword_140020450 = v1;
  return sub_140009228((__int64)v1);
}
