/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0145C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0146878 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C01469A0 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z @ 0x1C0146A34 (-bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0146A58 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0146AE8 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A1AF0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
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
  void **v12; // r14
  void *v13; // r13
  UMPDOBJ *v14; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  const void *KernelPtr; // rax
  size_t v20; // [rsp+20h] [rbp-B9h]
  int v21; // [rsp+40h] [rbp-99h] BYREF
  int v22; // [rsp+44h] [rbp-95h] BYREF
  struct _SURFOBJ *v23; // [rsp+48h] [rbp-91h]
  int v24; // [rsp+50h] [rbp-89h] BYREF
  void *v25; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-79h] BYREF
  void *v27; // [rsp+68h] [rbp-71h] BYREF
  UMPDOBJ *v28; // [rsp+70h] [rbp-69h] BYREF
  void *v29; // [rsp+78h] [rbp-61h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-59h]
  _QWORD Src[8]; // [rsp+90h] [rbp-49h] BYREF

  v6 = a1;
  v7 = -1;
  v23 = a1;
  v30 = (unsigned __int64)a6;
  v22 = -1;
  LODWORD(v25) = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  v24 = 0;
  v10 = 0;
  v21 = 0;
  v29 = 0LL;
  v27 = 0LL;
  memset(Src, 0, sizeof(Src));
  v11 = v28;
  if ( !v28 )
    goto LABEL_16;
  if ( !*((_DWORD *)v28 + 109) )
    goto LABEL_3;
  if ( a3 + 7 < a3 )
    goto LABEL_16;
  if ( Size + 7 < Size )
    goto LABEL_16;
  v16 = (Size + 7) & 0xFFFFFFF8;
  v17 = ((a3 + 7) & 0xFFFFFFF8) + 80;
  if ( v17 < 0x50 || v16 + v17 < v17 )
    goto LABEL_16;
  v26 = v16 + v17;
  v18 = UMPDOBJ::bThunkLargeBitmap(v28, v6, &v29, &v27, &v24, &v21, &v26);
  v10 = v21;
  if ( v18 )
  {
LABEL_3:
    Src[0] = 0x1800000040LL;
    Src[2] = *(_QWORD *)v11;
    Src[3] = v6;
    LODWORD(Src[6]) = Size;
    v12 = (void **)(a4 & -(__int64)(a3 != 0));
    Src[5] = v12;
    Src[4] = __PAIR64__(a3, (unsigned int)v25);
    v13 = (void *)(v30 & -(__int64)(Size != 0));
    Src[7] = v13;
    if ( (_DWORD)v25 == 25 && *((int *)v23->hdev + 462) < 0 )
    {
      if ( !v12 || (v25 = v12[3], !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 272), &v25, 4u)) )
      {
LABEL_13:
        v6 = v23;
        goto LABEL_14;
      }
      *(_QWORD *)(Src[5] + 24LL) = v25;
    }
    if ( (!a3
       || !(unsigned int)UMPDOBJ::bNeedThunk(v11, v12)
       || (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&Src[5], a3))
      && (!Size || (Src[7] = UMPDOBJ::_AllocUserMem(v11, Size, 1)) != 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&Src[3], v10) )
      {
        LODWORD(v20) = 4;
        if ( UMPDOBJ::Thunk(v11, Src, 0x40u, &v22, v20) != -1 )
        {
          if ( Size )
          {
            KernelPtr = UMPDOBJ::GetKernelPtr(v11, (void *)Src[7]);
            memmove(v13, KernelPtr, Size);
          }
          v7 = v22;
        }
      }
    }
    goto LABEL_13;
  }
LABEL_14:
  if ( v24 )
    UMPDOBJ::RestoreBitmap(v11, v6, v29, v27, v20, v10);
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v28);
  return v7;
}
