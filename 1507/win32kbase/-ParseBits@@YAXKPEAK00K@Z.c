/*
 * XREFs of ?ParseBits@@YAXKPEAK00K@Z @ 0x1C000B440
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00B1320 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ParseBits(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int i; // eax
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // eax

  for ( i = 0; (a1 & 1) == 0; ++i )
    a1 >>= 1;
  v7 = i;
  do
  {
    a1 >>= 1;
    ++v7;
  }
  while ( (a1 & 1) != 0 );
  v8 = v7 - i;
  *a4 = v8;
  if ( v8 > 8 )
    i = v8 + i - 8;
  *a2 = i;
  v9 = a5;
  if ( v8 <= 8 )
    v9 = a5 - v8 + 8;
  *a3 = v9;
}
