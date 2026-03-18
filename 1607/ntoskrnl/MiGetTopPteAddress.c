/*
 * XREFs of MiGetTopPteAddress @ 0x14012A3F0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MiCopyTopLevelMappings @ 0x140101694 (MiCopyTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x1401E0EC4 (MiUpdateSystemPdes.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
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
