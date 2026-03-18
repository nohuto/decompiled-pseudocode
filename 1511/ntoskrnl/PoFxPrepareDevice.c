/*
 * XREFs of PoFxPrepareDevice @ 0x14010786C
 * Callers:
 *     PnpStartDevice @ 0x1401077C4 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140540368 (PiProcessAddBootDevices.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoAcquireRemoveLockEx @ 0x1400DAFE0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x1400E26D0 (IoReleaseRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1404A1208 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404F2B84 (PopFxFindDeviceAndAllocateUniqueId.c)
 */

void __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  int v2; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  ULONG_PTR *v7; // rdi
  ULONG_PTR *v8; // rsi
  __int64 v9; // rdi
  unsigned __int8 (__fastcall *v10)(__int64, __int64 *); // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 296);
  v14 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 2) == 0 )
    {
      if ( (unsigned int)PopFxFindDeviceAndAllocateUniqueId(a1, &v14) == -1073741738 )
        goto LABEL_16;
      *(_DWORD *)(a1 + 296) |= 2u;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, v6, (ULONG_PTR)&PopFxPluginLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    v7 = (ULONG_PTR *)PopFxPluginList;
    v8 = 0LL;
    while ( v7 != &PopFxPluginList )
    {
      v10 = (unsigned __int8 (__fastcall *)(__int64, __int64 *))v7[12];
      if ( v10 )
      {
        v12 = a1 + 280;
        if ( !v10(1LL, &v12) )
          PopFxBugCheck(0x605uLL, 1uLL, (ULONG_PTR)v7, 0LL);
        if ( v13 )
        {
          LOBYTE(v11) = 1;
          PopDiagTraceFxDevicePreparation(a1, v7, a1 + 280, v11);
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
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v8 )
    {
      v9 = v14;
      if ( !v14 )
        return;
      if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v14 + 240), (PVOID)0x70466F50, &File, 1u, 0x20u) != -1073741738 )
        *(_DWORD *)(a1 + 296) |= 0x4000u;
      goto LABEL_17;
    }
LABEL_16:
    v9 = v14;
LABEL_17:
    if ( v9 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 240), (PVOID)0x66466F50, 0x20u);
  }
}
