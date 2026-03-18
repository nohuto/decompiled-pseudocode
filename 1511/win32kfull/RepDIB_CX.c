/*
 * XREFs of RepDIB_CX @ 0x1C00016C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RepDIB_CX(__int64 a1, __int16 *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r11
  unsigned __int16 *v7; // rax
  int v8; // ecx
  char v9; // r9
  __int16 v10; // r10

  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v7 = *(unsigned __int16 **)(a1 + 88);
    v8 = 1;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( !--v8 )
      {
        v8 = *v7;
        v10 = *a2;
        v9 = *((_BYTE *)a2 + 2);
        if ( (unsigned __int64)v7 < v5 )
        {
          ++v7;
          a2 = (__int16 *)((char *)a2 + 3);
        }
      }
      *(_WORD *)a3 = v10;
      *(_BYTE *)(a3 + 2) = v9;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
}
