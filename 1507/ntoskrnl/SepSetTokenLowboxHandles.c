/*
 * XREFs of SepSetTokenLowboxHandles @ 0x140007984
 * Callers:
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 * Callees:
 *     SepReferenceLowBoxObjects @ 0x140007848 (SepReferenceLowBoxObjects.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepDereferenceLowBoxObjects @ 0x14010E5C8 (SepDereferenceLowBoxObjects.c)
 *     RtlCreateHashTable @ 0x14011F4C0 (RtlCreateHashTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepGetLowBoxHandlesEntry @ 0x1404106F0 (SepGetLowBoxHandlesEntry.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 */

__int64 __fastcall SepSetTokenLowboxHandles(__int64 a1, __int64 a2, unsigned int a3, HANDLE *a4)
{
  void *v8; // rsi
  char v9; // r13
  PVOID PoolWithTag; // rax
  int LowBoxHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  __int16 v19; // ax
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( !a3 )
    goto LABEL_6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x6E486553u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  LowBoxHandlesEntry = SepReferenceLowBoxObjects(a3, a4, (__int64)PoolWithTag);
  if ( LowBoxHandlesEntry >= 0 )
  {
    v9 = 1;
    LowBoxHandlesEntry = SepValidateReferencedLowBoxHandles(*(unsigned int *)(a1 + 120), a2, a3, v8);
    if ( LowBoxHandlesEntry >= 0 )
    {
LABEL_6:
      CurrentThread = KeGetCurrentThread();
      v13 = *(_QWORD *)(a1 + 216) + 88LL;
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire(v13);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
        ExfAcquirePushLockExclusiveEx(v13, v14, v13);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      if ( !*(_QWORD *)(v13 + 8) )
      {
        if ( !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
        {
          LowBoxHandlesEntry = -1073741670;
          goto LABEL_13;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 216) + 96LL) = *(_QWORD *)(v13 + 8);
      }
      LowBoxHandlesEntry = SepGetLowBoxHandlesEntry(v13, a2, v21);
      if ( !LowBoxHandlesEntry )
      {
        v18 = v21[0];
        *(_QWORD *)(a1 + 1088) = v21[0];
        if ( a3 && !*(_DWORD *)(v18 + 40) )
        {
          *(_DWORD *)(v18 + 40) = a3;
          v9 = 0;
          *(_QWORD *)(*(_QWORD *)(a1 + 1088) + 48LL) = v8;
          v8 = 0LL;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v13);
        KeAbPostRelease(v13);
        v16 = KeGetCurrentThread();
        v19 = v16->KernelApcDisable + 1;
        v16->KernelApcDisable = v19;
        if ( v19 )
          goto LABEL_28;
LABEL_25:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
          && !v16->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        goto LABEL_28;
      }
LABEL_13:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease(v13);
      v16 = KeGetCurrentThread();
      v17 = v16->KernelApcDisable + 1;
      v16->KernelApcDisable = v17;
      if ( v17 )
        goto LABEL_28;
      goto LABEL_25;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v9 )
      SepDereferenceLowBoxObjects(a3, v8);
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)LowBoxHandlesEntry;
}
