/*
 * XREFs of KsepGetShimsForDriver @ 0x1405139C0
 * Callers:
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepDbGetDriverShims @ 0x140513AA4 (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x140513C9C (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x140515050 (KsepIsModuleShimmed.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14065354C (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  _QWORD *Paged; // rax
  _QWORD *v16; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  char v25; // al
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
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
    ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v27, (__int64)&v26);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v13 = v27;
  v14 = v26;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v27, v26);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_12:
    if ( v13 && v14 )
      KsepDbFreeDriverShims(v13, v14);
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
  *((_DWORD *)Paged + 6) = v14;
  Paged[2] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v18 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F60, 0LL, 0);
  v19 = v18;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F60, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140328F60, v18, (ULONG_PTR)&qword_140328F60);
  if ( v19 )
    v19[26] |= 1u;
  v20 = (_QWORD *)qword_140328F58;
  if ( *(_UNKNOWN **)qword_140328F58 != &unk_140328F50 )
    __fastfail(3u);
  *v16 = &unk_140328F50;
  v16[1] = v20;
  *v20 = v16;
  qword_140328F58 = (__int64)v16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
  KeAbPostRelease((ULONG_PTR)&qword_140328F60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
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
