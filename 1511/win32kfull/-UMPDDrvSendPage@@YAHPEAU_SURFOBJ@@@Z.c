/*
 * XREFs of ?UMPDDrvSendPage@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FC50
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

__int64 __fastcall UMPDDrvSendPage(struct _SURFOBJ *a1)
{
  unsigned int v1; // edi
  int v3; // r14d
  UMPDOBJ *v4; // rbx
  unsigned int v5; // eax
  int v6; // esi
  size_t Size; // [rsp+28h] [rbp-29h]
  unsigned int v9; // [rsp+48h] [rbp-9h] BYREF
  int v10; // [rsp+4Ch] [rbp-5h] BYREF
  int v11; // [rsp+50h] [rbp-1h] BYREF
  void *v12; // [rsp+58h] [rbp+7h] BYREF
  UMPDOBJ *v13; // [rsp+60h] [rbp+Fh] BYREF
  void *v14; // [rsp+68h] [rbp+17h] BYREF
  _QWORD Src[4]; // [rsp+70h] [rbp+1Fh] BYREF

  v1 = 0;
  v9 = 1;
  v11 = 0;
  v10 = 0;
  v3 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v13);
  v14 = 0LL;
  v12 = 0LL;
  memset(Src, 0, sizeof(Src));
  v4 = v13;
  if ( v13 )
  {
    if ( !*((_DWORD *)v13 + 109)
      || (v9 = 40,
          v5 = UMPDOBJ::bThunkLargeBitmap(v13, a1, &v14, &v12, &v11, &v10, &v9),
          v3 = v10,
          v6 = v5,
          (v9 = v5) != 0) )
    {
      Src[0] = 0x2000000020LL;
      Src[2] = *(_QWORD *)v4;
      Src[3] = a1;
      if ( !(unsigned int)UMPDOBJ::pso(v4, (UMPDOBJ *)((char *)v4 + 64), (struct _SURFOBJ **)&Src[3], v3)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v4, Src, 0x20u, &v9, Size) == -1)
        || (v6 = 1, !v9) )
      {
        v6 = 0;
      }
    }
    if ( v11 )
      UMPDOBJ::RestoreBitmap(v4, a1, v14, v12, Size, v3);
    v1 = v6;
  }
  XUMPDOBJ::~XUMPDOBJ(&v13);
  return v1;
}
