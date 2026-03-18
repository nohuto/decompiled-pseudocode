/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C029FA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C011C278 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C011C3C8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0286598 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A2E80 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A3100 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        struct _FONTOBJ *a6,
        size_t Size)
{
  struct UMPDOBJ *v10; // rbx
  void *v11; // r15
  int v12; // eax
  unsigned int v13; // r14d
  char *KernelPtr; // rax
  size_t v16; // [rsp+20h] [rbp-91h]
  unsigned int v17; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-79h] BYREF
  struct UMPDOBJ *v19[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD Src[10]; // [rsp+50h] [rbp-61h] BYREF

  v18 = (unsigned __int64)a6;
  v17 = a4;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v19);
  memset(Src, 0, 0x48uLL);
  v10 = v19[0];
  if ( !v19[0] )
    goto LABEL_12;
  Src[0] = 0x1C00000048LL;
  Src[2] = *(_QWORD *)v19[0];
  Src[3] = a1;
  Src[4] = a2;
  v11 = (void *)(v18 & -(__int64)((_DWORD)Size != 0));
  Src[7] = v11;
  Src[5] = __PAIR64__(v17, a3);
  Src[6] = a5;
  LODWORD(Src[8]) = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v19[0], (const void **)&Src[6], 0x40u) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&Src[7], Size)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                       v10,
                       (struct UMPDOBJ *)((char *)v10 + 176),
                       (const void **)&Src[4],
                       0x40u,
                       0LL) )
  {
    v18 = (unsigned __int64)a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v18, v10, 0LL, 0LL, 0LL);
    LODWORD(v16) = 4;
    v12 = UMPDOBJ::Thunk(v10, Src, 0x48u, &v17, v16);
    v13 = v17;
    if ( v12 == -1 )
      v13 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v18, v10, 0, 0, 0LL);
    v18 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    if ( v13 != -1 )
    {
      if ( v11 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)Src[7]);
        memmove(v11, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr((char **)v10, (char *)Src[6]);
    }
  }
  else
  {
LABEL_12:
    v13 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(v19);
  return v13;
}
