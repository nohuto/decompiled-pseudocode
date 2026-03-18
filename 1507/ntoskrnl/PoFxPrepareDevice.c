/*
 * XREFs of PoFxPrepareDevice @ 0x1400271E8
 * Callers:
 *     PnpStartDevice @ 0x140026678 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1405B7A38 (PiProcessAddBootDevices.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140461BC4 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140538618 (PopDiagTraceFxDevicePreparation.c)
 */

int __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  $CD287064E7C9F7953DE243E927CFCB99 *v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  ULONG_PTR *v7; // rdi
  ULONG_PTR *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rdi
  unsigned __int8 (__fastcall *v13)(__int64, __int64 *); // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v2) = *(_DWORD *)(a1 + 296);
  v18 = 0LL;
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return (int)v2;
  if ( ((unsigned __int8)v2 & 2) == 0 )
  {
    LODWORD(v2) = PopFxFindDeviceAndAllocateUniqueId(a1, &v18);
    if ( (_DWORD)v2 == -1073741738 )
      goto LABEL_17;
    *(_DWORD *)(a1 + 296) |= 2u;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxPluginLock, v6, &PopFxPluginLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (ULONG_PTR *)PopFxPluginList;
  v8 = 0LL;
  while ( v7 != &PopFxPluginList )
  {
    v13 = (unsigned __int8 (__fastcall *)(__int64, __int64 *))v7[12];
    if ( v13 )
    {
      v16 = a1 + 280;
      if ( !v13(1LL, &v16) )
        PopFxBugCheck(0x605uLL, 1uLL, (ULONG_PTR)v7, 0LL);
      if ( v17 )
      {
        LOBYTE(v14) = 1;
        PopDiagTraceFxDevicePreparation(a1, v7, a1 + 280, v14);
        v8 = v7;
        goto LABEL_12;
      }
    }
    v7 = (ULONG_PTR *)*v7;
  }
  if ( !a2 )
    goto LABEL_13;
LABEL_12:
  *(_DWORD *)(a1 + 296) |= 1u;
  *(_QWORD *)(a1 + 128) = v8;
  *(_WORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 98) = 6;
  *(_DWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 112) = a1 + 104;
  *(_QWORD *)(a1 + 104) = a1 + 104;
LABEL_13:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  v11 = KeGetCurrentThread();
  LODWORD(v2) = ++v11->KernelApcDisable;
  if ( !(_WORD)v2 )
  {
    v2 = &v11->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v2->ApcState.ApcListHead[0].Flink != v2 && !v11->SpecialApcDisable )
      LODWORD(v2) = KiCheckForKernelApcDelivery(v11, v9, v10);
  }
  if ( v8 )
  {
    v12 = v18;
    if ( !v18 )
      return (int)v2;
    LODWORD(v2) = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v18 + 240), (PVOID)0x70466F50, &File, 1u, 0x20u);
    if ( (_DWORD)v2 != -1073741738 )
      *(_DWORD *)(a1 + 296) |= 0x4000u;
    goto LABEL_18;
  }
LABEL_17:
  v12 = v18;
LABEL_18:
  if ( v12 )
  {
    LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 244), 0xFFFFFFFF);
    if ( (_DWORD)v2 == 1 )
      LODWORD(v2) = KeSetEvent((PRKEVENT)(v12 + 248), 0, 0);
  }
  return (int)v2;
}
