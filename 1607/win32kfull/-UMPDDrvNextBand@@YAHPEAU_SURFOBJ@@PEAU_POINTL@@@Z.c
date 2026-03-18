/*
 * XREFs of ?UMPDDrvNextBand@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1C029F330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C16C (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A2B04 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvNextBand(struct _SURFOBJ *a1, struct _POINTL *a2)
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
  void *v15; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v16; // [rsp+60h] [rbp-9h] BYREF
  _QWORD Src[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v4 = 1;
  v13 = 0;
  v11 = 1;
  v5 = 0;
  v12 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  v15 = 0LL;
  v14 = 0LL;
  memset(Src, 0, sizeof(Src));
  v7 = v16;
  if ( v16 )
  {
    if ( !*((_DWORD *)v16 + 109)
      || (v11 = 56,
          v8 = UMPDOBJ::bThunkLargeBitmap(v16, a1, &v15, &v14, &v13, &v12, &v11),
          v5 = v12,
          v4 = v8,
          (v11 = v8) != 0) )
    {
      Src[0] = 0x3A00000028LL;
      Src[2] = *(_QWORD *)v7;
      Src[3] = a1;
      Src[4] = a2;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&Src[3], v5) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v7, (const void **)&Src[4], 8u) )
        {
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, Src, 40LL, &v11, Size) != -1 && a2 )
            *a2 = *(struct _POINTL *)UMPDOBJ::GetKernelPtr((char **)v7, (char *)Src[4]);
          v4 = v11;
        }
      }
    }
    if ( v13 )
      UMPDOBJ::RestoreBitmap(v7, a1, v15, v14, Size, v5);
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v16);
  return v2;
}
