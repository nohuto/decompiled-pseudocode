/*
 * XREFs of AslStringUpper @ 0x1406C56FC
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1406C4354 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

void __fastcall AslStringUpper(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // rbx

  v1 = -1LL;
  v3 = 0LL;
  do
    ++v1;
  while ( *(_WORD *)(a1 + 2 * v1) );
  if ( v1 )
  {
    do
    {
      *(_WORD *)(a1 + 2 * v3) = RtlUpcaseUnicodeChar(*(_WORD *)(a1 + 2 * v3));
      ++v3;
    }
    while ( v3 < v1 );
  }
}
