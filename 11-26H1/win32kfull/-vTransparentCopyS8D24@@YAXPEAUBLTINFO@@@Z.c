/*
 * XREFs of ?vTransparentCopyS8D24@@YAXPEAUBLTINFO@@@Z @ 0x140320380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS8D24(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r9
  int v3; // r10d
  __int64 v4; // r14
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 *v8; // rdi
  int v9; // r11d
  _BYTE *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx

  v2 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = *((_DWORD *)a1 + 7);
  if ( v3 )
  {
    v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14) + 2LL;
    do
    {
      --v3;
      v7 = v6;
      v8 = v2;
      v9 = v5;
      if ( v5 )
      {
        v10 = (_BYTE *)v6;
        do
        {
          v11 = *v8;
          --v9;
          ++v8;
          if ( (_DWORD)v11 != *((_DWORD *)a1 + 37) )
          {
            v12 = *(_DWORD *)(v4 + 4 * v11);
            *(v10 - 2) = v12;
            *v10 = BYTE2(v12);
            *(v10 - 1) = BYTE1(v12);
          }
          v10 += 3;
        }
        while ( v9 );
      }
      v2 += *((int *)a1 + 10);
      v6 = v7 + *((int *)a1 + 11);
    }
    while ( v3 );
  }
}
