/*
 * XREFs of IoRequestDeviceRemovalForReset @ 0x14067D338
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     memset @ 0x140195A80 (memset.c)
 *     Template_hzr0 @ 0x1401FA7F8 (Template_hzr0.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 */

__int64 __fastcall IoRequestDeviceRemovalForReset(_QWORD *Object)
{
  PVOID PoolWithTag; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB8uLL, 0x45706E50u);
  v3 = 0LL;
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB8uLL);
    KeInitializeDpc((PRKDPC)(v4 + 64), (PKDEFERRED_ROUTINE)PfSnTracingStateDpcRoutine, (PVOID)v4);
    KeInitializeTimerEx((PKTIMER)v4, NotificationTimer);
    *(_QWORD *)(v4 + 152) = v4;
    *(_QWORD *)(v4 + 144) = IopRetryDeviceRemovalForReset;
    *(_QWORD *)(v4 + 128) = 0LL;
    *(_DWORD *)(v4 + 160) = 0;
    v5 = PnpSetTargetDeviceRemove(
           Object,
           0,
           1,
           0,
           1,
           54,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           v4,
           (_DWORD *)(v4 + 164),
           0LL,
           0LL,
           (__int64 *)(v4 + 168));
    if ( v5 >= 0 )
    {
      if ( Object )
        v3 = *(_QWORD *)(Object[39] + 40LL);
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
        Template_hzr0(v7, v6, v8, *(_WORD *)(v3 + 40) >> 1, *(_QWORD *)(v3 + 48));
    }
    else
    {
      ExFreePoolWithTag((PVOID)v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
