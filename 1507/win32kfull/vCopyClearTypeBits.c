/*
 * XREFs of vCopyClearTypeBits @ 0x1C00DECA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vCopyClearTypeBits(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int v9; // edx
  _BYTE *v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // r11
  __int64 v15; // rsi
  _BYTE *i; // rdx

  v7 = (unsigned int)a4[2];
  v8 = (unsigned int)a4[4];
  v9 = 4 * ((unsigned int)(((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v8 + v7 + a4[3]) + 31) >> 5);
  if ( *a4 )
    a3 += v9 * *a4;
  *(_DWORD *)(a2 + 8) = v8;
  v10 = (_BYTE *)(a2 + 16);
  result = (unsigned int)a4[5];
  v12 = a3 + v7;
  *(_DWORD *)(a2 + 12) = result;
  v13 = a2 + 16 + (unsigned int)(v8 * a4[5]);
  if ( a2 + 16 < v13 )
  {
    v14 = (unsigned int)a4[4];
    v15 = v9;
    do
    {
      result = (unsigned __int64)&v10[v14];
      for ( i = v10; i < &v10[v14]; result = (unsigned __int64)&v10[v14] )
      {
        *i = i[v12 - (_QWORD)v10];
        ++i;
        v14 = (unsigned int)a4[4];
      }
      v10 += v8;
      v12 += v15;
    }
    while ( (unsigned __int64)v10 < v13 );
  }
  return result;
}
