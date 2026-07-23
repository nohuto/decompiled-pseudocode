/*
 * XREFs of MiReserveDriverPtes @ 0x1404A6DA8
 * Callers:
 *     MiSelectSystemImageAddress @ 0x1404A6D80 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x140620E68 (MmMapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     MiUnlockDriverMappings @ 0x1400E27CC (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400E2808 (MiLockDriverMappings.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeReservePrivilegedPages @ 0x1401C3328 (KeReservePrivilegedPages.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(unsigned int a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r15
  unsigned int v4; // edi
  ULONG v5; // ebp
  _RTL_BITMAP *i; // rbx
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // r13
  _RTL_BITMAP *PoolWithTag; // r14
  int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v15; // rdi
  ULONG StartingIndex; // [rsp+70h] [rbp+8h]
  unsigned __int64 v18; // [rsp+80h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = a2;
  v5 = (a2 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = (_RTL_BITMAP *)qword_1402FE580[v3]; i; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    if ( i[1].SizeOfBitMap >= v5 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(i + 1, v5, i[2].SizeOfBitMap);
      if ( ClearBitsAndSet != -1 )
      {
        i[2].SizeOfBitMap = v5 + ClearBitsAndSet;
        v8 = (unsigned __int64)&i->Buffer[2 * ((unsigned __int64)(ClearBitsAndSet << 16) >> 12)];
        MiUnlockDriverMappings((__int64)CurrentThread);
        goto LABEL_6;
      }
    }
  }
  StartingIndex = (unsigned __int8)ExGenRandom(1);
  v10 = (16 * (StartingIndex + v5) + 511) & 0xFFFFFE00;
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                 (POOL_TYPE)((_DWORD)InitializationPhase != 0 ? PagedPool : NonPagedPoolNx),
                                 (v10 >> 7) + 40,
                                 0x70446D4Du);
  if ( !PoolWithTag )
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
    return 0LL;
  }
  v12 = 12 - ((_DWORD)v3 != 0);
  v13 = MiObtainSystemVa((unsigned int)v10 >> 9, v12);
  v18 = v13;
  if ( !v13 )
  {
LABEL_16:
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  PteAddress = MiGetPteAddress(v13);
  v15 = PteAddress;
  if ( !(_DWORD)v3 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v10 - 1), 1, v12) )
  {
    MiReturnSystemVa(
      v18,
      (__int64)(((unsigned __int64)((16 * (StartingIndex + v5) + 511) & 0xFFFFFE00) << 28) + (v15 << 25)) >> 16,
      v12,
      0LL);
    goto LABEL_16;
  }
  memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)((16 * (StartingIndex + v5) + 511) & 0xFFFFFE00) >> 7);
  PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
  PoolWithTag[1].SizeOfBitMap = (unsigned int)v10 >> 4;
  RtlSetBits(PoolWithTag + 1, StartingIndex, v5);
  PoolWithTag->Buffer = (unsigned int *)v15;
  PoolWithTag[2].SizeOfBitMap = StartingIndex + v5;
  *(_QWORD *)&PoolWithTag->SizeOfBitMap = qword_1402FE580[v3];
  qword_1402FE580[v3] = PoolWithTag;
  MiUnlockDriverMappings((__int64)CurrentThread);
  v8 = v15 + 8 * ((unsigned __int64)(StartingIndex << 16) >> 12);
  v4 = a2;
LABEL_6:
  if ( (MiFlags & 0x10000) != 0
    && (MiFlags & 0x80000) != 0
    && KeReservePrivilegedPages((__int64)(v8 << 25) >> 16, v4, 1u) < 0 )
  {
    MiReleaseDriverPtes(v3, v8, v4);
    return 0LL;
  }
  return v8;
}
