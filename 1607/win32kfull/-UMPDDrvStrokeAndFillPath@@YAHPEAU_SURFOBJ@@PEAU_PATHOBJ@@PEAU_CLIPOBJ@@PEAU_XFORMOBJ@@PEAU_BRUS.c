/*
 * XREFs of ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A1AC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C0284A80 (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x1C0285408 (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C16C (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A2B04 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v10; // edi
  int v13; // r14d
  UMPDOBJ *v14; // rbx
  ULONG v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  void *v24; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v26; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ *v27; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v28; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v29; // [rsp+80h] [rbp-80h]
  struct _POINTL *v30; // [rsp+88h] [rbp-78h]
  _QWORD Src[12]; // [rsp+90h] [rbp-70h] BYREF

  v10 = 0;
  v28 = a5;
  v29 = a7;
  v13 = 0;
  v30 = a8;
  v27 = a4;
  v26 = a3;
  v20 = 1;
  v22 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v24 = 0LL;
  v23 = 0LL;
  memset(Src, 0, sizeof(Src));
  v14 = v25;
  if ( v25 )
  {
    if ( !*((_DWORD *)v25 + 109)
      || (!a6 ? (v15 = 0) : (v15 = ((4 * a6->cstyle + 7) & 0xFFFFFFF8) + 40),
          v20 = v15 + 200,
          v16 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v24, &v23, &v22, &v21, &v20),
          v13 = v21,
          v17 = v16,
          (v20 = v16) != 0) )
    {
      Src[0] = 0x1000000060LL;
      Src[2] = *(_QWORD *)v14;
      Src[5] = v26;
      Src[6] = v27;
      Src[7] = v28;
      Src[10] = v29;
      Src[8] = v30;
      Src[11] = __PAIR64__(a10, a9);
      Src[3] = a1;
      Src[4] = a2;
      Src[9] = a6;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&Src[3], v13)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 224), (const void **)&Src[4], 8u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&Src[5], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxo(v14, (struct _XFORMOBJ **)&Src[6])
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&Src[7], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS((char **)v14, (struct _LINEATTRS **)&Src[9])
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 160), (const void **)&Src[10], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[8], 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, Src, 96LL, &v20, Size) == -1)
        || (v17 = 1, !v20) )
      {
        v17 = 0;
      }
    }
    if ( v22 )
      UMPDOBJ::RestoreBitmap(v14, a1, v24, v23, Size, v13);
    v10 = v17;
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v10;
}
