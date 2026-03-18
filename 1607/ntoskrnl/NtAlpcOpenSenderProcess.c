/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1404B40CC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 *     AlpcpUnlockMessage @ 0x1404091E8 (AlpcpUnlockMessage.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404B5B54 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(
        _QWORD *a1,
        void *a2,
        __int128 *a3,
        unsigned int a4,
        ACCESS_MASK a5,
        __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  PVOID v12; // rdi
  __int64 v13; // rcx
  __int128 *v14; // r9
  __int128 *v15; // rdx
  ULONG_PTR v16; // rbx
  __int64 v17; // rsi
  _QWORD *v18; // rsi
  __int64 v20; // rsi
  signed __int64 *v21; // rbx
  __int64 v22; // rdi
  PVOID v23; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v25[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v26; // [rsp+48h] [rbp-80h] BYREF
  __int128 Source2; // [rsp+50h] [rbp-78h] BYREF
  __int128 v28; // [rsp+60h] [rbp-68h]
  __int64 v29; // [rsp+70h] [rbp-58h]
  __int128 v30; // [rsp+78h] [rbp-50h] BYREF
  __int128 v31; // [rsp+88h] [rbp-40h]
  __int128 v32; // [rsp+98h] [rbp-30h]
  PVOID v33; // [rsp+A8h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v33 = Object;
  if ( v11 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v13 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    AlpcpProbeAndCaptureMessageHeader(a3, &Source2, a4);
    v15 = a6;
    if ( a6 >= v14 )
      v15 = v14;
    v30 = *v15;
    v31 = v15[1];
    v32 = v15[2];
    v12 = Object;
  }
  else
  {
    Source2 = *a3;
    v28 = a3[1];
    v29 = *((_QWORD *)a3 + 4);
    v30 = *a6;
    v31 = a6[1];
    v32 = a6[2];
  }
  v11 = AlpcpLookupMessage(v12, DWORD2(v28), (unsigned int)v29, v25);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v12);
    goto LABEL_15;
  }
  v16 = v25[0];
  if ( (*(_DWORD *)(v25[0] + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v25[0]);
    ObfDereferenceObject(v12);
    v11 = -1073740029;
    goto LABEL_15;
  }
  v17 = *(_QWORD *)(v25[0] + 32);
  if ( v17 )
  {
    if ( RtlCompareMemory((const void *)(v17 + 1584), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v16);
      ObfDereferenceObject(v12);
      v11 = -1073741813;
      goto LABEL_15;
    }
    v18 = *(_QWORD **)(v17 + 544);
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_13;
  }
  v20 = *(_QWORD *)(v25[0] + 24);
  if ( !v20 )
  {
    AlpcpUnlockMessage(v25[0]);
    v23 = v12;
    goto LABEL_32;
  }
  v21 = (signed __int64 *)(v20 + 352);
  v22 = KeAbPreAcquire(v20 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v20 + 352), v22, v20 + 352);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[93] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v16 = v25[0];
      v12 = Object;
LABEL_13:
      AlpcpUnlockMessage(v16);
      v11 = PsOpenProcess(
              (unsigned __int64)&v26,
              a5,
              (__int64)&v30,
              (__int128 *)((char *)&Source2 + 8),
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v12);
      if ( v11 >= 0 )
        *a1 = v26;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    AlpcpUnlockMessage(v25[0]);
    v23 = Object;
LABEL_32:
    ObfDereferenceObject(v23);
    v11 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  KeAbPostRelease(v20 + 352);
  AlpcpUnlockMessage(v25[0]);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
