/*
 * XREFs of _CreateSecureFileMapping @ 0x1800F91D8
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     _ResCreateFileMapping @ 0x1800F9AE0 (_ResCreateFileMapping.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 */

__int64 __fastcall CreateSecureFileMapping(HANDLE FileHandle, __int64 a2, __int64 a3, int a4, PCWSTR SourceString)
{
  PVOID Heap; // rax
  __int64 FileMapping; // rbx
  PVOID BaseAddress; // [rsp+38h] [rbp-20h]
  SIZE_T Size; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(Size) = 0;
  ResCreateSecurityDescriptor(2LL, 0LL, &Size);
  if ( !(_DWORD)Size )
    return -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
  BaseAddress = Heap;
  if ( !Heap )
    return -1LL;
  if ( !(unsigned int)ResCreateSecurityDescriptor(2LL, Heap, &Size) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return -1LL;
  }
  FileMapping = ResCreateFileMapping(FileHandle, a4, SourceString);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return FileMapping;
}
