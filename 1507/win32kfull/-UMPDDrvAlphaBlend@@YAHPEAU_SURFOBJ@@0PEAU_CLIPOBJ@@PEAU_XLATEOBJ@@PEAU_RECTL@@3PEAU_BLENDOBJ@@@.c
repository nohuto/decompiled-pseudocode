/*
 * XREFs of ?UMPDDrvAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029CA20
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
 *     ?psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C02867B4 (-psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C02868C0 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C029C884 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02A2418 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v7; // edi
  int v10; // r14d
  int v11; // esi
  UMPDOBJ *v12; // rcx
  UMPDOBJ *v13; // rbx
  struct _SURFOBJ *v14; // r12
  ULONG v15; // eax
  unsigned int v16; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  void *v24; // [rsp+A8h] [rbp-68h] BYREF
  UMPDOBJ *v25; // [rsp+B0h] [rbp-60h] BYREF
  void *v26; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v28; // [rsp+C8h] [rbp-48h] BYREF
  void *v29; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v30; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v31; // [rsp+E0h] [rbp-30h]
  struct _BLENDOBJ *v32; // [rsp+E8h] [rbp-28h]
  struct _RECTL *v33; // [rsp+F0h] [rbp-20h]
  _QWORD Src[10]; // [rsp+100h] [rbp-10h] BYREF

  v7 = 0;
  v33 = a5;
  v31 = a6;
  v10 = 0;
  v32 = a7;
  v11 = 0;
  v30 = a3;
  v28 = a2;
  v19 = 1;
  v23 = 0;
  v22 = 0;
  v20 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v27 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v29 = 0LL;
  memset(Src, 0, sizeof(Src));
  v13 = v25;
  if ( !v25 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v12, &v28, 0LL) )
    goto LABEL_21;
  v14 = v28;
  if ( !*((_DWORD *)v13 + 109) )
    goto LABEL_9;
  if ( a4 )
    v15 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v15 = 0;
  v19 = v15 + 152;
  v16 = UMPDOBJ::bThunkLargeBitmaps(
          v13,
          a1,
          v28,
          0LL,
          &v27,
          &v26,
          &v24,
          &v29,
          0LL,
          0LL,
          &v23,
          &v20,
          &v22,
          &v21,
          0LL,
          0LL,
          &v19);
  v10 = v20;
  v7 = v16;
  v11 = v21;
  v19 = v16;
  if ( v16 )
  {
    v7 = 0;
LABEL_9:
    Src[0] = 0x4700000050LL;
    Src[2] = *(_QWORD *)v13;
    Src[5] = v30;
    Src[7] = v33;
    Src[8] = v31;
    Src[9] = v32;
    Src[3] = a1;
    Src[4] = v14;
    Src[6] = a4;
    if ( (unsigned int)UMPDOBJ::psoDest(v13, (struct _SURFOBJ **)&Src[3], v10) )
    {
      if ( (unsigned int)UMPDOBJ::psoSrc(v13, (struct _SURFOBJ **)&Src[4], v11) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 112), (const void **)&Src[5], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v13, (struct _XLATEOBJ **)&Src[6]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&Src[7], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&Src[8], 0x10u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                     v13,
                                     (UMPDOBJ *)((char *)v13 + 304),
                                     (const void **)&Src[9],
                                     4u,
                                     0LL) )
                {
                  LODWORD(Size) = 4;
                  if ( (unsigned int)UMPDOBJ::Thunk(v13, Src, 0x50u, &v19, Size) != -1 )
                  {
                    if ( v19 )
                      v7 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v13 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v13,
      (unsigned __int64)a1,
      (unsigned __int64)v14,
      0LL,
      v27,
      v26,
      v24,
      v29,
      0LL,
      0LL,
      v23,
      v10,
      v22,
      v11,
      0,
      0);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v7;
}
