/*
 * XREFs of SmFpCleanup @ 0x1400F6A78
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140142F28 (SmFpPreAllocate.c)
 *     SmFirstTimeInit @ 0x1404D1E70 (SmFirstTimeInit.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400F8ECC (SmAcquireReleaseCharges.c)
 *     SmKmFreeMdlForLock @ 0x14011098C (SmKmFreeMdlForLock.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmFreeMappingAddress @ 0x1404EA1C0 (MmFreeMappingAddress.c)
 */

void __fastcall SmFpCleanup(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 *v2; // rbp
  void **v3; // rsi
  void **v4; // rdi

  v1 = 0;
  v2 = (unsigned __int16 *)(a1 + 88);
  v3 = (void **)(a1 + 32);
  do
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      if ( !*v3 )
        break;
      *v3 = *v4;
      if ( v1 < 5 )
      {
        if ( v1 == 2 )
        {
          SmKmFreeMdlForLock(v4[1]);
        }
        else if ( v1 == 3 )
        {
          SmAcquireReleaseCharges((unsigned __int64)*v2 << 12, 1LL, 1LL);
        }
        else
        {
          ExFreePoolWithTag(v4[1], 0);
        }
      }
      else
      {
        MmFreeMappingAddress(v4[1], 0x6D526D73u);
      }
      ExFreePoolWithTag(v4, 0);
    }
    ++v1;
    ++v3;
    ++v2;
  }
  while ( v1 < 6 );
}
