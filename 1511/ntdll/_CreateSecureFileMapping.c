/*
 * XREFs of _CreateSecureFileMapping @ 0x1800F8AF0
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F8BE4 (_ResCCreateMappingExclusive.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     _ResCreateFileMapping @ 0x1800F93F8 (_ResCreateFileMapping.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
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
