/*
 * XREFs of ?UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z @ 0x1C029D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0146AE8 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A1AF0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvEndDoc(struct _SURFOBJ *a1, int a2)
{
  unsigned int v2; // edi
  int v4; // r14d
  UMPDOBJ *v6; // rbx
  unsigned int v7; // eax
  int v8; // esi
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v11; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+44h] [rbp-25h] BYREF
  int v13; // [rsp+48h] [rbp-21h] BYREF
  void *v14; // [rsp+50h] [rbp-19h] BYREF
  UMPDOBJ *v15; // [rsp+58h] [rbp-11h] BYREF
  void *v16; // [rsp+60h] [rbp-9h] BYREF
  _QWORD Src[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v11 = 1;
  v13 = 0;
  v12 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v15);
  v16 = 0LL;
  v14 = 0LL;
  memset(Src, 0, sizeof(Src));
  v6 = v15;
  if ( v15 )
  {
    if ( !*((_DWORD *)v15 + 109)
      || (v11 = 48,
          v7 = UMPDOBJ::bThunkLargeBitmap(v15, a1, &v16, &v14, &v13, &v12, &v11),
          v4 = v12,
          v8 = v7,
          (v11 = v7) != 0) )
    {
      Src[0] = 0x2200000028LL;
      Src[2] = *(_QWORD *)v6;
      Src[3] = a1;
      LODWORD(Src[4]) = a2;
      if ( !(unsigned int)UMPDOBJ::pso(v6, (UMPDOBJ *)((char *)v6 + 64), (struct _SURFOBJ **)&Src[3], v4)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v6, Src, 0x28u, &v11, Size) == -1)
        || (v8 = 1, !v11) )
      {
        v8 = 0;
      }
    }
    if ( v13 )
      UMPDOBJ::RestoreBitmap(v6, a1, v16, v14, Size, v4);
    v2 = v8;
  }
  XUMPDOBJ::~XUMPDOBJ(&v15);
  return v2;
}
