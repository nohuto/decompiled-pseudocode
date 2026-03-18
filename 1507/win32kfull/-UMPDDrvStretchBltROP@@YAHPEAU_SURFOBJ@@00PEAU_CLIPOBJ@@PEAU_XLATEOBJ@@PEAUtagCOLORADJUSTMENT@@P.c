/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C02A0E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C011C3C8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0286598 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1C0286714 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C028678C (-psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C02867A0 (-psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C02867B4 (-psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C02868C0 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C029C884 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02A2418 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
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
  void *v33; // [rsp+B8h] [rbp-58h] BYREF
  struct _SURFOBJ *v34; // [rsp+C0h] [rbp-50h] BYREF
  void *v35; // [rsp+C8h] [rbp-48h] BYREF
  void *v36; // [rsp+D0h] [rbp-40h] BYREF
  void *v37; // [rsp+D8h] [rbp-38h] BYREF
  void *v38; // [rsp+E0h] [rbp-30h] BYREF
  struct _SURFOBJ *v39; // [rsp+E8h] [rbp-28h]
  void *v40; // [rsp+F0h] [rbp-20h] BYREF
  UMPDOBJ *v41; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v42; // [rsp+100h] [rbp-10h] BYREF
  struct _RECTL *v43; // [rsp+108h] [rbp-8h]
  struct _RECTL *v44; // [rsp+110h] [rbp+0h]
  struct tagCOLORADJUSTMENT *v45; // [rsp+118h] [rbp+8h]
  struct _POINTL *v46; // [rsp+120h] [rbp+10h]
  struct _CLIPOBJ *v47; // [rsp+128h] [rbp+18h]
  struct _BRUSHOBJ *v48; // [rsp+130h] [rbp+20h]
  struct _POINTL *v49; // [rsp+138h] [rbp+28h]
  _QWORD Src[16]; // [rsp+140h] [rbp+30h] BYREF

  v13 = a3;
  v45 = a6;
  v14 = 0;
  v15 = 0;
  v49 = a7;
  v16 = 0;
  v43 = a8;
  v44 = a9;
  v46 = a10;
  v32 = a1;
  v48 = a12;
  v47 = a4;
  v39 = a3;
  v34 = a2;
  v42 = a3;
  v25 = 1;
  v30 = 0;
  v31 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v41);
  v37 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  memset(Src, 0, sizeof(Src));
  v18 = v41;
  if ( !v41 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v17, &v34, &v42) )
  {
    v22 = 0;
    goto LABEL_25;
  }
  v19 = v34;
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
          v34,
          v13,
          &v37,
          &v35,
          &v33,
          &v40,
          &v36,
          &v38,
          &v30,
          &v28,
          &v31,
          &v27,
          &v29,
          &v26,
          &v25);
  v14 = v28;
  v22 = v21;
  v15 = v27;
  v16 = v26;
  v25 = v21;
  if ( v21 )
  {
    v13 = v39;
LABEL_9:
    Src[0] = 0x4500000080LL;
    Src[2] = *(_QWORD *)v18;
    Src[3] = v32;
    Src[6] = v47;
    Src[8] = v45;
    Src[9] = v49;
    Src[10] = v43;
    Src[11] = v44;
    Src[12] = v46;
    LODWORD(Src[13]) = a11;
    Src[14] = v48;
    LODWORD(Src[15]) = a13;
    Src[4] = v19;
    Src[5] = v13;
    Src[7] = a5;
    v22 = 0;
    if ( (unsigned int)UMPDOBJ::psoDest(v18, (struct _SURFOBJ **)&Src[3], v14) )
    {
      if ( (unsigned int)UMPDOBJ::psoSrc(v18, (struct _SURFOBJ **)&Src[4], v15) )
      {
        if ( (unsigned int)UMPDOBJ::psoMask(v18, (struct _SURFOBJ **)&Src[5], v16) )
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
                          if ( (unsigned int)UMPDOBJ::Thunk(v18, Src, 0x80u, &v25, Size) != -1 )
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
      (unsigned __int64)v39,
      v37,
      v35,
      v33,
      v40,
      v36,
      v38,
      v30,
      v14,
      v31,
      v15,
      v29,
      v16);
LABEL_25:
  XUMPDOBJ::~XUMPDOBJ(&v41);
  return v22;
}
