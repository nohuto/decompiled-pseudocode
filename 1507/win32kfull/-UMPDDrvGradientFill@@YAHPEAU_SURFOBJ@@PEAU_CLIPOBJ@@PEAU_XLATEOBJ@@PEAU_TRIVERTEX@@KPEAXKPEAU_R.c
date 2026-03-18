/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029E290
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
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C02868C0 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C840 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A231C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v10; // r14d
  UMPDOBJ *v14; // rbx
  int v15; // esi
  unsigned int v16; // esi
  ULONG v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // eax
  BOOL v24; // edi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  void *v30; // [rsp+50h] [rbp-B0h] BYREF
  UMPDOBJ *v31; // [rsp+58h] [rbp-A8h] BYREF
  void *v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v33; // [rsp+68h] [rbp-98h]
  struct _POINTL *v34; // [rsp+70h] [rbp-90h]
  _QWORD Src[14]; // [rsp+80h] [rbp-80h] BYREF

  v10 = 0;
  v33 = a1;
  v34 = a9;
  v29 = 0;
  v28 = 0;
  v27 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v30 = 0LL;
  v32 = 0LL;
  memset(Src, 0, 0x68uLL);
  v14 = v31;
  if ( !v31 )
    goto LABEL_29;
  Src[0] = 0x4400000068LL;
  Src[2] = *(_QWORD *)v31;
  Src[11] = v34;
  Src[6] = a4;
  Src[10] = a8;
  Src[3] = v33;
  Src[4] = a2;
  Src[5] = a3;
  LODWORD(Src[7]) = a5;
  Src[8] = a6;
  LODWORD(Src[9]) = a7;
  LODWORD(Src[12]) = a10;
  if ( a10 <= 1 )
  {
    v15 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_29;
    v15 = 12;
  }
  v16 = a7 * v15;
  if ( !*((_DWORD *)v31 + 109) )
  {
LABEL_16:
    v24 = 0;
    if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&Src[3], v10) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&Src[4], 0x18u, 0LL) )
      {
        if ( (unsigned int)UMPDOBJ::pxlo(v14, (struct _XLATEOBJ **)&Src[5]) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[6], 16 * a5) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[8], v16) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[10], 0x10u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[11], 8u) )
                {
                  LODWORD(Size) = 4;
                  if ( (unsigned int)UMPDOBJ::Thunk(v14, Src, 0x68u, &v27, Size) != -1 )
                  {
                    if ( v27 )
                      v24 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_27;
  }
  if ( a3 )
    v17 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v17 = 0;
  v18 = v17 + 160;
  v19 = 16 * a5;
  if ( 16 * (unsigned __int64)a5 > 0xFFFFFFFF
    || v19 + 7 < v19
    || (v20 = (v19 + 7) & 0xFFFFFFF8, v16 + 7 < v16)
    || (v21 = (v16 + 7) & 0xFFFFFFF8, v22 = v20 + v18, v20 + v18 < v18)
    || v21 + v22 < v22 )
  {
LABEL_29:
    v24 = 0;
    goto LABEL_30;
  }
  v27 = v21 + v22;
  v23 = UMPDOBJ::bThunkLargeBitmap(v31, v33, &v30, &v32, &v29, &v28, &v27);
  v10 = v28;
  v24 = v23;
  v27 = v23;
  if ( v23 )
    goto LABEL_16;
LABEL_27:
  if ( v29 )
    UMPDOBJ::RestoreBitmap(v14, v33, v30, v32, Size, v10);
LABEL_30:
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v24;
}
