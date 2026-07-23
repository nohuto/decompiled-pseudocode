/*
 * XREFs of MiMappingHasIoReferences @ 0x14009BF74
 * Callers:
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  int i; // eax
  unsigned __int64 v2; // r10
  __int64 v3; // r11
  signed __int64 result; // rax
  volatile signed __int64 *v5; // r10
  signed __int64 v6; // rtt

  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v2 = v3 + ((v2 >> 9) & 0x7FFFFFFFF8LL);
  result = MI_READ_PTE_LOCK_FREE(v2);
  do
  {
    v6 = result;
    result = _InterlockedCompareExchange64(v5, result | 0x200, result);
  }
  while ( v6 != result );
  return result;
}
