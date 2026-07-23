/*
 * XREFs of IoRequestDeviceRemovalForReset @ 0x14062C590
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     Template_hzr0 @ 0x1401CD378 (Template_hzr0.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopAllocateUnicodeString @ 0x1403F1458 (IopAllocateUnicodeString.c)
 *     PnpSetTargetDeviceRemove @ 0x140484C7C (PnpSetTargetDeviceRemove.c)
 *     IopFreeResetRemovalContext @ 0x14062C880 (IopFreeResetRemovalContext.c)
 *     PnpTraceRequestDeviceRemovalForReset @ 0x140649630 (PnpTraceRequestDeviceRemovalForReset.c)
 */

__int64 __fastcall IoRequestDeviceRemovalForReset(PVOID Object, unsigned int a2)
{
  PVOID PoolWithTag; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x45706E50u);
  v5 = 0LL;
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_2;
  memset(PoolWithTag, 0, 0xE0uLL);
  KeInitializeDpc((PRKDPC)(v6 + 64), (PKDEFERRED_ROUTINE)PfSnTracingStateDpcRoutine, (PVOID)v6);
  KeInitializeTimerEx((PKTIMER)v6, NotificationTimer);
  *(_QWORD *)(v6 + 152) = v6;
  *(_QWORD *)(v6 + 144) = IopRetryDeviceRemovalForReset;
  *(_QWORD *)(v6 + 128) = 0LL;
  ObfReferenceObject(Object);
  *(_QWORD *)(v6 + 184) = Object;
  *(_DWORD *)(v6 + 160) = 0;
  *(_DWORD *)(v6 + 216) = a2;
  *(_DWORD *)(v6 + 164) = 0;
  *(_DWORD *)(v6 + 192) = 0;
  *(_QWORD *)(v6 + 200) = 0LL;
  *(_QWORD *)(v6 + 208) = 0LL;
  if ( (int)IopAllocateUnicodeString(v6 + 200, 0x200u) >= 0 )
    v7 = PnpSetTargetDeviceRemove(
           *(_QWORD **)(v6 + 184),
           0,
           1,
           0,
           1,
           54,
           0,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           v6,
           (_DWORD *)(v6 + 164),
           v6 + 192,
           v6 + 200,
           (_QWORD *)(v6 + 168));
  else
LABEL_2:
    v7 = -1073741670;
  PnpTraceRequestDeviceRemovalForReset(Object, a2, (unsigned int)v7);
  if ( v7 >= 0 )
  {
    if ( Object )
      v5 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_hzr0(v9, v8, v10, *(_WORD *)(v5 + 40) >> 1, *(_QWORD *)(v5 + 48));
  }
  else if ( v6 )
  {
    IopFreeResetRemovalContext(v6);
  }
  return (unsigned int)v7;
}
