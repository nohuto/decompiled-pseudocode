/*
 * XREFs of ?vTransparentCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x14018A640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS32D32Identity(struct BLTINFO *a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // r10d
  __int64 v5; // rax
  int v6; // edx
  _DWORD *v7; // rcx
  int *v8; // r9
  int i; // ebx
  int v10; // r11d
  _DWORD *v11; // rdi
  int *v12; // rax

  v1 = *((_QWORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *(_QWORD *)(v1 + 128);
  if ( v5 || (*(_DWORD *)(v1 + 112) & 0x100) != 0 )
    v6 = **(_DWORD **)(v5 + 112) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 8LL);
  else
    v6 = -1;
  v7 = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v8 = (int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v11 = v7;
    v12 = v8;
    for ( i = v3; i; ++v12 )
    {
      --i;
      v10 = *v11++ & v6;
      if ( v10 != *((_DWORD *)a1 + 37) )
        *v12 = v10;
    }
    v7 = (_DWORD *)((char *)v7 + *((int *)a1 + 10));
    v8 = (int *)((char *)v8 + *((int *)a1 + 11));
  }
}
