/*
 * XREFs of MiZeroNodePages @ 0x14013ADA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1400A6C08 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     RtlNumberOfSetBitsEx @ 0x14013B248 (RtlNumberOfSetBitsEx.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x1403E5D7C (PsCreateSystemThreadEx.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

void __fastcall MiZeroNodePages(_QWORD *P)
{
  _DWORD *v1; // r15
  __int64 v2; // r14
  unsigned int v3; // edi
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // eax
  PVOID PoolWithTag; // rax
  void *v8; // r13
  int v9; // ebx
  unsigned __int64 Mask; // r12
  _DWORD *ZeroThreadContext; // rsi
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // edi
  signed __int32 v17[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v18; // [rsp+20h] [rbp-99h]
  __int64 (__fastcall *v19)(); // [rsp+28h] [rbp-91h]
  _DWORD *v20; // [rsp+30h] [rbp-89h]
  struct _GROUP_AFFINITY *v21; // [rsp+38h] [rbp-81h]
  __int64 v22; // [rsp+40h] [rbp-79h]
  struct _GROUP_AFFINITY v23; // [rsp+50h] [rbp-69h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-59h] BYREF
  _BYTE Event[80]; // [rsp+70h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp+7h] BYREF
  USHORT Count; // [rsp+120h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v29; // [rsp+130h] [rbp+77h]

  memset(Event, 0, sizeof(Event));
  v1 = P;
  v2 = P[18];
  KeQueryNodeActiveAffinity(*(_DWORD *)(v2 + 80) >> byte_140326A09, &Affinity, &Count);
  v3 = Count / (unsigned int)KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  if ( !v3 )
    v3 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
  v4 = RtlNumberOfSetBitsEx(v2);
  v5 = RtlNumberOfSetBitsEx(v2 + 16) + v4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_WORD *)(v2 + 88) = 263;
  *(_BYTE *)(v2 + 90) = 6;
  if ( v3 >= v5 )
    v3 = v5;
  *(_DWORD *)(v2 + 92) = 0;
  *(_QWORD *)(v2 + 104) = v2 + 96;
  *(_QWORD *)(v2 + 96) = v2 + 96;
  v6 = 4;
  *(_DWORD *)(v2 + 84) = v3;
  *(_DWORD *)&Event[24] = 0;
  *(_DWORD *)&Event[28] = v3;
  *(_DWORD *)&Event[48] = v3;
  if ( v3 - 1 < 4 )
    v6 = v3 - 1;
  *(_DWORD *)&Event[56] = v3;
  *(_WORD *)Event = 0;
  *(_DWORD *)&Event[4] = 0;
  *(_DWORD *)&Event[52] = v6;
  *(_QWORD *)&Event[16] = &Event[8];
  *(_QWORD *)&Event[8] = &Event[8];
  Event[2] = 6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v3, 0x20206D4Du);
  v8 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 16LL * v3);
  else
    v3 = 0;
  *(_QWORD *)&Event[32] = v8;
  *(_QWORD *)(v2 + 128) = Event;
  v29 = __rdtsc();
  _InterlockedOr(v17, 0);
  v9 = 0;
  if ( !v3 )
    goto LABEL_20;
  Mask = Affinity.Mask;
  while ( v1 )
  {
    ZeroThreadContext = v1;
    v1 = 0LL;
LABEL_13:
    v23 = Affinity;
    if ( Mask )
    {
      v12 = KiProcessorIndexToNumberMappingTable[(unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)&Affinity)];
      *(_DWORD *)v23.Reserved = 0;
      v23.Reserved[2] = 0;
      v13 = v12 >> 6;
      LOBYTE(v12) = v12 & 0x3F;
      v23.Group = v13;
      *(_QWORD *)(v2 + 120) |= 1LL << v12;
      v23.Mask = 1LL << v12;
      Mask &= ~(1LL << v12);
      Affinity.Mask = Mask;
    }
    v22 = 0LL;
    v21 = &v23;
    v20 = ZeroThreadContext;
    v19 = MiZeroLargePageThread;
    v18 = 0LL;
    ZeroThreadContext[38] = v9;
    if ( (int)PsCreateSystemThreadEx(
                (unsigned int)&Handle,
                0x1FFFFF,
                0,
                0,
                v18,
                (__int64)v19,
                (__int64)v20,
                (__int64)v21,
                v22) < 0 )
    {
      v16 = v3 - v9;
      MiDeleteZeroThreadContext(ZeroThreadContext);
      ExFreePoolWithTag(ZeroThreadContext, 0);
LABEL_30:
      v14 = v2 + 88;
      goto LABEL_31;
    }
    ObCloseHandle(Handle, 0);
    if ( ++v9 >= v3 )
    {
      v14 = v2 + 88;
      goto LABEL_18;
    }
  }
  ZeroThreadContext = (_DWORD *)MiCreateZeroThreadContext(MiSystemPartition, v2, 1LL);
  if ( ZeroThreadContext )
    goto LABEL_13;
  v16 = v3 - v9;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 84), -v16) != v16 )
    goto LABEL_30;
  v14 = v2 + 88;
  KeSignalGate(v2 + 88, 1u);
LABEL_31:
  if ( v16 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
    *(_DWORD *)&Event[64] += v16;
    *(_DWORD *)&Event[24] = 4;
    if ( *(_DWORD *)&Event[60] + *(_DWORD *)&Event[64] == *(_DWORD *)&Event[56] && *(_DWORD *)&Event[60] )
      KeSetEvent((PRKEVENT)Event, 0, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_18:
  if ( v9 )
    KeWaitForGate(v14, 0);
LABEL_20:
  _InterlockedOr(v17, 0);
  v15 = __rdtsc();
  *(_QWORD *)(v2 + 72) = (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v29;
  if ( _InterlockedExchangeAdd(&dword_140324C40, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)&word_140324C48, 1u);
  if ( v1 )
  {
    MiDeleteZeroThreadContext(v1);
    ExFreePoolWithTag(v1, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
