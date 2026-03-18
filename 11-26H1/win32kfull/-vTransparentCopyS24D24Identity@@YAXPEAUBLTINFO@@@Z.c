/*
 * XREFs of ?vTransparentCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x14025BC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS24D24Identity(struct BLTINFO *a1)
{
  int v1; // r9d
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // ebx
  _BYTE *v8; // r8
  unsigned __int8 *v9; // rdi
  int v10; // eax
  int v11; // edx
  int v12; // edx

  v1 = *((_DWORD *)a1 + 8);
  v2 = *((_DWORD *)a1 + 7);
  if ( v1 )
  {
    v3 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14) + 2LL;
    v4 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12) + 1LL;
    do
    {
      --v1;
      v5 = v4;
      v6 = v3;
      v7 = v2;
      if ( v2 )
      {
        v8 = (_BYTE *)v3;
        v9 = (unsigned __int8 *)v4;
        do
        {
          v10 = *v9;
          --v7;
          v11 = v9[1];
          v9 += 3;
          v12 = *(v9 - 4) | ((v10 | (v11 << 8)) << 8);
          if ( v12 != *((_DWORD *)a1 + 37) )
          {
            *(v8 - 2) = v12;
            *v8 = BYTE2(v12);
            *(v8 - 1) = BYTE1(v12);
          }
          v8 += 3;
        }
        while ( v7 );
      }
      v3 = v6 + *((int *)a1 + 11);
      v4 = v5 + *((int *)a1 + 10);
    }
    while ( v1 );
  }
}
