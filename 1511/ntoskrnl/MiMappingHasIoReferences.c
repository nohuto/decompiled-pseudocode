/*
 * XREFs of MiMappingHasIoReferences @ 0x1400C1BA8
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  volatile signed __int64 *v2; // rbx
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v2 = (volatile signed __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  result = MI_READ_PTE_LOCK_FREE(v2);
  if ( (result & 0x80u) == 0LL )
  {
    v2 = (volatile signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    result = MI_READ_PTE_LOCK_FREE(v2);
  }
  do
  {
    v4 = result;
    result = _InterlockedCompareExchange64(v2, result | 0x200, result);
  }
  while ( v4 != result );
  return result;
}
