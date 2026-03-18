/*
 * XREFs of MiGetImageProtection @ 0x1404FCBF8
 * Callers:
 *     MiParseImageSectionHeaders @ 0x1404FC730 (MiParseImageSectionHeaders.c)
 * Callees:
 *     <none>
 */

char __fastcall MiGetImageProtection(int a1)
{
  __int64 v1; // rdx

  v1 = (a1 & 0x20000000) != 0;
  if ( (a1 & 0x40000000) != 0 )
    v1 = (unsigned int)v1 | 2;
  if ( a1 < 0 && ((BYTE2(MiFlags) & 3) != 3 || (a1 & 0x20000000) == 0) )
    v1 = (unsigned int)v1 | 4;
  if ( (a1 & 0x10000000) != 0 )
    v1 = (unsigned int)v1 | 8;
  return MiImageProtectionArray[v1];
}
