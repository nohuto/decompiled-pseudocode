/*
 * XREFs of SmpIsVhdVolume @ 0x14000779C
 * Callers:
 *     SmpCreateVolumeDescriptor @ 0x140007160 (SmpCreateVolumeDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmpIsVhdVolume(HANDLE FileHandle)
{
  PVOID OutputBuffer; // rax
  void *v3; // rbx
  NTSTATUS v4; // edi
  bool result; // al
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  OutputBuffer = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x208uLL);
  v3 = OutputBuffer;
  result = 0;
  if ( OutputBuffer )
  {
    v4 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x2D5928u, 0LL, 0, OutputBuffer, 0x208u);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
    if ( !v4 || v4 == -1073741789 )
      return 1;
  }
  return result;
}
