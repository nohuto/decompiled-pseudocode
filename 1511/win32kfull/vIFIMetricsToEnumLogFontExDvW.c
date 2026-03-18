/*
 * XREFs of vIFIMetricsToEnumLogFontExDvW @ 0x1C00D137C
 * Callers:
 *     bInitOneStockFontInternal @ 0x1C03785D8 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C037A30C (bInitSystemFont.c)
 * Callees:
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C001B578 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C001D6BC (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void __fastcall vIFIMetricsToEnumLogFontExDvW(__int64 a1, struct _IFIMETRICS *a2)
{
  unsigned int *v4; // rdx
  __int64 v5; // rbx

  vIFIMetricsToEnumLogFontW((struct tagENUMLOGFONTW *)a1, a2);
  vLookupScript(a2->jWinCharSet, (unsigned __int16 *)(a1 + 284));
  if ( (a2->flInfo & 0x4000) != 0 && a2->cjIfiExtra > 0xC )
  {
    v4 = (ULONG *)((char *)&a2->cjThis + a2[1].dpwszStyleName);
    v5 = v4[1];
    if ( (unsigned int)v5 > 0x10 )
      v5 = 16LL;
    memmove((void *)(a1 + 348), v4, 4 * v5 + 8);
    *(_DWORD *)(a1 + 352) = v5;
  }
  else
  {
    *(_DWORD *)(a1 + 352) = 0;
    *(_DWORD *)(a1 + 348) = 134248036;
  }
}
