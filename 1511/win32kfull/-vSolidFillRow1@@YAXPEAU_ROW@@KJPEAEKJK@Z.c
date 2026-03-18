/*
 * XREFs of ?vSolidFillRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C00F0F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // rbp
  unsigned __int8 *v9; // r9
  int v10; // r10d
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // r14
  int v17; // edi
  int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int8 *v20; // r10
  unsigned __int64 v21; // r8

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    while ( 1 )
    {
      v10 = 0;
      v11 = *(_DWORD *)a1 << a7;
      v12 = v11 >> 5;
      v13 = v11 + ((*((_DWORD *)a1 + 1) - *(_DWORD *)a1) << a7);
      v14 = v11 & 0x1F;
      v15 = v13 & 0x1F;
      v16 = v13 >> 5;
      v17 = aulMsk[v14];
      v18 = ~aulMsk[v15];
      if ( (_DWORD)v12 == (_DWORD)v16 )
      {
        v17 &= v18;
        v10 = 1;
      }
      else if ( !(_DWORD)v14 )
      {
        goto LABEL_5;
      }
      *(_DWORD *)&v9[4 * v12] = a5 & v17 | *(_DWORD *)&v9[4 * v12] & ~v17;
      if ( !v10 )
        break;
LABEL_12:
      a1 = (struct _ROW *)((char *)a1 + 8);
      v9 += a6;
      if ( !--v8 )
        return;
    }
    v12 = (unsigned int)(v12 + 1);
LABEL_5:
    v19 = 4 * (v16 - v12);
    if ( v19 )
    {
      v20 = &v9[4 * v12];
      v21 = (unsigned __int64)v19 >> 2;
      if ( v21 )
      {
        if ( ((unsigned __int8)v20 & 4) == 0 )
          goto LABEL_8;
        *(_DWORD *)v20 = a5;
        if ( --v21 )
        {
          v20 += 4;
LABEL_8:
          memset64(v20, a5 | ((unsigned __int64)a5 << 32), v21 >> 1);
          if ( (v21 & 1) != 0 )
            *(_DWORD *)&v20[4 * v21 - 4] = a5;
        }
      }
    }
    if ( (_DWORD)v15 )
      *(_DWORD *)&v9[4 * v16] = a5 & v18 | *(_DWORD *)&v9[4 * v16] & ~v18;
    goto LABEL_12;
  }
}
