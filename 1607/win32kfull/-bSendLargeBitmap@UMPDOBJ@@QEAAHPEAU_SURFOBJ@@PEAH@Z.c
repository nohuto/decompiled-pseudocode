/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A296C
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A2B04 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C02849C0 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C029C4A4 (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A2804 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEAAKXZ @ 0x1C02A2D9C (-ulGetMaxSize@UMPDOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r12
  char *v7; // r15
  unsigned int MaxSize; // eax
  ULONG cjBits; // r14d
  ULONG v10; // eax
  char *pvBits; // r13
  unsigned int v12; // edx
  char *v13; // rax
  char *KernelPtr; // rax
  char *v15; // rax
  UMPDOBJ *v16; // rcx
  size_t v18; // [rsp+20h] [rbp-60h]
  ULONG i; // [rsp+30h] [rbp-50h]
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  int *v21; // [rsp+40h] [rbp-40h]
  _QWORD Src[6]; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0;
  v21 = a3;
  v20 = 0LL;
  LODWORD(v6) = 0;
  memset(Src, 0, sizeof(Src));
  v7 = (char *)UMPDOBJ::UMPDAllocUserMem(this, a2->cjBits);
  if ( !v7 )
    return 0LL;
  Src[2] = *(_QWORD *)this;
  Src[0] = 0x7500000030LL;
  Src[4] = v7;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  if ( MaxSize < 0x38 )
    return 0LL;
  cjBits = a2->cjBits;
  v10 = MaxSize - 56;
  pvBits = (char *)a2->pvBits;
  for ( i = v10; cjBits; v10 = i )
  {
    v12 = cjBits;
    if ( cjBits > v10 )
      v12 = v10;
    LODWORD(Src[5]) = v12;
    v13 = UMPDOBJ::_AllocUserMem(this, v12, 0);
    Src[3] = v13;
    if ( !v13 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v13);
    memmove(KernelPtr, pvBits, LODWORD(Src[5]));
    LODWORD(v18) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, Src, 48LL, &v20, v18) == -1 || !v20 )
      break;
    v6 = (unsigned int)(LODWORD(Src[5]) + v6);
    cjBits -= LODWORD(Src[5]);
    pvBits = (char *)a2->pvBits + (unsigned int)v6;
    Src[4] = &v7[v6];
    UMPDOBJ::ResetHeap(this);
  }
  v15 = &v7[LODWORD(a2->pvScan0) - LODWORD(a2->pvBits)];
  a2->pvBits = v7;
  a2->pvScan0 = v15;
  if ( cjBits )
  {
    UMPDOBJ::ResetHeap(this);
    UMPDOBJ::bDeleteLargeBitmaps(v16, a2, 0LL, 0LL);
  }
  else
  {
    v3 = 1;
    *v21 = 1;
  }
  return v3;
}
