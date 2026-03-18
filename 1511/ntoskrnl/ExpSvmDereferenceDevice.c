/*
 * XREFs of ExpSvmDereferenceDevice @ 0x1402151DC
 * Callers:
 *     ExFreeSvmAsid @ 0x14001BF7C (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x140673C50 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(__int64 P)
{
  unsigned int v1; // esi
  _DWORD *v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  char *v7; // r15
  struct _KPROCESS *Process; // rax
  unsigned __int64 v9; // rcx
  int v10; // eax
  __int16 v11; // ax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v18[4]; // [rsp+38h] [rbp-30h] BYREF

  v1 = 0;
  v2 = (_DWORD *)P;
  if ( !KiAbEnabled )
  {
    v7 = 0LL;
    goto LABEL_21;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_8;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  P = 96 * v6;
  v7 = (char *)CurrentThread->LockEntries + P;
  if ( !v7 )
  {
LABEL_8:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_17;
  }
  if ( (unsigned __int64)(&ExpSvmDeviceListLock + 0xE000000000LL) > 0x7FFFFFFFFFLL
    || (Process = CurrentThread->ApcState.Process, (v9 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v10 = -1;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 8);
  }
  *((_DWORD *)v7 + 10) = v10;
  P = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v7 + 4) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
  v11 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v11;
  if ( !v11 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(P);
LABEL_21:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (__int64)v7, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v7 )
    v7[26] |= 1u;
  if ( v2[6]-- == 1 )
  {
    v14 = *((_QWORD *)v2 + 5);
    v18[0] = 7;
    (*((void (__fastcall **)(__int64, int *))v2 + 10))(v14, v18);
    v1 = ((__int64 (__fastcall *)(__int64, _QWORD))HalIommuDispatch[7])(ExpSvmIommuSystemContext, *((_QWORD *)v2 + 13));
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v15 = *(_QWORD *)v2;
    v16 = (_QWORD *)*((_QWORD *)v2 + 1);
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 || (_DWORD *)*v16 != v2 )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    (*((void (__fastcall **)(_QWORD))v2 + 7))(*((_QWORD *)v2 + 5));
    ExFreePoolWithTag(v2, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  return v1;
}
