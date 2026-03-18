/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C025D314
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C001CB54 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0020C90 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0021AE0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0021C38 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0119FD8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011A36C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeDeviceFontLoad@@YAJXZ @ 0x1C025CE9C (-ScrutinizeDeviceFontLoad@@YAJXZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B34D8 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B3808 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2)
{
  BOOL v5; // r15d
  HDEV v6; // rdi
  struct DHPDEV__ *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rbx
  struct PFF **v10; // rcx
  struct PFF *v11; // rax
  size_t v12; // [rsp+30h] [rbp-39h]
  _QWORD v13[4]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v14; // [rsp+E0h] [rbp+77h] BYREF
  struct PFF **v15; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (int)ScrutinizeDeviceFontLoad() < 0 )
    return 1LL;
  v14 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v15) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  if ( !v5 )
  {
    v6 = *(HDEV *)a2;
    v14 = 0LL;
    v7 = (struct DHPDEV__ *)*((_QWORD *)v6 + 228);
    v8 = PDEVOBJ::cFonts(a2);
    LODWORD(v12) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v13,
      v8,
      0LL,
      0,
      0,
      0LL,
      v12,
      0LL,
      v6,
      v7,
      *(struct PFT **)this,
      0,
      0,
      (struct _FNTCHECKSUM *)&v14,
      0LL,
      0LL);
    v9 = v13[0];
    if ( v13[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v13, a2) )
    {
      v14 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v15) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v13, 0) )
        {
          v10 = v15;
          ++*(_DWORD *)(*(_QWORD *)this + 28LL);
          if ( *v10 )
            *((_QWORD *)*v10 + 2) = v9;
          v11 = *v10;
          *(_QWORD *)(v9 + 16) = 0LL;
          *(_QWORD *)(v9 + 8) = v11;
          *v10 = (struct PFF *)v9;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v13);
          v5 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v13);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v14);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v13);
  }
  return v5;
}
