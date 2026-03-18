/*
 * XREFs of ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C029D170
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

__int64 __fastcall UMPDDrvCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // edi
  int v9; // r14d
  int v10; // esi
  UMPDOBJ *v11; // rcx
  UMPDOBJ *v12; // rbx
  struct _SURFOBJ *v13; // r12
  ULONG v14; // eax
  unsigned int v15; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v18; // [rsp+90h] [rbp-80h] BYREF
  int v19; // [rsp+94h] [rbp-7Ch] BYREF
  int v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+9Ch] [rbp-74h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  void *v23; // [rsp+A8h] [rbp-68h] BYREF
  UMPDOBJ *v24; // [rsp+B0h] [rbp-60h] BYREF
  void *v25; // [rsp+B8h] [rbp-58h] BYREF
  void *v26; // [rsp+C0h] [rbp-50h] BYREF
  void *v27; // [rsp+C8h] [rbp-48h] BYREF
  struct _SURFOBJ *v28; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v29; // [rsp+D8h] [rbp-38h]
  struct _POINTL *v30; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v31; // [rsp+E8h] [rbp-28h]
  _QWORD Src[10]; // [rsp+F0h] [rbp-20h] BYREF

  v6 = 0;
  v31 = a5;
  v30 = a6;
  v29 = a3;
  v9 = 0;
  v28 = a2;
  v10 = 0;
  v18 = 1;
  v22 = 0;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v24);
  v26 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  memset(Src, 0, 0x48uLL);
  v12 = v24;
  if ( !v24 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v11, &v28, 0LL) )
    goto LABEL_20;
  v13 = v28;
  if ( !*((_DWORD *)v12 + 109) )
    goto LABEL_9;
  if ( a4 )
    v14 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v14 = 0;
  v18 = v14 + 128;
  v15 = UMPDOBJ::bThunkLargeBitmaps(
          v12,
          a1,
          v28,
          0LL,
          &v26,
          &v27,
          &v23,
          &v25,
          0LL,
          0LL,
          &v22,
          &v19,
          &v21,
          &v20,
          0LL,
          0LL,
          &v18);
  v9 = v19;
  v6 = v15;
  v10 = v20;
  v18 = v15;
  if ( v15 )
  {
    v6 = 0;
LABEL_9:
    Src[0] = 0x1300000048LL;
    Src[2] = *(_QWORD *)v12;
    Src[5] = v29;
    Src[7] = v31;
    Src[8] = v30;
    Src[3] = a1;
    Src[4] = v13;
    Src[6] = a4;
    if ( (unsigned int)UMPDOBJ::psoDest(v12, (struct _SURFOBJ **)&Src[3], v9) )
    {
      if ( (unsigned int)UMPDOBJ::psoSrc(v12, (struct _SURFOBJ **)&Src[4], v10) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&Src[5], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&Src[6]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[7], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[8], 8u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v12, Src, 0x48u, &v18, Size) != -1 )
                {
                  if ( v18 )
                    v6 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v12 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v12,
      (unsigned __int64)a1,
      (unsigned __int64)v13,
      0LL,
      v26,
      v27,
      v23,
      v25,
      0LL,
      0LL,
      v22,
      v9,
      v21,
      v10,
      0,
      0);
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v24);
  return v6;
}
