/*
 * XREFs of ?vSrcCopyS8D32@@YAXPEAUBLTINFO@@@Z @ 0x140156A20
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D32(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // rdi
  int v3; // ebx
  int v4; // r11d
  __int64 v5; // rsi
  __int64 v6; // r10
  unsigned __int8 *v7; // r8
  __int64 v8; // r9
  int i; // eax
  __int64 v10; // rcx

  v2 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  while ( 1 )
  {
    v7 = v2;
    v8 = v5;
    for ( i = v3; i; --i )
    {
      v10 = *v7;
      v8 += 4LL;
      ++v7;
      *(_DWORD *)(v8 - 4) = *(_DWORD *)(v6 + 4 * v10);
    }
    if ( !--v4 )
      break;
    v2 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
