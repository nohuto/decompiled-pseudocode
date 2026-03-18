/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C020CAD0
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E21B8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     IntToULongLong @ 0x1C0205810 (IntToULongLong.c)
 *     SizeTAdd @ 0x1C020C118 (SizeTAdd.c)
 *     xxxClientCopyDDEIn2 @ 0x1C020CEE8 (xxxClientCopyDDEIn2.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 *v6; // rdi
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm3
  __m128i v10; // xmm2
  double v11; // xmm6_8
  INT v12; // edi
  __int64 v13; // r9
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  size_t v16; // rcx
  __int64 v17; // rbx
  const void *v18; // rdx
  char *v19; // rcx
  size_t v20; // r8
  const void *v21; // rdx
  char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v27; // [rsp+40h] [rbp-138h] BYREF
  __int64 v28; // [rsp+48h] [rbp-130h] BYREF
  int v29; // [rsp+50h] [rbp-128h]
  int v30; // [rsp+54h] [rbp-124h]
  ULONGLONG Addend; // [rsp+60h] [rbp-118h] BYREF
  ULONGLONG pullResult; // [rsp+68h] [rbp-110h] BYREF
  __int128 v33; // [rsp+70h] [rbp-108h]
  __int128 v34; // [rsp+80h] [rbp-F8h]
  void *Src[2]; // [rsp+90h] [rbp-E8h]
  void *v36[2]; // [rsp+A0h] [rbp-D8h]
  INT iOperand[2]; // [rsp+B0h] [rbp-C8h]
  _QWORD v38[4]; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-88h]
  __int128 v40; // [rsp+100h] [rbp-78h]
  __m128i v41; // [rsp+110h] [rbp-68h]
  __int128 v42; // [rsp+120h] [rbp-58h]
  double v43; // [rsp+130h] [rbp-48h]
  int v44; // [rsp+188h] [rbp+10h] BYREF
  __int64 *v45; // [rsp+190h] [rbp+18h]
  size_t pResult; // [rsp+198h] [rbp+20h] BYREF

  v45 = a3;
  v30 = 0;
  LODWORD(v4) = 0;
  *a3 = 0LL;
  v28 = a1;
  v29 = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(60LL);
  v5 = KeUserModeCallback(60LL, &v28, 16LL, &v27, &v44);
  EtwTraceEndCallback(60LL);
  EnterCrit(0LL, 1LL);
  if ( v5 < 0 || v44 != 24 )
    return (unsigned int)v4;
  v6 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v6 = (__int64 *)W32UserProbeAddress;
  v4 = *v6;
  v7 = 2;
  if ( v4 != 2 )
    return (unsigned int)v4;
  v8 = *(_QWORD *)(v27 + 16);
  if ( v8 + 72 < v8 || v8 + 72 > W32UserProbeAddress )
    v8 = W32UserProbeAddress;
  v9 = *(_OWORD *)v8;
  v33 = v9;
  v34 = *(_OWORD *)(v8 + 16);
  v10 = *(__m128i *)(v8 + 32);
  *(__m128i *)Src = v10;
  *(_OWORD *)v36 = *(_OWORD *)(v8 + 48);
  v11 = *(double *)(v8 + 64);
  *(double *)iOperand = v11;
  v39 = v9;
  v40 = v34;
  v41 = v10;
  v42 = *(_OWORD *)v36;
  v43 = v11;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
  if ( IntToULongLong(v12, &pullResult) < 0
    || IntToULongLong(iOperand[0], &Addend) < 0
    || SizeTAdd(pullResult, Addend, &pResult) < 0
    || SizeTAdd(0x48uLL, pResult, &pResult) < 0 )
  {
    v17 = 0LL;
  }
  else
  {
    v16 = pResult;
    if ( pResult < 0x90 )
      v16 = 144LL;
    pResult = v16;
    v17 = Win32AllocPool(v16, 1164211029LL);
    v10 = *(__m128i *)Src;
    v9 = v33;
    v14 = v34;
    v15 = *(_OWORD *)v36;
    v11 = *(double *)iOperand;
  }
  if ( v17 )
  {
    *a3 = v17;
    *(_OWORD *)v17 = v9;
    *(_OWORD *)(v17 + 16) = v14;
    *(__m128i *)(v17 + 32) = v10;
    *(_OWORD *)(v17 + 48) = v15;
    *(double *)(v17 + 64) = v11;
    if ( v12 )
    {
      v18 = Src[0];
      v19 = (char *)Src[0] + v12;
      if ( (unsigned __int64)v19 > W32UserProbeAddress || v19 < Src[0] )
        *W32UserProbeAddress = 0;
      memmove((void *)(v17 + 72), v18, v12);
    }
    if ( iOperand[0] )
    {
      v20 = iOperand[0];
      v21 = v36[1];
      v22 = (char *)v36[1] + iOperand[0];
      if ( (unsigned __int64)v22 > W32UserProbeAddress || v22 < v36[1] )
        *W32UserProbeAddress = 0;
      memmove((void *)(v17 + v12 + 72LL), v21, v20);
    }
    PushW32ThreadLock(v17, v38, (__int64)Win32FreePool, v13);
    xxxClientCopyDDEIn2(v17);
    PopW32ThreadLock(v38, v23, v24, v25);
  }
  else
  {
    return 3;
  }
  return v7;
}
