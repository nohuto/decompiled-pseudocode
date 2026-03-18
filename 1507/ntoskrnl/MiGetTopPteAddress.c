/*
 * XREFs of MiGetTopPteAddress @ 0x140225B6C
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14006AE80 (MiCopyTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x140210604 (MiUpdateSystemPdes.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
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
