/*
 * XREFs of KsepGetShimsForDriver @ 0x1403B6FE4
 * Callers:
 *     KseDriverLoadImage @ 0x1403B8968 (KseDriverLoadImage.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400028EC (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x140002940 (KsepLogInfo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepDebugPrint @ 0x1401CCFB8 (KsepDebugPrint.c)
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1403B8AC4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 *     KsepIsModuleShimmed @ 0x1403B8C3C (KsepIsModuleShimmed.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14061E1F0 (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  unsigned int v14; // r15d
  _QWORD *Paged; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rsi
  _QWORD *v18; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rax
  signed __int8 v21; // cf
  __int64 v22; // r14
  void **v23; // rax
  __int64 v24; // rdx
  char v25; // al
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h] BYREF

  v27 = 0LL;
  v26 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v28 = 0LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v28) )
  {
    v12 = v28;
    *a5 = *(_QWORD *)(v28 + 32);
    *a6 = *(_DWORD *)(v12 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v27, &v26);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, a3, a4, (unsigned int)&v27, (__int64)&v26);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v13 = v27;
  v14 = v26;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v27, v26);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_12:
    if ( v13 && v14 )
    {
      v17 = 0LL;
      v18 = v13 + 3;
      do
      {
        if ( v18[2] )
          KsepStringFree(&v13[10 * v17 + 4]);
        if ( *v18 )
          KsepStringFree(&v13[10 * v17 + 2]);
        if ( v18[4] )
          KsepStringFree(&v13[10 * v17 + 6]);
        v17 = (unsigned int)(v17 + 1);
        v18 += 10;
      }
      while ( (unsigned int)v17 < v14 );
      KsepPoolFreePaged(v13);
    }
    goto LABEL_6;
  }
  Paged = KsepPoolAllocatePaged(0x28uLL);
  v16 = Paged;
  if ( !Paged )
  {
    ShimsFromRegistry = -1073741670;
    goto LABEL_12;
  }
  Paged[4] = v13;
  Paged[2] = a3;
  *((_DWORD *)Paged + 6) = v14;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
  v21 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL);
  v22 = v20;
  if ( v21 )
    ExfAcquirePushLockExclusiveEx(&qword_140305F40, v20, (ULONG_PTR)&qword_140305F40);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  v23 = (void **)qword_140305F38;
  *v16 = &unk_140305F30;
  v16[1] = v23;
  if ( *v23 != &unk_140305F30 )
    __fastfail(3u);
  *v23 = v16;
  qword_140305F38 = (__int64)v16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
  KeAbPostRelease((ULONG_PTR)&qword_140305F40);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_5:
  *a5 = v27;
  *a6 = v26;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v25 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v24]) = 0;
    LODWORD(KsepHistoryMessages[v24]) = 459108;
    if ( (v25 & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}
