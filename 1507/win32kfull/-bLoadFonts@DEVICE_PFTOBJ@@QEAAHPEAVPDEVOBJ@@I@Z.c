/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0126390 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0029538 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0129E2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013E6BC (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C013EA0C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0140780 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C025D1CC (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B4510 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B4834 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2, unsigned int a3)
{
  BOOL v7; // r15d
  unsigned __int64 v8; // rdx
  signed __int32 v9; // ett
  SEMOBJ *v10; // rcx
  unsigned __int64 v11; // rdx
  signed __int32 v12; // ett
  struct PFF **v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  signed __int32 v16; // ett
  unsigned __int64 v17; // rdx
  signed __int32 v18; // ett
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  size_t Size; // [rsp+30h] [rbp-59h]
  HDEV v23; // [rsp+40h] [rbp-49h]
  struct DHPDEV__ *v24; // [rsp+48h] [rbp-41h]
  struct PFT *v25; // [rsp+50h] [rbp-39h]
  struct PFF **v26; // [rsp+80h] [rbp-9h] BYREF
  __int64 v27; // [rsp+88h] [rbp-1h] BYREF
  __int64 v28; // [rsp+90h] [rbp+7h] BYREF
  __int64 v29; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+A0h] [rbp+17h] BYREF
  _QWORD v31[3]; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+108h] [rbp+7Fh] BYREF

  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v27 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v7 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v26) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  if ( !v7 )
  {
    v25 = *(struct PFT **)this;
    v24 = *(struct DHPDEV__ **)(*(_QWORD *)a2 + 1824LL);
    v23 = *(HDEV *)a2;
    LODWORD(Size) = 0;
    v32 = 0LL;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v31,
      a3,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v23,
      v24,
      v25,
      0,
      0,
      (struct _FNTCHECKSUM *)&v32,
      0LL,
      0LL);
    if ( v31[0] )
    {
      if ( (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v31, a2, a3) )
      {
        v29 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v26) && (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x40) == 0 )
        {
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v31, 0) )
          {
            v13 = v26;
            v14 = v31[0];
            ++*(_DWORD *)(*(_QWORD *)this + 28LL);
            if ( *v13 )
              *((_QWORD *)*v13 + 2) = v14;
            *(_QWORD *)(v14 + 8) = *v13;
            *(_QWORD *)(v14 + 16) = 0LL;
            *v13 = (struct PFF *)v14;
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v31);
            v7 = 1;
            *(_DWORD *)(*(_QWORD *)a2 + 3576LL) = a3;
            v15 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
            do
              v16 = *(_DWORD *)(v15 + 56);
            while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 56), v16 | 0x40, v16) );
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v31);
            v11 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
            do
              v12 = *(_DWORD *)(v11 + 56);
            while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 56), v12 | 0x40, v12) );
          }
        }
        v10 = (SEMOBJ *)&v29;
      }
      else
      {
        v28 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x40) == 0 )
        {
          v8 = *(_QWORD *)a2;
          _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
          do
            v9 = *(_DWORD *)(v8 + 56);
          while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 56), v9 | 0x40, v9) );
        }
        v10 = (SEMOBJ *)&v28;
      }
    }
    else
    {
      v30 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x40) == 0 )
      {
        v17 = *(_QWORD *)a2;
        _m_prefetchw((const void *)(*(_QWORD *)a2 + 56LL));
        do
          v18 = *(_DWORD *)(v17 + 56);
        while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 56), v18 | 0x40, v18) );
      }
      v10 = (SEMOBJ *)&v30;
    }
    SEMOBJ::vUnlock(v10);
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v31, v19, v20, v21);
  }
  return v7;
}
