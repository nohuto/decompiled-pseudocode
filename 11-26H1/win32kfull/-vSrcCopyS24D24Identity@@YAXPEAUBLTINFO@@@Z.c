/*
 * XREFs of ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401CFA20
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x140294748 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vSrcCopyS24D24Identity(struct BLTINFO *a1)
{
  int v2; // r14d
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rcx

  v2 = *((_DWORD *)a1 + 8);
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14));
  v5 = 3 * *((_DWORD *)a1 + 7);
  if ( *((int *)a1 + 6) < 0 )
  {
    v6 = v5 - 3;
    v3 -= v6;
    v4 -= v6;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)a1 + 16) )
      vSrcAlignCopyMemory(v4, v3, v5);
    else
      memmove(v4, v3, v5);
    if ( !--v2 )
      break;
    v3 += *((int *)a1 + 10);
    v4 += *((int *)a1 + 11);
  }
}
