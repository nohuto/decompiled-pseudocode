/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x14046C9F0
 * Callers:
 *     MiExpandVadBitMap @ 0x14046C874 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x14065B50C (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiWriteDemandZeroPte @ 0x14007BD20 (MiWriteDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rdi
  int v5; // esi
  __int64 PteAddress; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int *ProcessPartition; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx

  *a3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  PteAddress = MiGetPteAddress(a1);
  v8 = MiGetPteAddress(v7);
  while ( 1 )
  {
    v9 = PteAddress;
    while ( v9 <= v8 )
    {
      v10 = MiGetPteAddress(v9);
      if ( !MI_READ_PTE_LOCK_FREE(v10) )
      {
        if ( !v5 )
        {
          v19 = v4 + 1;
          v20 = (unsigned __int64)(4096 - (unsigned int)(v9 & 0xFFF)) >> 3;
          if ( v20 > ((__int64)(v8 - v9) >> 3) + 1 )
            v20 = ((__int64)(v8 - v9) >> 3) + 1;
          v4 = v20 + v19;
          v9 += 8 * v20;
          continue;
        }
        MiWriteDemandZeroPte(v13, v11, v12, (__int64)v13);
      }
      if ( !MI_READ_PTE_LOCK_FREE(v9) )
      {
        if ( v5 )
          MiWriteDemandZeroPte((__int64 *)v9, v14, v15, v16);
        else
          ++v4;
      }
      v9 += 8LL;
    }
    if ( !v5 )
    {
      if ( v4 )
      {
        ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( !(unsigned int)MiChargeCommit((__int64)ProcessPartition, v4, 0) )
          return 3221225773LL;
      }
    }
    if ( (unsigned int)++v5 >= 2 )
    {
      *a3 = v4;
      return 0LL;
    }
  }
}
