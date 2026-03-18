/*
 * XREFs of ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C029F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0146878 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0146AE8 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A1AF0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvQueryPerBandInfo(struct _SURFOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r15d
  UMPDOBJ *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rax
  char *KernelPtr; // rax
  char *v11; // rax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v14; // [rsp+40h] [rbp-29h] BYREF
  int v15; // [rsp+44h] [rbp-25h] BYREF
  int v16; // [rsp+48h] [rbp-21h] BYREF
  void *v17; // [rsp+50h] [rbp-19h] BYREF
  UMPDOBJ *v18; // [rsp+58h] [rbp-11h] BYREF
  void *v19; // [rsp+60h] [rbp-9h] BYREF
  _QWORD Src[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v4 = 1;
  v16 = 0;
  v14 = 1;
  v5 = 0;
  v15 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  v19 = 0LL;
  v17 = 0LL;
  memset(Src, 0, sizeof(Src));
  v7 = v18;
  if ( v18 )
  {
    if ( !*((_DWORD *)v18 + 109)
      || (v14 = 72,
          v8 = UMPDOBJ::bThunkLargeBitmap(v18, a1, &v19, &v17, &v16, &v15, &v14),
          v5 = v15,
          v4 = v8,
          (v14 = v8) != 0) )
    {
      Src[0] = 0x4B00000028LL;
      Src[2] = *(_QWORD *)v7;
      Src[3] = a1;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&Src[3], v5) )
      {
        v9 = UMPDOBJ::_AllocUserMem(v7, 0x14u, 0);
        Src[4] = v9;
        if ( v9 )
        {
          if ( a2 )
          {
            KernelPtr = UMPDOBJ::GetKernelPtr(v7, v9);
            *(_OWORD *)KernelPtr = *(_OWORD *)&a2->bRepeatThisBand;
            *((_DWORD *)KernelPtr + 4) = a2->ulVertRes;
          }
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, Src, 0x28u, &v14, Size) != -1 && a2 )
          {
            v11 = UMPDOBJ::GetKernelPtr(v7, (char *)Src[4]);
            *(_OWORD *)&a2->bRepeatThisBand = *(_OWORD *)v11;
            a2->ulVertRes = *((_DWORD *)v11 + 4);
          }
          v4 = v14;
        }
      }
    }
    if ( v16 )
      UMPDOBJ::RestoreBitmap(v7, a1, v19, v17, Size, v5);
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v2;
}
