/*
 * XREFs of EtwpInitializeCompression @ 0x1800F4BAC
 * Callers:
 *     EtwpStartUmLogger @ 0x180044BE8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x18007F3D0 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  PVOID Heap; // rax
  int v4; // eax
  ULONG CompressBufferWorkSpaceSize; // [rsp+40h] [rbp+8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  RtlGetCompressionWorkSpaceSize(3u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, CompressBufferWorkSpaceSize);
  *(_QWORD *)(a1 + 440) = Heap;
  if ( !Heap )
    return -1073741801;
  v4 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 456) = 2 * v4;
  RegionSize = (unsigned int)(2 * v4);
  return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 448), 0LL, &RegionSize, 0x1000u, 4u);
}
