/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1405422C4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(_QWORD *a1, void *a2, __m128i *a3, int a4, ACCESS_MASK a5, __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  int v10; // esi
  PVOID v11; // r15
  _QWORD *v12; // rcx
  __int128 *v13; // rcx
  ULONG_PTR v14; // rsi
  __int64 v15; // r15
  int v16; // r14d
  char v17; // cl
  signed __int64 v18; // rcx
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  int v22; // r14d
  char v23; // cl
  signed __int64 v24; // rcx
  int v25; // r14d
  char v26; // cl
  signed __int64 v27; // rcx
  int v28; // r14d
  char v29; // cl
  signed __int64 v30; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-A8h] BYREF
  __m128i Source2; // [rsp+48h] [rbp-A0h] BYREF
  __m128i v35; // [rsp+58h] [rbp-90h]
  __int64 v36; // [rsp+68h] [rbp-80h]
  __int64 v37; // [rsp+70h] [rbp-78h] BYREF
  __m128i v38; // [rsp+78h] [rbp-70h]
  __int64 v39; // [rsp+88h] [rbp-60h]
  __int128 v40; // [rsp+90h] [rbp-58h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-48h]
  __int128 v42; // [rsp+B0h] [rbp-38h]
  PVOID v43; // [rsp+C0h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v11 = Object;
  v43 = Object;
  if ( v10 < 0 )
    goto LABEL_29;
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
      v38 = *a3;
      v39 = a3[1].m128i_i64[0];
      Source2.m128i_i16[0] = _mm_cvtsi128_si32(v38);
      Source2.m128i_i16[1] = v38.m128i_i16[0] + 40;
      Source2.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v38, 4));
      Source2.m128i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v38, 8));
      v35.m128i_i64[0] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v38, 12));
      v35.m128i_i32[2] = v39;
      v36 = HIDWORD(v39);
    }
    else
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (__m128i *)MmUserProbeAddress;
      Source2 = *a3;
      v35 = a3[1];
      v36 = a3[2].m128i_i64[0];
    }
    v13 = a6;
    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
      v13 = (__int128 *)MmUserProbeAddress;
    v40 = *v13;
    v41 = v13[1];
    v42 = v13[2];
    v11 = Object;
  }
  else
  {
    Source2 = *a3;
    v35 = a3[1];
    v36 = a3[2].m128i_i64[0];
    v40 = *a6;
    v41 = a6[1];
    v42 = a6[2];
  }
  v10 = AlpcpLookupMessage((__int64)v11, v35.m128i_i32[2], v36, &BugCheckParameter2);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v11);
    goto LABEL_29;
  }
  v14 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
  {
    v15 = *(_QWORD *)(BugCheckParameter2 + 32);
    if ( v15 )
    {
      if ( RtlCompareMemory((const void *)(v15 + 1576), &Source2.m128i_u64[1], 0x10uLL) == 16 )
      {
        ObfReferenceObject((PVOID)v15);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v14);
        v16 = 0;
        v17 = *(_BYTE *)(v14 - 32);
        if ( (v17 & 1) != 0 )
        {
          v16 = 0x10000 - *(__int16 *)(v14 - 30);
          *(_BYTE *)(v14 - 32) = v17 & 0xFE;
          *(_WORD *)(v14 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
        KeAbPostRelease(v14 - 16);
        if ( v16 > 0 )
        {
          v18 = -v16 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v16);
          if ( v18 <= 0 )
          {
            if ( v18 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v18);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        v10 = PsOpenThread(&v37, a5, (__int64)&v40, (__int64)&Source2.m128i_i64[1], 0, PreviousMode);
        ObfDereferenceObject((PVOID)v15);
        ObfDereferenceObject(Object);
        if ( v10 >= 0 )
          *a1 = v37;
        goto LABEL_29;
      }
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v14);
      v28 = 0;
      v29 = *(_BYTE *)(v14 - 32);
      if ( (v29 & 1) != 0 )
      {
        v28 = 0x10000 - *(__int16 *)(v14 - 30);
        *(_BYTE *)(v14 - 32) = v29 & 0xFE;
        *(_WORD *)(v14 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
      KeAbPostRelease(v14 - 16);
      if ( v28 <= 0 || (v30 = -v28 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v28), v30 > 0) )
      {
LABEL_59:
        ObfDereferenceObject(Object);
        v10 = -1073741790;
        goto LABEL_29;
      }
      if ( v30 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v30);
    }
    else
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
      v25 = 0;
      v26 = *(_BYTE *)(v14 - 32);
      if ( (v26 & 1) != 0 )
      {
        v25 = 0x10000 - *(__int16 *)(v14 - 30);
        *(_BYTE *)(v14 - 32) = v26 & 0xFE;
        *(_WORD *)(v14 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
      KeAbPostRelease(v14 - 16);
      if ( v25 <= 0 )
        goto LABEL_59;
      v27 = -v25 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v25);
      if ( v27 > 0 )
        goto LABEL_59;
      if ( v27 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v27);
    }
    AlpcpDestroyBlob(BugCheckParameter2);
    goto LABEL_59;
  }
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  v22 = 0;
  v23 = *(_BYTE *)(v14 - 32);
  if ( (v23 & 1) != 0 )
  {
    v22 = 0x10000 - *(__int16 *)(v14 - 30);
    *(_BYTE *)(v14 - 32) = v23 & 0xFE;
    *(_WORD *)(v14 - 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
  KeAbPostRelease(v14 - 16);
  if ( v22 > 0 )
  {
    v24 = -v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v22);
    if ( v24 <= 0 )
    {
      if ( v24 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v24);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
  ObfDereferenceObject(Object);
  v10 = -1073740029;
LABEL_29:
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v10;
}
