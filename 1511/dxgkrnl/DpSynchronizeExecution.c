/*
 * XREFs of DpSynchronizeExecution @ 0x1C000B220
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x1C000B3D0 (DpiProcessMiracastNotifyDpc.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C0023CE0 (DpiMiracastChunkInfoCallbackDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpSynchronizeExecution(__int64 a1, KSYNCHRONIZE_ROUTINE *a2, void *a3, unsigned int a4, BOOLEAN *a5)
{
  __int64 v5; // r10
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r9
  KIRQL v12; // di
  int v13; // edi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  if ( !a1
    || !a2
    || !a5
    || (v8 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v8 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
LABEL_22:
    v13 = -1073741811;
    v14 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v14[5] = -1073741811LL;
    goto LABEL_23;
  }
  a1 = *(_QWORD *)(v8 + 1184);
  if ( a1 )
  {
    v9 = *(_DWORD *)(v8 + 1176);
    if ( v9 == 2 )
    {
LABEL_12:
      *a5 = KeSynchronizeExecution((PKINTERRUPT)a1, a2, a3);
      return 0LL;
    }
    if ( v9 == 3 )
    {
      v10 = *(_QWORD *)(v8 + 1192);
      if ( *(_DWORD *)(v10 + 4) > (unsigned int)v5 )
      {
        a1 = *(_QWORD *)(v10 + 48 * v5 + 24);
        goto LABEL_12;
      }
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( *(_BYTE *)(v8 + 1476)
    || *(_BYTE *)(v8 + 1478)
    || *(_BYTE *)(v8 + 1477)
    || *(_BYTE *)(v8 + 1095)
    || *(_BYTE *)(v8 + 1479)
    || *(_BYTE *)(v8 + 1480) )
  {
    v12 = KfRaiseIrql(3u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1264), &LockHandle);
    *a5 = ((__int64 (__fastcall *)(void *))a2)(a3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v12);
    return 0LL;
  }
  v13 = -1073741823;
  v14 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
  v14[5] = -1073741823LL;
LABEL_23:
  v14[3] = DpSynchronizeExecution;
  v14[4] = 0LL;
  WdLogEvent5_WdError(v14);
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
  v16[4] = KeSynchronizeExecution;
  v16[5] = v13;
  v16[3] = DpSynchronizeExecution;
  WdLogEvent5_WdError(v16);
  return (unsigned int)v13;
}
