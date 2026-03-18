/*
 * XREFs of MiAllocateVad @ 0x140463408
 * Callers:
 *     MiInitializeUserNoAccess @ 0x14046232C (MiInitializeUserNoAccess.c)
 *     MiComputeProcessUserVa @ 0x140463054 (MiComputeProcessUserVa.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140549A5C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiAddSecureEntry @ 0x14047B4A0 (MiAddSecureEntry.c)
 */

_QWORD *__fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v5[5] = 0LL;
    *((_DWORD *)v5 + 13) |= 0x7FFFFFFFu;
    *((_DWORD *)v5 + 6) = a1 >> 12;
    v5[2] = -2LL;
    *((_BYTE *)v5 + 32) = a1 >> 44;
    *((_DWORD *)v5 + 7) = a2 >> 12;
    *((_BYTE *)v5 + 33) = a2 >> 44;
    v6 = v5[6] & 0xFFFFFF0F;
    *((_BYTE *)v5 + 34) = 15;
    *((_DWORD *)v5 + 12) = v6 | 0x8008;
    if ( MiAddSecureEntry((_DWORD)v5, a1, a2, -2147483647, 0) )
      return v5;
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
