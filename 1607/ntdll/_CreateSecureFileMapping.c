/*
 * XREFs of _CreateSecureFileMapping @ 0x1801033C4
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1801034B8 (_ResCCreateMappingExclusive.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     _ResCreateFileMapping @ 0x180103CD0 (_ResCreateFileMapping.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
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
