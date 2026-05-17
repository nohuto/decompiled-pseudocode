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

__int64 __fastcall CreateSecureFileMapping(int a1, int a2, __int64 a3, int a4, PCWSTR SourceString)
{
  __int64 Heap; // rax
  int v9; // r9d
  __int64 FileMapping; // rbx
  int v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v13 = 0LL;
  v14 = 0;
  v12 = 24;
  ResCreateSecurityDescriptor(2LL, 0LL, &v15);
  if ( !v15 )
    return -1LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
  v13 = Heap;
  if ( !Heap )
    return -1LL;
  if ( !(unsigned int)ResCreateSecurityDescriptor(2LL, Heap, &v15) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
    return -1LL;
  }
  FileMapping = ResCreateFileMapping(a1, (int)&v12, a2, v9, a4, SourceString);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  return FileMapping;
}
