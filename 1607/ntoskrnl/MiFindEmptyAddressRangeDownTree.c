/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x1404A698C
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiFindEmptyAddressRangeDown @ 0x1404A68E4 (MiFindEmptyAddressRangeDown.c)
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
  unsigned __int64 v6; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _BYTE *v12; // r12
  unsigned __int64 v13; // r9
  _BYTE *v14; // r15
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _BYTE *v18; // r11
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r8
  _BYTE v25[24]; // [rsp+0h] [rbp-68h] BYREF
  int v26; // [rsp+18h] [rbp-50h]
  int v27; // [rsp+1Ch] [rbp-4Ch]
  char v28; // [rsp+20h] [rbp-48h]
  char v29; // [rsp+21h] [rbp-47h]

  v6 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 >= a5 )
    return 3221225495LL;
  if ( a5 - a4 + 1 < v6 )
    return 3221225495LL;
  v8 = ~(a3 - 1);
  v9 = v8 & (a5 - v6);
  if ( v9 < a4 )
    return 3221225495LL;
  v10 = *a1;
  if ( *a1 )
  {
    v11 = 0LL;
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
        v11 = (unsigned __int64)v12;
        v14 = v25;
        v12 = 0LL;
        v28 = (a5 + 1) >> 44;
        v26 = (a5 + 1) >> 12;
      }
      else
      {
        v16 = *(_QWORD *)v11;
        v17 = v11;
        if ( *(_QWORD *)v11 )
        {
          do
          {
            v11 = v16;
            v16 = *(_QWORD *)(v16 + 8);
          }
          while ( v16 );
        }
        else
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v11 || *(_QWORD *)(v11 + 8) == v17 )
              break;
            v17 = v11;
          }
        }
      }
      if ( v11 )
      {
        v18 = (_BYTE *)v11;
        v19 = (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) + 1;
        if ( v19 < a4 >> 12 )
        {
          v19 = a4 >> 12;
          v18 = v25;
        }
        v20 = v15 - 1;
        v21 = v15 - 1 + v19;
      }
      else
      {
        v27 = 0;
        v29 = 0;
        v18 = v25;
        v21 = (a4 >> 12) + v15 - 1;
        v20 = v15 - 1;
      }
      v22 = ~v20 & v21;
      if ( v22 <= v13 )
      {
        v23 = *((unsigned int *)v14 + 6) | ((unsigned __int64)(unsigned __int8)v14[32] << 32);
        if ( v23 > a5 >> 12 )
          v23 = a5 >> 12;
        if ( v23 > v22 && v6 >> 12 <= v23 - v22 )
          break;
      }
      v14 = v18;
      if ( v18 == v25 )
        return 3221225495LL;
    }
    *a6 = v8 & ((v23 << 12) - v6);
  }
  else
  {
    *a6 = v9;
  }
  return 0LL;
}
