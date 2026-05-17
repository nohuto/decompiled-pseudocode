/*
 * XREFs of LdrLogNewDataDllLoad @ 0x180076A7C
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x180076850 (LdrAddLoadAsDataTable.c)
 * Callees:
 *     LdrpLogNewDllLoadInternal @ 0x1800CA448 (LdrpLogNewDllLoadInternal.c)
 */

char __fastcall LdrLogNewDataDllLoad(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // ecx
  __int64 v6; // r8

  LOBYTE(v2) = MEMORY[0x7FFE0384];
  if ( MEMORY[0x7FFE0384] )
  {
    if ( (MEMORY[0x7FFE0385] & 0x10) != 0
      || MEMORY[0x7FFE0384] && (v2 = NtCurrentPeb(), (v2->TracingFlags & 4) != 0) && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(a2 + 2 * v4) );
      v5 = 2 * v4;
      v6 = 0xFFFFFFFFLL;
      if ( (a1 & 2) != 0 )
      {
        v6 = 5LL;
      }
      else if ( (a1 & 1) != 0 )
      {
        v6 = 6LL;
      }
      LOBYTE(v2) = LdrpLogNewDllLoadInternal(a1, 0LL, v6, v5, a2);
    }
  }
  return (char)v2;
}
