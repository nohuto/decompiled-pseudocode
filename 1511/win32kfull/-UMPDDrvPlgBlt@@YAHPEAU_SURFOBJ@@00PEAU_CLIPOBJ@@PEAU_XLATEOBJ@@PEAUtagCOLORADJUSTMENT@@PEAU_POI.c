/*
 * XREFs of ?UMPDDrvPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029E7A0
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
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C02869F4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C029C1F0 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02A1BEC (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  struct _SURFOBJ *v12; // rsi
  int v13; // r12d
  int v14; // r14d
  int v15; // r15d
  UMPDOBJ *v16; // rbx
  ULONG v17; // eax
  unsigned int v18; // eax
  int v19; // esi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v22; // [rsp+90h] [rbp-80h] BYREF
  int v23; // [rsp+94h] [rbp-7Ch] BYREF
  int v24; // [rsp+98h] [rbp-78h] BYREF
  int v25; // [rsp+9Ch] [rbp-74h] BYREF
  int v26; // [rsp+A0h] [rbp-70h] BYREF
  int v27; // [rsp+A4h] [rbp-6Ch] BYREF
  int v28; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v29; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v30; // [rsp+B8h] [rbp-58h]
  void *v31; // [rsp+C0h] [rbp-50h] BYREF
  UMPDOBJ *v32; // [rsp+C8h] [rbp-48h] BYREF
  void *v33; // [rsp+D0h] [rbp-40h] BYREF
  void *v34; // [rsp+D8h] [rbp-38h] BYREF
  void *v35; // [rsp+E0h] [rbp-30h] BYREF
  struct _SURFOBJ *v36; // [rsp+E8h] [rbp-28h]
  void *v37; // [rsp+F0h] [rbp-20h] BYREF
  void *v38; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v39; // [rsp+100h] [rbp-10h]
  struct _POINTFIX *v40; // [rsp+108h] [rbp-8h]
  struct _RECTL *v41; // [rsp+110h] [rbp+0h]
  struct _POINTL *v42; // [rsp+118h] [rbp+8h]
  struct _POINTL *v43; // [rsp+120h] [rbp+10h]
  struct tagCOLORADJUSTMENT *v44; // [rsp+128h] [rbp+18h]
  _QWORD Src[14]; // [rsp+130h] [rbp+20h] BYREF

  v11 = 0;
  v12 = a1;
  v44 = a6;
  v13 = 0;
  v14 = 0;
  v42 = a7;
  v15 = 0;
  v40 = a8;
  v41 = a9;
  v36 = a1;
  v43 = a10;
  v39 = a4;
  v29 = a3;
  v30 = a2;
  v22 = 1;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v25 = 0;
  v23 = 0;
  v24 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v34 = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v37 = 0LL;
  memset(Src, 0, sizeof(Src));
  v16 = v32;
  if ( !v32 )
    goto LABEL_24;
  if ( !*((_DWORD *)v32 + 109) )
    goto LABEL_8;
  if ( a5 )
    v17 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v17 = 0;
  v22 = v17 + 224;
  v18 = UMPDOBJ::bThunkLargeBitmaps(
          v32,
          v12,
          v30,
          v29,
          &v34,
          &v33,
          &v35,
          &v31,
          &v38,
          &v37,
          &v27,
          &v25,
          &v28,
          &v23,
          &v26,
          &v24,
          &v22);
  v13 = v25;
  v19 = v18;
  v14 = v23;
  v15 = v24;
  v22 = v18;
  if ( v18 )
  {
    v12 = v36;
LABEL_8:
    Src[0] = 0x4600000070LL;
    Src[2] = *(_QWORD *)v16;
    Src[4] = v30;
    Src[5] = v29;
    Src[6] = v39;
    Src[8] = v44;
    Src[9] = v42;
    Src[10] = v40;
    Src[11] = v41;
    Src[12] = v43;
    LODWORD(Src[13]) = a11;
    Src[3] = v12;
    Src[7] = a5;
    if ( !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 64), (struct _SURFOBJ **)&Src[3], v13)
      || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 80), (struct _SURFOBJ **)&Src[4], v14)
      || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 96), (struct _SURFOBJ **)&Src[5], v15)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 112), (const void **)&Src[6], 0x18u)
      || !(unsigned int)UMPDOBJ::pxlo(v16, (struct _XLATEOBJ **)&Src[7])
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[8], 0x18u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[9], 8u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[10], 0x18u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[11], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[12], 8u)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v16, Src, 0x70u, &v22, Size) == -1)
      || (v19 = 1, !v22) )
    {
      v19 = 0;
    }
  }
  if ( *((_DWORD *)v16 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v16,
      (unsigned __int64)v36,
      (unsigned __int64)v30,
      (unsigned __int64)v29,
      v34,
      v33,
      v35,
      v31,
      v38,
      v37,
      v27,
      v13,
      v28,
      v14,
      v26,
      v15);
  v11 = v19;
LABEL_24:
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v11;
}
