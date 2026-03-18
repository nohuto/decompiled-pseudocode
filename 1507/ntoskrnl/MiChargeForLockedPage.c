/*
 * XREFs of MiChargeForLockedPage @ 0x14003C5B0
 * Callers:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  bool v4; // bp
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // r9d
  __int16 *v8; // rsi
  unsigned int v9; // edi
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
    v2 = 0xFFFFFFFFLL;
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  if ( (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( v5 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v5 >= 0xFFFFF68000000000uLL )
    {
      v4 = ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0;
    }
  }
  v6 = MiPartitionIdToPointer((HIDWORD(v3) >> 8) & 0x3FF);
  v8 = (__int16 *)v6;
  if ( !v4 || (result = MiChargeCommit(v6, 1LL, v7), (_DWORD)result) )
  {
    v9 = MiChargeResident(v8, 1LL, v2);
    if ( v9 )
    {
      if ( v8 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14034FAC0, 1uLL);
    }
    else if ( v4 )
    {
      MiReturnCommit(v8, 1LL);
    }
    return v9;
  }
  return result;
}
