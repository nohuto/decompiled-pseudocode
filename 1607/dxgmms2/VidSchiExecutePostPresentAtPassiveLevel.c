/*
 * XREFs of VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0024070
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0002A74 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000DEB0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000DF5C (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiCompletePendingFlip @ 0x1C0011A70 (VidSchiCompletePendingFlip.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiExecutePostPresentAtPassiveLevel(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  _QWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // r13d
  int v18; // r12d
  int v19; // edx
  __int64 v20; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  bool v22; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+10h]

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32);
  v23 = *(_DWORD *)(a1 + 44);
  v6 = *(_QWORD *)(v2 + 8 * v4 + 2968);
  v7 = *(_QWORD *)(v6 + 8LL * v23 + 24);
  v8 = ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[49])(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 2128LL), a1);
  v13 = v8;
  if ( v8 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11, v12);
    v14[3] = 281LL;
    v14[4] = 15LL;
    v14[5] = v13;
    v14[6] = v1;
    v14[7] = *(_QWORD *)(v2 + 16);
    WdLogEvent5_WdCriticalError(v14);
    __debugbreak();
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1856), &LockHandle);
  v15 = *(_DWORD *)(v7 + 44);
  v22 = 0;
  while ( v15 != (((unsigned __int8)*(_DWORD *)(a1 + 48) + 1) & 0x3F) )
  {
    v16 = 1224LL * v15;
    v15 = ((_BYTE)v15 + 1) & 0x3F;
    *(_DWORD *)(v16 + v7 + 1100) = 11;
  }
  v17 = v23;
  v18 = VidSchiCompleteFlipEntry(v2, v4, v23, *(_DWORD *)(v7 + 44), *(_DWORD *)(a1 + 48), 0, 0LL);
  v19 = ((unsigned __int8)*(_DWORD *)(a1 + 48) + 1) & 0x3F;
  *(_DWORD *)(v7 + 44) = v19;
  if ( *(_DWORD *)(v7 + 48) == *(_DWORD *)(a1 + 48) )
    *(_DWORD *)(v7 + 48) = v19;
  if ( *(_DWORD *)(v6 + 2264) && *(_BYTE *)(v6 + 46916) )
    VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v2, &v22, v4, v17);
  if ( v5 )
  {
    VidSchiCheckPendingDeviceCommand((_QWORD *)v5);
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 32) + 4LL))
                    + 8 * v4
                    + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v4 + 5504) + 8LL), -v18);
    **(_DWORD **)(v2 + 8 * v4 + 5504) += v18;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), -v18);
    *(_DWORD *)v20 += v18;
  }
  if ( v22 )
    VidSchiCompletePendingFlip(v2, v4, 9);
  --*(_DWORD *)(*(_QWORD *)(v2 + 208) + 812LL);
  VidSchiSignalRegisteredEvent(v2, (struct _KEVENT **)(v5 + 112));
  VidSchiSignalRegisteredEvent(v2, (struct _KEVENT **)(v2 + 1816));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
