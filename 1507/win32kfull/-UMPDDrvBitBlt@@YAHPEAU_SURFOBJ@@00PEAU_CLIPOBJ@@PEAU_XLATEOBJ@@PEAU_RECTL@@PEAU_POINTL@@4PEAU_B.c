/*
 * XREFs of ?UMPDDrvBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029CD50
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

_BOOL8 __fastcall UMPDDrvBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v11; // rdi
  int v12; // r15d
  int v13; // esi
  int v14; // r14d
  UMPDOBJ *v15; // rcx
  UMPDOBJ *v16; // rbx
  struct _SURFOBJ *v17; // r13
  ULONG v18; // eax
  unsigned int v19; // eax
  BOOL v20; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v23; // [rsp+90h] [rbp-80h] BYREF
  int v24; // [rsp+94h] [rbp-7Ch] BYREF
  int v25; // [rsp+98h] [rbp-78h] BYREF
  int v26; // [rsp+9Ch] [rbp-74h] BYREF
  int v27; // [rsp+A0h] [rbp-70h] BYREF
  int v28; // [rsp+A4h] [rbp-6Ch] BYREF
  int v29; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v30; // [rsp+B0h] [rbp-60h]
  void *v31; // [rsp+B8h] [rbp-58h] BYREF
  UMPDOBJ *v32; // [rsp+C0h] [rbp-50h] BYREF
  void *v33; // [rsp+C8h] [rbp-48h] BYREF
  void *v34; // [rsp+D0h] [rbp-40h] BYREF
  void *v35; // [rsp+D8h] [rbp-38h] BYREF
  struct _SURFOBJ *v36; // [rsp+E0h] [rbp-30h] BYREF
  struct _SURFOBJ *v37; // [rsp+E8h] [rbp-28h]
  void *v38; // [rsp+F0h] [rbp-20h] BYREF
  void *v39; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v40; // [rsp+100h] [rbp-10h] BYREF
  struct _POINTL *v41; // [rsp+108h] [rbp-8h]
  struct _CLIPOBJ *v42; // [rsp+110h] [rbp+0h]
  struct _BRUSHOBJ *v43; // [rsp+118h] [rbp+8h]
  struct _POINTL *v44; // [rsp+120h] [rbp+10h]
  struct _POINTL *v45; // [rsp+128h] [rbp+18h]
  struct _RECTL *v46; // [rsp+130h] [rbp+20h]
  _QWORD Src[14]; // [rsp+140h] [rbp+30h] BYREF

  v11 = a3;
  v46 = a6;
  v12 = 0;
  v13 = 0;
  v44 = a7;
  v14 = 0;
  v41 = a8;
  v43 = a9;
  v30 = a1;
  v45 = a10;
  v42 = a4;
  v37 = a3;
  v36 = a2;
  v40 = a3;
  v23 = 1;
  v28 = 0;
  v29 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v35 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  memset(Src, 0, sizeof(Src));
  v16 = v32;
  if ( !v32 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v15, &v36, &v40) )
  {
    v20 = 0;
    goto LABEL_24;
  }
  v17 = v36;
  if ( !*((_DWORD *)v16 + 109) )
    goto LABEL_9;
  if ( a5 )
    v18 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v18 = 0;
  v23 = v18 + 208;
  v19 = UMPDOBJ::bThunkLargeBitmaps(
          v16,
          v30,
          v36,
          v11,
          &v35,
          &v33,
          &v31,
          &v38,
          &v34,
          &v39,
          &v28,
          &v26,
          &v29,
          &v25,
          &v27,
          &v24,
          &v23);
  v12 = v26;
  v20 = v19;
  v13 = v25;
  v14 = v24;
  v23 = v19;
  if ( v19 )
  {
    v11 = v37;
LABEL_9:
    Src[0] = 0x1200000070LL;
    Src[2] = *(_QWORD *)v16;
    Src[3] = v30;
    Src[6] = v42;
    Src[8] = v46;
    Src[9] = v44;
    Src[10] = v41;
    Src[11] = v43;
    Src[12] = v45;
    LODWORD(Src[13]) = a11;
    Src[4] = v17;
    Src[5] = v11;
    Src[7] = a5;
    v20 = 0;
    if ( (unsigned int)UMPDOBJ::psoDest(v16, (struct _SURFOBJ **)&Src[3], v12) )
    {
      if ( (unsigned int)UMPDOBJ::psoSrc(v16, (struct _SURFOBJ **)&Src[4], v13) )
      {
        if ( (unsigned int)UMPDOBJ::psoMask(v16, (struct _SURFOBJ **)&Src[5], v14) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                               v16,
                               (UMPDOBJ *)((char *)v16 + 112),
                               (const void **)&Src[6],
                               0x18u,
                               0LL) )
          {
            if ( (unsigned int)UMPDOBJ::pxlo(v16, (struct _XLATEOBJ **)&Src[7]) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[8], 0x10u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[9], 8u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[10], 8u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                         v16,
                                         (UMPDOBJ *)((char *)v16 + 144),
                                         (const void **)&Src[11],
                                         0x18u,
                                         0LL) )
                    {
                      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[12], 8u) )
                      {
                        LODWORD(Size) = 4;
                        if ( (unsigned int)UMPDOBJ::Thunk(v16, Src, 0x70u, &v23, Size) != -1 )
                          v20 = v23 != 0;
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
  if ( *((_DWORD *)v16 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v16,
      (unsigned __int64)v30,
      (unsigned __int64)v17,
      (unsigned __int64)v37,
      v35,
      v33,
      v31,
      v38,
      v34,
      v39,
      v28,
      v12,
      v29,
      v13,
      v27,
      v14);
LABEL_24:
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v20;
}
