/*
 * XREFs of MiFreeInitializationCode @ 0x140573D08
 * Callers:
 *     MiFreeDriverInitialization @ 0x140573BE0 (MiFreeDriverInitialization.c)
 *     MmDiscardDriverSection @ 0x1407E7104 (MmDiscardDriverSection.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiClearNonPagedBitMapBits @ 0x1401539D0 (MiClearNonPagedBitMapBits.c)
 *     MiAddExpansionNonPagedPool @ 0x140168300 (MiAddExpansionNonPagedPool.c)
 *     MiBadRefCount @ 0x1402261D8 (MiBadRefCount.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v14 = 0LL;
  v4 = a2;
  v5 = a1 + 160;
  v6 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v8 = (__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - (_QWORD)v6 - 0x97FFFFFFFF8LL) >> 3;
  MiClearNonPagedBitMapBits(
    a1 + 160,
    dword_14034FF40,
    (__int64)(((a2 >> 9) & 0x7FFFFFFFF8LL) - ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL)) >> 3,
    v8);
  if ( (*(_BYTE *)(8 * ((v4 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    for ( ; v8; v8 -= v13 )
    {
      v12 = ((v4 >> 12) & 0x1FF) + ((*(_QWORD *)(((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL);
      if ( *(_WORD *)(48 * v12 - 0x58000000000LL + 32) != 1 )
        MiBadRefCount(48 * v12 - 0x58000000000LL);
      v13 = 512 - (v12 & 0x1FF);
      if ( v13 > v8 )
        v13 = v8;
      MiAddExpansionNonPagedPool(v12, v13);
      v4 += v13 << 12;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 112);
    if ( v9 )
      v10 = MiSectionControlArea(v9);
    else
      v10 = 0LL;
    MiDeleteSystemPagableVm((__int64)dword_14034FF40, v10, v6, v8, 1, &v14);
    v7 = v17;
  }
  if ( v7 )
  {
    *(_QWORD *)(v5 + 40) -= v7;
    *(_QWORD *)(v5 + 48) -= v7;
    MiReturnResidentAvailable(v7);
    _InterlockedExchangeAdd64(&qword_14034F9A0, v7);
    v7 = v17 - v15;
    MiReturnCommit((__int64)MiSystemPartition, v17 - v15);
  }
  return v7;
}
