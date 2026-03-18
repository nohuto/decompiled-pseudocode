/*
 * XREFs of ?ParseBits@@YAXKPEAK00K@Z @ 0x1C0073FC8
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ParseBits(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx

  v5 = 0;
  while ( (a1 & 1) == 0 )
  {
    a1 >>= 1;
    ++v5;
  }
  v6 = v5;
  do
  {
    a1 >>= 1;
    ++v6;
  }
  while ( (a1 & 1) != 0 );
  v7 = v6 - v5;
  *a4 = v7;
  if ( v7 > 8 )
    v5 = v7 + v5 - 8;
  v8 = a5;
  *a2 = v5;
  if ( v7 <= 8 )
    v8 = a5 - v7 + 8;
  *a3 = v8;
}
