/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0027D7C
 * Callers:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0006FA8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C0063DF4 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C0121B44 (GreGetFontUnicodeRanges.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029B174 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C002A324 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ttfdFreeGlyphset @ 0x1C0122AC4 (ttfdFreeGlyphset.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C02D99EC (UmfdTrueTypeFreeGlyphset.c)
 */

void __fastcall PFEOBJ::vFreepfdg(__int64 **this)
{
  void *v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // eax
  __int64 *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = **this;
  GreAcquireSemaphore(ghsemGlyphSet);
  v6 = *((_DWORD *)*this + 35);
  if ( v6 )
  {
    *((_DWORD *)*this + 35) = v6 - 1;
    v7 = *this;
    if ( !*((_DWORD *)*this + 35) )
    {
      v8 = *(_QWORD *)(v4 + 88);
      if ( (struct PDEV *)v8 == gppdevTrueType )
      {
        ttfdFreeGlyphset(*(_QWORD *)(v4 + 80), *((unsigned int *)v7 + 2));
LABEL_5:
        (*this)[2] = 0LL;
        goto LABEL_6;
      }
      if ( v8 == qword_1C0334780 )
      {
        v9 = *(_QWORD *)(v4 + 80);
        if ( !*(_DWORD *)(v9 + 8) )
        {
          UmfdTrueTypeFreeGlyphset(v9, *((unsigned int *)v7 + 2), v7[2]);
          goto LABEL_5;
        }
      }
      if ( (*(_DWORD *)(v8 + 56) & 0x8000) != 0 && *(_QWORD *)(v8 + 3048) )
      {
        if ( *(_BYTE *)(v7[4] + 44) == 2 && (v10 = v7[2]) != 0 && (*(_DWORD *)(v10 + 4) & 0x10) != 0 )
        {
          Win32FreePool(v10, gppdevTrueType, v5);
        }
        else
        {
          v2 = (void *)v7[2];
          v3 = v7[3];
        }
        (*this)[2] = 0LL;
        if ( v2 )
        {
          v11 = *(_QWORD *)(v4 + 88);
          PDEVOBJ::Free((PDEVOBJ *)&v11, v2, v3);
        }
      }
    }
  }
LABEL_6:
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
}
