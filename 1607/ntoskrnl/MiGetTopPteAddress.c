/*
 * XREFs of MiGetTopPteAddress @ 0x14012A960
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MiCopyTopLevelMappings @ 0x1400FF414 (MiCopyTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x1401E0CF0 (MiUpdateSystemPdes.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetTopPteAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
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
