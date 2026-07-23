/*
 * XREFs of xtow @ 0x14014D694
 * Callers:
 *     _itow @ 0x14014D64C (_itow.c)
 *     _ultow @ 0x14014D678 (_ultow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xtow(unsigned int a1, __int16 *a2, unsigned int a3, int a4)
{
  __int16 *v5; // r10
  unsigned int v6; // eax
  __int16 *v7; // r8
  unsigned int v8; // edx
  __int16 v9; // dx
  __int16 *v10; // r10
  __int64 result; // rax
  __int16 v12; // cx

  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -a1;
  }
  v7 = v5;
  do
  {
    v8 = v6 % a3;
    v6 /= a3;
    if ( v8 <= 9 )
      v9 = v8 + 48;
    else
      v9 = v8 + 87;
    *v5++ = v9;
  }
  while ( v6 );
  *v5 = 0;
  v10 = v5 - 1;
  do
  {
    result = (unsigned __int16)*v7;
    v12 = *v10;
    *v10-- = result;
    *v7++ = v12;
  }
  while ( v7 < v10 );
  return result;
}
