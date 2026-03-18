/*
 * XREFs of PspSiloDelete @ 0x1406C2AE8
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 *     PspServerSiloDelete @ 0x1406C2868 (PspServerSiloDelete.c)
 */

NTSTATUS __fastcall PspSiloDelete(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v3; // rbp
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r9
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int8 v16; // bl
  signed __int32 v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  bool v25; // zf
  struct _KEVENT *v26; // rcx
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  struct _KTHREAD *v29; // rax
  signed __int64 *v30; // rax
  struct _KTHREAD *v31; // rdx
  __int16 v32; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (struct _ERESOURCE *)(a1 + 48);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 48), 1u);
  v4 = a1 + 216;
  while ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(_QWORD **)v4;
    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)v4 + 24LL));
    v6 = *v5;
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    ExFreePoolWithTag(v5, 0x6F6C6953u);
  }
  ExReleaseResourceLite(v3);
  v9 = KeGetCurrentThread();
  v10 = v9->SpecialApcDisable + 1;
  v9->SpecialApcDisable = v10;
  if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery();
  v11 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v8);
  v12 = v11;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_14032C468 = (__int64)KeGetCurrentThread();
  dword_14032C490 = CurrentIrql;
  v14 = *(_QWORD *)(a1 + 32);
  v15 = *(_QWORD **)(a1 + 40);
  if ( *(_QWORD *)(v14 + 8) != a1 + 32 || *v15 != a1 + 32 )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  v16 = dword_14032C490;
  qword_14032C468 = 0LL;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v17);
  __writecr8(v16);
  KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
  v21 = *(_QWORD *)(a1 + 152);
  if ( v21 )
  {
    v22 = KeGetCurrentThread();
    --v22->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v21 + 48), 1u);
    v23 = *(_QWORD *)(a1 + 160);
    v24 = *(_QWORD **)(a1 + 168);
    if ( *(_QWORD *)(v23 + 8) != a1 + 160 || *v24 != a1 + 160 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    v25 = (*(_DWORD *)(v21 + 176))-- == 1;
    if ( v25 && !*(_DWORD *)(v21 + 180) )
    {
      v26 = (struct _KEVENT *)v21;
      if ( *(_QWORD *)(v21 + 256) )
        v26 = (struct _KEVENT *)(v21 + 232);
      KeSetEvent(v26, 0, 0);
    }
    ExReleaseResourceLite((PERESOURCE)(v21 + 48));
    v27 = KeGetCurrentThread();
    v28 = v27->SpecialApcDisable + 1;
    v27->SpecialApcDisable = v28;
    if ( !v28 && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
    ObDereferenceObjectDeferDelete((PVOID)v21);
  }
  if ( *(_QWORD *)(a1 + 256) )
    PspServerSiloDelete((_QWORD *)a1, v18, v19, v20);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = ExMapHandleToPointer(PspSiloIdTable, *(_QWORD *)(a1 + 24));
    ExDestroyHandle(PspSiloIdTable, *(_QWORD *)(a1 + 24), v30);
    v31 = KeGetCurrentThread();
    v32 = v31->KernelApcDisable + 1;
    v31->KernelApcDisable = v32;
    if ( !v32
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
      && !v31->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ExDeleteResourceLite(v3);
}
