/*
 * XREFs of LdrShutdownThread @ 0x180015E50
 * Callers:
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 * Callees:
 *     RtlProcessFlsData @ 0x1800071A0 (RtlProcessFlsData.c)
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016370 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018750 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800188C4 (LdrpCallInitRoutine.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18002D51C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlFreeThreadActivationContextStack @ 0x180077830 (RtlFreeThreadActivationContextStack.c)
 *     LdrpFreeTls @ 0x18007963C (LdrpFreeTls.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall LdrShutdownThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
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
  __int64 v19; // [rsp+30h] [rbp-C8h] BYREF
  int v20; // [rsp+38h] [rbp-C0h]
  _BYTE v21[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+80h] [rbp-78h] BYREF
  int v23; // [rsp+88h] [rbp-70h]
  _BYTE v24[56]; // [rsp+90h] [rbp-68h] BYREF

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
            v19 = 72LL;
            v20 = 1;
            memset(v21, 0, sizeof(v21));
            RtlActivateActivationContextUnsafeFast(&v19, *(_QWORD *)(v10 + 136));
            if ( *(_WORD *)(v10 + 110) )
              LdrpCallTlsInitializers(3u, v10);
            LdrpCallInitRoutine(v11, *(_QWORD *)(v10 + 48), 3LL, 0LL);
            RtlDeactivateActivationContextUnsafeFast(&v19);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v22 = 72LL;
      v23 = 1;
      memset(v24, 0, sizeof(v24));
      RtlActivateActivationContextUnsafeFast(&v22, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast(&v22);
    }
    LdrpReleaseLoaderLock(v8, 19LL);
    if ( !v7 )
      LdrpDropLastInProgressCount(v13, v12, v14, v15);
    LdrpFreeTls(v13, v12, v14, v15);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, FlsData);
  }
  TlsExpansionSlots = v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, FiberData);
  }
  return RtlFreeThreadActivationContextStack(a1, a2, a3, a4);
}
