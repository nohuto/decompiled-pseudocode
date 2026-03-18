/*
 * XREFs of ?UMPDDrvPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029F6C0
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

_BOOL8 __fastcall UMPDDrvPlgBlt(
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
  struct _SURFOBJ *v31; // [rsp+B8h] [rbp-58h] BYREF
  void *v32; // [rsp+C0h] [rbp-50h] BYREF
  void *v33; // [rsp+C8h] [rbp-48h] BYREF
  void *v34; // [rsp+D0h] [rbp-40h] BYREF
  void *v35; // [rsp+D8h] [rbp-38h] BYREF
  void *v36; // [rsp+E0h] [rbp-30h] BYREF
  void *v37; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v38; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v39; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v40; // [rsp+100h] [rbp-10h] BYREF
  struct _CLIPOBJ *v41; // [rsp+108h] [rbp-8h]
  struct tagCOLORADJUSTMENT *v42; // [rsp+110h] [rbp+0h]
  struct _POINTL *v43; // [rsp+118h] [rbp+8h]
  struct _POINTFIX *v44; // [rsp+120h] [rbp+10h]
  struct _RECTL *v45; // [rsp+128h] [rbp+18h]
  struct _POINTL *v46; // [rsp+130h] [rbp+20h]
  _QWORD Src[14]; // [rsp+140h] [rbp+30h] BYREF

  v11 = a3;
  v42 = a6;
  v12 = 0;
  v13 = 0;
  v43 = a7;
  v14 = 0;
  v44 = a8;
  v45 = a9;
  v30 = a1;
  v46 = a10;
  v41 = a4;
  v38 = a3;
  v31 = a2;
  v40 = a3;
  v23 = 1;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v39);
  v37 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  memset(Src, 0, sizeof(Src));
  v16 = v39;
  if ( !v39 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v15, &v31, &v40) )
  {
    v20 = 0;
    goto LABEL_26;
  }
  v17 = v31;
  if ( *((_DWORD *)v16 + 109) )
  {
    if ( a5 )
      v18 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 24;
    else
      v18 = 0;
    v23 = v18 + 224;
    v19 = UMPDOBJ::bThunkLargeBitmaps(
            v16,
            v30,
            v31,
            v11,
            &v37,
            &v36,
            &v35,
            &v34,
            &v33,
            &v32,
            &v29,
            &v24,
            &v28,
            &v25,
            &v27,
            &v26,
            &v23);
    v12 = v24;
    v20 = v19;
    v13 = v25;
    v14 = v26;
    v23 = v19;
    if ( !v19 )
      goto LABEL_23;
    v11 = v38;
  }
  Src[0] = 0x4600000070LL;
  Src[2] = *(_QWORD *)v16;
  Src[3] = v30;
  Src[6] = v41;
  Src[8] = v42;
  Src[9] = v43;
  Src[10] = v44;
  Src[11] = v45;
  Src[12] = v46;
  LODWORD(Src[13]) = a11;
  Src[4] = v17;
  Src[5] = v11;
  Src[7] = a5;
  v20 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 64), (struct _SURFOBJ **)&Src[3], v12) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 80), (struct _SURFOBJ **)&Src[4], v13) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 96), (struct _SURFOBJ **)&Src[5], v14) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 112), (const void **)&Src[6], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v16, (struct _XLATEOBJ **)&Src[7]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[8], 0x18u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[9], 8u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[10], 0x18u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[11], 0x10u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&Src[12], 8u) )
                    {
                      LODWORD(Size) = 4;
                      if ( (unsigned int)UMPDOBJ::Thunk(v16, Src, 112LL, &v23, Size) != -1 )
                      {
                        if ( v23 )
                          v20 = 1;
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
LABEL_23:
  if ( *((_DWORD *)v16 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v16,
      (unsigned __int64)v30,
      (unsigned __int64)v17,
      (unsigned __int64)v38,
      v37,
      v36,
      v35,
      v34,
      v33,
      v32,
      v29,
      v12,
      v28,
      v13,
      v27,
      v14);
LABEL_26:
  XUMPDOBJ::~XUMPDOBJ(&v39);
  return v20;
}
