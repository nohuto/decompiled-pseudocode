/*
 * XREFs of SepSetTokenLowboxHandles @ 0x14007F600
 * Callers:
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlCreateHashTable @ 0x1400A7ADC (RtlCreateHashTable.c)
 *     SepReferenceLowBoxObjects @ 0x1400AFE78 (SepReferenceLowBoxObjects.c)
 *     SepDereferenceLowBoxObjects @ 0x1400B0DB8 (SepDereferenceLowBoxObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047400C (SepValidateReferencedLowBoxHandles.c)
 *     SepGetLowBoxHandlesEntry @ 0x140474800 (SepGetLowBoxHandlesEntry.c)
 */

__int64 __fastcall SepSetTokenLowboxHandles(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  void *v4; // rsi
  char v6; // r12
  PVOID PoolWithTag; // rax
  int LowBoxHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  v6 = 0;
  if ( !a3 )
    goto LABEL_5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x6E486553u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  LowBoxHandlesEntry = SepReferenceLowBoxObjects(a3, a4, PoolWithTag);
  if ( LowBoxHandlesEntry >= 0 )
  {
    v6 = 1;
    LowBoxHandlesEntry = SepValidateReferencedLowBoxHandles(*(unsigned int *)(a1 + 120), a2, a3, v4);
    if ( LowBoxHandlesEntry >= 0 )
    {
LABEL_5:
      CurrentThread = KeGetCurrentThread();
      v13 = *(_QWORD *)(a1 + 216) + 88LL;
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire(v13, 0LL, 0);
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
LABEL_14:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v13);
          KeAbPostRelease(v13);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
          goto LABEL_17;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 216) + 96LL) = *(_QWORD *)(v13 + 8);
      }
      LowBoxHandlesEntry = SepGetLowBoxHandlesEntry(v13, a2, v21);
      if ( !LowBoxHandlesEntry )
      {
        v16 = v21[0];
        *(_QWORD *)(a1 + 1088) = v21[0];
        if ( a3 )
        {
          if ( *(_DWORD *)(v16 + 40) == LowBoxHandlesEntry )
          {
            *(_DWORD *)(v16 + 40) = a3;
            *(_QWORD *)(*(_QWORD *)(a1 + 1088) + 48LL) = v4;
            v4 = 0LL;
            v6 = 0;
          }
        }
      }
      goto LABEL_14;
    }
  }
LABEL_17:
  if ( v4 )
  {
    if ( v6 )
      SepDereferenceLowBoxObjects(a3, v4);
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)LowBoxHandlesEntry;
}
