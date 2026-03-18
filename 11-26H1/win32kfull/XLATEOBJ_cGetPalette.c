/*
 * XREFs of XLATEOBJ_cGetPalette @ 0x1401850F0
 * Callers:
 *     NtGdiXLATEOBJ_cGetPalette @ 0x140184FA0 (NtGdiXLATEOBJ_cGetPalette.c)
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x14020CB40 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall XLATEOBJ_cGetPalette(XLATEOBJ *pxlo, ULONG iPal, ULONG cPal, ULONG *pPal)
{
  ULONG v4; // r10d
  ULONG v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( pxlo )
  {
    v6 = iPal - 4;
    v7 = 40LL;
    if ( v6 > 1 )
    {
      if ( iPal != 1 )
        v7 = 48LL;
      v10 = *(_QWORD *)((char *)&pxlo->iUniq + v7);
      if ( v10 )
        return XEPALOBJ::ulGetEntries((XEPALOBJ *)&v10, 0, cPal, (struct tagPALETTEENTRY *)pPal, 1);
    }
    else
    {
      if ( iPal != 4 )
        v7 = 48LL;
      v8 = *(_QWORD *)((char *)&pxlo->iUniq + v7);
      if ( v8 && !*(_DWORD *)(v8 + 28) && cPal == 3 )
      {
        v4 = 3;
        *pPal = **(_DWORD **)(v8 + 112);
        pPal[1] = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 4LL);
        pPal[2] = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 8LL);
      }
    }
  }
  return v4;
}
