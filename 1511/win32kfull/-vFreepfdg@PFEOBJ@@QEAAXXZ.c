/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C001E568
 * Callers:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0001D84 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00170B0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0025C48 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00272FC (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FF734 (GreGetFontUnicodeRanges.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029B5F4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C001CCC8 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ttfdFreeGlyphset @ 0x1C00FD32C (ttfdFreeGlyphset.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C02D693C (UmfdTrueTypeFreeGlyphset.c)
 */

void __fastcall PFEOBJ::vFreepfdg(__int64 **this)
{
  void *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rdi
  int v5; // eax
  __int64 *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = **this;
  GreAcquireSemaphore(ghsemGlyphSet);
  v5 = *((_DWORD *)*this + 35);
  if ( v5 )
  {
    *((_DWORD *)*this + 35) = v5 - 1;
    v6 = *this;
    if ( !*((_DWORD *)*this + 35) )
    {
      v7 = *(_QWORD *)(v4 + 88);
      if ( (struct PDEV *)v7 == gppdevTrueType )
      {
        ttfdFreeGlyphset(*(_QWORD *)(v4 + 80), *((unsigned int *)v6 + 2));
LABEL_5:
        (*this)[2] = 0LL;
        goto LABEL_6;
      }
      if ( v7 == qword_1C032F218 )
      {
        v8 = *(_QWORD *)(v4 + 80);
        if ( !*(_DWORD *)(v8 + 8) )
        {
          UmfdTrueTypeFreeGlyphset(v8, *((unsigned int *)v6 + 2), v6[2]);
          goto LABEL_5;
        }
      }
      if ( (*(_DWORD *)(v7 + 56) & 0x8000) != 0 && *(_QWORD *)(v7 + 3056) )
      {
        if ( *(_BYTE *)(v6[4] + 44) == 2 && (v9 = v6[2]) != 0 && (*(_DWORD *)(v9 + 4) & 0x10) != 0 )
        {
          Win32FreePool(v9);
        }
        else
        {
          v2 = (void *)v6[2];
          v3 = v6[3];
        }
        (*this)[2] = 0LL;
        if ( v2 )
        {
          v10 = *(_QWORD *)(v4 + 88);
          PDEVOBJ::Free((PDEVOBJ *)&v10, v2, v3);
        }
      }
    }
  }
LABEL_6:
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
}
