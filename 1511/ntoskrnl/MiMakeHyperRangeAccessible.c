/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x140462F18
 * Callers:
 *     MiExpandVadBitMap @ 0x140462D7C (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140625B7C (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiWriteDemandZeroPte @ 0x1400BAC24 (MiWriteDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rdi
  int v6; // esi
  __int64 PteAddress; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 *v10; // rbp
  int *ProcessPartition; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx

  *a3 = 0LL;
  v5 = 0LL;
  v6 = 0;
  PteAddress = MiGetPteAddress(a1);
  v8 = MiGetPteAddress(a2);
  while ( 1 )
  {
    v9 = PteAddress;
    while ( v9 <= v8 )
    {
      v10 = (__int64 *)MiGetPteAddress(v9);
      if ( !MI_READ_PTE_LOCK_FREE(v10) )
      {
        if ( !v6 )
        {
          v13 = v5 + 1;
          v14 = (unsigned __int64)(4096 - (unsigned int)(v9 & 0xFFF)) >> 3;
          if ( v14 > ((__int64)(v8 - v9) >> 3) + 1 )
            v14 = ((__int64)(v8 - v9) >> 3) + 1;
          v5 = v14 + v13;
          v9 += 8 * v14;
          continue;
        }
        MiWriteDemandZeroPte(v10);
      }
      if ( !MI_READ_PTE_LOCK_FREE((__int64 *)v9) )
      {
        if ( v6 )
          MiWriteDemandZeroPte((_QWORD *)v9);
        else
          ++v5;
      }
      v9 += 8LL;
    }
    if ( !v6 )
    {
      if ( v5 )
      {
        ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( !(unsigned int)MiChargeCommit((unsigned __int64)ProcessPartition, v5, 0LL) )
          return 3221225773LL;
      }
    }
    if ( (unsigned int)++v6 >= 2 )
    {
      *a3 = v5;
      return 0LL;
    }
  }
}
