/*
 * XREFs of ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02A0400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C0285020 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1C029BCA0 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C029BF1C (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02A2720 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02A28F4 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 */

struct _FD_GLYPHSET *__fastcall UMPDDrvQueryFontTree(
        struct DHPDEV__ *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _FD_GLYPHSET *v6; // rdi
  struct _FD_GLYPHSET *v7; // rsi
  UMPDOBJ *v11; // rbx
  __int64 v12; // rax
  int v13; // r14d
  unsigned int v14; // r15d
  WCRUN *v15; // r12
  char *KernelPtr; // rax
  char *v17; // rdx
  char *v18; // rax
  WCRUN *v19; // rsi
  __int64 v20; // r9
  __int64 v21; // r9
  struct _FD_GLYPHSET *FD_GLYPHSET; // rax
  const struct _FD_KERNINGPAIR *v23; // rcx
  struct DHPDEV__ *v24; // r14
  size_t Size; // [rsp+20h] [rbp-A1h]
  void *v27; // [rsp+38h] [rbp-89h] BYREF
  UMPDOBJ *v28; // [rsp+40h] [rbp-81h] BYREF
  struct DHPDEV__ *v29; // [rsp+48h] [rbp-79h]
  _QWORD v30[4]; // [rsp+50h] [rbp-71h] BYREF
  _QWORD Src[10]; // [rsp+70h] [rbp-51h] BYREF

  v29 = a1;
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  memset(Src, 0, 0x48uLL);
  v11 = v28;
  if ( !v28 )
  {
LABEL_28:
    v6 = v7;
    goto LABEL_29;
  }
  Src[0] = 0x1B00000048LL;
  v12 = *(_QWORD *)v28;
  Src[3] = a1;
  v13 = 1;
  Src[2] = v12;
  Src[4] = a2;
  Src[5] = __PAIR64__(a4, a3);
  Src[6] = UMPDOBJ::_AllocUserMem(v28, 4u, 1);
  LODWORD(Src[7]) = 0;
  Src[8] = 0LL;
  if ( Src[6] )
  {
    LODWORD(Size) = 8;
    v14 = -1;
    if ( (unsigned int)UMPDOBJ::Thunk(v11, Src, 72LL, &v27, Size) != -1 )
    {
      v15 = (WCRUN *)v27;
      if ( v27 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v11, (char *)Src[6]);
        v17 = (char *)Src[8];
        *a5 = *(_DWORD *)KernelPtr;
        if ( !*((_DWORD *)v11 + 109) || !v17 || !LODWORD(Src[7]) )
          v13 = 0;
        v18 = UMPDOBJ::GetKernelPtr((char **)v11, v17);
        if ( a4 == 3 )
        {
          v19 = v15;
          if ( v13 )
          {
            v14 = Src[7];
            v19 = (WCRUN *)v18;
          }
          if ( (unsigned int)UMPDOBJ::bSandboxedClient(v11) && (v20 = *((_QWORD *)v11 + 49)) != 0 )
            v21 = *(_QWORD *)(v20 + 40);
          else
            v21 = 0LL;
          FD_GLYPHSET = ProbeAndReadFD_GLYPHSET(v19, v13, v14, v21);
        }
        else
        {
          if ( a4 != 2 )
          {
LABEL_22:
            v24 = v29;
            if ( (unsigned int)bIsFreeHooked(v29, v11) )
            {
              memset(v30, 0, sizeof(v30));
              if ( v7 )
                PushThreadGuardedObject(v30, v7, Win32FreePool);
              UMPDMyDrvFree(v11, v24, v15, *a5);
              if ( v7 )
                PopThreadGuardedObject(v30);
            }
            *a5 = (unsigned int)v7;
            goto LABEL_28;
          }
          v23 = (const struct _FD_KERNINGPAIR *)v15;
          if ( v13 )
          {
            v14 = Src[7];
            v23 = (const struct _FD_KERNINGPAIR *)v18;
          }
          FD_GLYPHSET = (struct _FD_GLYPHSET *)ProbeAndReadFD_KERNINGPAIR(v23, v13, v14);
        }
        v7 = FD_GLYPHSET;
        goto LABEL_22;
      }
    }
  }
LABEL_29:
  XUMPDOBJ::~XUMPDOBJ(&v28);
  return v6;
}
