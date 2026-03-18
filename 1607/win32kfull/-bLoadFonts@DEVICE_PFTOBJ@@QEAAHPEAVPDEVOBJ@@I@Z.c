/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025A6C4
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C002A12C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00268F8 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0028190 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0064574 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00645D8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C010E200 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B6618 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B693C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2, unsigned int a3)
{
  BOOL v7; // r15d
  unsigned __int64 v8; // rdx
  signed __int32 v9; // ett
  SEMOBJ *v10; // rcx
  unsigned __int64 v11; // rdx
  signed __int32 v12; // ett
  __int64 v13; // rdx
  __int64 v14; // rax
  struct PFF **v15; // rcx
  unsigned __int64 v16; // rdx
  signed __int32 v17; // ett
  unsigned __int64 v18; // rdx
  signed __int32 v19; // ett
  size_t Size; // [rsp+30h] [rbp-59h]
  HDEV v21; // [rsp+40h] [rbp-49h]
  struct DHPDEV__ *v22; // [rsp+48h] [rbp-41h]
  struct PFT *v23; // [rsp+50h] [rbp-39h]
  struct PFF **v24; // [rsp+80h] [rbp-9h] BYREF
  __int64 v25; // [rsp+88h] [rbp-1h] BYREF
  __int64 v26; // [rsp+90h] [rbp+7h] BYREF
  __int64 v27; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+A0h] [rbp+17h] BYREF
  _QWORD v29[3]; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v30; // [rsp+108h] [rbp+7Fh] BYREF

  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v25 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v7 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v24) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  if ( !v7 )
  {
    v23 = *(struct PFT **)this;
    v22 = *(struct DHPDEV__ **)(*(_QWORD *)a2 + 1824LL);
    v21 = *(HDEV *)a2;
    LODWORD(Size) = 0;
    v30 = 0LL;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v29,
      a3,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v21,
      v22,
      v23,
      0,
      0,
      (struct _FNTCHECKSUM *)&v30,
      0LL,
      0LL);
    if ( v29[0] )
    {
      if ( (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v29, a2, a3) )
      {
        v27 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v24) && (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x40) == 0 )
        {
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v29, 0) )
          {
            v13 = v29[0];
            v14 = *(_QWORD *)this;
            if ( *(_QWORD *)(v29[0] + 88LL) == qword_1C0334780 )
              ++*(_DWORD *)(v14 + 32);
            ++*(_DWORD *)(v14 + 28);
            v15 = v24;
            if ( *v24 )
              *((_QWORD *)*v24 + 2) = v13;
            *(_QWORD *)(v13 + 8) = *v15;
            *(_QWORD *)(v13 + 16) = 0LL;
            *v15 = (struct PFF *)v13;
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v29);
            v7 = 1;
            *(_DWORD *)(*(_QWORD *)a2 + 3568LL) = a3;
            v16 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
            do
              v17 = *(_DWORD *)(v16 + 56);
            while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 56), v17 | 0x40, v17) );
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v29);
            v11 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
            do
              v12 = *(_DWORD *)(v11 + 56);
            while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 56), v12 | 0x40, v12) );
          }
        }
        v10 = (SEMOBJ *)&v27;
      }
      else
      {
        v26 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x40) == 0 )
        {
          v8 = *(_QWORD *)a2;
          _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
          do
            v9 = *(_DWORD *)(v8 + 56);
          while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 56), v9 | 0x40, v9) );
        }
        v10 = (SEMOBJ *)&v26;
      }
    }
    else
    {
      v28 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x40) == 0 )
      {
        v18 = *(_QWORD *)a2;
        _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
        do
          v19 = *(_DWORD *)(v18 + 56);
        while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 56), v19 | 0x40, v19) );
      }
      v10 = (SEMOBJ *)&v28;
    }
    SEMOBJ::vUnlock(v10);
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v29);
  }
  return v7;
}
