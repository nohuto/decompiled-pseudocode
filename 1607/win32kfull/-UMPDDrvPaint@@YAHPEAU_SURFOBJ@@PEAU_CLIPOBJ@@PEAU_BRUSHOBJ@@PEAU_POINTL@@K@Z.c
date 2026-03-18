/*
 * XREFs of ?UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C029F4D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C16C (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A2B04 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvPaint(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        struct _POINTL *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // r14d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // eax
  int v12; // esi
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v15; // [rsp+40h] [rbp-91h] BYREF
  int v16; // [rsp+44h] [rbp-8Dh] BYREF
  int v17; // [rsp+48h] [rbp-89h] BYREF
  void *v18; // [rsp+50h] [rbp-81h] BYREF
  void *v19; // [rsp+58h] [rbp-79h] BYREF
  UMPDOBJ *v20; // [rsp+60h] [rbp-71h] BYREF
  struct _POINTL *v21; // [rsp+68h] [rbp-69h]
  _QWORD Src[12]; // [rsp+70h] [rbp-61h] BYREF

  v5 = 0;
  v21 = a4;
  v17 = 0;
  v16 = 0;
  v7 = 0;
  v15 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v19 = 0LL;
  v18 = 0LL;
  memset(Src, 0, sizeof(Src));
  v10 = v20;
  if ( v20 )
  {
    if ( !*((_DWORD *)v20 + 109)
      || (v15 = 160,
          v11 = UMPDOBJ::bThunkLargeBitmap(v20, a1, &v19, &v18, &v17, &v16, &v15),
          v7 = v16,
          v12 = v11,
          (v15 = v11) != 0) )
    {
      Src[0] = 0x1100000060LL;
      Src[2] = *(_QWORD *)v10;
      Src[8] = v21;
      LODWORD(Src[11]) = a5;
      Src[3] = a1;
      Src[5] = a2;
      Src[7] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&Src[3], v7)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 112), (const void **)&Src[5], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 144), (const void **)&Src[7], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&Src[8], 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v10, Src, 96LL, &v15, Size) == -1)
        || (v12 = 1, !v15) )
      {
        v12 = 0;
      }
    }
    if ( v17 )
      UMPDOBJ::RestoreBitmap(v10, a1, v19, v18, Size, v7);
    v5 = v12;
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v5;
}
