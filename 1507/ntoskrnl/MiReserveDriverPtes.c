/*
 * XREFs of MiReserveDriverPtes @ 0x140579058
 * Callers:
 *     MiSelectSystemImageAddress @ 0x140579030 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x1406A04E4 (MmMapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     MiObtainSystemVa @ 0x140067684 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     MiUnlockDriverMappings @ 0x140107D04 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x140107DF8 (MiLockDriverMappings.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeReservePrivilegedPages @ 0x1401FF280 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r15
  unsigned int v6; // edi
  ULONG v7; // ebp
  _RTL_BITMAP *i; // rbx
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // r13
  _RTL_BITMAP *PoolWithTag; // r14
  int v14; // ebx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // r9
  ULONG StartingIndex; // [rsp+70h] [rbp+8h]
  unsigned int v19; // [rsp+78h] [rbp+10h]
  unsigned __int64 v20; // [rsp+80h] [rbp+18h]

  v19 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v6 = a2;
  v7 = (unsigned int)(a2 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread, a2, a3, a4);
  for ( i = (_RTL_BITMAP *)qword_14034EA40[v5]; ; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    if ( !i )
    {
      StartingIndex = (unsigned __int8)ExGenRandom(1);
      v12 = (16 * (StartingIndex + v7) + 511) & 0xFFFFFE00;
      PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                     (POOL_TYPE)((_DWORD)InitializationPhase != 0 ? PagedPool : NonPagedPoolNx),
                                     (v12 >> 7) + 40,
                                     0x70446D4Du);
      if ( PoolWithTag )
      {
        v14 = 12 - ((_DWORD)v5 != 0);
        v15 = MiObtainSystemVa((unsigned int)v12 >> 9, v14);
        v20 = v15;
        if ( v15 )
        {
          v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( (_DWORD)v5 || (unsigned int)MiMakeZeroedPageTables(v16, v16 + 8 * (v12 - 1), 1, v14) )
          {
            memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)((16 * (StartingIndex + v7) + 511) & 0xFFFFFE00) >> 7);
            PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
            PoolWithTag[1].SizeOfBitMap = (unsigned int)v12 >> 4;
            RtlSetBits(PoolWithTag + 1, StartingIndex, v7);
            PoolWithTag->Buffer = (unsigned int *)v16;
            PoolWithTag[2].SizeOfBitMap = StartingIndex + v7;
            *(_QWORD *)&PoolWithTag->SizeOfBitMap = qword_14034EA40[v5];
            qword_14034EA40[v5] = PoolWithTag;
            MiUnlockDriverMappings((__int64)CurrentThread);
            v10 = v16 + 8 * ((unsigned __int64)(StartingIndex << 16) >> 12);
            v6 = v19;
            goto LABEL_6;
          }
          MiReturnSystemVa(
            v20,
            (__int64)(((unsigned __int64)((16 * (StartingIndex + v7) + 511) & 0xFFFFFE00) << 28) + (v16 << 25)) >> 16,
            v14,
            0LL);
        }
        MiUnlockDriverMappings((__int64)CurrentThread);
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        MiUnlockDriverMappings((__int64)CurrentThread);
      }
      return 0LL;
    }
    if ( i[1].SizeOfBitMap >= v7 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(i + 1, v7, i[2].SizeOfBitMap);
      if ( ClearBitsAndSet != -1 )
        break;
    }
  }
  i[2].SizeOfBitMap = v7 + ClearBitsAndSet;
  v10 = (unsigned __int64)&i->Buffer[2 * ((unsigned __int64)(ClearBitsAndSet << 16) >> 12)];
  MiUnlockDriverMappings((__int64)CurrentThread);
LABEL_6:
  if ( (MiFlags & 0x10000) != 0 && KeReservePrivilegedPages((__int64)(v10 << 25) >> 16, v6, 1u) < 0 )
  {
    MiReleaseDriverPtes(v5, v10, v6, v17);
    return 0LL;
  }
  return v10;
}
