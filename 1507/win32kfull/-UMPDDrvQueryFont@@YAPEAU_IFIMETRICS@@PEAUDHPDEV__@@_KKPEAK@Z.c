/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C029F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C011C278 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C011C2D0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C029C72C (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02A1F38 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02A210C (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  size_t Size; // [rsp+20h] [rbp-79h]
  struct UMPDOBJ *v21; // [rsp+30h] [rbp-69h] BYREF
  void *v22; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD Src[10]; // [rsp+60h] [rbp-39h] BYREF

  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  memset(Src, 0, 0x48uLL);
  v9 = v21;
  if ( v21 )
  {
    Src[0] = 0x1A00000048LL;
    Src[2] = *(_QWORD *)v21;
    Src[3] = a1;
    Src[4] = a2;
    LODWORD(Src[5]) = a3;
    v10 = UMPDOBJ::_AllocUserMem(v21, 4u, 1);
    LODWORD(Src[7]) = 0;
    Src[8] = 0LL;
    Src[6] = v10;
    if ( !v10 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v9, Src, 0x48u, &v22, Size) == -1) )
    {
      v12 = 0LL;
    }
    else
    {
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)v9, (char *)Src[6]);
      v12 = (char *)v22;
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
          memset(v23, 0, sizeof(v23));
          if ( IFIMETRICS )
            PushThreadGuardedObject(v23, IFIMETRICS, Win32FreePool);
          UMPDMyDrvFree(v9, a1, v12, *a4);
          if ( IFIMETRICS )
            PopThreadGuardedObject(v23, v16, v17, v18);
        }
        goto LABEL_14;
      }
    }
    IFIMETRICS = (struct _IFIMETRICS *)v12;
  }
LABEL_17:
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return IFIMETRICS;
}
