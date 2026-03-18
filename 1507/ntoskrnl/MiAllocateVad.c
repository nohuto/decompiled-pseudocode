/*
 * XREFs of MiAllocateVad @ 0x140468608
 * Callers:
 *     MiInitializeUserNoAccess @ 0x1404626E4 (MiInitializeUserNoAccess.c)
 *     MiComputeProcessUserVa @ 0x140468250 (MiComputeProcessUserVa.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405C008C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
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
