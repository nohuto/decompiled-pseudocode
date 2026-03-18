/*
 * XREFs of ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C029CD90
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
  struct _SURFOBJ *v23; // [rsp+A8h] [rbp-68h] BYREF
  void *v24; // [rsp+B0h] [rbp-60h] BYREF
  void *v25; // [rsp+B8h] [rbp-58h] BYREF
  void *v26; // [rsp+C0h] [rbp-50h] BYREF
  void *v27; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v28; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v29; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v30; // [rsp+E0h] [rbp-30h]
  struct _POINTL *v31; // [rsp+E8h] [rbp-28h]
  _QWORD Src[10]; // [rsp+F0h] [rbp-20h] BYREF

  v6 = 0;
  v30 = a5;
  v31 = a6;
  v29 = a3;
  v9 = 0;
  v23 = a2;
  v10 = 0;
  v18 = 1;
  v22 = 0;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  memset(Src, 0, 0x48uLL);
  v12 = v28;
  if ( !v28 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v11, &v23, 0LL) )
    goto LABEL_20;
  v13 = v23;
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
          v23,
          0LL,
          &v27,
          &v26,
          &v25,
          &v24,
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
    Src[7] = v30;
    Src[8] = v31;
    Src[3] = a1;
    Src[4] = v13;
    Src[6] = a4;
    if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v9) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), (struct _SURFOBJ **)&Src[4], v10) )
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
                if ( (unsigned int)UMPDOBJ::Thunk(v12, Src, 72LL, &v18, Size) != -1 )
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
      v27,
      v26,
      v25,
      v24,
      0LL,
      0LL,
      v22,
      v9,
      v21,
      v10,
      0,
      0);
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v28);
  return v6;
}
