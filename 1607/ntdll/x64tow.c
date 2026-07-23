/*
 * XREFs of x64tow @ 0x180097650
 * Callers:
 *     _i64tow @ 0x180097570 (_i64tow.c)
 *     _ui64tow @ 0x180097610 (_ui64tow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall x64tow(unsigned __int64 a1, __int16 *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // r11
  __int16 *v5; // r10
  unsigned __int64 v6; // rax
  __int16 *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rtt
  __int16 v10; // dx
  __int16 *v11; // r10
  __int64 result; // rax
  __int16 v13; // cx

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -(__int64)a1;
  }
  v7 = v5;
  do
  {
    v9 = v6;
    v6 /= v4;
    v8 = v9 % v4;
    if ( (unsigned int)(v9 % v4) <= 9 )
      v10 = v8 + 48;
    else
      v10 = v8 + 87;
    *v5++ = v10;
  }
  while ( v6 );
  *v5 = 0;
  v11 = v5 - 1;
  do
  {
    result = (unsigned __int16)*v7;
    v13 = *v11;
    *v11-- = result;
    *v7++ = v13;
  }
  while ( v7 < v11 );
  return result;
}
