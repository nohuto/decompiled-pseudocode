/*
 * XREFs of MiCommitPagefileBackedSection @ 0x14051ABFC
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiChargeSegmentCommit @ 0x14051AD20 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiCommitPagefileBackedSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v10; // rdi
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 ProtoPteAddress; // r14
  int v15; // eax
  unsigned int *v16; // rbx
  __int64 result; // rax
  unsigned int *v18; // rdi
  unsigned int *i; // rcx
  __int64 v20; // rax
  unsigned int *v21; // [rsp+40h] [rbp-48h] BYREF
  unsigned int *v22; // [rsp+48h] [rbp-40h] BYREF

  v10 = a3;
  if ( (a5 | MmCompatibleProtectionMask[(*(_DWORD *)(a2 + 48) >> 3) & 7] | 0x700) != (MmCompatibleProtectionMask[(*(_DWORD *)(a2 + 48) >> 3) & 7] | 0x700) )
    return 3221225550LL;
  v12 = a3 >> 12;
  v13 = a4 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, a3 >> 12, 1u, &v21);
  MiGetProtoPteAddress(a2, v13, 1u, &v22);
  v15 = MiVadPureReserve(a2);
  v16 = v21;
  if ( v15 )
  {
    v18 = v21;
    for ( i = v21; ; i = v18 )
    {
      result = MiAddViewsForSection((__int64)i, 1uLL, 0);
      if ( (int)result < 0 )
        break;
      if ( v18 == v22 )
      {
        if ( !ProtoPteAddress )
        {
          v20 = MiGetProtoPteAddress(a2, v12, 1u, &v21);
          v16 = v21;
          ProtoPteAddress = v20;
        }
        v10 = a3;
        goto LABEL_3;
      }
      v18 = (unsigned int *)*((_QWORD *)v18 + 2);
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)MiChargeSegmentCommit(v16, ProtoPteAddress, v13 - v12 + 1, 0LL) )
      return MiSetProtectionOnSection(a1, a2, v10, a4, a5, 0, a8, a9);
    else
      return 3221225773LL;
  }
  return result;
}
