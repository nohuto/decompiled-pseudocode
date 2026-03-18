/*
 * XREFs of CmDumpKey @ 0x140660AB4
 * Callers:
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpFreeOffsetArray @ 0x14065C1A4 (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x14065CA3C (CmpWriteOffsetArrayToFile.c)
 */

__int64 __fastcall CmDumpKey(__int64 a1, void *a2)
{
  __int64 v2; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rtt
  BOOLEAN v11; // si
  unsigned int v12; // edi
  struct _KTHREAD *v13; // rdx
  __int16 v14; // cx
  unsigned __int64 v15; // rtt
  struct _KTHREAD *v16; // rdx
  __int16 v17; // ax
  int v18; // esi
  __int64 v19; // rcx
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF
  PVOID *v25; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v23 = 0;
  v25 = 0LL;
  v24 = 0;
  if ( v2 == CmpMasterHive )
    return 3221225506LL;
  CmpLockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v11 = 1;
  }
  else
  {
    v11 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v11 )
    {
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v12 = -1073741491;
      goto LABEL_16;
    }
  }
  CmpLockKcbShared(a1, v6, v7, v8);
  if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 )
  {
    v12 = -1073741444;
LABEL_15:
    CmpUnlockKcb((char *)a1);
LABEL_16:
    CmpUnlockRegistry();
    if ( v11 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v15 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v15 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v16 = KeGetCurrentThread();
      v17 = v16->KernelApcDisable + 1;
      v16->KernelApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
        && !v16->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return v12;
  }
  if ( *(_DWORD *)(a1 + 40) != *(_DWORD *)(*(_QWORD *)(v2 + 64) + 36LL) )
  {
    v12 = -1073741811;
    goto LABEL_15;
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 2848), 1u);
  v18 = CmpSnapshotHiveToOffsetArray(v2, &v23, (PVOID *)&v25, (unsigned int *)&v24);
  ExReleaseResourceLite(*(PERESOURCE *)(v2 + 2848));
  CmpUnlockKcb((char *)a1);
  CmpUnlockRegistry();
  if ( v18 >= 0 )
  {
    v18 = CmpWriteOffsetArrayToFile(v19, v23, (__int64)v25, v24, a2);
    CmpFreeOffsetArray(v23, v25);
  }
  _m_prefetchw(&CmpShutdownRundown);
  v20 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v20 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v18;
}
