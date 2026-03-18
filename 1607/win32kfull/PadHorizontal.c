/*
 * XREFs of PadHorizontal @ 0x1C02DD33C
 * Callers:
 *     sbit_GetBitmap @ 0x1C000BD48 (sbit_GetBitmap.c)
 * Callees:
 *     <none>
 */

void __fastcall PadHorizontal(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int16 a4)
{
  unsigned __int16 v5; // di
  int v6; // r10d
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8

  if ( a3 > a2 )
  {
    v5 = a3 - a2;
    v6 = (unsigned __int16)(a4 - 1);
    v7 = a1 + v6 * a2;
    v8 = a1 + v6 * a3;
    if ( a4 )
    {
      v9 = a3;
      do
      {
        v10 = (_BYTE *)(v8 + v9 - 1);
        if ( v5 )
        {
          v11 = v5;
          do
          {
            *v10-- = 0;
            --v11;
          }
          while ( v11 );
        }
        if ( (unsigned __int64)v10 >= v8 )
        {
          v12 = v7 + a2 - (_QWORD)v10;
          do
          {
            *v10 = v10[v12 - 1];
            --v10;
          }
          while ( (unsigned __int64)v10 >= v8 );
        }
        v7 -= a2;
        v8 -= v9;
        --a4;
      }
      while ( a4 );
    }
  }
}
