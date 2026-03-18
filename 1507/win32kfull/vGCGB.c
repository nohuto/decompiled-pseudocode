/*
 * XREFs of vGCGB @ 0x1C014D120
 * Callers:
 *     vCopyGrayBits @ 0x1C014D110 (vCopyGrayBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vGCGB(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 v7; // r10
  int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned __int8 *v11; // r10
  unsigned __int64 result; // rax
  _BYTE *v13; // r8
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // rbp
  unsigned __int8 *v18; // r9
  _BYTE *i; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx

  v6 = a4[4];
  v7 = (unsigned int)a4[2];
  v8 = ((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v6 + v7 + a4[3]);
  v9 = (unsigned int)(v6 + 1) >> 1;
  v10 = 4 * ((unsigned int)(v8 + 31) >> 5);
  if ( *a4 )
    a3 += v10 * *a4;
  *(_DWORD *)(a2 + 8) = v6;
  v11 = (unsigned __int8 *)(a3 + v7);
  result = (unsigned int)a4[5];
  v13 = (_BYTE *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = result;
  v14 = a2 + 16 + (unsigned int)(v9 * a4[5]);
  if ( a2 + 16 < v14 )
  {
    v15 = (unsigned int)v9;
    v16 = (unsigned __int64)&v13[v9];
    v17 = v10;
    do
    {
      v18 = v11;
      for ( i = v13; i < &v13[(unsigned __int64)(unsigned int)a4[4] >> 1]; ++i )
      {
        *i = 16 * byte_1C02E97D0[*v18];
        v20 = v18[1];
        v18 += 2;
        *i += byte_1C02E97D0[v20];
      }
      if ( (a4[4] & 1) != 0 )
        *i++ = 16 * byte_1C02E97D0[*v18];
      v21 = 0LL;
      result = v16 - (_QWORD)i;
      if ( (unsigned __int64)i > v16 )
        result = 0LL;
      if ( result )
      {
        do
        {
          *i = 0;
          ++v21;
          ++i;
        }
        while ( v21 < result );
      }
      v13 += v15;
      v16 += v15;
      v11 += v17;
    }
    while ( (unsigned __int64)v13 < v14 );
  }
  return result;
}
