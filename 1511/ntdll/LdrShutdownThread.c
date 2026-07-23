/*
 * XREFs of LdrShutdownThread @ 0x180012AA0
 * Callers:
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     RtlProcessFlsData @ 0x18005B3E0 (RtlProcessFlsData.c)
 *     RtlFreeThreadActivationContextStack @ 0x180075FB0 (RtlFreeThreadActivationContextStack.c)
 *     LdrpFreeTls @ 0x180076468 (LdrpFreeTls.c)
 *     memset @ 0x1800AB900 (memset.c)
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
  _RTL_DYNAMIC_HASH_TABLE *v11; // r12
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
    RtlProcessFlsData(v4->FlsData);
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
      LdrpDrainWorkQueue(0LL);
    }
    LdrpAcquireLoaderLock();
    v9 = (__int64 *)qword_180145238;
    while ( v9 != &qword_180145230 )
    {
      v10 = (__int64)(v9 - 4);
      v9 = (__int64 *)v9[1];
      v8 = *(unsigned int *)(v10 + 104);
      if ( v5->ImageBaseAddress != *(void **)(v10 + 48) && (v8 & 0x40000) == 0 )
      {
        v11 = *(_RTL_DYNAMIC_HASH_TABLE **)(v10 + 56);
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
              LdrpCallTlsInitializers(3LL, v10);
            LdrpCallInitRoutine(v11);
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
      LdrpCallTlsInitializers(3LL, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast(&v21);
    }
    LdrpReleaseLoaderLock(v8, 19, 0);
    if ( !v7 )
      LdrpDropLastInProgressCount();
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
