/*
 * XREFs of MiZeroNodePages @ 0x140131668
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1400E7EC0 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     RtlNumberOfSetBitsEx @ 0x140131C30 (RtlNumberOfSetBitsEx.c)
 *     MiDeleteZeroThreadContext @ 0x140131D78 (MiDeleteZeroThreadContext.c)
 *     MiZeroLargePages @ 0x140131E1C (MiZeroLargePages.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1404D211C (PsCreateSystemThreadEx.c)
 */

void __fastcall MiZeroNodePages(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r15d
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  unsigned __int64 v11; // r13
  unsigned int v12; // r14d
  int v13; // ebx
  unsigned int v14; // ebx
  unsigned __int64 Mask; // r12
  __int64 ZeroThreadContext; // rbx
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-69h] BYREF
  struct _GROUP_AFFINITY v21; // [rsp+50h] [rbp-19h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+7h] BYREF
  USHORT Count; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned __int64 v26; // [rsp+E0h] [rbp+77h]

  v1 = (unsigned int)dword_1402FE6EC;
  v2 = 0;
  v3 = a1;
  if ( !dword_1402FE6EC )
    v1 = 0x200000LL;
  v4 = (unsigned __int64)(v1 + 0x1FFFFF) >> 21;
  MiZeroLargePages(a1, a1, (unsigned int)v4);
  v5 = 8 * v4;
  v6 = __rdtsc();
  _InterlockedOr(v20, 0);
  if ( (unsigned int)MiZeroLargePages(v7, v3, v5) != v5 )
    goto LABEL_19;
  _InterlockedOr(v20, 0);
  v9 = (__rdtsc() - v6) / v5;
  if ( !v9 )
    goto LABEL_19;
  v10 = *(_QWORD *)(v3 + 32);
  v11 = v9 / 0xA + v9;
  KeQueryNodeActiveAffinity(*(_DWORD *)(v10 + 64) >> byte_1402FE6D9, &Affinity, &Count);
  v12 = Count;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 40), &LockHandle);
  v13 = RtlNumberOfSetBitsEx(v10);
  v14 = RtlNumberOfSetBitsEx(v10 + 16) + v13;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_WORD *)(v10 + 72) = 263;
  *(_BYTE *)(v10 + 74) = 6;
  if ( v12 >= v14 )
    v12 = v14;
  *(_DWORD *)(v10 + 76) = 0;
  *(_QWORD *)(v10 + 88) = v10 + 80;
  *(_QWORD *)(v10 + 80) = v10 + 80;
  *(_DWORD *)(v10 + 68) = v12;
  v26 = __rdtsc();
  _InterlockedOr(v20, 0);
  if ( !v12 )
    goto LABEL_18;
  Mask = Affinity.Mask;
  while ( v3 )
  {
    ZeroThreadContext = v3;
    v3 = 0LL;
LABEL_11:
    v21 = Affinity;
    *(_QWORD *)(ZeroThreadContext + 48) = v11;
    if ( Mask )
    {
      v17 = KiProcessorIndexToNumberMappingTable[(unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)&Affinity)];
      *(_DWORD *)v21.Reserved = 0;
      v21.Reserved[2] = 0;
      v18 = v17 >> 6;
      LOBYTE(v17) = v17 & 0x3F;
      v21.Group = v18;
      *(_QWORD *)(v10 + 104) |= 1LL << v17;
      v21.Mask = 1LL << v17;
      Mask &= ~(1LL << v17);
      Affinity.Mask = Mask;
    }
    if ( (int)PsCreateSystemThreadEx(
                (unsigned int)&Handle,
                0x1FFFFF,
                0,
                0,
                0LL,
                (__int64)MiZeroLargePageThread,
                ZeroThreadContext,
                (__int64)&v21,
                0LL) < 0 )
    {
      MiDeleteZeroThreadContext(MiSystemPartition, ZeroThreadContext, 1LL);
LABEL_15:
      v19 = v10 + 72;
      goto LABEL_16;
    }
    ObCloseHandle(Handle, 0);
    if ( ++v2 >= v12 )
      goto LABEL_15;
  }
  ZeroThreadContext = MiCreateZeroThreadContext(MiSystemPartition, v10, 1LL);
  if ( ZeroThreadContext )
    goto LABEL_11;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 68), v2 - v12) != v12 - v2 )
    goto LABEL_15;
  v19 = v10 + 72;
  KeSignalGate(v10 + 72, 1LL, v8);
LABEL_16:
  if ( v2 )
    KeWaitForGate(v19, 0);
LABEL_18:
  _InterlockedOr(v20, 0);
  *(_QWORD *)(v10 + 56) = __rdtsc() - v26;
LABEL_19:
  if ( _InterlockedExchangeAdd(&dword_140301188, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)&word_140301190, 1LL, v8);
  if ( v3 )
    MiDeleteZeroThreadContext(MiSystemPartition, v3, 1LL);
}
