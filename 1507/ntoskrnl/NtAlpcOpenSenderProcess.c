/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x14053B9A8
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(_QWORD *a1, void *a2, __m128i *a3, int a4, ACCESS_MASK a5, __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  int v10; // esi
  PVOID v11; // r15
  _QWORD *v12; // rcx
  __int128 *v13; // rcx
  __int64 v14; // r9
  ULONG_PTR v15; // r14
  __int64 v16; // r15
  _QWORD *v17; // r15
  int v18; // esi
  char v19; // cl
  signed __int64 v20; // rcx
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  __int64 v24; // r15
  volatile signed __int64 *v25; // rsi
  __int64 v26; // r9
  __int64 v27; // r14
  int v28; // esi
  char v29; // cl
  signed __int64 v30; // rcx
  int v31; // esi
  char v32; // cl
  signed __int64 v33; // rcx
  int v34; // esi
  char v35; // cl
  signed __int64 v36; // rcx
  int v37; // esi
  ULONG_PTR v38; // r14
  char v39; // cl
  signed __int64 v40; // rcx
  int v41; // esi
  ULONG_PTR v42; // r14
  char v43; // cl
  signed __int64 v44; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-A8h] BYREF
  __m128i Source2; // [rsp+50h] [rbp-98h] BYREF
  __m128i v49; // [rsp+60h] [rbp-88h]
  __int64 v50; // [rsp+70h] [rbp-78h]
  __int64 v51; // [rsp+78h] [rbp-70h] BYREF
  __m128i v52; // [rsp+80h] [rbp-68h]
  __int64 v53; // [rsp+90h] [rbp-58h]
  __int128 v54; // [rsp+98h] [rbp-50h] BYREF
  __int128 v55; // [rsp+A8h] [rbp-40h]
  __int128 v56; // [rsp+B8h] [rbp-30h]
  PVOID v57; // [rsp+C8h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v11 = Object;
  v57 = Object;
  if ( v10 < 0 )
    goto LABEL_30;
  if ( PreviousMode )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
    if ( (a4 & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (__m128i *)MmUserProbeAddress;
      v52 = *a3;
      v53 = a3[1].m128i_i64[0];
      Source2.m128i_i16[0] = _mm_cvtsi128_si32(v52);
      Source2.m128i_i16[1] = v52.m128i_i16[0] + 40;
      Source2.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v52, 4));
      Source2.m128i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v52, 8));
      v49.m128i_i64[0] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v52, 12));
      v49.m128i_i32[2] = v53;
      v50 = HIDWORD(v53);
    }
    else
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (__m128i *)MmUserProbeAddress;
      Source2 = *a3;
      v49 = a3[1];
      v50 = a3[2].m128i_i64[0];
    }
    v13 = a6;
    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
      v13 = (__int128 *)MmUserProbeAddress;
    v54 = *v13;
    v55 = v13[1];
    v56 = v13[2];
    v11 = Object;
  }
  else
  {
    Source2 = *a3;
    v49 = a3[1];
    v50 = a3[2].m128i_i64[0];
    v54 = *a6;
    v55 = a6[1];
    v56 = a6[2];
  }
  v10 = AlpcpLookupMessage((__int64)v11, v49.m128i_i32[2], v50, &BugCheckParameter2);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v11);
    goto LABEL_30;
  }
  v15 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
    v28 = 0;
    v29 = *(_BYTE *)(v15 - 32);
    if ( (v29 & 1) != 0 )
    {
      v28 = 0x10000 - *(__int16 *)(v15 - 30);
      *(_BYTE *)(v15 - 32) = v29 & 0xFE;
      *(_WORD *)(v15 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v15 - 16));
    KeAbPostRelease(v15 - 16);
    if ( v28 > 0 )
    {
      v30 = -v28 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), -v28);
      if ( v30 <= 0 )
      {
        if ( v30 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v30);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    ObfDereferenceObject(Object);
    v10 = -1073740029;
    goto LABEL_30;
  }
  v16 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( !v16 )
  {
    v24 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v24 )
    {
      v25 = (volatile signed __int64 *)(v24 + 352);
      v27 = KeAbPreAcquire(v24 + 352, 0LL, 0LL, v14);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v24 + 352), v27, v24 + 352, v26);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      if ( (*(_DWORD *)(v24 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v24 + 352));
        KeAbPostRelease(v24 + 352);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
        v37 = 0;
        v38 = BugCheckParameter2;
        v39 = *(_BYTE *)(BugCheckParameter2 - 32);
        if ( (v39 & 1) != 0 )
        {
          v37 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
          *(_BYTE *)(BugCheckParameter2 - 32) = v39 & 0xFE;
          *(_WORD *)(v38 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v38 - 16));
        KeAbPostRelease(v38 - 16);
        if ( v37 > 0 )
        {
          v40 = -v37 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 24), -v37);
          if ( v40 <= 0 )
          {
            if ( v40 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v40);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        ObfDereferenceObject(Object);
        v10 = -1073741769;
        goto LABEL_30;
      }
      v17 = *(_QWORD **)(v24 + 24);
      if ( v17[93] == Source2.m128i_i64[1] )
      {
        ObfReferenceObjectWithTag(v17, 0x63706C41u);
        if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v25);
        KeAbPostRelease((ULONG_PTR)v25);
        v15 = BugCheckParameter2;
        goto LABEL_20;
      }
      if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v25);
      KeAbPostRelease((ULONG_PTR)v25);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
      v41 = 0;
      v42 = BugCheckParameter2;
      v43 = *(_BYTE *)(BugCheckParameter2 - 32);
      if ( (v43 & 1) != 0 )
      {
        v41 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
        *(_BYTE *)(BugCheckParameter2 - 32) = v43 & 0xFE;
        *(_WORD *)(v42 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v42 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v42 - 16));
      KeAbPostRelease(v42 - 16);
      if ( v41 <= 0 || (v44 = -v41 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 - 24), -v41), v44 > 0) )
      {
LABEL_82:
        ObfDereferenceObject(Object);
        v10 = -1073741790;
        goto LABEL_30;
      }
      if ( v44 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v44);
    }
    else
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
      v34 = 0;
      v35 = *(_BYTE *)(v15 - 32);
      if ( (v35 & 1) != 0 )
      {
        v34 = 0x10000 - *(__int16 *)(v15 - 30);
        *(_BYTE *)(v15 - 32) = v35 & 0xFE;
        *(_WORD *)(v15 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v15 - 16));
      KeAbPostRelease(v15 - 16);
      if ( v34 <= 0 )
        goto LABEL_82;
      v36 = -v34 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), -v34);
      if ( v36 > 0 )
        goto LABEL_82;
      if ( v36 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v36);
    }
    AlpcpDestroyBlob(BugCheckParameter2);
    goto LABEL_82;
  }
  if ( RtlCompareMemory((const void *)(v16 + 1576), &Source2.m128i_u64[1], 0x10uLL) == 16 )
  {
    v17 = *(_QWORD **)(v16 + 544);
    ObfReferenceObjectWithTag(v17, 0x63706C41u);
LABEL_20:
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v15);
    v18 = 0;
    v19 = *(_BYTE *)(v15 - 32);
    if ( (v19 & 1) != 0 )
    {
      v18 = 0x10000 - *(__int16 *)(v15 - 30);
      *(_BYTE *)(v15 - 32) = v19 & 0xFE;
      *(_WORD *)(v15 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v15 - 16));
    KeAbPostRelease(v15 - 16);
    if ( v18 > 0 )
    {
      v20 = -v18 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), -v18);
      if ( v20 <= 0 )
      {
        if ( v20 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v20);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    v10 = PsOpenProcess(&v51, a5, (__int64)&v54, (__int64)&Source2.m128i_i64[1], 0, PreviousMode);
    ObfDereferenceObjectWithTag(v17, 0x63706C41u);
    ObfDereferenceObject(Object);
    if ( v10 >= 0 )
      *a1 = v51;
    goto LABEL_30;
  }
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(v15);
  v31 = 0;
  v32 = *(_BYTE *)(v15 - 32);
  if ( (v32 & 1) != 0 )
  {
    v31 = 0x10000 - *(__int16 *)(v15 - 30);
    *(_BYTE *)(v15 - 32) = v32 & 0xFE;
    *(_WORD *)(v15 - 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v15 - 16));
  KeAbPostRelease(v15 - 16);
  if ( v31 > 0 )
  {
    v33 = -v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 24), -v31);
    if ( v33 <= 0 )
    {
      if ( v33 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v33);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
  ObfDereferenceObject(Object);
  v10 = -1073741813;
LABEL_30:
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v10;
}
