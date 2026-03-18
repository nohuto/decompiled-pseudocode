/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02A0050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C029C058 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02A2720 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02A28F4 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 */

struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rdi
  struct UMPDOBJ *v9; // rbx
  char *v10; // rax
  char *KernelPtr; // rax
  char *v12; // rsi
  int v13; // edi
  char *v14; // rax
  unsigned __int64 v15; // r8
  size_t Size; // [rsp+20h] [rbp-79h]
  struct UMPDOBJ *v18; // [rsp+30h] [rbp-69h] BYREF
  void *v19; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD Src[10]; // [rsp+60h] [rbp-39h] BYREF

  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset(Src, 0, 0x48uLL);
  v9 = v18;
  if ( v18 )
  {
    Src[0] = 0x1A00000048LL;
    Src[2] = *(_QWORD *)v18;
    Src[3] = a1;
    Src[4] = a2;
    LODWORD(Src[5]) = a3;
    v10 = UMPDOBJ::_AllocUserMem(v18, 4u, 1);
    LODWORD(Src[7]) = 0;
    Src[8] = 0LL;
    Src[6] = v10;
    if ( !v10 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v9, Src, 72LL, &v19, Size) == -1) )
    {
      v12 = 0LL;
    }
    else
    {
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)v9, (char *)Src[6]);
      v12 = (char *)v19;
      *a4 = *(_DWORD *)KernelPtr;
      if ( !v12 )
      {
LABEL_14:
        *a4 = (unsigned int)IFIMETRICS;
        goto LABEL_17;
      }
      if ( a3 )
      {
        v13 = *((_DWORD *)v9 + 109);
        v14 = v12;
        if ( v13 )
        {
          v14 = UMPDOBJ::GetKernelPtr((char **)v9, (char *)Src[8]);
          v15 = LODWORD(Src[7]);
        }
        else
        {
          v15 = -1LL;
        }
        IFIMETRICS = ProbeAndReadIFIMETRICS((struct _IFIMETRICS *)v14, v13 == 0, v15);
        if ( (unsigned int)bIsFreeHooked(a1, v9) )
        {
          memset(v20, 0, sizeof(v20));
          if ( IFIMETRICS )
            PushThreadGuardedObject(v20, IFIMETRICS, Win32FreePool);
          UMPDMyDrvFree(v9, a1, v12, *a4);
          if ( IFIMETRICS )
            PopThreadGuardedObject(v20);
        }
        goto LABEL_14;
      }
    }
    IFIMETRICS = (struct _IFIMETRICS *)v12;
  }
LABEL_17:
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return IFIMETRICS;
}
