/*
 * XREFs of SmpCreateEmergencyPagingFile @ 0x14000FAF4
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpClearPagingFileDescriptorList @ 0x14000F620 (SmpClearPagingFileDescriptorList.c)
 */

__int64 SmpCreateEmergencyPagingFile()
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
  SmpClearPagingFileDescriptorList();
  v4 = (PVOID **)SmpPagingFileDescriptorList;
  ++SmpNumberOfPagefileDescriptors;
  *(_QWORD *)&v1->Length = SmpPagingFileDescriptorList;
  v1->Buffer = (PWSTR)&SmpPagingFileDescriptorList;
  if ( v4[1] != &SmpPagingFileDescriptorList )
    __fastfail(3u);
  v4[1] = (PVOID *)v1;
  SmpPagingFileDescriptorList = v1;
  return SmpProcessPagefileDescriptor((__int64)v1);
}
