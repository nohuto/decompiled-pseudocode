/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C029E170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z @ 0x1C0284F84 (-bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x1C0285408 (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C16C (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A2B04 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  struct _SURFOBJ *v6; // r14
  unsigned int v7; // edi
  int v10; // r12d
  UMPDOBJ *v11; // rbx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  struct _XFORMOBJ **v15; // r14
  void *v16; // r13
  UMPDOBJ *v17; // rcx
  char *KernelPtr; // rax
  size_t v20; // [rsp+20h] [rbp-B9h]
  int v21; // [rsp+40h] [rbp-99h] BYREF
  int v22; // [rsp+44h] [rbp-95h] BYREF
  struct _SURFOBJ *v23; // [rsp+48h] [rbp-91h]
  int v24; // [rsp+50h] [rbp-89h] BYREF
  struct _XFORMOBJ *v25; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-79h] BYREF
  void *v27; // [rsp+68h] [rbp-71h] BYREF
  void *v28; // [rsp+70h] [rbp-69h] BYREF
  UMPDOBJ *v29; // [rsp+78h] [rbp-61h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-59h]
  _QWORD Src[8]; // [rsp+90h] [rbp-49h] BYREF

  v6 = a1;
  v7 = -1;
  v23 = a1;
  v30 = (unsigned __int64)a6;
  v22 = -1;
  LODWORD(v25) = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v24 = 0;
  v10 = 0;
  v21 = 0;
  v28 = 0LL;
  v27 = 0LL;
  memset(Src, 0, sizeof(Src));
  v11 = v29;
  if ( !v29 )
    goto LABEL_26;
  if ( !*((_DWORD *)v29 + 109) )
    goto LABEL_8;
  if ( a3 + 7 < a3 )
    goto LABEL_26;
  if ( Size + 7 < Size )
    goto LABEL_26;
  v12 = (Size + 7) & 0xFFFFFFF8;
  v13 = ((a3 + 7) & 0xFFFFFFF8) + 80;
  if ( v13 < 0x50 || v12 + v13 < v13 )
    goto LABEL_26;
  v26 = v12 + v13;
  v14 = UMPDOBJ::bThunkLargeBitmap(v29, v6, &v28, &v27, &v24, &v21, &v26);
  v10 = v21;
  if ( v14 )
  {
LABEL_8:
    Src[0] = 0x1800000040LL;
    Src[2] = *(_QWORD *)v11;
    Src[3] = v6;
    LODWORD(Src[6]) = Size;
    v15 = (struct _XFORMOBJ **)(a4 & -(__int64)(a3 != 0));
    Src[5] = v15;
    Src[4] = __PAIR64__(a3, (unsigned int)v25);
    v16 = (void *)(v30 & -(__int64)(Size != 0));
    Src[7] = v16;
    if ( (_DWORD)v25 == 25 && *((int *)v23->hdev + 462) < 0 )
    {
      if ( !v15 || (v25 = v15[3], !(unsigned int)UMPDOBJ::pxo(v11, &v25)) )
      {
LABEL_23:
        v6 = v23;
        goto LABEL_24;
      }
      *(_QWORD *)(Src[5] + 24LL) = v25;
    }
    if ( (!a3
       || !(unsigned int)UMPDOBJ::bNeedThunk(v11, v15)
       || (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (const void **)&Src[5], a3))
      && (!Size || (Src[7] = UMPDOBJ::_AllocUserMem(v11, Size, 1)) != 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&Src[3], v10) )
      {
        LODWORD(v20) = 4;
        if ( (unsigned int)UMPDOBJ::Thunk(v11, Src, 64LL, &v22, v20) != -1 )
        {
          if ( Size )
          {
            KernelPtr = UMPDOBJ::GetKernelPtr((char **)v11, (char *)Src[7]);
            memmove(v16, KernelPtr, Size);
          }
          v7 = v22;
        }
      }
    }
    goto LABEL_23;
  }
LABEL_24:
  if ( v24 )
    UMPDOBJ::RestoreBitmap(v11, v6, v28, v27, v20, v10);
LABEL_26:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v7;
}
