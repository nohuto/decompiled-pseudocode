/*
 * XREFs of ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x140141980
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x140294748 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vSrcCopyS32D32Identity(struct BLTINFO *a1)
{
  int v2; // r14d
  int v3; // ebp
  unsigned __int8 *v4; // rdi
  unsigned __int8 *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r14d

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  if ( *((int *)a1 + 6) < 0 )
  {
    v6 = 4LL * (unsigned int)(v2 - 1);
    v4 -= v6;
    v5 -= v6;
  }
  v7 = 4 * v2;
  while ( 1 )
  {
    if ( *((_DWORD *)a1 + 16) )
      vSrcAlignCopyMemory(v5, v4, v7);
    else
      memmove(v5, v4, v7);
    if ( !--v3 )
      break;
    v4 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
