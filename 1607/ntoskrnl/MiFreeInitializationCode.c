/*
 * XREFs of MiFreeInitializationCode @ 0x14047C33C
 * Callers:
 *     MiFreeDriverInitialization @ 0x14047C25C (MiFreeDriverInitialization.c)
 *     MmDiscardDriverSection @ 0x1407BC1C8 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiClearNonPagedBitMapBits @ 0x140081EB4 (MiClearNonPagedBitMapBits.c)
 *     MiAddExpansionNonPagedPool @ 0x1401436D4 (MiAddExpansionNonPagedPool.c)
 *     MiBadRefCount @ 0x1401F29C4 (MiBadRefCount.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  ULONG_PTR PteAddress; // r12
  unsigned __int64 v7; // r8
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  char *AnyMultiplexedVm; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v18 = 0LL;
  v2 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v5 = a2;
  PteAddress = MiGetPteAddress(a2);
  v8 = a1 + 160;
  v9 = (__int64)(MiGetPteAddress(v7) + 8 - PteAddress) >> 3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v11 = MiGetPteAddress(*(_QWORD *)(a1 + 48));
  MiClearNonPagedBitMapBits(a1 + 160, (__int64)AnyMultiplexedVm, (__int64)(PteAddress - v11) >> 3, v9);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
  {
    for ( ; v9; v9 -= v14 )
    {
      v12 = MiVaToPfn(v5);
      v13 = 48 * v12 - 0x58000000000LL;
      if ( *(_WORD *)(v13 + 32) != 1 )
        MiBadRefCount(v13);
      v14 = 512 - (v12 & 0x1FF);
      if ( v14 > v9 )
        v14 = v9;
      MiAddExpansionNonPagedPool(v12, v14);
      v5 += v14 << 12;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 112);
    if ( v15 )
      v16 = MiSectionControlArea(v15);
    else
      v16 = 0LL;
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v16, PteAddress, v9, 1, &v18);
    v4 = v21;
    v2 = v19;
  }
  if ( v4 )
  {
    *(_QWORD *)(v8 + 40) -= v4;
    *(_QWORD *)(v8 + 48) -= v4;
    MiReturnResidentAvailable(v4);
    v4 -= v2;
    MiReturnCommit((__int64)MiSystemPartition, v4);
  }
  return v4;
}
