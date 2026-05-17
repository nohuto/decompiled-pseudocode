/*
 * XREFs of EtwpInitializeCompression @ 0x1800F51B0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x180073B40 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 Heap; // rax
  int v4; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h]

  RtlGetCompressionWorkSpaceSize(3u, (__int64)&v5, (__int64)&v6);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  *(_QWORD *)(a1 + 440) = Heap;
  if ( !Heap )
    return 3221225495LL;
  v4 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 456) = 2 * v4;
  v7 = (unsigned int)(2 * v4);
  return ZwAllocateVirtualMemory();
}
