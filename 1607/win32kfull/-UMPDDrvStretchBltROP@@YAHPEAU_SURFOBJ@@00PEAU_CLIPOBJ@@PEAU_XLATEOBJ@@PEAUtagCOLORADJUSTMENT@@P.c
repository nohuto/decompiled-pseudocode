/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C02A1650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1C0284FA8 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0285344 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C029C1B0 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02A2C00 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  struct _SURFOBJ *v13; // rdi
  int v14; // r15d
  int v15; // esi
  int v16; // r14d
  UMPDOBJ *v17; // rcx
  UMPDOBJ *v18; // rbx
  struct _SURFOBJ *v19; // r13
  ULONG v20; // eax
  unsigned int v21; // eax
  BOOL v22; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v25; // [rsp+90h] [rbp-80h] BYREF
  int v26; // [rsp+94h] [rbp-7Ch] BYREF
  int v27; // [rsp+98h] [rbp-78h] BYREF
  int v28; // [rsp+9Ch] [rbp-74h] BYREF
  int v29; // [rsp+A0h] [rbp-70h] BYREF
  int v30; // [rsp+A4h] [rbp-6Ch] BYREF
  int v31; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v32; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v33; // [rsp+B8h] [rbp-58h] BYREF
  void *v34; // [rsp+C0h] [rbp-50h] BYREF
  void *v35; // [rsp+C8h] [rbp-48h] BYREF
  void *v36; // [rsp+D0h] [rbp-40h] BYREF
  void *v37; // [rsp+D8h] [rbp-38h] BYREF
  void *v38; // [rsp+E0h] [rbp-30h] BYREF
  void *v39; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v40; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v41; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v42; // [rsp+100h] [rbp-10h] BYREF
  struct _CLIPOBJ *v43; // [rsp+108h] [rbp-8h]
  struct tagCOLORADJUSTMENT *v44; // [rsp+110h] [rbp+0h]
  struct _POINTL *v45; // [rsp+118h] [rbp+8h]
  struct _RECTL *v46; // [rsp+120h] [rbp+10h]
  struct _RECTL *v47; // [rsp+128h] [rbp+18h]
  struct _POINTL *v48; // [rsp+130h] [rbp+20h]
  struct _BRUSHOBJ *v49; // [rsp+138h] [rbp+28h]
  _QWORD Src[16]; // [rsp+140h] [rbp+30h] BYREF

  v13 = a3;
  v44 = a6;
  v14 = 0;
  v15 = 0;
  v45 = a7;
  v16 = 0;
  v46 = a8;
  v47 = a9;
  v48 = a10;
  v32 = a1;
  v49 = a12;
  v43 = a4;
  v40 = a3;
  v33 = a2;
  v42 = a3;
  v25 = 1;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v41);
  v39 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  memset(Src, 0, sizeof(Src));
  v18 = v41;
  if ( !v41 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v17, &v33, &v42) )
  {
    v22 = 0;
    goto LABEL_25;
  }
  v19 = v33;
  if ( !*((_DWORD *)v18 + 109) )
    goto LABEL_9;
  if ( a5 )
    v20 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v20 = 0;
  v25 = v20 + 256;
  v21 = UMPDOBJ::bThunkLargeBitmaps(
          v18,
          v32,
          v33,
          v13,
          &v39,
          &v38,
          &v37,
          &v36,
          &v35,
          &v34,
          &v31,
          &v26,
          &v30,
          &v27,
          &v29,
          &v28,
          &v25);
  v14 = v26;
  v22 = v21;
  v15 = v27;
  v16 = v28;
  v25 = v21;
  if ( v21 )
  {
    v13 = v40;
LABEL_9:
    Src[0] = 0x4500000080LL;
    Src[2] = *(_QWORD *)v18;
    Src[3] = v32;
    Src[6] = v43;
    Src[8] = v44;
    Src[9] = v45;
    Src[10] = v46;
    Src[11] = v47;
    Src[12] = v48;
    LODWORD(Src[13]) = a11;
    Src[14] = v49;
    LODWORD(Src[15]) = a13;
    Src[4] = v19;
    Src[5] = v13;
    Src[7] = a5;
    v22 = 0;
    if ( (unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 64), (struct _SURFOBJ **)&Src[3], v14) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 80), (struct _SURFOBJ **)&Src[4], v15) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 96), (struct _SURFOBJ **)&Src[5], v16) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                               v18,
                               (UMPDOBJ *)((char *)v18 + 112),
                               (const void **)&Src[6],
                               0x18u,
                               0LL) )
          {
            if ( (unsigned int)UMPDOBJ::pxlo(v18, (struct _XLATEOBJ **)&Src[7]) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[8], 0x18u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[9], 8u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[10], 0x10u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[11], 0x10u) )
                    {
                      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[12], 8u) )
                      {
                        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                             v18,
                                             (UMPDOBJ *)((char *)v18 + 144),
                                             (const void **)&Src[14],
                                             0x18u,
                                             0LL) )
                        {
                          LODWORD(Size) = 4;
                          if ( (unsigned int)UMPDOBJ::Thunk(v18, Src, 128LL, &v25, Size) != -1 )
                            v22 = v25 != 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v18 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v18,
      (unsigned __int64)v32,
      (unsigned __int64)v19,
      (unsigned __int64)v40,
      v39,
      v38,
      v37,
      v36,
      v35,
      v34,
      v31,
      v14,
      v30,
      v15,
      v29,
      v16);
LABEL_25:
  XUMPDOBJ::~XUMPDOBJ(&v41);
  return v22;
}
