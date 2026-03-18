/*
 * XREFs of vIFIMetricsToEnumLogFontExDvW @ 0x14019ACB8
 * Callers:
 *     bInitSystemFont @ 0x1403FA27C (bInitSystemFont.c)
 *     bInitOneStockFontInternal @ 0x1403FB108 (bInitOneStockFontInternal.c)
 * Callees:
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x140100278 (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x14019AD58 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x14019AE10 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vIFIMetricsToEnumLogFontExDvW(__int64 a1, struct _IFIMETRICS *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int *v7; // rdx

  vIFIMetricsToEnumLogFontW((struct tagENUMLOGFONTW *)a1, a2);
  vLookupScript(a2->jWinCharSet, (unsigned __int16 *)(a1 + 284), v4);
  LODWORD(v5) = 0;
  if ( ((a2->flInfo & 0x4000) != 0 || IsVariableFont(a2)) && a2->cjIfiExtra > 0xC )
  {
    v7 = (ULONG *)((char *)&a2->cjThis + a2[1].dpwszStyleName);
    v6 = a1 + 348;
    v5 = v7[1];
    if ( (unsigned int)v5 > 0x10 )
      v5 = 16LL;
    memmove((void *)(a1 + 348), v7, 4 * v5 + 8);
  }
  else
  {
    v6 = a1 + 348;
    *(_DWORD *)(a1 + 348) = 134248036;
  }
  *(_DWORD *)(v6 + 4) = v5;
}
