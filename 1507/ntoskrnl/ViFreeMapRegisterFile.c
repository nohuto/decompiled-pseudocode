/*
 * XREFs of ViFreeMapRegisterFile @ 0x14073DFEC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x14073B648 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14073BA44 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x14073BC54 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14073CCCC (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14073CEBC (ViAdapterCallback.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x14073D8A0 (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x14073E260 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  volatile signed __int32 *v5; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned int i; // ebp
  __int64 v12; // rcx
  unsigned int v13; // r9d
  ULONG_PTR v14; // r8
  __int64 v15; // rdx
  _SLIST_ENTRY *v16; // rcx
  unsigned __int8 v17; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !a2 || *(_DWORD *)a2 != -1393569779 )
    return 0LL;
  v5 = (volatile signed __int32 *)(a1 + 120);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 120));
  }
  else if ( _interlockedbittestandset64(v5, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 120));
  }
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD **)(a2 + 16);
  if ( *(_QWORD *)(v7 + 8) != a2 + 8 || *v8 != a2 + 8 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v5, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  __writecr8(CurrentIrql);
  v9 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)a2 = 0;
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v9 + 24), (PMDL)v9);
    IoFreeMdl((PMDL)v9);
  }
  MmUnmapLockedPages(*(PVOID *)(a2 + 64), *(PMDL *)(a2 + 56));
  v10 = a2 + 88;
  for ( i = 0; i < *(_DWORD *)(a2 + 28); v10 += 32LL )
  {
    v12 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)v10 )
    {
      v13 = *(_DWORD *)(v10 + 8);
      v14 = (*(_DWORD *)v10 & 0xFFF) + v12 + 4096;
    }
    else
    {
      v13 = 0;
      v14 = 0LL;
    }
    ViCheckPadding(v12, 0x3000u, v14, v13);
    v15 = *(_QWORD *)(v10 + 16);
    *(_DWORD *)(v10 + 12) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v15, i) )
      ExFreePoolWithTag(*(PVOID *)(v10 + 16), 0);
    ++i;
  }
  IoFreeMdl(*(PMDL *)(a2 + 56));
  v16 = *(_SLIST_ENTRY **)(a2 + 72);
  if ( v16 )
    VfPoolDelayFreeIfPossible(v16, KeGetCurrentIrql() != 2);
  *(_QWORD *)a2 = 0LL;
  v17 = KeGetCurrentIrql();
  LOBYTE(v2) = v17 != 2;
  VfPoolDelayFreeIfPossible((PSLIST_ENTRY)a2, v2);
  return 1LL;
}
