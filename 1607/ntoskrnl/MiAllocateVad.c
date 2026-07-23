/*
 * XREFs of MiAllocateVad @ 0x14046BFD8
 * Callers:
 *     MiComputeProcessUserVa @ 0x14046CB1C (MiComputeProcessUserVa.c)
 *     MiInitializeUserNoAccess @ 0x1404BF964 (MiInitializeUserNoAccess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x14057F1E4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID PoolWithTag; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_DWORD *)(v5 + 52) |= 0x7FFFFFFFu;
    *(_DWORD *)(v5 + 24) = a1 >> 12;
    *(_QWORD *)(v5 + 16) = -2LL;
    *(_BYTE *)(v5 + 32) = a1 >> 44;
    *(_DWORD *)(v5 + 28) = a2 >> 12;
    *(_BYTE *)(v5 + 33) = a2 >> 44;
    v6 = *(_DWORD *)(v5 + 48) & 0xFFFFFF0F;
    *(_BYTE *)(v5 + 34) = 15;
    *(_DWORD *)(v5 + 48) = v6 | 0x8008;
    if ( MiAddSecureEntry(v5, a1, a2, -2147483647, 0) )
      return v5;
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  return 0LL;
}
