/*
 * XREFs of ?vSolidXorRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C02D2D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // rbx
  unsigned __int8 *v9; // r9
  int v10; // ebp
  unsigned int v11; // edi
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  unsigned __int8 *v20; // rdx

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    do
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
        goto LABEL_8;
      }
      *(_DWORD *)&v9[4 * v12] ^= a5 & v17;
      if ( !v10 )
      {
        v12 = (unsigned int)(v12 + 1);
LABEL_8:
        v19 = v16 - v12;
        if ( (_DWORD)v16 != (_DWORD)v12 )
        {
          v20 = &v9[4 * v12];
          do
          {
            *(_DWORD *)v20 ^= a5;
            v20 += 4;
            --v19;
          }
          while ( v19 );
        }
        if ( (_DWORD)v15 )
          *(_DWORD *)&v9[4 * v16] ^= a5 & v18;
      }
      a1 = (struct _ROW *)((char *)a1 + 8);
      v9 += a6;
      --v8;
    }
    while ( v8 );
  }
}
