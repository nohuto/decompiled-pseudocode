/*
 * XREFs of MagGetLensContextInformation @ 0x1C01F4FAC
 * Callers:
 *     MagSlicerControl @ 0x1C01F6210 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C02170A0 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C0056A4C (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01F4C64 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C01FB068 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C025CBB4 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  unsigned int v8; // ebx
  _QWORD *ThreadContext; // rax
  int v10; // r9d
  __int64 v11; // r14
  __int64 *v13; // rax
  int v14; // r12d
  __int64 *v15; // rax
  __int64 *v16; // rbp
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int updated; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rdi
  void *v30; // rcx
  unsigned int *v31; // rax
  unsigned int *v32; // r11
  int v33; // ecx
  __int64 v34; // r9
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 *v40; // r8
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  int v44; // r9d
  __int64 v45; // r10
  __int64 v46; // rdx
  __int64 *v47; // rax
  int v48; // eax
  __int64 *v49; // rax
  __int64 *LensContext; // rax
  int v51; // [rsp+50h] [rbp-48h] BYREF
  BOOL v52; // [rsp+54h] [rbp-44h]
  _QWORD v53[3]; // [rsp+58h] [rbp-40h] BYREF

  v8 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v11 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  switch ( a5 )
  {
    case 2:
      if ( !a3 )
        return v8;
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 216LL)) == 0LL )
      {
        LensContext = MagpFindLensContext(v11, a3, v10);
        if ( !LensContext )
          return v8;
      }
      *(_OWORD *)a6 = *(_OWORD *)(LensContext + 9);
      return 0;
    case 3:
      if ( !a3 )
        return v8;
      if ( a3 != -1 || (v49 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 216LL)) == 0LL )
      {
        v49 = MagpFindLensContext(v11, a3, v10);
        if ( !v49 )
          return v8;
      }
      if ( (v49[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v49 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v49 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0321928;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return v8;
      if ( a3 != -1 || (v47 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 224LL)) == 0LL )
      {
        v47 = MagpFindLensContext(v11, a3, v10);
        if ( !v47 )
          return v8;
      }
      if ( (v47[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v47 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v47 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v47 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v47 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v47 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v47 + 25);
        v48 = *((_DWORD *)v47 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0321950;
        *(_OWORD *)(a6 + 32) = xmmword_1C0321960;
        *(_OWORD *)(a6 + 48) = xmmword_1C0321970;
        *(_OWORD *)(a6 + 64) = xmmword_1C0321980;
        *(_OWORD *)(a6 + 80) = xmmword_1C0321990;
        v48 = dword_1C03219A0;
      }
      *(_DWORD *)(a6 + 96) = v48;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v8;
      v39 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v40 = v39;
      if ( !v39 )
        return v8;
      v41 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v42 = *((_DWORD *)v39 + 56);
        *(_DWORD *)a6 = v42;
        v43 = *((_DWORD *)v39 + 57);
        *(_DWORD *)(a6 + 4) = v43;
        v44 = v43 + v42;
        v45 = (unsigned int)(v43 + v42);
        if ( (unsigned int)(v41 - 8) >= (unsigned __int64)(8 * v45) )
        {
          if ( v44 )
          {
            v46 = 0LL;
            do
            {
              *(_QWORD *)(a6 + v46 + 8) = *(_QWORD *)(v46 + v40[29]);
              v46 += 8LL;
              --v45;
            }
            while ( v45 );
          }
          *a7 = 8 * v44 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v8;
      v31 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v32 = v31;
      if ( !v31 )
        return v8;
      v33 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v34 = v31[60];
        *(_DWORD *)a6 = v34;
        *(_DWORD *)(a6 + 4) = v31[61];
        *(_DWORD *)(a6 + 8) = v31[62];
        *(_DWORD *)(a6 + 12) = v31[63];
        if ( (unsigned int)(v33 - 16) >= (unsigned __int64)(24 * v34) )
        {
          v35 = 0;
          if ( (_DWORD)v34 )
          {
            do
            {
              v36 = v35++;
              v37 = 3 * v36;
              v38 = *((_QWORD *)v32 + 32);
              *(_OWORD *)(a6 + 8 * v37 + 16) = *(_OWORD *)(v38 + 8 * v37);
              *(_QWORD *)(a6 + 8 * v37 + 32) = *(_QWORD *)(v38 + 8 * v37 + 16);
            }
            while ( v35 < *(_DWORD *)a6 );
          }
          *a7 = 24 * *(_DWORD *)a6 + 16;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
  }
  if ( a5 != 8 )
  {
    if ( a5 != 9 )
      return v8;
    if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v8;
    v13 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
    if ( !v13 )
      return v8;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)a6 = (v13[2] & 0x40) != 0;
    return 0;
  }
  v51 = 0;
  v14 = 0;
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return v8;
  v15 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
  v16 = v15;
  if ( !v15 )
    return v8;
  v17 = *((_DWORD *)v15 + 4);
  v52 = (v17 & 0x40) != 0;
  if ( (v17 & 0x20) != 0 || !*((_DWORD *)v16 + 60) )
  {
    v25 = a6;
    v8 = 0;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v16 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v16 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v16 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v16 + 63);
LABEL_40:
    if ( (*((_DWORD *)v16 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v25 + 48) = v14;
    return v8;
  }
  v53[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v53;
  ++*(_DWORD *)(a3 + 8);
  v53[1] = a3;
  v21 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v22 = (void *)ReferenceDwmApiPort(v18, gdwInAtomicOperation, v19, v20);
  UserSessionSwitchLeaveCrit(v24, v23);
  v25 = a6;
  if ( v22 && v21 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v22,
                (__int64)(v16 + 4),
                *(_QWORD *)(a6 + 24),
                v52,
                (*((_DWORD *)v16 + 4) >> 7) & 1,
                a6,
                (__int64)&v51);
    v14 = v51;
    v8 = updated;
  }
  else
  {
    DereferenceDwmApiPort(v22);
    v8 = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v28, v27);
  DereferenceDwmProcess(v21);
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  if ( *(int *)a6 < 0 )
    goto LABEL_34;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v16 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v16 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v16 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v16 + 63) )
  {
    v30 = *(void **)(a6 + 40);
    if ( v30 )
    {
      ObfDereferenceObject(v30);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v29 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        v8 = ObOpenObjectByPointer(v29, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v29),
        (v8 & 0x80000000) == 0) )
  {
LABEL_34:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v8 = 0;
      goto LABEL_40;
    }
    return (unsigned int)-1073741820;
  }
  return v8;
}
