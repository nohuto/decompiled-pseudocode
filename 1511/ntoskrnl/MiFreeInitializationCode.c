/*
 * XREFs of MiFreeInitializationCode @ 0x1403CDAD4
 * Callers:
 *     MiFreeDriverInitialization @ 0x1403CD9BC (MiFreeDriverInitialization.c)
 *     MmDiscardDriverSection @ 0x14074E43C (MmDiscardDriverSection.c)
 * Callees:
 *     MiClearNonPagedBitMapBits @ 0x14001A124 (MiClearNonPagedBitMapBits.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiAddExpansionNonPagedPool @ 0x14013713C (MiAddExpansionNonPagedPool.c)
 *     MiBadRefCount @ 0x1401DFF9C (MiBadRefCount.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v6; // rbp
  ULONG_PTR PteAddress; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *PdeAddress; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v17 = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = a2;
  PteAddress = MiGetPteAddress(a2);
  v8 = (__int64)(MiGetPteAddress(a3) + 8 - PteAddress) >> 3;
  v9 = MiGetPteAddress(a1[6]);
  MiClearNonPagedBitMapBits((__int64)(a1 + 20), &dword_1402FFA80, (__int64)(PteAddress - v9) >> 3, v8);
  if ( (*(_BYTE *)(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v6 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)MiGetPdeAddress(v6) & 0x81) == 0x81 )
  {
    for ( ; v8; v8 -= v16 )
    {
      PdeAddress = (_QWORD *)MiGetPdeAddress(v6);
      v15 = (v14 & (v6 >> 12)) + ((*PdeAddress >> 12) & 0xFFFFFFFFFLL);
      if ( *(_WORD *)(48 * v15 - 0x58000000000LL + 32) != 1 )
        MiBadRefCount(48 * v15 - 0x58000000000LL);
      v16 = 512 - (v14 & v15);
      if ( v16 > v8 )
        v16 = v8;
      MiAddExpansionNonPagedPool(v15, v16);
      v6 += v16 << 12;
    }
  }
  else
  {
    v10 = a1[14];
    if ( v10 )
      v11 = MiSectionControlArea(v10);
    else
      v11 = 0LL;
    MiDeleteSystemPagableVm(&dword_1402FFA80, v11, PteAddress, v8, 1, &v17);
    v3 = v20;
  }
  if ( v3 )
  {
    a1[25] -= v3;
    a1[26] -= v3;
    MiReturnResidentAvailable(v3);
    _InterlockedExchangeAdd64(&qword_1402FF520, v3);
    v3 = v20 - v18;
    MiReturnCommit((__int64)MiSystemPartition, v20 - v18);
  }
  return v3;
}
