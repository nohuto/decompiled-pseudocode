/*
 * XREFs of ?UMPDDrvFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029D520
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C01469A0 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0146A58 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0146AE8 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A1AF0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  int v9; // r14d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  int v14; // esi
  size_t Size; // [rsp+20h] [rbp-D1h]
  unsigned int v17; // [rsp+40h] [rbp-B1h] BYREF
  int v18; // [rsp+44h] [rbp-ADh] BYREF
  int v19; // [rsp+48h] [rbp-A9h] BYREF
  void *v20; // [rsp+50h] [rbp-A1h] BYREF
  void *v21; // [rsp+58h] [rbp-99h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-91h] BYREF
  struct _BRUSHOBJ *v23; // [rsp+68h] [rbp-89h]
  struct _POINTL *v24; // [rsp+70h] [rbp-81h]
  _QWORD Src[12]; // [rsp+80h] [rbp-71h] BYREF

  v7 = 0;
  v24 = a5;
  v19 = 0;
  v9 = 0;
  v18 = 0;
  v23 = a4;
  v17 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v20 = 0LL;
  v21 = 0LL;
  memset(Src, 0, sizeof(Src));
  v12 = v22;
  if ( v22 )
  {
    if ( !*((_DWORD *)v22 + 109)
      || (v17 = 168,
          v13 = UMPDOBJ::bThunkLargeBitmap(v22, a1, &v20, &v21, &v19, &v18, &v17),
          v9 = v18,
          v14 = v13,
          (v17 = v13) != 0) )
    {
      Src[0] = 0xF00000060LL;
      Src[2] = *(_QWORD *)v12;
      Src[7] = v23;
      Src[8] = v24;
      Src[11] = __PAIR64__(a7, a6);
      Src[3] = a1;
      Src[4] = a2;
      Src[5] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v9)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 224), (const void **)&Src[4], 8u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&Src[5], 0x18u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&Src[7], 0x18u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[8], 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, Src, 0x60u, &v17, Size) == -1)
        || (v14 = 1, !v17) )
      {
        v14 = 0;
      }
    }
    if ( v19 )
      UMPDOBJ::RestoreBitmap(v12, a1, v20, v21, Size, v9);
    v7 = v14;
  }
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v7;
}
