/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C029FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  struct UMPDOBJ *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  struct _FONTOBJ *v16; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-71h] BYREF
  struct UMPDOBJ *v18[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD Src[10]; // [rsp+50h] [rbp-59h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v18);
  memset(Src, 0, 0x48uLL);
  v10 = v18[0];
  if ( !v18[0] )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  Src[0] = 0x3500000048LL;
  Src[2] = *(_QWORD *)v18[0];
  Src[3] = a1;
  Src[4] = a2;
  LODWORD(Src[5]) = a3;
  Src[6] = a4;
  Src[7] = a5;
  LODWORD(Src[8]) = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  Src[7] = UMPDOBJ::_AllocUserMem(v18[0], 2 * a6, 1);
  if ( Src[7]
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                       v10,
                       (struct UMPDOBJ *)((char *)v10 + 176),
                       (const void **)&Src[4],
                       0x40u,
                       0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&Src[6], 4 * a6) )
  {
    v16 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, v10, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v11 = UMPDOBJ::Thunk(v10, Src, 72LL, &v17, Size);
    v12 = v17;
    if ( v11 == -1 )
      v12 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, v10, 0, 0, 0LL);
    v16 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)Src[7]);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v12 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v18);
  return v12;
}
