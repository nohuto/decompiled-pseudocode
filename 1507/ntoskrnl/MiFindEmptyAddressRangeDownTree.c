/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x140527A40
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiFindEmptyAddressRangeDown @ 0x140527984 (MiFindEmptyAddressRangeDown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 j; // rax
  _BYTE *v12; // r11
  unsigned __int64 v13; // rdi
  _BYTE *v14; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v24; // r10
  _BYTE v26[24]; // [rsp+0h] [rbp-68h] BYREF
  int v27; // [rsp+18h] [rbp-50h]
  int v28; // [rsp+1Ch] [rbp-4Ch]
  char v29; // [rsp+20h] [rbp-48h]
  char v30; // [rsp+21h] [rbp-47h]

  v6 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 >= a5 || a5 - a4 + 1 < v6 )
    return 3221225495LL;
  v8 = ~(a3 - 1);
  v9 = v8 & (a5 - v6);
  if ( v9 < a4 )
    return 3221225495LL;
  v10 = *a1;
  if ( v10 )
  {
    j = 0LL;
    do
    {
      v12 = (_BYTE *)v10;
      v10 = *(_QWORD *)(v10 + 8);
    }
    while ( v10 );
    v13 = v9 >> 12;
    v14 = v12;
    v15 = a3 >> 12;
    while ( 1 )
    {
      if ( v12 )
      {
        j = (unsigned __int64)v12;
        v14 = v26;
        v12 = 0LL;
        v29 = (a5 + 1) >> 44;
        v27 = (a5 + 1) >> 12;
      }
      else
      {
        v16 = *(_QWORD *)j;
        v17 = j;
        if ( *(_QWORD *)j )
        {
          j = *(_QWORD *)j;
          for ( i = *(_QWORD *)(v16 + 8); i; i = *(_QWORD *)(i + 8) )
            j = i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)(j + 8) == v17 )
              break;
            v17 = j;
          }
        }
      }
      if ( j )
      {
        v18 = (_BYTE *)j;
        v19 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) + 1;
        if ( v19 < a4 >> 12 )
        {
          v19 = a4 >> 12;
          v18 = v26;
        }
        v20 = v15 - 1;
        v21 = v15 - 1 + v19;
      }
      else
      {
        v28 = 0;
        v21 = (a4 >> 12) + v15 - 1;
        v30 = 0;
        v20 = v15 - 1;
        v18 = v26;
      }
      v22 = ~v20 & v21;
      if ( v22 <= v13 )
      {
        v24 = *((unsigned int *)v14 + 6) | ((unsigned __int64)(unsigned __int8)v14[32] << 32);
        if ( v24 > a5 >> 12 )
          v24 = a5 >> 12;
        if ( v24 > v22 && v6 >> 12 <= v24 - v22 )
          break;
      }
      v14 = v18;
      if ( v18 == v26 )
        return 3221225495LL;
    }
    *a6 = v8 & ((v24 << 12) - v6);
    return 0LL;
  }
  else
  {
    *a6 = v9;
    return 0LL;
  }
}
