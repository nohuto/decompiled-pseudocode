/*
 * XREFs of ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B02A0
 * Callers:
 *     NtGdiCreateColorTransform @ 0x1C02B0E00 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286D04 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall GreCreateColorTransform(
        HDC a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8)
{
  struct HOBJ__ *v8; // rdi
  _BYTE v13[40]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v14[7]; // [rsp+78h] [rbp-40h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&a2->lcsSignature == 0x40050534F43LL && a2->lcsSize == 588 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v14, a1);
    if ( !v14[0] || (*(_DWORD *)(v14[0] + 36LL) & 0x5000) == 0x1000 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      SURFREF::SURFREF((SURFREF *)v13);
      v8 = COLORTRANSFORMOBJ::hCreate((COLORTRANSFORMOBJ *)v13, (struct XDCOBJ *)v14, a2, a3, a4, a5, a6, a7, a8);
      if ( !v8 )
        EngSetLastError(8u);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return v8;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
