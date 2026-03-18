/*
 * XREFs of ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A15B0
 * Callers:
 *     <none>
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0100E7C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C011C3C8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0286598 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C0286644 (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x1C0286984 (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C840 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A231C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r14d
  UMPDOBJ *v12; // rbx
  ULONG v13; // eax
  unsigned int v14; // eax
  int v15; // esi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  UMPDOBJ *v21; // [rsp+50h] [rbp-B0h] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  void *v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _XFORMOBJ *v24; // [rsp+68h] [rbp-98h]
  struct _BRUSHOBJ *v25; // [rsp+70h] [rbp-90h]
  struct _POINTL *v26; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v27; // [rsp+80h] [rbp-80h]
  _QWORD Src[12]; // [rsp+90h] [rbp-70h] BYREF

  v8 = 0;
  v25 = a5;
  v26 = a6;
  v11 = 0;
  v24 = a4;
  v27 = a3;
  v18 = 1;
  v20 = 0;
  v19 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v22 = 0LL;
  v23 = 0LL;
  memset(Src, 0, sizeof(Src));
  v12 = v21;
  if ( v21 )
  {
    if ( !*((_DWORD *)v21 + 109)
      || (!a7 ? (v13 = 0) : (v13 = ((4 * a7->cstyle + 7) & 0xFFFFFFF8) + 40),
          v18 = v13 + 176,
          v14 = UMPDOBJ::bThunkLargeBitmap(v21, a1, &v22, &v23, &v20, &v19, &v18),
          v11 = v19,
          v15 = v14,
          (v18 = v14) != 0) )
    {
      Src[0] = 0xE00000060LL;
      Src[2] = *(_QWORD *)v12;
      Src[5] = v27;
      Src[6] = v24;
      Src[7] = v25;
      Src[8] = v26;
      LODWORD(Src[11]) = a8;
      Src[3] = a1;
      Src[4] = a2;
      Src[9] = a7;
      if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v11)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 224), (const void **)&Src[4], 8u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&Src[5], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxo(v12, (struct _XFORMOBJ **)&Src[6])
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&Src[7], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[8], 8u)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS((char **)v12, (struct _LINEATTRS **)&Src[9])
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, Src, 0x60u, &v18, Size) == -1)
        || (v15 = 1, !v18) )
      {
        v15 = 0;
      }
    }
    if ( v20 )
      UMPDOBJ::RestoreBitmap(v12, a1, v22, v23, Size, v11);
    v8 = v15;
  }
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return v8;
}
