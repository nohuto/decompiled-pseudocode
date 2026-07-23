/*
 * XREFs of _ui64toa @ 0x180097430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  char *v5; // r9
  char *v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rtt
  char v9; // dl
  char *v10; // r9
  char v11; // cl

  v5 = Buffer;
  v6 = Buffer;
  do
  {
    v8 = Value;
    Value /= (unsigned int)Radix;
    v7 = v8 % (unsigned int)Radix;
    if ( (unsigned int)v7 <= 9 )
      v9 = v7 + 48;
    else
      v9 = v7 + 87;
    *v5++ = v9;
  }
  while ( Value );
  *v5 = 0;
  v10 = v5 - 1;
  do
  {
    v11 = *v10;
    *v10-- = *v6;
    *v6++ = v11;
  }
  while ( v6 < v10 );
  return Buffer;
}
