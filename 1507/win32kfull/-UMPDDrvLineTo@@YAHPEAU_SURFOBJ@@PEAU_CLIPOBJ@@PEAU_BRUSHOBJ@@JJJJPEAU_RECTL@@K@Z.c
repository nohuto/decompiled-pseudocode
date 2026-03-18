/*
 * XREFs of ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C029E970
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
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C840 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A231C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // edi
  int v11; // r14d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  int v16; // esi
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v19; // [rsp+40h] [rbp-91h] BYREF
  int v20; // [rsp+44h] [rbp-8Dh] BYREF
  int v21; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-85h]
  void *v23; // [rsp+50h] [rbp-81h] BYREF
  UMPDOBJ *v24; // [rsp+58h] [rbp-79h] BYREF
  void *v25; // [rsp+60h] [rbp-71h] BYREF
  struct _RECTL *v26; // [rsp+68h] [rbp-69h]
  _QWORD Src[10]; // [rsp+70h] [rbp-61h] BYREF

  v9 = 0;
  v26 = a8;
  v21 = 0;
  v11 = 0;
  v20 = 0;
  v22 = a4;
  v19 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v24);
  v25 = 0LL;
  v23 = 0LL;
  memset(Src, 0, sizeof(Src));
  v14 = v24;
  if ( v24 )
  {
    if ( !*((_DWORD *)v24 + 109)
      || (v19 = 152,
          v15 = UMPDOBJ::bThunkLargeBitmap(v24, a1, &v25, &v23, &v21, &v20, &v19),
          v11 = v20,
          v16 = v15,
          (v19 = v15) != 0) )
    {
      Src[0] = 0x1F00000050LL;
      Src[2] = *(_QWORD *)v14;
      Src[6] = __PAIR64__(a5, v22);
      Src[7] = __PAIR64__(a7, a6);
      Src[8] = v26;
      LODWORD(Src[9]) = a9;
      Src[3] = a1;
      Src[4] = a2;
      Src[5] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&Src[3], v11)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&Src[4], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&Src[5], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[8], 0x10u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, Src, 0x50u, &v19, Size) == -1)
        || (v16 = 1, !v19) )
      {
        v16 = 0;
      }
    }
    if ( v21 )
      UMPDOBJ::RestoreBitmap(v14, a1, v25, v23, Size, v11);
    v9 = v16;
  }
  XUMPDOBJ::~XUMPDOBJ(&v24);
  return v9;
}
