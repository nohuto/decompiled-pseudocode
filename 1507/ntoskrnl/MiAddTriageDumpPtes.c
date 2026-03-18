/*
 * XREFs of MiAddTriageDumpPtes @ 0x1402185CC
 * Callers:
 *     MmSnapTriageDumpInformation @ 0x140218C8C (MmSnapTriageDumpInformation.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall MiAddTriageDumpPtes(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int i; // edi
  char result; // al

  v2 = a1;
  for ( i = 0; i < 4; ++i )
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !i
      && (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
      && (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0 )
    {
      result = *(_BYTE *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81;
      if ( result == -127 )
        continue;
    }
    result = IoAddTriageDumpDataBlock(v2, 8);
  }
  return result;
}
