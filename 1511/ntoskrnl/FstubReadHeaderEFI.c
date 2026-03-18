/*
 * XREFs of FstubReadHeaderEFI @ 0x140516A5C
 * Callers:
 *     IoWritePartitionTableEx @ 0x14051621C (IoWritePartitionTableEx.c)
 *     FstubReadPartitionTableEFI @ 0x1405167E0 (FstubReadPartitionTableEFI.c)
 *     FstubVerifyPartitionTableEFI @ 0x1405F6308 (FstubVerifyPartitionTableEFI.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140104938 (RtlComputeCrc32.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 */

NTSTATUS __fastcall FstubReadHeaderEFI(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *Buffer; // rax
  NTSTATUS result; // eax
  __int64 v8; // rdi
  int v9; // ebx
  ULONG v10; // eax

  Buffer = *(void **)(a1 + 48);
  *a3 = 0LL;
  result = FstubReadSectors(*(PDEVICE_OBJECT *)a1, *(_DWORD *)(a1 + 8), a2, 1, Buffer);
  if ( result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)v8 == 0x5452415020494645LL
      && *(_DWORD *)(v8 + 8) == 0x10000
      && *(_DWORD *)(v8 + 12) == 92
      && *(_DWORD *)(v8 + 84) == 128
      && (unsigned int)(*(_DWORD *)(v8 + 80) - 1) <= 0x3FF
      && *(_QWORD *)(v8 + 24) == a2
      && (v9 = *(_DWORD *)(v8 + 16),
          *(_DWORD *)(v8 + 16) = 0,
          v10 = RtlComputeCrc32(0, (PUCHAR)v8, 0x5Cu),
          *(_DWORD *)(v8 + 16) = v9,
          v10 == v9) )
    {
      *a3 = v8;
      return 0;
    }
    else
    {
      return -1073741774;
    }
  }
  return result;
}
