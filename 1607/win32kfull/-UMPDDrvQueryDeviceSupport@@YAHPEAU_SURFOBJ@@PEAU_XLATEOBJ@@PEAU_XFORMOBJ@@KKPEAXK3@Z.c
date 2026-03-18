/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C029FCC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0285344 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x1C0285408 (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C16C (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A2B04 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int Size,
        void *a8)
{
  unsigned int v10; // esi
  int v11; // r12d
  UMPDOBJ *v12; // rbx
  ULONG v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r15d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  void *v20; // rsi
  char *v21; // rdx
  char *KernelPtr; // rax
  size_t v23; // [rsp+20h] [rbp-128h]
  int v24; // [rsp+40h] [rbp-108h] BYREF
  int v25; // [rsp+44h] [rbp-104h] BYREF
  int v26; // [rsp+48h] [rbp-100h] BYREF
  UMPDOBJ *v27; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-ECh]
  void *v30; // [rsp+60h] [rbp-E8h] BYREF
  void *v31; // [rsp+68h] [rbp-E0h] BYREF
  int v32; // [rsp+70h] [rbp-D8h]
  unsigned int v33; // [rsp+74h] [rbp-D4h]
  int v34; // [rsp+78h] [rbp-D0h]
  unsigned int v35; // [rsp+7Ch] [rbp-CCh]
  struct _XLATEOBJ *v36; // [rsp+80h] [rbp-C8h]
  struct _XFORMOBJ *v37; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v38; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+98h] [rbp-B0h]
  struct _SURFOBJ *v40; // [rsp+A0h] [rbp-A8h]
  _QWORD Src[10]; // [rsp+B0h] [rbp-98h] BYREF

  v29 = a4;
  v37 = a3;
  v36 = a2;
  v40 = a1;
  v38 = (unsigned __int64)a6;
  v39 = (unsigned __int64)a8;
  v10 = 1;
  v24 = 1;
  v26 = 0;
  v11 = 0;
  v25 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v27);
  v31 = 0LL;
  v30 = 0LL;
  memset(Src, 0, sizeof(Src));
  v12 = v27;
  if ( !v27 )
  {
LABEL_2:
    XUMPDOBJ::~XUMPDOBJ(&v27);
    return 0LL;
  }
  if ( *((_DWORD *)v27 + 109) )
  {
    if ( a2 )
      v14 = ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 24;
    else
      v14 = 0;
    v15 = v14 + 96;
    v16 = a5;
    if ( a5 + 7 < a5 )
      goto LABEL_2;
    v32 = a5 + 7;
    v17 = (a5 + 7) & 0xFFFFFFF8;
    v33 = v17;
    if ( Size + 7 < Size )
      goto LABEL_2;
    v34 = Size + 7;
    v18 = (Size + 7) & 0xFFFFFFF8;
    v35 = v18;
    v19 = v17 + v15;
    if ( v17 + v15 < v15 || v18 + v19 < v19 )
      goto LABEL_2;
    v28 = v18 + v19;
    v10 = UMPDOBJ::bThunkLargeBitmap(v27, a1, &v31, &v30, &v26, &v25, &v28);
    v24 = v10;
    v11 = v25;
  }
  else
  {
    v16 = a5;
  }
  if ( v10 )
  {
    Src[0] = 0x4C00000050LL;
    Src[2] = *(_QWORD *)v12;
    Src[3] = a1;
    Src[4] = v36;
    Src[5] = v37;
    v20 = (void *)(v39 & -(__int64)(Size != 0));
    Src[6] = __PAIR64__(v16, v29);
    Src[7] = v38 & -(__int64)(v16 != 0);
    LODWORD(Src[8]) = Size;
    Src[9] = v20;
    if ( (!v16 || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[7], v16))
      && (!Size || (Src[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v11)
      && (unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&Src[4])
      && (unsigned int)UMPDOBJ::pxo(v12, (struct _XFORMOBJ **)&Src[5])
      && (LODWORD(v23) = 4, (unsigned int)UMPDOBJ::Thunk(v12, Src, 80LL, &v24, v23) != -1) )
    {
      if ( Size )
      {
        v21 = (char *)Src[9];
        if ( (unsigned __int64)Size + Src[9] > W32UserProbeAddress || (unsigned __int64)Size + Src[9] < Src[9] )
          *W32UserProbeAddress = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v12, v21);
        memmove(v20, KernelPtr, Size);
      }
      v10 = v24;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v26 )
    UMPDOBJ::RestoreBitmap(v12, a1, v31, v30, v23, v11);
  XUMPDOBJ::~XUMPDOBJ(&v27);
  return v10;
}
