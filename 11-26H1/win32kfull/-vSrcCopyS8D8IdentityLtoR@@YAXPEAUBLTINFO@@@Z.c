/*
 * XREFs of ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1401E2CE0
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x140294748 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vSrcCopyS8D8IdentityLtoR(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // rdi
  unsigned __int8 *v3; // rsi
  size_t v4; // r14
  int v5; // ebp

  v2 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v4 = *((unsigned int *)a1 + 7);
  v5 = *((_DWORD *)a1 + 8);
  do
  {
    if ( *((_DWORD *)a1 + 16) )
      vSrcAlignCopyMemory(v3, v2, v4);
    else
      memmove(v3, v2, v4);
    v2 += *((int *)a1 + 10);
    v3 += *((int *)a1 + 11);
    --v5;
  }
  while ( v5 );
}
