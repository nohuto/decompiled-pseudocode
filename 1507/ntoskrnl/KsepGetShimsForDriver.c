/*
 * XREFs of KsepGetShimsForDriver @ 0x140576F2C
 * Callers:
 *     KseDriverLoadImage @ 0x1405786C4 (KseDriverLoadImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepPoolAllocatePaged @ 0x14012980C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepIsModuleShimmed @ 0x1404535A8 (KsepIsModuleShimmed.c)
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14069CE00 (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, __int64 a4, _QWORD *a5, unsigned int *a6)
{
  int v9; // ebx
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  unsigned int v14; // r15d
  _QWORD *Paged; // rax
  __int64 v16; // r9
  _QWORD *v17; // rsi
  unsigned int v18; // esi
  _QWORD *v19; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rax
  __int64 v22; // r9
  signed __int8 v23; // cf
  __int64 v24; // r14
  void **v25; // rax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  char v28; // al
  unsigned int v29; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h] BYREF

  v30 = 0LL;
  v29 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v31 = 0LL;
  v9 = a4;
  if ( (unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, a3, &v31, a4) )
  {
    v12 = v31;
    *a5 = *(_QWORD *)(v31 + 32);
    *a6 = *(_DWORD *)(v12 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v30, &v29);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, a3, v9, (unsigned int)&v30, (__int64)&v29);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v13 = v30;
  v14 = v29;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v30, v29);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_12:
    if ( v13 && v14 )
    {
      v18 = 0;
      v19 = v13 + 3;
      do
      {
        if ( v19[2] )
          KsepStringFree(&v13[10 * v18 + 4]);
        if ( *v19 )
          KsepStringFree(&v13[10 * v18 + 2]);
        if ( v19[4] )
          KsepStringFree(&v13[10 * v18 + 6]);
        ++v18;
        v19 += 10;
      }
      while ( v18 < v14 );
      KsepPoolFreePaged(v13);
    }
    goto LABEL_6;
  }
  Paged = KsepPoolAllocatePaged(0x28uLL);
  v17 = Paged;
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
  v21 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, v16);
  v23 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL);
  v24 = v21;
  if ( v23 )
    ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v21, (ULONG_PTR)&qword_140353CC0, v22);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  v25 = (void **)qword_140353CB8;
  *v17 = &unk_140353CB0;
  v17[1] = v25;
  if ( *v25 != &unk_140353CB0 )
    __fastfail(3u);
  *v25 = v17;
  qword_140353CB8 = (__int64)v17;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
  KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_5:
  *a5 = v30;
  *a6 = v29;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v28 = KsepDebugFlag;
    KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 459108LL;
    if ( (v28 & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}
