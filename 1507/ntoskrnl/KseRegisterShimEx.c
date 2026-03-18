/*
 * XREFs of KseRegisterShimEx @ 0x1405B538C
 * Callers:
 *     KseRegisterShim @ 0x1405B5384 (KseRegisterShim.c)
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
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x1405B557C (KsepIsShimRegistered.c)
 *     KsepValidateShimProviderAndData @ 0x1405B55DC (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x1405B56F4 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  void **v15; // rax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 v19; // rcx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v24; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140353C94 != 2 )
    return 3221225473LL;
  v24 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v24);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v24, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v11 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, v9);
        v14 = v11;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v11, (ULONG_PTR)&qword_140353CC0, v13);
        if ( v14 )
          *(_BYTE *)(v14 + 26) |= 1u;
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v12, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
          KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
          v20 = KeGetCurrentThread();
          v21 = v20->KernelApcDisable + 1;
          v20->KernelApcDisable = v21;
          if ( !v21
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
            && !v20->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          LoadedModulesList = -1073741771;
          v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140332304[2 * v22] = -1073741771;
          KsepHistoryErrors[2 * v22] = 131320;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(2LL, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepLogError(2, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepPoolFreePaged(Paged);
        }
        else
        {
          Paged[2] = a1;
          *((_DWORD *)Paged + 6) = 0;
          *((_DWORD *)Paged + 7) = a3;
          Paged[4] = a4;
          v15 = (void **)qword_140353CA8;
          *Paged = &unk_140353CA0;
          Paged[1] = v15;
          if ( *v15 != &unk_140353CA0 )
            __fastfail(3u);
          *v15 = Paged;
          qword_140353CA8 = (__int64)Paged;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
          KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
          v16 = KeGetCurrentThread();
          v17 = v16->KernelApcDisable + 1;
          v16->KernelApcDisable = v17;
          if ( !v17
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
            && !v16->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_140353CC8;
          KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 131363LL;
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
      dword_140332304[2 * v19] = -1073741823;
      KsepHistoryErrors[2 * v19] = 131287;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v24 )
    KsepPoolFreePaged(v24);
  return (unsigned int)LoadedModulesList;
}
