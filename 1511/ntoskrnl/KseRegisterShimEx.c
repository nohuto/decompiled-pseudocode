/*
 * XREFs of KseRegisterShimEx @ 0x140524BB0
 * Callers:
 *     KseRegisterShim @ 0x140524BA8 (KseRegisterShim.c)
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
 *     KsepLogError @ 0x1401CD220 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x140524D80 (KsepIsShimRegistered.c)
 *     KsepValidateShimProviderAndData @ 0x140524DE0 (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x140524EF8 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbp
  void **v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v19; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140305F14 != 2 )
    return 3221225473LL;
  v19 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v19);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v19, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
        v12 = v10;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140305F40, v10, (ULONG_PTR)&qword_140305F40);
        if ( v12 )
          *(_BYTE *)(v12 + 26) |= 1u;
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v11, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
          KeAbPostRelease((ULONG_PTR)&qword_140305F40);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          LoadedModulesList = -1073741771;
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_1402E1EA4[2 * v17] = -1073741771;
          KsepHistoryErrors[2 * v17] = 131320;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(2LL, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepLogError(2, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepPoolFreePaged(Paged);
        }
        else
        {
          *((_DWORD *)Paged + 6) = 0;
          Paged[2] = a1;
          *((_DWORD *)Paged + 7) = a3;
          Paged[4] = a4;
          v13 = (void **)qword_140305F28;
          *Paged = &unk_140305F20;
          Paged[1] = v13;
          if ( *v13 != &unk_140305F20 )
            __fastfail(3u);
          *v13 = Paged;
          qword_140305F28 = (__int64)Paged;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
          KeAbPostRelease((ULONG_PTR)&qword_140305F40);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_140305F48;
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v14]) = 0;
          LODWORD(KsepHistoryMessages[v14]) = 131363;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(2LL, "KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
          KsepLogInfo(2LL, (__int64)"KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
        }
      }
      else
      {
        LoadedModulesList = -1073741670;
      }
    }
    else
    {
      LoadedModulesList = -1073741823;
      v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_1402E1EA4[2 * v16] = -1073741823;
      KsepHistoryErrors[2 * v16] = 131287;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v19 )
    KsepPoolFreePaged(v19);
  return (unsigned int)LoadedModulesList;
}
