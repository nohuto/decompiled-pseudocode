/*
 * XREFs of KseRegisterShimEx @ 0x14057043C
 * Callers:
 *     KseRegisterShim @ 0x140570434 (KseRegisterShim.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KsepPoolFreePaged @ 0x140084D54 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140084D74 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x140084DC8 (KsepLogInfo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KsepDebugPrint @ 0x1401DCC3C (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCEA4 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x14057060C (KsepIsShimRegistered.c)
 *     KsepValidateShimProviderAndData @ 0x14057066C (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x140570784 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v10; // rax
  __int64 v11; // r8
  _BYTE *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v25; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140328EF4 != 2 )
    return 3221225473LL;
  v25 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v25);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v25, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F20, 0LL, 0);
        v12 = v10;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F20, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140328F20, v10, (ULONG_PTR)&qword_140328F20);
        if ( v12 )
          v12[26] |= 1u;
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v11, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F20);
          KeAbPostRelease((ULONG_PTR)&qword_140328F20);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
          LoadedModulesList = -1073741771;
          v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140307424[2 * v23] = -1073741771;
          KsepHistoryErrors[2 * v23] = 131320;
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
          v13 = (_QWORD *)qword_140328F08;
          if ( *(_UNKNOWN **)qword_140328F08 != &unk_140328F00 )
            __fastfail(3u);
          *Paged = &unk_140328F00;
          Paged[1] = v13;
          *v13 = Paged;
          qword_140328F08 = (__int64)Paged;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F20);
          KeAbPostRelease((ULONG_PTR)&qword_140328F20);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_140328F28;
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v17]) = 0;
          LODWORD(KsepHistoryMessages[v17]) = 131363;
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
      v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140307424[2 * v19] = -1073741823;
      KsepHistoryErrors[2 * v19] = 131287;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v25 )
    KsepPoolFreePaged(v25);
  return (unsigned int)LoadedModulesList;
}
