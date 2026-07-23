/*
 * XREFs of LdrLogNewDataDllLoad @ 0x18002D37C
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x18002D150 (LdrAddLoadAsDataTable.c)
 * Callees:
 *     LdrpLogNewDllLoadInternal @ 0x1800D19B0 (LdrpLogNewDllLoadInternal.c)
 */

char __fastcall LdrLogNewDataDllLoad(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // r8

  LOBYTE(v2) = MEMORY[0x7FFE0384];
  if ( MEMORY[0x7FFE0384] )
  {
    if ( (MEMORY[0x7FFE0385] & 0x10) != 0
      || MEMORY[0x7FFE0384] && (v2 = NtCurrentPeb(), (v2->TracingFlags & 4) != 0) && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *(_WORD *)(a2 + 2 * v3) );
      v4 = 2 * v3;
      v5 = 0xFFFFFFFFLL;
      if ( (a1 & 2) != 0 )
      {
        v5 = 5LL;
      }
      else if ( (a1 & 1) != 0 )
      {
        v5 = 6LL;
      }
      LOBYTE(v2) = LdrpLogNewDllLoadInternal(a1, 0LL, v5, v4, a2);
    }
  }
  return (char)v2;
}
