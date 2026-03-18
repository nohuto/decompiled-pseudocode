/*
 * XREFs of ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C029D770
 * Callers:
 *     <none>
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0100E7C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z @ 0x1C011C3A4 (-bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C011C3C8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0286598 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C840 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A231C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvDrawEscape(
        struct _SURFOBJ *a1,
        int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  unsigned int v7; // edi
  int v10; // r14d
  UMPDOBJ *v11; // rbx
  int v12; // eax
  UMPDOBJ *v13; // rcx
  size_t Size; // [rsp+20h] [rbp-B9h]
  int v16; // [rsp+40h] [rbp-99h] BYREF
  int v17; // [rsp+44h] [rbp-95h] BYREF
  int v18; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-8Dh] BYREF
  void *v20; // [rsp+50h] [rbp-89h] BYREF
  void *v21; // [rsp+58h] [rbp-81h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-71h]
  struct _RECTL *v24; // [rsp+70h] [rbp-69h]
  _QWORD Src[10]; // [rsp+80h] [rbp-59h] BYREF

  v7 = -1;
  v23 = (unsigned __int64)a6;
  v17 = -1;
  v24 = a4;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v21 = 0LL;
  v20 = 0LL;
  v10 = 0;
  v18 = 0;
  v16 = 0;
  memset(Src, 0, 0x48uLL);
  v11 = v22;
  if ( v22 )
  {
    if ( !*((_DWORD *)v22 + 109) )
      goto LABEL_6;
    if ( a5 + 7 < a5 || ((a5 + 7) & 0xFFFFFFF8) + 120 < 0x78 )
      goto LABEL_16;
    v19 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    v12 = UMPDOBJ::bThunkLargeBitmap(v22, a1, &v21, &v20, &v18, &v16, &v19);
    v10 = v16;
    if ( v12 )
    {
LABEL_6:
      Src[0] = 0x1900000048LL;
      Src[2] = *(_QWORD *)v11;
      Src[3] = a1;
      LODWORD(Src[4]) = a2;
      Src[5] = a3;
      Src[6] = v24;
      LODWORD(Src[7]) = a5;
      Src[8] = v23 & -(__int64)(a5 != 0);
      if ( !a5
        || !(unsigned int)UMPDOBJ::bNeedThunk(v11, (PVOID)(v23 & -(__int64)(a5 != 0)))
        || (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&Src[8], a5) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&Src[3], v10) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                               v11,
                               (UMPDOBJ *)((char *)v11 + 112),
                               (const void **)&Src[5],
                               0x18u,
                               0LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&Src[6], 0x10u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v11, Src, 0x48u, &v17, Size) != -1 )
                v7 = v17;
            }
          }
        }
      }
    }
    if ( v18 )
      UMPDOBJ::RestoreBitmap(v11, a1, v21, v20, Size, v10);
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v7;
}
