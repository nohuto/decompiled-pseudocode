/*
 * XREFs of ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00F5E28
 * Callers:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C00F5D3C (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

struct _SPRITERANGE *__fastcall pSpGrowRanges(
        struct _SPRITESTATE *a1,
        struct _SPRITERANGE *a2,
        struct _SPRITESCAN **a3,
        struct _SPRITERANGE **a4)
{
  __int64 v4; // rax
  __int64 v7; // rbp
  char *v9; // rsi
  char *v10; // r14
  void *v11; // rax
  void *v12; // rdi
  struct _SPRITERANGE *result; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax

  v4 = *((_QWORD *)a1 + 18);
  v7 = *((_QWORD *)a1 + 19) - v4 + 360;
  v9 = (char *)a2 - v4;
  v10 = (char *)*a3 - v4;
  v11 = PALLOCMEM2((unsigned int)(*((_DWORD *)a1 + 38) - v4 + 360), 1919972167LL, 0);
  v12 = v11;
  if ( v11 )
  {
    memmove(v11, *((const void **)a1 + 18), (size_t)v9);
    Win32FreePool(*((_QWORD *)a1 + 18));
    *((_QWORD *)a1 + 18) = v12;
    *a3 = (struct _SPRITESCAN *)&v10[(_QWORD)v12];
    *((_QWORD *)a1 + 19) = (char *)v12 + v7;
    *a4 = (struct _SPRITERANGE *)((char *)v12 + v7 - 56);
    return (struct _SPRITERANGE *)&v9[(_QWORD)v12];
  }
  else
  {
    v14 = *((_QWORD *)a1 + 18);
    *(_DWORD *)v14 = *((_DWORD *)a1 + 13);
    v15 = *((_DWORD *)a1 + 15);
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 4) = v15;
    *(_QWORD *)(v14 + 8) = 40LL;
    *(_DWORD *)(v14 + 24) = *((_DWORD *)a1 + 12);
    v16 = *((_DWORD *)a1 + 14);
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)(v14 + 28) = v16;
    *((_QWORD *)a1 + 19) = v14 + 40;
    result = 0LL;
    *((_QWORD *)a1 + 18) = v14;
  }
  return result;
}
