/*
 * XREFs of ?UMPDDrvTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KI@Z @ 0x1C02A1C30
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

__int64 __fastcall UMPDDrvTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r14d
  int v12; // esi
  UMPDOBJ *v13; // rcx
  UMPDOBJ *v14; // rbx
  struct _SURFOBJ *v15; // r12
  ULONG v16; // eax
  unsigned int v17; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+9Ch] [rbp-74h] BYREF
  int v24; // [rsp+A0h] [rbp-70h] BYREF
  void *v25; // [rsp+A8h] [rbp-68h] BYREF
  UMPDOBJ *v26; // [rsp+B0h] [rbp-60h] BYREF
  void *v27; // [rsp+B8h] [rbp-58h] BYREF
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-48h] BYREF
  struct _SURFOBJ *v30; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v31; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v32; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v33; // [rsp+E8h] [rbp-28h]
  _QWORD Src[10]; // [rsp+F0h] [rbp-20h] BYREF

  v8 = 0;
  v33 = a5;
  v32 = a6;
  v31 = a3;
  v11 = 0;
  v30 = a2;
  v12 = 0;
  v20 = 1;
  v24 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v26);
  v28 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  memset(Src, 0, sizeof(Src));
  v14 = v26;
  if ( !v26 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v13, &v30, 0LL) )
    goto LABEL_20;
  v15 = v30;
  if ( !*((_DWORD *)v14 + 109) )
    goto LABEL_9;
  if ( a4 )
    v16 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v16 = 0;
  v20 = v16 + 144;
  v17 = UMPDOBJ::bThunkLargeBitmaps(
          v14,
          a1,
          v30,
          0LL,
          &v28,
          &v29,
          &v25,
          &v27,
          0LL,
          0LL,
          &v24,
          &v21,
          &v23,
          &v22,
          0LL,
          0LL,
          &v20);
  v11 = v21;
  v8 = v17;
  v12 = v22;
  v20 = v17;
  if ( v17 )
  {
    v8 = 0;
LABEL_9:
    Src[0] = 0x4A00000050LL;
    Src[2] = *(_QWORD *)v14;
    Src[5] = v31;
    Src[7] = v33;
    Src[8] = v32;
    Src[9] = __PAIR64__(a8, a7);
    Src[3] = a1;
    Src[4] = v15;
    Src[6] = a4;
    if ( (unsigned int)UMPDOBJ::psoDest(v14, (struct _SURFOBJ **)&Src[3], v11) )
    {
      if ( (unsigned int)UMPDOBJ::psoSrc(v14, (struct _SURFOBJ **)&Src[4], v12) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&Src[5], 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v14, (struct _XLATEOBJ **)&Src[6]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[7], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[8], 0x10u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v14, Src, 0x50u, &v20, Size) != -1 )
                {
                  if ( v20 )
                    v8 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v14 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v14,
      (unsigned __int64)a1,
      (unsigned __int64)v15,
      0LL,
      v28,
      v29,
      v25,
      v27,
      0LL,
      0LL,
      v24,
      v11,
      v23,
      v12,
      0,
      0);
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v26);
  return v8;
}
