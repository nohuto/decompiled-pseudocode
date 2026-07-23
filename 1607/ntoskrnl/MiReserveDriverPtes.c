/*
 * XREFs of MiReserveDriverPtes @ 0x1404B2B08
 * Callers:
 *     MiSelectSystemImageAddress @ 0x1404B2AC8 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x140657500 (MmMapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     MiUnlockDriverMappings @ 0x1400A1214 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400A1250 (MiLockDriverMappings.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeReservePrivilegedPages @ 0x1401D1EDC (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(unsigned int a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r14
  ULONG v5; // esi
  _RTL_BITMAP *i; // rbx
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v8; // rbx
  unsigned int v10; // r12d
  _RTL_BITMAP *PoolWithTag; // r15
  int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned __int64 PteAddress; // rdi
  ULONG StartingIndex; // [rsp+70h] [rbp+8h]
  unsigned __int64 v16; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v5 = (a2 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = (_RTL_BITMAP *)qword_140326890[v3]; i; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
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
                                 ((unsigned __int64)v10 >> 7) + 40,
                                 0x70446D4Du);
  if ( !PoolWithTag )
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
    return 0LL;
  }
  v12 = 12 - ((_DWORD)v3 != 0);
  v13 = MiObtainSystemVa(v10 >> 9, v12);
  v16 = v13;
  if ( !v13 )
  {
LABEL_16:
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  PteAddress = MiGetPteAddress(v13);
  if ( !(_DWORD)v3 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v10 - 1LL), 1, v12) )
  {
    MiReturnSystemVa(
      v16,
      (__int64)((PteAddress << 25) + ((unsigned __int64)((16 * (StartingIndex + v5) + 511) & 0xFFFFFE00) << 28)) >> 16,
      v12,
      0LL);
    goto LABEL_16;
  }
  memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)v10 >> 7);
  PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
  PoolWithTag[1].SizeOfBitMap = v10 >> 4;
  RtlSetBits(PoolWithTag + 1, StartingIndex, v5);
  PoolWithTag->Buffer = (unsigned int *)PteAddress;
  PoolWithTag[2].SizeOfBitMap = StartingIndex + v5;
  *(_QWORD *)&PoolWithTag->SizeOfBitMap = qword_140326890[v3];
  qword_140326890[v3] = PoolWithTag;
  MiUnlockDriverMappings((__int64)CurrentThread);
  v8 = PteAddress + 8 * ((unsigned __int64)(StartingIndex << 16) >> 12);
LABEL_6:
  if ( (MiFlags & 0x4000) != 0
    && (MiFlags & 0x20000) != 0
    && KeReservePrivilegedPages((__int64)(v8 << 25) >> 16, a2, 0) < 0 )
  {
    MiReleaseDriverPtes((unsigned int)v3, v8, a2);
    return 0LL;
  }
  return v8;
}
