/*
 * XREFs of ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02AF4B4
 * Callers:
 *     NtGdiCreateColorTransform @ 0x1C02B0000 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286DE8 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
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
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+58h] [rbp-10h]
  int v15; // [rsp+5Ch] [rbp-Ch]
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&a2->lcsSignature == 0x40050534F43LL && a2->lcsSize == 588 )
  {
    v14 = 0;
    v15 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v13, a1);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 36) & 0x5000) == 0x1000 )
      {
        EngSetLastError(0x57u);
      }
      else
      {
        v16 = 0LL;
        v8 = COLORTRANSFORMOBJ::hCreate((COLORTRANSFORMOBJ *)&v16, (struct XDCOBJ *)&v13, a2, a3, a4, a5, a6, a7, a8);
        if ( !v8 )
          EngSetLastError(8u);
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v16);
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)&v13);
    }
    else
    {
      EngSetLastError(0x57u);
    }
    return v8;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
