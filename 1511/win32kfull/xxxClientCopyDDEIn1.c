/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C0213ED8
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01EB64C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     IntToULongLong @ 0x1C020E4A4 (IntToULongLong.c)
 *     SizeTAdd @ 0x1C02136BC (SizeTAdd.c)
 *     xxxClientCopyDDEIn2 @ 0x1C021428C (xxxClientCopyDDEIn2.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, __int64 a2, __int64 *a3)
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
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  size_t v15; // rcx
  __int64 v16; // rbx
  const void *v17; // rdx
  char *v18; // rcx
  size_t v19; // r8
  const void *v20; // rdx
  char *v21; // rcx
  unsigned __int64 v23; // [rsp+38h] [rbp-120h] BYREF
  __int64 v24; // [rsp+40h] [rbp-118h] BYREF
  int v25; // [rsp+48h] [rbp-110h]
  int v26; // [rsp+4Ch] [rbp-10Ch]
  ULONGLONG Addend; // [rsp+50h] [rbp-108h] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-100h] BYREF
  __int128 v29; // [rsp+60h] [rbp-F8h]
  __int128 v30; // [rsp+70h] [rbp-E8h]
  void *Src[2]; // [rsp+80h] [rbp-D8h]
  void *v32[2]; // [rsp+90h] [rbp-C8h]
  INT iOperand[2]; // [rsp+A0h] [rbp-B8h]
  _QWORD v34[3]; // [rsp+B8h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-88h]
  __int128 v36; // [rsp+E0h] [rbp-78h]
  __m128i v37; // [rsp+F0h] [rbp-68h]
  __int128 v38; // [rsp+100h] [rbp-58h]
  double v39; // [rsp+110h] [rbp-48h]
  int v40; // [rsp+168h] [rbp+10h] BYREF
  __int64 *v41; // [rsp+170h] [rbp+18h]
  size_t pResult; // [rsp+178h] [rbp+20h] BYREF

  v41 = a3;
  v26 = 0;
  LODWORD(v4) = 0;
  *a3 = 0LL;
  v24 = a1;
  v25 = a2;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(59LL);
  v5 = KeUserModeCallback(59LL, &v24, 16LL, &v23, &v40);
  EtwTraceEndCallback(59LL);
  EnterCrit(0LL, 1LL);
  if ( v5 < 0 || v40 != 24 )
    return (unsigned int)v4;
  v6 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > W32UserProbeAddress )
    v6 = (__int64 *)W32UserProbeAddress;
  v4 = *v6;
  v7 = 2;
  if ( v4 != 2 )
    return (unsigned int)v4;
  v8 = *(_QWORD *)(v23 + 16);
  if ( v8 + 72 < v8 || v8 + 72 > W32UserProbeAddress )
    v8 = W32UserProbeAddress;
  v9 = *(_OWORD *)v8;
  v29 = v9;
  v30 = *(_OWORD *)(v8 + 16);
  v10 = *(__m128i *)(v8 + 32);
  *(__m128i *)Src = v10;
  *(_OWORD *)v32 = *(_OWORD *)(v8 + 48);
  v11 = *(double *)(v8 + 64);
  *(double *)iOperand = v11;
  v35 = v9;
  v36 = v30;
  v37 = v10;
  v38 = *(_OWORD *)v32;
  v39 = v11;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
  if ( IntToULongLong(v12, &pullResult) < 0
    || IntToULongLong(iOperand[0], &Addend) < 0
    || SizeTAdd(pullResult, Addend, &pResult) < 0
    || SizeTAdd(0x48uLL, pResult, &pResult) < 0 )
  {
    v16 = 0LL;
  }
  else
  {
    v15 = pResult;
    if ( pResult < 0x90 )
      v15 = 144LL;
    pResult = v15;
    v16 = Win32AllocPool(v15);
    v10 = *(__m128i *)Src;
    v9 = v29;
    v13 = v30;
    v14 = *(_OWORD *)v32;
    v11 = *(double *)iOperand;
  }
  if ( v16 )
  {
    *a3 = v16;
    *(_OWORD *)v16 = v9;
    *(_OWORD *)(v16 + 16) = v13;
    *(__m128i *)(v16 + 32) = v10;
    *(_OWORD *)(v16 + 48) = v14;
    *(double *)(v16 + 64) = v11;
    if ( v12 )
    {
      v17 = Src[0];
      v18 = (char *)Src[0] + v12;
      if ( (unsigned __int64)v18 > W32UserProbeAddress || v18 < Src[0] )
        *W32UserProbeAddress = 0;
      memmove((void *)(v16 + 72), v17, v12);
    }
    if ( iOperand[0] )
    {
      v19 = iOperand[0];
      v20 = v32[1];
      v21 = (char *)v32[1] + iOperand[0];
      if ( (unsigned __int64)v21 > W32UserProbeAddress || v21 < v32[1] )
        *W32UserProbeAddress = 0;
      memmove((void *)(v12 + v16 + 72), v20, v19);
    }
    PushW32ThreadLock(v16, v34, (__int64)Win32FreePool);
    xxxClientCopyDDEIn2(v16);
    PopW32ThreadLock(v34);
  }
  else
  {
    return 3;
  }
  return v7;
}
