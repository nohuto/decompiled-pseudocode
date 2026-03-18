/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C029DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0100E7C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C011C278 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C011C2D0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C011C3C8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0286598 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C840 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A231C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A2E80 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A3100 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall UMPDDrvFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int Size,
        void *a7)
{
  unsigned int v10; // r14d
  int v11; // r12d
  struct UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  void *v16; // rsi
  struct _FONTOBJ *v17; // r14
  int v18; // eax
  char *KernelPtr; // rax
  int v21; // [rsp+20h] [rbp-D1h]
  size_t v22; // [rsp+20h] [rbp-D1h]
  int v23; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v24; // [rsp+48h] [rbp-A9h] BYREF
  int *v25; // [rsp+50h] [rbp-A1h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-99h] BYREF
  void *v27; // [rsp+60h] [rbp-91h] BYREF
  void *v28; // [rsp+68h] [rbp-89h] BYREF
  struct UMPDOBJ *v29; // [rsp+70h] [rbp-81h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-79h]
  struct _FONTOBJ *v31; // [rsp+80h] [rbp-71h]
  unsigned __int64 v32; // [rsp+88h] [rbp-69h]
  _QWORD Src[10]; // [rsp+90h] [rbp-61h] BYREF

  v30 = (unsigned __int64)a5;
  v32 = (unsigned __int64)a7;
  v10 = -1;
  LODWORD(v24) = a3;
  v31 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v28 = 0LL;
  v27 = 0LL;
  v11 = 0;
  v25 = (int *)0xFFFFFFFF00000000LL;
  v23 = 0;
  memset(Src, 0, sizeof(Src));
  v12 = v29;
  if ( !v29 )
    goto LABEL_28;
  if ( !*((_DWORD *)v29 + 109) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_11;
  if ( a4 + 7 < a4
    || Size + 7 < Size
    || (v13 = (Size + 7) & 0xFFFFFFF8, v14 = ((a4 + 7) & 0xFFFFFFF8) + 152, v14 < 0x98)
    || v13 + v14 < v14 )
  {
LABEL_28:
    v10 = -1;
    goto LABEL_29;
  }
  v26 = v13 + v14;
  v15 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v28, &v27, (int *)&v25, &v23, &v26);
  v11 = v23;
  if ( v15 )
  {
LABEL_11:
    Src[0] = 0x2F00000050LL;
    Src[2] = *(_QWORD *)v12;
    v16 = (void *)(v32 & -(__int64)(Size != 0));
    if ( (_DWORD)v24 == 8 )
    {
      Src[3] = 0LL;
      Src[4] = a1;
    }
    else
    {
      Src[3] = a1;
    }
    v17 = v31;
    Src[5] = v31;
    Src[6] = __PAIR64__(a4, (unsigned int)v24);
    Src[7] = v30 & -(__int64)(a4 != 0);
    LODWORD(Src[8]) = Size;
    Src[9] = v32 & -(__int64)(Size != 0);
    if ( (!v16 || (Src[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (struct UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v11)
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                         v12,
                         (struct UMPDOBJ *)((char *)v12 + 176),
                         (const void **)&Src[5],
                         0x40u,
                         0LL)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[7], a4) )
    {
      v24 = v17;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v24, v12, 0LL, 0LL, 0LL);
      LODWORD(v22) = 4;
      v18 = UMPDOBJ::Thunk(v12, Src, 0x50u, (char *)&v25 + 4, v22);
      v10 = HIDWORD(v25);
      if ( v18 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v24, v12, 0, 0, 0LL);
      if ( v10 != -1 && v16 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v12, (char *)Src[9]);
        memmove(v16, KernelPtr, Size);
      }
      v24 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    }
    else
    {
      v10 = -1;
    }
  }
  if ( (_DWORD)v25 )
    UMPDOBJ::RestoreBitmap(v12, a1, v28, v27, v21, v11);
LABEL_29:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v10;
}
