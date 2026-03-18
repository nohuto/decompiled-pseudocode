/*
 * XREFs of PrintBuffData @ 0x1C0044328
 * Callers:
 *     Buffer @ 0x1C0016F20 (Buffer.c)
 *     PrintObject @ 0x1C00443DC (PrintObject.c)
 *     DumpObject @ 0x1C0046324 (DumpObject.c)
 * Callees:
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 */

ULONG __fastcall PrintBuffData(unsigned __int8 *a1, unsigned int a2)
{
  __int64 v3; // rsi
  int v4; // ebx
  const char *v5; // rcx

  v3 = a2;
  ConPrintf("{");
  v4 = 0;
  if ( (int)v3 > 0 )
  {
    do
    {
      v5 = "\n\t0x%02x";
      if ( v4 )
        v5 = ",0x%02x";
      ConPrintf(v5, *a1);
      if ( ++v4 >= 14 )
        v4 = 0;
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  return ConPrintf("}");
}
