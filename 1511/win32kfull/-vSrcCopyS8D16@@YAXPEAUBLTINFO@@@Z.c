/*
 * XREFs of ?vSrcCopyS8D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C2F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D16(struct BLTINFO *a1)
{
  int v1; // ebx
  unsigned __int8 *v2; // r8
  int v3; // esi
  int v4; // edi
  _WORD *v5; // rdx
  __int64 v6; // r11
  int i; // ebp
  int v8; // r9d
  int v9; // r9d
  unsigned __int64 v10; // r10
  int v11; // ecx
  __int64 v12; // rax

  v1 = *((_DWORD *)a1 + 7);
  v2 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v3 = *((_DWORD *)a1 + 10) - v1;
  v4 = *((_DWORD *)a1 + 8);
  v5 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  for ( i = *((_DWORD *)a1 + 11) - 2 * v1; ; v5 = (_WORD *)((char *)v5 + i) )
  {
    v8 = v1;
    if ( ((unsigned __int8)v5 & 2) != 0 )
    {
      v8 = v1 - 1;
      *v5++ = *(_WORD *)(v6 + 4LL * *v2++);
    }
    v9 = v8 - 2;
    if ( v9 >= 0 )
    {
      v10 = (unsigned __int64)(unsigned int)(v9 + 2) >> 1;
      v9 -= 2 * ((unsigned int)(v9 + 2) >> 1);
      do
      {
        v11 = *(_DWORD *)(v6 + 4LL * v2[1]);
        v12 = *v2;
        v2 += 2;
        *(_DWORD *)v5 = *(_DWORD *)(v6 + 4 * v12) | (v11 << 16);
        v5 += 2;
        --v10;
      }
      while ( v10 );
    }
    if ( (v9 & 1) != 0 )
      *v5++ = *(_WORD *)(v6 + 4LL * *v2++);
    if ( !--v4 )
      break;
    v2 += v3;
  }
}
