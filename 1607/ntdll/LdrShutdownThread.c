/*
 * XREFs of LdrShutdownThread @ 0x180015E40
 * Callers:
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 * Callees:
 *     RtlProcessFlsData @ 0x180007190 (RtlProcessFlsData.c)
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlFreeThreadActivationContextStack @ 0x180077820 (RtlFreeThreadActivationContextStack.c)
 *     LdrpFreeTls @ 0x18007962C (LdrpFreeTls.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __noreturn LdrShutdownThread(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  void *FlsData; // rsi
  char v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void **TlsExpansionSlots; // rdi
  void *FiberData; // r8
  __int64 v18; // [rsp+30h] [rbp-C8h] BYREF
  int v19; // [rsp+38h] [rbp-C0h]
  _BYTE v20[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+80h] [rbp-78h] BYREF
  int v22; // [rsp+88h] [rbp-70h]
  _BYTE v23[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = v4->FlsData;
  if ( FlsData )
    RtlProcessFlsData((_QWORD *)v4->FlsData);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v4->SameTebFlags & 0x2000) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      LdrpDrainWorkQueue(0);
    }
    LdrpAcquireLoaderLock();
    v9 = (__int64 *)qword_1801523F8;
    while ( v9 != &qword_1801523F0 )
    {
      v10 = (__int64)(v9 - 4);
      v9 = (__int64 *)v9[1];
      v8 = *(unsigned int *)(v10 + 104);
      if ( v5->ImageBaseAddress != *(void **)(v10 + 48) && (v8 & 0x40000) == 0 )
      {
        v11 = *(_QWORD *)(v10 + 56);
        if ( v11 )
        {
          v8 &= 0x80004u;
          if ( (_DWORD)v8 == 524292 )
          {
            v18 = 72LL;
            v19 = 1;
            memset(v20, 0, sizeof(v20));
            RtlActivateActivationContextUnsafeFast(&v18, *(_QWORD *)(v10 + 136));
            if ( *(_WORD *)(v10 + 110) )
              LdrpCallTlsInitializers(3u, v10);
            LdrpCallInitRoutine(v11, *(_QWORD *)(v10 + 48), 3LL, 0LL);
            RtlDeactivateActivationContextUnsafeFast(&v18);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v21 = 72LL;
      v22 = 1;
      memset(v23, 0, sizeof(v23));
      RtlActivateActivationContextUnsafeFast(&v21, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast(&v21);
    }
    LdrpReleaseLoaderLock(v8, 19LL);
    if ( !v7 )
      LdrpDropLastInProgressCount(v13, v12, v14, v15);
    LdrpFreeTls(v13, v12, v14, v15);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FlsData);
  }
  TlsExpansionSlots = v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(v1, v0, v2, v3);
}
