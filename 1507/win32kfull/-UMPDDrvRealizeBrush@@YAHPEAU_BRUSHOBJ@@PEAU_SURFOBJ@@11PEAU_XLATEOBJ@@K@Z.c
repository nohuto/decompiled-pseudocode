/*
 * XREFs of ?UMPDDrvRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C02A0040
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
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

_BOOL8 __fastcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  struct _SURFOBJ *v10; // rdi
  UMPDOBJ *v11; // rcx
  UMPDOBJ *v12; // rbx
  ULONG v13; // eax
  unsigned int v14; // eax
  BOOL v15; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v18; // [rsp+90h] [rbp-80h] BYREF
  int v19; // [rsp+94h] [rbp-7Ch] BYREF
  int v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+9Ch] [rbp-74h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  int v23; // [rsp+A4h] [rbp-6Ch] BYREF
  int v24; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v25; // [rsp+B0h] [rbp-60h] BYREF
  void *v26; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v28; // [rsp+C8h] [rbp-48h]
  void *v29; // [rsp+D0h] [rbp-40h] BYREF
  UMPDOBJ *v30; // [rsp+D8h] [rbp-38h] BYREF
  void *v31; // [rsp+E0h] [rbp-30h] BYREF
  void *v32; // [rsp+E8h] [rbp-28h] BYREF
  void *v33; // [rsp+F0h] [rbp-20h] BYREF
  struct _SURFOBJ *v34; // [rsp+F8h] [rbp-18h] BYREF
  struct _BRUSHOBJ *v35; // [rsp+100h] [rbp-10h]
  _QWORD Src[10]; // [rsp+110h] [rbp+0h] BYREF

  v35 = a1;
  v6 = 0;
  v23 = 0;
  v24 = 0;
  v7 = 0;
  v22 = 0;
  v8 = 0;
  v21 = 0;
  v20 = 0;
  v10 = a2;
  v19 = 0;
  v28 = a2;
  v25 = a3;
  v34 = a4;
  v18 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v27 = 0LL;
  v32 = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  memset(Src, 0, 0x48uLL);
  v12 = v30;
  if ( !v30 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v11, &v25, &v34) )
  {
    v15 = 0;
    goto LABEL_21;
  }
  if ( *((_DWORD *)v12 + 109) )
  {
    if ( a5 )
      v13 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 24;
    else
      v13 = 0;
    v18 = v13 + 104;
    v14 = UMPDOBJ::bThunkLargeBitmaps(
            v12,
            v10,
            v25,
            a4,
            &v27,
            &v31,
            &v32,
            &v29,
            &v26,
            &v33,
            &v23,
            &v21,
            &v24,
            &v20,
            &v22,
            &v19,
            &v18);
    v6 = v21;
    v15 = v14;
    v7 = v20;
    v8 = v19;
    v18 = v14;
    if ( !v14 )
      goto LABEL_18;
    v10 = v28;
  }
  Src[0] = 0xC00000048LL;
  Src[2] = *(_QWORD *)v12;
  Src[6] = v35;
  Src[4] = v25;
  LODWORD(Src[8]) = a6;
  Src[3] = v10;
  Src[5] = a4;
  Src[7] = a5;
  v15 = 0;
  if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&Src[6], 0x18u, 0LL) )
  {
    if ( (unsigned int)UMPDOBJ::psoDest(v12, (struct _SURFOBJ **)&Src[3], v6) )
    {
      if ( (unsigned int)UMPDOBJ::psoSrc(v12, (struct _SURFOBJ **)&Src[4], v7) )
      {
        if ( (unsigned int)UMPDOBJ::psoMask(v12, (struct _SURFOBJ **)&Src[5], v8) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&Src[7]) )
          {
            LODWORD(Size) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v12, Src, 0x48u, &v18, Size) != -1 )
            {
              if ( v18 )
                v15 = 1;
            }
          }
        }
      }
    }
  }
LABEL_18:
  if ( *((_DWORD *)v12 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v12,
      (unsigned __int64)v28,
      (unsigned __int64)v25,
      (unsigned __int64)a4,
      v27,
      v31,
      v32,
      v29,
      v26,
      v33,
      v23,
      v6,
      v24,
      v7,
      v22,
      v8);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v15;
}
