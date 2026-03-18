/*
 * XREFs of ?UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1C029FDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0146878 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0146A58 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0146AE8 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A1AF0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvStartBanding(struct _SURFOBJ *a1, struct _POINTL *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r14d
  UMPDOBJ *v7; // rbx
  unsigned int v8; // eax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v11; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+44h] [rbp-25h] BYREF
  int v13; // [rsp+48h] [rbp-21h] BYREF
  void *v14; // [rsp+50h] [rbp-19h] BYREF
  UMPDOBJ *v15; // [rsp+58h] [rbp-11h] BYREF
  void *v16; // [rsp+60h] [rbp-9h] BYREF
  _QWORD Src[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v4 = 1;
  v13 = 0;
  v11 = 1;
  v5 = 0;
  v12 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v15);
  v16 = 0LL;
  v14 = 0LL;
  memset(Src, 0, sizeof(Src));
  v7 = v15;
  if ( v15 )
  {
    if ( !*((_DWORD *)v15 + 109)
      || (v11 = 56,
          v8 = UMPDOBJ::bThunkLargeBitmap(v15, a1, &v16, &v14, &v13, &v12, &v11),
          v5 = v12,
          v4 = v8,
          (v11 = v8) != 0) )
    {
      Src[0] = 0x3900000028LL;
      Src[2] = *(_QWORD *)v7;
      Src[3] = a1;
      Src[4] = a2;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&Src[3], v5) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v7, (const void **)&Src[4], 8u) )
        {
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, Src, 0x28u, &v11, Size) != -1 && a2 )
            *a2 = *(struct _POINTL *)UMPDOBJ::GetKernelPtr(v7, (char *)Src[4]);
          v4 = v11;
        }
      }
    }
    if ( v13 )
      UMPDOBJ::RestoreBitmap(v7, a1, v16, v14, Size, v5);
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v15);
  return v2;
}
