/*
 * XREFs of PoFxPrepareDevice @ 0x1400AD28C
 * Callers:
 *     PnpStartDevice @ 0x1400AD1E4 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140574E30 (PiProcessAddBootDevices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140483F5C (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404C5578 (PopFxFindDeviceAndAllocateUniqueId.c)
 */

void __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  int v2; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  ULONG_PTR *v7; // rdi
  ULONG_PTR *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int8 (__fastcall *v13)(__int64, __int64 *); // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 296);
  v17 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 2) == 0 )
    {
      if ( (unsigned int)PopFxFindDeviceAndAllocateUniqueId(a1, &v17) == -1073741738 )
        goto LABEL_16;
      *(_DWORD *)(a1 + 296) |= 2u;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0);
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
        v15 = a1 + 280;
        if ( !v13(1LL, &v15) )
          PopFxBugCheck(0x605uLL, 1uLL, (ULONG_PTR)v7, 0LL);
        if ( v16 )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    if ( v8 )
    {
      v12 = v17;
      if ( !v17 )
        return;
      if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v17 + 240), (PVOID)0x70466F50, &File, 1u, 0x20u) != -1073741738 )
        *(_DWORD *)(a1 + 296) |= 0x4000u;
      goto LABEL_17;
    }
LABEL_16:
    v12 = v17;
LABEL_17:
    if ( v12 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v12 + 240), (PVOID)0x66466F50, 0x20u);
  }
}
