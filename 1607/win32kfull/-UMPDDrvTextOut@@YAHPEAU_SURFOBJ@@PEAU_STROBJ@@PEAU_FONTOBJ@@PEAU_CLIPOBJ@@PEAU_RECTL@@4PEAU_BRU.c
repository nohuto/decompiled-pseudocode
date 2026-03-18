/*
 * XREFs of ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A2020
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C028524C (-pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C16C (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A2B04 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall UMPDDrvTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v10; // edi
  int v11; // r13d
  int v12; // r12d
  struct UMPDOBJ *v14; // rbx
  int v15; // esi
  struct _RECTL *i; // rcx
  unsigned int v17; // esi
  unsigned int v18; // ecx
  __int64 cGlyphs; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // eax
  struct _SURFOBJ *v24; // rcx
  struct _FONTOBJ *v25; // r15
  int v26; // eax
  int Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  void *v34; // [rsp+60h] [rbp-A0h] BYREF
  void *v35; // [rsp+68h] [rbp-98h] BYREF
  struct UMPDOBJ *v36; // [rsp+70h] [rbp-90h] BYREF
  struct _FONTOBJ *v37; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v38; // [rsp+80h] [rbp-80h]
  struct _RECTL *v39; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v40; // [rsp+90h] [rbp-70h]
  struct _BRUSHOBJ *v41; // [rsp+98h] [rbp-68h]
  struct _POINTL *v42; // [rsp+A0h] [rbp-60h]
  _QWORD Src[14]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v11 = 0;
  v39 = a6;
  v12 = 0;
  v40 = a7;
  v41 = a8;
  v42 = a9;
  v38 = a4;
  v37 = a3;
  v31 = 1;
  v33 = 0;
  v32[0] = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v36);
  v35 = 0LL;
  v34 = 0LL;
  memset(Src, 0, 0x68uLL);
  v14 = v36;
  if ( !v36 )
    goto LABEL_34;
  if ( a5 )
  {
    v15 = 1;
    for ( i = a5; i->left != i->right; ++v15 )
      ++i;
    v17 = 16 * v15;
  }
  else
  {
    v17 = 0;
  }
  if ( !*((_DWORD *)v36 + 109) )
    goto LABEL_18;
  if ( (v18 = 272, a2)
    && ((cGlyphs = a2->cGlyphs, v20 = 2 * cGlyphs, (unsigned __int64)(2 * cGlyphs) > 0xFFFFFFFF)
     || (v21 = 24 * cGlyphs, (unsigned __int64)(24 * cGlyphs) > 0xFFFFFFFF)
     || v20 + 7 < v20
     || v21 + 7 < v21
     || (v22 = ((v20 + 7) & 0xFFFFFFF8) + 320, v22 < 0x140)
     || (v18 = v22 + ((v21 + 7) & 0xFFFFFFF8), v18 < v22))
    || v17 + 7 < v17
    || ((v17 + 7) & 0xFFFFFFF8) + v18 < v18 )
  {
LABEL_34:
    v10 = 0;
    goto LABEL_35;
  }
  v31 = ((v17 + 7) & 0xFFFFFFF8) + v18;
  v23 = UMPDOBJ::bThunkLargeBitmap(v36, a1, &v35, &v34, &v33, v32, &v31);
  v11 = v33;
  v10 = v23;
  v12 = v32[0];
  v31 = v23;
LABEL_18:
  v24 = a1;
  Src[0] = 0x1700000068LL;
  Src[2] = *(_QWORD *)v14;
  Src[6] = v38;
  Src[8] = v39;
  Src[9] = v40;
  Src[10] = v41;
  Src[7] = a5;
  Src[4] = a2;
  v25 = v37;
  Src[11] = v42;
  LODWORD(Src[12]) = a10;
  Src[3] = a1;
  Src[5] = v37;
  if ( v10 )
  {
    if ( (unsigned int)UMPDOBJ::pso(v14, (struct UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&Src[3], v12)
      && (unsigned int)UMPDOBJ::pstro(v14, (struct _STROBJ **)&Src[4])
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                         v14,
                         (struct UMPDOBJ *)((char *)v14 + 176),
                         (const void **)&Src[5],
                         0x40u,
                         0LL)
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                         v14,
                         (struct UMPDOBJ *)((char *)v14 + 112),
                         (const void **)&Src[6],
                         0x18u,
                         0LL)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[7], v17)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[8], 0x10u)
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                         v14,
                         (struct UMPDOBJ *)((char *)v14 + 144),
                         (const void **)&Src[9],
                         0x18u,
                         0LL)
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                         v14,
                         (struct UMPDOBJ *)((char *)v14 + 160),
                         (const void **)&Src[10],
                         0x18u,
                         0LL)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[11], 8u) )
    {
      *(_QWORD *)v32 = v25;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)v32, v14, 0LL, 0LL, 0LL);
      LODWORD(Sizea) = 4;
      v26 = UMPDOBJ::Thunk(v14, Src, 104LL, &v31, Sizea);
      v10 = v31;
      if ( v26 == -1 )
        v10 = 0;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)v32, v14, 0, 0, 0LL);
      *(_QWORD *)v32 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v32);
    }
    v24 = a1;
  }
  if ( v11 )
    UMPDOBJ::RestoreBitmap(v14, v24, v35, v34, Size, v12);
LABEL_35:
  XUMPDOBJ::~XUMPDOBJ(&v36);
  return v10;
}
