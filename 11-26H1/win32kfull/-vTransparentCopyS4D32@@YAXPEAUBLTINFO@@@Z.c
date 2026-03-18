/*
 * XREFs of ?vTransparentCopyS4D32@@YAXPEAUBLTINFO@@@Z @ 0x140215AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D32(struct BLTINFO *a1)
{
  __int64 v1; // rax
  int v3; // esi
  int v4; // r10d
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned __int8 *v13; // rax
  char v14; // r14
  unsigned __int8 *v15; // rbp
  _DWORD *v16; // r11

  v1 = *(_QWORD *)a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((int *)a1 + 12);
  v6 = *(_QWORD *)(v1 + 16);
  v7 = *((_QWORD *)a1 + 1) + (v5 >> 1);
  v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v15 = (unsigned __int8 *)v7;
    v16 = v8;
    v9 = v3;
    v14 = v5;
    if ( v3 )
    {
      do
      {
        --v9;
        v10 = *v15;
        v11 = v10 & 0xF;
        v12 = v10 >> 4;
        if ( (v14 & 1) == 0 )
          v11 = v12;
        v13 = v15 + 1;
        if ( (v14 & 1) == 0 )
          v13 = v15;
        ++v14;
        v15 = v13;
        if ( (_DWORD)v11 != *((_DWORD *)a1 + 37) )
          *v16 = *(_DWORD *)(v6 + 4 * v11);
        ++v16;
      }
      while ( v9 );
      LODWORD(v5) = *((_DWORD *)a1 + 12);
    }
    v7 += *((int *)a1 + 10);
    v8 = (_DWORD *)((char *)v8 + *((int *)a1 + 11));
  }
}
