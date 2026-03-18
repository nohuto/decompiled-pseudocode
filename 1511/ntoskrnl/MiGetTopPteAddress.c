/*
 * XREFs of MiGetTopPteAddress @ 0x14011F70C
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14001883C (MiCopyTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x1401D0868 (MiUpdateSystemPdes.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetTopPteAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 3LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  return v1;
}
