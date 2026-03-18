/*
 * XREFs of ?vTransparentCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x140320120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D24(struct BLTINFO *a1)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // esi
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 *v9; // rbp
  int v10; // edi
  char v11; // r14
  _BYTE *v12; // r9
  unsigned int v13; // eax
  __int64 v14; // r11
  unsigned int v15; // eax
  unsigned __int8 *v16; // rax
  int v17; // ecx

  v2 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *((_DWORD *)a1 + 7);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = *((_QWORD *)a1 + 1) + ((__int64)v2 >> 1);
  if ( v3 )
  {
    v7 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14) + 2LL;
    do
    {
      --v3;
      v8 = v7;
      v9 = (unsigned __int8 *)v6;
      v10 = v4;
      v11 = v2;
      if ( v4 )
      {
        v12 = (_BYTE *)v7;
        do
        {
          --v10;
          v13 = *v9;
          v14 = v13 & 0xF;
          v15 = v13 >> 4;
          if ( (v11 & 1) == 0 )
            v14 = v15;
          v16 = v9 + 1;
          if ( (v11 & 1) == 0 )
            v16 = v9;
          ++v11;
          v9 = v16;
          if ( (_DWORD)v14 != *((_DWORD *)a1 + 37) )
          {
            v17 = *(_DWORD *)(v5 + 4 * v14);
            *(v12 - 2) = v17;
            *v12 = BYTE2(v17);
            *(v12 - 1) = BYTE1(v17);
          }
          v12 += 3;
        }
        while ( v10 );
        v2 = *((_DWORD *)a1 + 12);
      }
      v6 += *((int *)a1 + 10);
      v7 = v8 + *((int *)a1 + 11);
    }
    while ( v3 );
  }
}
